#!/bin/bash

SAMPLE=$1
TAG=$2
INDIR=$3
OUTDIR=$4

cd $CMSSW_BASE
eval `scram runtime -sh`

#hadd -f -j 8 plots_${TAG}_ALL_$SAMPLE.root $INDIR/plots_${TAG}_ALL_$SAMPLE.*.root
$CMSSW_BASE/bin/$SCRAM_ARCH/haddfast -E -C -j 12 plots_${TAG}_ALL_$SAMPLE.root $INDIR/plots_${TAG}_ALL_$SAMPLE.*.root

mv plots_${TAG}_ALL_$SAMPLE.root $OUTDIR/
