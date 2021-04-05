#!/bin/sh


CLOSUREFILE=total_step2_mjjvbstotfit.root

#WmTo2J_ZTo2L WpTo2J_ZTo2L ZTo2L_ZTo2J
for sample in  WpTo2J_WmToLNu WpToLNu_ZTo2J; 
do 
echo "Running " $sample
./gen_analysis_closure_vbstot.o /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7/baseW/ $sample 1 output_${sample}_closure_vbstot.root $CLOSUREFILE
done