"""
This script will launch a program given by the command arguments after the invocation of the script and use powerjoular
to measure CPU/GPU consumption
"""

import os
import sys
import subprocess
import signal

args = sys.argv[1:]

if __name__ == "__main__":
    timing = open("timing.txt", "w")
    power = open("power.txt", "w")
    exc = subprocess.Popen(args=args, stdout=timing)
    monitor = subprocess.Popen(["powerjoular", "-t"], stdout=power)
    exc.wait()
    monitor.send_signal(signal.SIGINT)
    monitor.wait()

