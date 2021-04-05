#!/bin/sh
# source /cvmfs/sft.cern.ch/lcg/views/LCG_99/x86_64-centos7-gcc10-opt/setup.sh

# g++ -o gen_analysis.o gen_analysis.cc `root-config --cflags --glibs`

g++ -o gen_analysis_closure.o gen_analysis_closure.cc `root-config --cflags --glibs`

# g++ -o gen_analysis_closure_vbstot.o gen_analysis_closure_vbstot.cc `root-config --cflags --glibs`


# g++ -o gen_debug.o gen_analysis_closure_vbstot_debug.cc `root-config --cflags --glibs`