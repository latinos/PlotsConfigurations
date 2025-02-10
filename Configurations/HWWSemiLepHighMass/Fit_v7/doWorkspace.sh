#!/bin/bash
mkdir output_RELW002/FullRun2_semilep_indephigh_unblind
mkdir output_RELW002/FullRun2_semilep_indephigh_unblind/cmb
cp output_RELW002/Full2018_semilep_indephigh_unblind/cmb/hww* output_RELW002/FullRun2_semilep_indephigh_unblind/cmb
cp output_RELW002/Full2017_semilep_indephigh_unblind/cmb/hww* output_RELW002/FullRun2_semilep_indephigh_unblind/cmb
cp output_RELW002/Full2016_semilep_indephigh_unblind/cmb/hww* output_RELW002/FullRun2_semilep_indephigh_unblind/cmb
python CombineCards_FullRun2.py output_RELW002/FullRun2_semilep_indephigh_unblind
mkdir output_RELW002/FullRun2_semilep_indep_unblind
mkdir output_RELW002/FullRun2_semilep_indep_unblind/cmb
cp output_RELW002/Full2018_semilep_indep_unblind/cmb/hww* output_RELW002/FullRun2_semilep_indep_unblind/cmb
cp output_RELW002/Full2017_semilep_indep_unblind/cmb/hww* output_RELW002/FullRun2_semilep_indep_unblind/cmb
cp output_RELW002/Full2016_semilep_indep_unblind/cmb/hww* output_RELW002/FullRun2_semilep_indep_unblind/cmb
python CombineCards_FullRun2.py output_RELW002/FullRun2_semilep_indep_unblind
mkdir output_RELW002/FullRun2_semilep_unblind
mkdir output_RELW002/FullRun2_semilep_unblind/cmb
cp output_RELW002/Full2018_semilep_unblind/cmb/hww* output_RELW002/FullRun2_semilep_unblind/cmb
cp output_RELW002/Full2017_semilep_unblind/cmb/hww* output_RELW002/FullRun2_semilep_unblind/cmb
cp output_RELW002/Full2016_semilep_unblind/cmb/hww* output_RELW002/FullRun2_semilep_unblind/cmb
python CombineCards_FullRun2.py output_RELW002/FullRun2_semilep_unblind
combineTool.py -M T2W -i "output_RELW002/FullRun2_semilep_indep_unblind/cmb/combined.txt" -o "../../WSRun2_semilep_unblind.indepSM.root" -P CombineHarvester.CombinePdfs.XWWInterference:XWW --PO NoSMXsecAdded > Workspace_semilep_indep_SMfVBF.txt
combineTool.py -M T2W -i "output_RELW002/FullRun2_semilep_indephigh_unblind/cmb/combined.txt" -o "../../WSRun2_semilep_unblind.indepSMhigh.root" -P CombineHarvester.CombinePdfs.XWWInterference:XWW --PO NoSMXsecAdded > Workspace_semilep_indephigh_SMfVBF.txt
combineTool.py -M T2W -i "output_RELW002/FullRun2_semilep_indep_unblind/cmb/combined.txt" -o "../../WSRun2_semilep_unblind.indep.root" -P CombineHarvester.CombinePdfs.XWWInterference:XWW --PO FloatVBFFraction --PO NoSMXsecAdded > Workspace_semilep_indep.txt
combineTool.py -M T2W -i "output_RELW002/FullRun2_semilep_indephigh_unblind/cmb/combined.txt" -o "../../WSRun2_semilep_unblind.indephigh.root" -P CombineHarvester.CombinePdfs.XWWInterference:XWW --PO FloatVBFFraction --PO NoSMXsecAdded > Workspace_semilep_indephigh.txt
