#!/bin/sh

CLOSUREFILE=total_step1.root

for sample in   WpTo2J_WmToLNu WpToLNu_ZTo2J; 
do 
echo "Running " $sample
./gen_analysis_closure.o /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7/baseW/ $sample 1 output_${sample}_closure.root $CLOSUREFILE
done