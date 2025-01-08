#set ratio range to [0.5,1.5]
mkPlot.py --pycfg=configuration_combined_0j_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_0j_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --extraLegend="ggH 0-jet"
mkPlot.py --pycfg=configuration_combined_1j_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_1j_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --extraLegend="ggH 1-jet"
mkPlot.py --pycfg=configuration_combined_a3_VH_IN_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_IN_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.6 --extraLegend="Resolved VH@@D_{CP} < 0"
mkPlot.py --pycfg=configuration_combined_a3_VH_IP_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_IP_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.6 --extraLegend="Resolved VH@@D_{CP} > 0"
mkPlot.py --pycfg=configuration_combined_a3_VHBoosted_IP_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_IP_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --extraLegend="Boosted VH@@D_{CP} > 0"

mkPlot.py --pycfg=configuration_combined_a2_VHBoosted_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --extraLegend="Boosted VH"
mkPlot.py --pycfg=configuration_combined_a2_2jVH_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="Resolved VH"

mkPlot.py --pycfg=configuration_combined_aLZg_2jVH_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0LZg_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="Resolved VH"
mkPlot.py --pycfg=configuration_combined_aL1_2jVH_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0L1_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="Resolved VH"
mkPlot.py --pycfg=configuration_combined_aL1_VHBoosted_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0L1_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --extraLegend="Boosted VH"
mkPlot.py --pycfg=configuration_combined_aLZg_VHBoosted_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0LZg_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --extraLegend="Boosted VH"

#set ratio range to [0.0,2.0]
#mkPlot.py --pycfg=configuration_combined_a3_VBF_IP_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IP_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="VBF@@D_{CP} > 0"
#mkPlot.py --pycfg=configuration_combined_a3_VBF_IN_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IN_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="VBF@@D_{CP} < 0"
#mkPlot.py --pycfg=configuration_combined_a3_VHBoosted_IN_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_IN_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --extraLegend="Boosted VH@@D_{CP} < 0"

#mkPlot.py --pycfg=configuration_combined_a2_2jVBF_IP_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IP_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="VBF@@D_{int} > 0.4"
#mkPlot.py --pycfg=configuration_combined_a2_2jVBF_IN_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IN_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="VBF@@D_{int} < 0.4"

#mkPlot.py --pycfg=configuration_combined_aL1_2jVBF_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_afterVgBug_narrowFai_H0L1_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="VBF"
#mkPlot.py --pycfg=configuration_combined_aLZg_2jVBF_ARC01.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_afterVgBug_narrowFai_H0LZg_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="VBF"
