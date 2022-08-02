#!/bin/sh

CLOSUREFILE=total_step2_mjjvbstotfit.root

#WmToLNu_WmTo2J WmToLNu_ZTo2J 
for sample in    WmToLNu_WmTo2J WmToLNu_ZTo2J ;  
do 
echo "Running " $sample
./gen_analysis_closure_vbstot.o /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7/baseW/ $sample 1 output_${sample}_closure_vbstot.root $CLOSUREFILE
done