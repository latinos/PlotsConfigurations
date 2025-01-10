# [0,2]
#VBF a3
mkPlot.py --pycfg=configuration_combined_a3_VBF_IP_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IP_afterVgBug_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.7 --middleText="VBF, D_{CP} > 0"
mkPlot.py --pycfg=configuration_combined_a3_VBF_IN_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IN_afterVgBug_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.7 --middleText="VBF, D_{CP} < 0"

#VBF a2
mkPlot.py --pycfg=configuration_combined_a2_VBF_IP_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IP_afterVgBug_narrowFai_H0PH_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.7 --middleText="VBF, D_{int} > 0.4"
mkPlot.py --pycfg=configuration_combined_a2_VBF_IN_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IN_afterVgBug_narrowFai_H0PH_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.7 --middleText="VBF, D_{int} < 0.4"

#VBF aL
mkPlot.py --pycfg=configuration_combined_aL1_VBF_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_afterVgBug_narrowFai_H0L1_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.7 --middleText="VBF"
mkPlot.py --pycfg=configuration_combined_aLZg_VBF_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_afterVgBug_narrowFai_H0LZg_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.7 --middleText="VBF"

#[0.5, 1.5]
#VH a3
mkPlot.py --pycfg=configuration_combined_a3_VH_IN_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_IN_afterVgBug_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.6 --middleText="Resolved VH, D_{CP} < 0"
mkPlot.py --pycfg=configuration_combined_a3_VH_IP_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_IP_afterVgBug_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --middleText="Resolved VH, D_{CP} > 0"

#VH a2
mkPlot.py --pycfg=configuration_combined_a2_VH_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0PH_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.8 --middleText="Resolved VH"

#VH aL
mkPlot.py --pycfg=configuration_combined_aLZg_VH_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0LZg_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --middleText="Resolved VH"
mkPlot.py --pycfg=configuration_combined_aL1_VH_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0L1_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="Resolved VH"

#VHBoosted a3 
mkPlot.py --pycfg=configuration_combined_a3_VHBoosted_IP_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_IP_afterVgBug_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.8 --middleText="Boosted VH, D_{CP} > 0"
mkPlot.py --pycfg=configuration_combined_a3_VHBoosted_IN_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_IN_afterVgBug_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 2.0 --middleText="Boosted VH, D_{CP} < 0"

#VHBoosted a2
mkPlot.py --pycfg=configuration_combined_a2_VHBoosted_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0PH_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --middleText="Boosted VH"

#VHBoosted aL
mkPlot.py --pycfg=configuration_combined_aL1_VHBoosted_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0L1_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.6 --middleText="Boosted VH"
mkPlot.py --pycfg=configuration_combined_aLZg_VHBoosted_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0LZg_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.6 --middleText="Boosted VH"

#ggF-0j/ggF-1j a3
mkPlot.py --pycfg=configuration_combined_0j_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_0j_afterVgBug_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --middleText="ggH 0-jet"
mkPlot.py --pycfg=configuration_combined_1j_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_1j_afterVgBug_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --middleText="ggH 1-jet"

#ggF-2j a3 Hgg
mkPlot.py --pycfg=configuration_Run2_combinedSB_Hgg_a3_IN_log_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jGGH_IN_fpruned_HGG_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --middleText="ggH 2-jet, D_{CP}^{ggH} < 0"
mkPlot.py --pycfg=configuration_Run2_combinedSB_Hgg_a3_IP_log_CWR2.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jGGH_IP_fpruned_HGG_H0M_fitS_plusPrefit.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --middleText="ggH 2-jet, D_{CP}^{ggH} > 0"
