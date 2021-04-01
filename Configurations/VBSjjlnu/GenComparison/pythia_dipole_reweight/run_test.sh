#!/bin/sh

MT=1

for sample in WmToLNu_WmTo2J; 
do 
echo "Running " $sample
./gen_analysis.o /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/HerwigVBSsamples/ /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7/baseW/ $sample $MT output_$sample.root 
done