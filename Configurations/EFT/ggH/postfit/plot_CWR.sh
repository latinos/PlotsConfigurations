# [0,2]
#VBF a3
mkPlot.py --pycfg=configuration_combined_a3_VBF_IP_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IP_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[D_{VBF}, m_{ll}, D_{0-}]@@VBF@@D_{CP} > 0"
mkPlot.py --pycfg=configuration_combined_a3_VBF_IN_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IN_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[D_{VBF}, m_{ll}, D_{0-}]@@VBF@@D_{CP} < 0"

#VBF a2 A
mkPlot.py --pycfg=configuration_combined_a2_2jVBF_IP_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IP_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[D_{VBF}, m_{ll}, D_{0+}]@@VBF@@D_{int} > 0.4"
#mkPlot.py --pycfg=configuration_combined_a2_2jVBF_IN_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IN_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[D_{VBF}, m_{ll}, D_{0+}]@@VBF@@D_{int} < 0.4"

#VBF a2 B
#mkPlot.py --pycfg=configuration_combined_a2_2jVBF_IP_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IP_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 3.0 --extraLegend="[D_{VBF}, m_{ll}, D_{0+}]@@VBF@@D_{int} > 0.4"
mkPlot.py --pycfg=configuration_combined_a2_2jVBF_IN_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_IN_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[D_{VBF}, m_{ll}, D_{0+}]@@VBF@@D_{int} < 0.4"

#VBF aL
mkPlot.py --pycfg=configuration_combined_aL1_2jVBF_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_afterVgBug_narrowFai_H0L1_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[D_{VBF}, m_{ll}, D_{\Lambda 1}]@@VBF"
mkPlot.py --pycfg=configuration_combined_aLZg_2jVBF_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVBF_afterVgBug_narrowFai_H0LZg_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[D_{VBF}, m_{ll}, D_{\Lambda 1}^{Z\gamma}]@@VBF"

#[0.5, 1.5]
#VH a3
mkPlot.py --pycfg=configuration_combined_a3_VH_IN_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_IN_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.6 --extraLegend="[m_{ll}, D_{0-}]@@Resolved VH@@D_{CP} < 0"
mkPlot.py --pycfg=configuration_combined_a3_VH_IP_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_IP_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.6 --extraLegend="[m_{ll}, D_{0-}]@@Resolved VH@@D_{CP} > 0"

#VH a2
mkPlot.py --pycfg=configuration_combined_a2_2jVH_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[m_{ll}, D_{0+}]@@Resolved VH"

#VH aL
mkPlot.py --pycfg=configuration_combined_aLZg_2jVH_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0LZg_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[m_{ll}, D_{\Lambda 1}^{Z\gamma}]@@Resolved VH"
mkPlot.py --pycfg=configuration_combined_aL1_2jVH_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0L1_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 1.5 --extraLegend="[m_{ll}, D_{\Lambda 1}]@@Resolved VH"

#VHBoosted a3 IP
mkPlot.py --pycfg=configuration_combined_a3_VHBoosted_IP_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_IP_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 35.0 --extraLegend="[m_{ll}, D_{0-}]@@Boosted VH@@D_{CP} > 0"
mkPlot.py --pycfg=configuration_combined_a3_VHBoosted_IN_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_IN_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 20.0 --extraLegend="[m_{ll}, D_{0-}]@@Boosted VH@@D_{CP} < 0"

#VHBoosted a2
mkPlot.py --pycfg=configuration_combined_a2_VHBoosted_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 20.0 --extraLegend="[m_{ll}, D_{0+}]@@Boosted VH"

mkPlot.py --pycfg=configuration_combined_aL1_VHBoosted_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0L1_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 35.0 --extraLegend="[m_{ll}, D_{\Lambda 1}]@@Boosted VH"
mkPlot.py --pycfg=configuration_combined_aLZg_VHBoosted_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0LZg_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 35.0 --extraLegend="[m_{ll}, D_{\Lambda 1}^{Z\gamma}]@@Boosted VH"

#ggF-0j a3
mkPlot.py --pycfg=configuration_combined_0j_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_0j_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --extraLegend="[m_{T}, m_{ll}]@@ggH 0-jet"
mkPlot.py --pycfg=configuration_combined_1j_CWR.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_1j_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --extraLegend="[m_{T}, m_{ll}]@@ggH 1-jet"

#ggF-0j a3 thesis
mkPlot.py --pycfg=configuration_combined_0j_CWR_thesis.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_0j_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --extraLegend="[m_{T}^{H}, m_{ll}]@@ggF 0-jet"
mkPlot.py --pycfg=configuration_combined_1j_CWR_thesis.py --NoPreliminary --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_1j_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --extraLegend="[m_{T}^{H}, m_{ll}]@@ggF 1-jet"
