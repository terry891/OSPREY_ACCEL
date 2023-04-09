FPNew Wrapper in Chisel
=======================

## Dependencies
* JDK 8+ (GraalVM Recommended)
* SBT 1.7+
* GCC 


## FPNew
Generate synthesized .v file (if not already present) by editing gen.py in src/main/resources/fpnew_scripts and running:
```
python3 gen.py
```

To generate verilog:

Edit parameters in FPNewDriver in src/main/scala/prose/fpnew-wrapper/fpnew/FPNewMain.scala and run:

```
sbt "runMain fpnew.FPNewDriver"
```

## To Test:

Edit parameters in FPUTest in src/test/scala/prose/fpnew/FPNewTest.scala and run:

```
sbt test
```

## Golden Model
```
make
make golden_test
./golden 
```

##Verify chisel against golden model
```
make verify
```
