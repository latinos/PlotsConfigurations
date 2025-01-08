#set ratio range to [0.5,1.5]
mkPlot.py --pycfg=configuration_combined_0j_ARC02_addendumThesis.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_0j_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --extraLegend="[m_{ll}, m_{T}^{H}]@@ggF 0-jet"
mkPlot.py --pycfg=configuration_combined_1j_ARC02_addendumThesis.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_1j_afterVgBug_H0M_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --extraLegend="[m_{ll}, m_{T}^{H}]@@ggF 1-jet"

mkPlot.py --pycfg=configuration_combined_0j_H0PH_ARC02_addendumThesis.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_0j_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --extraLegend="[m_{ll}, m_{T}^{H}]@@ggF 0-jet"
mkPlot.py --pycfg=configuration_combined_1j_H0PH_ARC02_addendumThesis.py --showIntegralLegend=0 --onlyPlot=cratio --inputFile=output_postFitShapes_Run2_1j_afterVgBug_narrowFai_H0PH_fitS.root --fileFormats="png,pdf" --minLogCratio=1.1 --scaleToPlot 5.0 --extraLegend="[m_{ll}, m_{T}^{H}]@@ggF 1-jet"

