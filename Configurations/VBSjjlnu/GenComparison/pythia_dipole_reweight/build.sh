#!/bin/sh
source /cvmfs/sft.cern.ch/lcg/views/LCG_99/x86_64-centos7-gcc10-opt/setup.sh

g++ -o gen_analysis.o gen_analysis.cc `root-config --cflags --glibs`
