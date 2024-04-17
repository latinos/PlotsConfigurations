# Unblind distributions
#######################

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_wz_13TeV --plotFile=plot_WZ0j.py

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_WZ_1j --plotFile=plot_WZ1j.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_WZ_2j --plotFile=plot_WZ2j.py

# Blind distributions in signal region
######################################

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_plus_pt2ge20 --plotFile=plot_blind_sssf.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_minus_pt2ge20 --plotFile=plot_blind_sssf.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_plus_pt2lt20 --plotFile=plot_blind_sssf.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_minus_pt2lt20 --plotFile=plot_blind_sssf.py

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_plus_pt2ge20 --plotFile=plot_blind_ossf.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_minus_pt2ge20 --plotFile=plot_blind_ossf.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_plus_pt2lt20 --plotFile=plot_blind_ossf.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_minus_pt2lt20 --plotFile=plot_blind_ossf.py

# # Unblind distributions in signal region
# ######################################

# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_plus_pt2ge20 --plotFile=plot.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_minus_pt2ge20 --plotFile=plot.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_plus_pt2lt20 --plotFile=plot.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_minus_pt2lt20 --plotFile=plot.py

# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_plus_pt2ge20 --plotFile=plot.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_minus_pt2ge20 --plotFile=plot.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_plus_pt2lt20 --plotFile=plot.py
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_minus_pt2lt20 --plotFile=plot.py
