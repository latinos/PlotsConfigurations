# Unblind distributions
#######################

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_wz_13TeV
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_zg_13TeV

# Blind distributions in signal region
######################################

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_plus_pt2ge20 --plotFile=plot_blind.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_minus_pt2ge20 --plotFile=plot_blind.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_plus_pt2lt20 --plotFile=plot_blind.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_sssf_minus_pt2lt20 --plotFile=plot_blind.py

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_plus_pt2ge20 --plotFile=plot_blind.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_minus_pt2ge20 --plotFile=plot_blind.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_plus_pt2lt20 --plotFile=plot_blind.py
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=wh3l_13TeV_ossf_minus_pt2lt20 --plotFile=plot_blind.py
