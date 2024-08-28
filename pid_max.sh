#!/bin/bash
pid_max=$(cat /proc/sys/kernel/pid_max)
echo "The maximum value a PID can be: $pid_max"
