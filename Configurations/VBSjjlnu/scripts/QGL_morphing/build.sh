#!/bin/sh

source /cvmfs/sft.cern.ch/lcg/views/LCG_98python3/x86_64-centos7-gcc9-opt/setup.sh
g++ -o rdf_analyzer_morph_ptorder.o rdf_analyzer_morph_ptorder.cc `root-config --cflags --glibs`

# g++ -o rdf_analyzer.o rdf_analyzer.cc `root-config --cflags --glibs`
# g++ -o rdf_analyzer_morph.o rdf_analyzer_morph.cc `root-config --cflags --glibs`
