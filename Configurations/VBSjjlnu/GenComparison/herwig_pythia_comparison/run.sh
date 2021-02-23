#!/bin/sh

for sample in WmTo2J_ZTo2L WmToLNu_WmTo2J WmToLNu_ZTo2J WpToLNu_WmTo2J WpTo2J_WmToLNu WpTo2J_ZTo2L WpToLNu_WmTo2J WpToLNu_WpTo2J WpToLNu_ZTo2J ZTo2L_ZTo2J; 
do 
echo "Running " $sample
./gen_analysis.o /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/HerwigVBSsamples/ /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/baseW/ $sample 1 output_$sample.root 
done