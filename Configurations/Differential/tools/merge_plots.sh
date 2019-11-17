#!/bin/bash

SAMPLE=$1
TAG=$2
INDIR=$3
OUTDIR=$4

cd $CMSSW_BASE
eval `scram runtime -sh`

FILES=$(ls $INDIR/plots_${TAG}_ALL_$SAMPLE.*.root)
FILES=$FILES" "$(ls $INDIR/plots_${TAG}_ALL_${SAMPLE}_UE*Up.*root $INDIR/plots_${TAG}_ALL_${SAMPLE}_UE*Down.*root 2> /dev/null)
FILES=$FILES" "$(ls $INDIR/plots_${TAG}_ALL_${SAMPLE}_PS*Up.*root $INDIR/plots_${TAG}_ALL_${SAMPLE}_PS*Down.*root 2> /dev/null)

#hadd -f -j 8 plots_${TAG}_ALL_$SAMPLE.root $INDIR/plots_${TAG}_ALL_$SAMPLE.*.root
$CMSSW_BASE/bin/$SCRAM_ARCH/haddfast -E -C -j 12 plots_${TAG}_ALL_$SAMPLE.root $FILES

mv plots_${TAG}_ALL_$SAMPLE.root $OUTDIR/
