#!/bin/sh

CLOSUREFILE=total_v3_closure_vbstotfit.root

#WmToLNu_WmTo2J WmToLNu_ZTo2J 
for sample in   WpTo2J_WmToLNu ;  
do 
echo "Running " $sample
./gen_analysis_closure_vbstot.o /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7/baseW/ $sample 1 output_${sample}_closure_vbstot.root $CLOSUREFILE
done