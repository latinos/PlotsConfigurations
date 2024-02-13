# Unblind distributions
#######################
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_WZ_1j --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_WZ_2j --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_ZH3l_WZ_CR_2j --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_ZH3l_WZ_CR_1j --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_2j_plus_pt2ge20 --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_2j_minus_pt2ge20 --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_2j_plus_pt2lt20 --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_2j_minus_pt2lt20 --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_1j_plus_pt2ge20 --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_1j_minus_pt2ge20 --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_1j_plus_pt2lt20 --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_1j_minus_pt2lt20 --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90


# Blind distributions in signal region
######################################
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90


mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90


mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90


mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90

mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
mkPlot.py --pycfg=configuration_control_plots.py --inputFile=rootFile/plots_WHSS_2016HIPM_v9_control_plots.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90
