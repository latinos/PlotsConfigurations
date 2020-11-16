#!/bin/sh

g++ -o rdf_analyzer.o rdf_analyzer.cc `root-config --cflags --glibs`
g++ -o rdf_analyzer_morph.o rdf_analyzer_morph.cc `root-config --cflags --glibs`