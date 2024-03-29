# Unblind distributions
#######################

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_wz_13TeV --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_zg_13TeV --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_WZ_1j --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_WZ_2j --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90

# Blind distributions in signal region
######################################

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WH3l_2016noHIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90
