#python mkPFsetup.py --config conf.py --fitresults ../combine/fitDiagnostics_run2_combination.root --postfit
#python mkPFsetup.py --config conf.py --fitresults ../combine/fitDiagnostics_run2_combination.root --skip-combine
#python mkPFsetup.py --config conf.py --fitresults ../combine/fitDiagnostics_run2_combination.root --postfit --split-run2 
#python mkPFsetup.py --config conf.py --fitresults ../combine/fitDiagnostics_run2_combination.root --split-run2 --skip-combine 
#
#hadd -f run2_postfit_test.root run2/*/*/plots_postfit_run2_*.root
#hadd -f run2_prefit_test.root run2/*/*/plots_prefit_run2_*.root
#
#python mergBpostSpre.py --config conf.py --post-fit run2_postfit_test.root --pre-fit run2_prefit_test.root -o run2_Bpo_Spr.root
#
#hadd -f 2016_postfit_test.root run2/*/*/plots_postfit_2016_*.root
#hadd -f 2017_postfit_test.root run2/*/*/plots_postfit_2017_*.root
#hadd -f 2018_postfit_test.root run2/*/*/plots_postfit_2018_*.root

#hadd -f 2016_prefit_test.root run2/*/*/plots_prefit_2016_*.root
#hadd -f 2017_prefit_test.root run2/*/*/plots_prefit_2017_*.root
#hadd -f 2018_prefit_test.root run2/*/*/plots_prefit_2018_*.root
#
#python mergBpostSpre.py --config conf.py --post-fit 2016_postfit_test.root --pre-fit 2016_prefit_test.root -o 2016_Bpo_Spr.root
#python mergBpostSpre.py --config conf.py --post-fit 2017_postfit_test.root --pre-fit 2017_prefit_test.root -o 2017_Bpo_Spr.root
#python mergBpostSpre.py --config conf.py --post-fit 2018_postfit_test.root --pre-fit 2018_prefit_test.root -o 2018_Bpo_Spr.root

mkPlot.py --pycfg=conf_postfit.py --inputFile run2_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=2. --replaceMissingHisto --fileFormats png,pdf,root
mkPlot.py --pycfg=conf_postfit.py --inputFile run2_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --replaceMissingHisto --fileFormats png,pdf,root

#mkPlot.py --pycfg=conf_prefit.py --inputFile run2_prefit_test.root --onlyPlot=cratio --scaleToPlot=2. --replaceMissingHisto --fileFormats png,pdf,root
#mkPlot.py --pycfg=conf_prefit.py --inputFile run2_prefit_test.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --replaceMissingHisto --fileFormats png,pdf,root


#mkPlot.py --pycfg=conf_postfit_2016.py --inputFile 2016_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=2. --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#mkPlot.py --pycfg=conf_postfit_2016.py --inputFile 2016_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#
#mkPlot.py --pycfg=conf_postfit_2017.py --inputFile 2017_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=2. --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#mkPlot.py --pycfg=conf_postfit_2017.py --inputFile 2017_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#
#mkPlot.py --pycfg=conf_postfit_2018.py --inputFile 2018_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=2. --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#mkPlot.py --pycfg=conf_postfit_2018.py --inputFile 2018_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#
#
#mkPlot.py --pycfg=conf_prefit_2016.py --inputFile 2016_prefit_test.root --onlyPlot=cratio --scaleToPlot=2. --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#mkPlot.py --pycfg=conf_prefit_2016.py --inputFile 2016_prefit_test.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#
#mkPlot.py --pycfg=conf_prefit_2017.py --inputFile 2017_prefit_test.root --onlyPlot=cratio --scaleToPlot=2. --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#mkPlot.py --pycfg=conf_prefit_2017.py --inputFile 2017_prefit_test.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#
#mkPlot.py --pycfg=conf_prefit_2018.py --inputFile 2018_prefit_test.root --onlyPlot=cratio --scaleToPlot=2. --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
#mkPlot.py --pycfg=conf_prefit_2018.py --inputFile 2018_prefit_test.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --replaceMissingHisto --fileFormats png,pdf,root #--showIntegralLegend=1
