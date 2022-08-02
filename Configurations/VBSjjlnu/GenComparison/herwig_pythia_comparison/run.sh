#!/bin/sh

#WmTo2J_ZTo2L WpTo2J_ZTo2L ZTo2L_ZTo2J
for sample in  WmToLNu_WmTo2J WmToLNu_ZTo2J WpToLNu_WmTo2J WpTo2J_WmToLNu  WpToLNu_WmTo2J WpToLNu_WpTo2J WpToLNu_ZTo2J; 
do 
echo "Running " $sample
./gen_analysis.o /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/HerwigVBSsamples/ /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7/baseW/ $sample 1 output_$sample.root 
done