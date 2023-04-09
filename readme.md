# Composer

The following instructions show how to setup the Composer framework, run simulation with Verilator, and build & deploy onto FPGA on AWS F1 instance.
After successfully running the example, you are __strongly encouraged__ to read through [the detailed document](doc/index.md) to understand the infrastructure so that you can start working on SHA3 core or your project.

You may fork this repo on Duke's gitlab as the starting point for lab2 or your own project, but be sure to set it as a private repo. This codebase is still under development for an unpublished research project. __Please do not distribute this codebase out of this course until it is published.__


- [Composer](#composer)
  - [Project Structure](#project-structure)
  - [Prerequisites](#prerequisites)
    - [Backends](#backends)
  - [Installation](#installation)
  - [Run Simulation](#run-simulation)
  - [Deploy to FPGA on AWS](#deploy-to-fpga-on-aws)
    - [Compile and Generate FPGA Image on M5zn instance](#compile-and-generate-fpga-image-on-m5zn-instance)
    - [Deploy and Run on F1 instance](#deploy-and-run-on-f1-instance)
  - [Next Step](#next-step)

## Project Structure


## Prerequisites 

To use the Composer framework, the only necessary installations are [sbt](https://www.scala-sbt.org) and CMake. CS cluster has these packages installed already, and we provide the script to install all prerequisites on AWS instance. Only check this section when you want to try to set up this framework on your local machine.

Linux Installation:
```shell
sudo apt-get install cmake sbt
```

Mac(homebrew) Installation: (Note that these packages can be installed from source without homebrew)
```shell
brew install cmake sbt
```

sbt requires JDK 17 or older to run, the newer versions of Java will not work.
To check the current java version, use
```bash
java -version
```
To switch to java 17 within a specific terminal window, first [install it](https://www.oracle.com/java/technologies/javase/jdk17-archive-downloads.html) if it is not already installed, then use
```bash
JAVA_HOME=`/usr/libexec/java_home -v 17`
```

### Backends

If you have run `install-verilator.sh` on cs cluster in lab1, you may ignore this step.

We currently use a Verilator backend for simulation. We may add additional simulation backends in the future.
[Verilator Installation Link](https://verilator.org/guide/latest/install.html)
Do not use `brew` or `apt` to install Verilator as it may be an old version.
It _may_ work but is not guaranteed to be tested or functional.


## Installation 

Assuming you now have `cmake`, `sbt`, and `verilator`, we can run simulations of some basic examples. You only need to run these steps once for each new environment.

1. Clone and run the setup script. Remember to add the lines prompted by the script to your bashrc (.my-bashrc on CS Cluster) and run `source ~/`.bashrc` before proceeding.

```shell
git clone git@gitlab.oit.duke.edu:sl578/composer.git
cd Composer/
export COMPOSER_ROOT=`pwd`
./install/setup.sh
```

2. Install the composer user library. On CS Cluster, we perform a local install since we do not have the admin privilege. On AWS Instances, use the command in comment to perform a global install.
Composer uses CMake to find this library later on so make sure that if you are performing a local install that CMake knows where to look.


```shell
cd Composer-Software
mkdir build && cd build
# On CS Cluster
cmake -DCMAKE_INSTALL_PREFIX=$COMPOSER_ROOT -DPRIVATE=1 ..
# On AWS
# cmake ..
make
make install
# On AWS
# sudo make install
```
On CS Cluster, add `export LD_RUN_PATH=$LD_RUN_PATH:$COMPOSER_ROOT` in your `.bashrc`.

Now we have everything we need to run some basic examples.

## Run Simulation

__On CS Cluster, you should first enter the compute node (by running `srun -pty -i bash -l`). DO NOT RUN SIMULATION ON THE LOGIN NODE. Or your account might be suspended by the management team.__

1. First, we need to compile the chisel source code for both target hardware and the infrastructure. In `$COMPOSER_ROOT`

    ```shell
    # Switch to hardware repo from software library repo
    cd Composer-Hardware
    # When prompted by sbt, run [11]design.unit.exampleDriver
    sbt run
    ```

    If you look in the `Composer-Hardware/vsim/generated-src/` directory, you will find `composer.v` and other files that now contain our design. You may also select different designs to try other examples.


2. Now we can run the simulation. We need to build the runtime (which contains the simulated hardware and interacts with the application code) and our target application. __You need to rebuild the runtime everytime you make modifications to the hardware design.__


    We suggest using [tmux](https://www.hamvocke.com/blog/a-quick-and-easy-guide-to-tmux/) to run runtime and application in different panels. DO NOT USE DIFFERENT SSH SESSIONS since they might be assigned to different compute nodes.

    __Build and run Runtime:__
    ```shell
    # Switch to runtime repo
    cd $COMPOSER_ROOT/Composer-Runtime/
    mkdir build && cd build
    # If you want to enable a more accurate DRAM model, append '-DUSE_DRAMSIM=1'
    cmake .. -DTARGET=sim
    make
    ./ComposerRuntime
    # Now Verilator is running the design.ExamplesConfig 
    ```

    __Build and run Runtime:__
    ```shell
    # Switch to examples repo
    cd $COMPOSER_ROOT/Composer-Examples
    mkdir build && cd build
    cmake .. -DSUITE=BASIC
    make
    ./alutest
    # alu test should run
    ./LFSRtest
    # LSFR test should run
    ./vector
    # You should see some trace for vector add design
    ```

    Alternatively, you can execute the runtime by `./ComposerRuntime &> runtime.log &` to make it run in background. Remember to kill the runtime either by PID or by using `killall -u <your netid> ComposerRuntime`.

3. Voila! Shut down the simulator in the other window with a ctrl+c. Now that the run is finished, there should be a `trace.fst` in the run directory. FST is a compressed format of the waveform since the uncompressed file could be up to several GiBs. You can check it by opening another SSH session with X Forwarding (`-X` option) and launch gtkwave at the login node, as we did in lab 1.

4. Now, implement your SHA3 core design and the testbench (application code written in C++). Verify it through simulation before deploying onto the AWS instance.

## Deploy to FPGA on AWS

__Note: you may run the example on AWS instance with the following instructions to test this flow. For your own SHA3 core design, DO NOT DO DEVELOPMENT OR SIMULATION ON AWS INSTANCES.__

### Compile and Generate FPGA Image on M5zn instance

1. Clone this folder and set environment variable.

    ```shell
    git clone git@gitlab.oit.duke.edu:sl578/composer.git && cd composer
    export COMPOSER_ROOT=`pwd`
    ```
   
2. Install the required toolchains on M5zn instance. _You only need to run this once._

    ```shell
    # In the root folder of the repo
    chmod +x ./install/install_toolchains_m5.sh
    # Do not use sh to run; It will lead to the wrong relative path
    ./install/install_toolchains_m5.sh
    ```
    You may see `Another app is currently holding the yum lock; waiting for it to exit...`. This is due to some background task of EC2 instance upgrading the packages. Just wait, and the installation should proceed.

3. Run the setup script of Composer. Remember to add the lines prompted by the script to your bashrc (.my-bashrc on CS Cluster) and run `source ~/.bashrc` before proceeding.
   
   ```shell
   ./install/setup.sh
   ```

4. Build your hardware. This step may take a few hours, depending on the complexity of your design. You can set the `EMAIL` environment variable to receive notification once the compilation is done.

    ```shell
    cd $COMPOSER_ROOT/Composer-Hardware
    make
    ```
    The build script will ask for the selected backend. Choose `1 - AWS FPGA`. The first run may take some time to build the memory model before starting the compilation.
    If the build is successfully initiated, you should see some message regarding the location of the log file like this,

    ```shell
    INFO: Build through Vivado is running as background process, this may take few hours.
    INFO: Output is being redirected to 23_02_16-152945.nohup.out
    INFO: If you have set your EMAIL environment variable and -notify is specified, you will receive a notification when complete.
    INFO:   (See $HDK_DIR/cl/examples/README.md for details)
    ```

5. Keep M5zn instance running, until you receive the notification in email (if you have correctly set the variable), get the message of 'compilation finished' in the redirected output file (in `vsim/build/scripts` folder), or get the report contains 'final' in filename in the folder `$COMPOSER_ROOT/Composer-Hardware/vsim/build/report`. Remember to check back in time.

6. Upload the build files and create the FPGA image.

    ```shell
    cd $COMPOSER_ROOT/Composer-Hardware
    composer-mv
    ```
    You will be asked to set a few identifiers/names for this build. You can use any name since this is only for identifying your build files from the cloud.
    ```shall
    > What AWS region to use?
    us-east-1
    > Composer will attempt to create an AWS s3 bucket to store your data in. Provide an identifying username: <Your Username>
    >Beginning to build final image. Give this run a key so you can identify it on the FPGA system.
    <Your Build-Name>
    ```
    The script will show you a `FpgaImageId` and `FpgaImageGlobalId`. You can either use the name you specified or these Ids to find your design in the later steps.

7. Run `aws ec2 describe-fpga-images --owner self` to check the image status as instructed. You should see something like this:

    ```json
    {
        "UpdateTime": "2023-02-16T17:33:32.000Z",
        "Name":  <Your Build-Name>, 
        "Tags": [],
        "DataRetentionSupport": false,
        "FpgaImageGlobalId": <Global ID>,
        "Public": false,
        "State": {
            "Code": "pending"
        },
        "OwnerId": "xxxxxxxxxxxxx",
        "FpgaImageId": <Image ID>,
        "CreateTime": "2023-02-16T17:33:32.000Z",
        "Description": <Your Build-Name>
    }

    ```
    The `pending` status means the image is still being built. This process is done on the cloud instead of on the M5 instance. Thus, our job has finished here.

8. Now, you may stop the M5zn instance.

### Deploy and Run on F1 instance

1. Clone this folder and set the environment variable.

    ```shell
    git clone git@gitlab.oit.duke.edu:sl578/composer.git && cd composer
    export COMPOSER_ROOT=`pwd`
    ```
   
2. Install the required toolchains on F1 instance. _You only need to run this once._

    ```shell
    # In the root folder of the repo
    chmod +x ./install/install_toolchains_f1.sh
    # Do not use sh to run; It will lead to the wrong relative path
    ./install/install_toolchains_f1.sh
    ```
    You may see `Another app is currently holding the yum lock; waiting for it to exit...`. This is due to some background task of EC2 instance is upgrading the packages. Just wait and the installation should proceed.

3. Follow the steps in [installation](#installation) to setup the repo and library. Remember to use global installation this time.

4. Make sure the FPGA image has been successfully built. You can check the status by running `aws ec2 describe-fpga-images --owner self` and make sure the state code is `Avaliable` before proceeding.

5. Load FPGA Image by running `composer-load`. Enter the information as prompted.

    ```shell
    > What AWS region to use?
    us-east-1
    > Composer will attempt to create an AWS s3 bucket to store your data in. Provide an identifying username: <The user name you used in build step>
    # List may differ depends on your design name
    >    [0] - test-build-1 - Availability: pending
    >    [1] - testrun_example - Availability: available
    >    ....
    > Select an image to load
    0
    ```
    Select the image you want to load, the script will automatically deploy the image to FPGA, compile and run the runtime in background (the `runtime` now works like a driver).

6. Compile and run the application code. You need to run the application code as superuser. You should see similar, if not the same, output with the simulation.

    ```shell
    cd $COMPOSER_ROOT/Composer-Examples
    mkdir build && cd build
    cmake .. -DSUITE=BASIC
    make
    sudo ./alutest
    # alu test should run
    sudo ./LFSRtest
    # LSFR test should run
     sudo./vector
    # You should see some trace for vector add design
    ```


## Next Step

Check other examples in `Composer-Hardware/src/main/scala/design` to understand how the core interacts with the system; Also check other examples in `Composer-Examples/src` to understand how to use the API to interact with the hardware.

Complete your design in `Composer-Hardware/src/main/scala/design/sha3/Sha3.scala` and the testbench/application in `Composer-Examples/src/sha3/sha3_test.cc`.
