#!/bin/bash
MorphingMSSMFullRun2_HWW --do2016semi 1 --output_folder Full2016_semilep_indephigh_unblind --shapedir 2016_v7_BTagSF/rootFile_medmass --real_data 1 --real_data_CR 1 --mass MH --highindep 1 --combcard_only 1 --manual_rebin 1 > Output20186semilep_indephigh_UPD_new.txt
MorphingMSSMFullRun2_HWW --do2016semi 1 --output_folder Full2016_semilep_indep_unblind --shapedir 2016_v7_BTagSF/rootFile_medmass --real_data 1 --real_data_CR 1 --mass MH --highindep 0 --combcard_only 1 --manual_rebin 1 > Output2016_semilep_indep_UPD_new.txt
MorphingMSSMFullRun2_HWW --do2016semi 1 --output_folder Full2016_semilep_unblind --shapedir 2016_v7_BTagSF/rootFile_medmass --real_data 1 --real_data_CR 1 --combcard_only 1 --manual_rebin 1  > Output2016_semilep_MSSM_un.txt
python FixRateparam.py output_RELW002/Full2016_semilep_indep_unblind
python FixRateparam.py output_RELW002/Full2016_semilep_indephigh_unblind
python FixRateparam.py output_RELW002/Full2016_semilep_unblind
