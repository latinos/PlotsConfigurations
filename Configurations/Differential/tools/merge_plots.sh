#!/bin/bash

SAMPLE=$1
TAG=$2
INDIR=$3
OUTDIR=$4

#hadd -f -j 8 plots_${TAG}_ALL_$SAMPLE.root $INDIR/plots_${TAG}_ALL_$SAMPLE.*.root
$CMSSW_BASE/bin/$SCRAM_ARCH/haddfast -C -j 8 plots_${TAG}_ALL_$SAMPLE.root $INDIR/plots_${TAG}_ALL_$SAMPLE.*.root

mv plots_${TAG}_ALL_$SAMPLE.root $OUTDIR/
