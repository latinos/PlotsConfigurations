#!/bin/sh

CLOSUREFILE=total_v3_closure_vbstotfit.root

#WmTo2J_ZTo2L WpTo2J_ZTo2L ZTo2L_ZTo2J
for sample in  WpToLNu_ZTo2J; 
do 
echo "Running " $sample
./gen_debug.o /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7/baseW/ $sample 0 output_${sample}_closure_debug.root $CLOSUREFILE
done