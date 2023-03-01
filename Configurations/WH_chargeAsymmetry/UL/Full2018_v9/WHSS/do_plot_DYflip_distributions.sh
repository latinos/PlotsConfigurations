# We can plot only the ee distributions here - the only ones that changed
#########################################################################

# Unblind distributions
#######################
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_WZ_1j
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_WZ_2j

# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_ZH3l_WZ_CR_2j
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_ZH3l_WZ_CR_1j

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_2j_plus_pt2ge20  --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_halfDY.py 
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_2j_minus_pt2ge20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_2j_plus_pt2lt20  --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_2j_minus_pt2lt20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_halfDY.py

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_1j_plus_pt2ge20  --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_1j_minus_pt2ge20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_1j_plus_pt2lt20  --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_DYee_1j_minus_pt2lt20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_halfDY.py


# Blind distributions in signal region
######################################
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20 --plotFile=plot_blind.py

# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20 --plotFile=plot_blind.py


# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt=2lt20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 --plotFile=plot_blind.py

# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 --plotFile=plot_blind.py


mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py


# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_incl  --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_incl --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_incl  --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_incl --plotFile=plot_blind.py

# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_incl  --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_incl --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_incl  --plotFile=plot_blind.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_incl --plotFile=plot_blind.py

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_incl  --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_incl --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_incl  --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_incl --outputDirPlots=plots_WHSS_2018_v9_chargeAsymmetry_DYflip_halfDY --plotFile=plot_blind_halfDY.py
