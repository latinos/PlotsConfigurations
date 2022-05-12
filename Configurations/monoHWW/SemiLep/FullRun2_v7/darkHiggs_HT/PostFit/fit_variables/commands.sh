#hadd -f plots_run2_Bpo_Spr.root SB/plots_run2_Bpo_Spr.root TCR/plots_run2_Bpo_Spr.root SR_16/plots_run2_Bpo_Spr.root SR_17_18/plots_run2_Bpo_Spr.root 

mkPlot.py --pycfg=conf.py --inputFile plots_run2_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=2. --fileFormats png,pdf,root #--showIntegralLegend=1
mkPlot.py --pycfg=conf.py --inputFile plots_run2_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --fileFormats png,pdf,root #--showIntegralLegend=1

mkPlot.py --pycfg=conf_SR_16.py --inputFile plots_run2_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=2. --fileFormats png,pdf,root #--showIntegralLegend=1
mkPlot.py --pycfg=conf_SR_16.py --inputFile plots_run2_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --fileFormats png,pdf,root #--showIntegralLegend=1

mkPlot.py --pycfg=conf_SR_17_18.py --inputFile plots_run2_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=2. --fileFormats png,pdf,root #--showIntegralLegend=1
mkPlot.py --pycfg=conf_SR_17_18.py --inputFile plots_run2_Bpo_Spr.root --onlyPlot=cratio --scaleToPlot=3000. --logOnly --fileFormats png,pdf,root #--showIntegralLegend=1
