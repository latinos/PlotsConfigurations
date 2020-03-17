#!/bin/bash

# Shapes
#mkShapesMulti.py --pycfg=configuration2HDMa_NoData.py --inputDir=/pnfs/iihe/cms/store/user/svanputt/HWWNano/ --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=configurationDarkHiggs_NoData.py --inputDir=/pnfs/iihe/cms/store/user/svanputt/HWWNano/ --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files

# hadd
#rm rootFileDarkHiggs_NoData/plots_DarkHiggsSemlep_2017.root
#mkShapesMulti.py --pycfg=configurationDarkHiggs_NoData.py --doHadd=True --batchSplit=Samples,Files --doNotCleanup --nThreads=8
#rm rootFile2HDMa_NoData/plots_2HDMaSemlep_2017.root
#mkShapesMulti.py --pycfg=configuration2HDMa_NoData.py --doHadd=True --batchSplit=Samples,Files --doNotCleanup --nThreads=8

# plots
mkPlot.py --pycfg=configuration2HDMa_NoData.py --inputFile=rootFile2HDMa_NoData/plots_2HDMaSemlep_2017.root --showIntegralLegend=1
mkPlot.py --pycfg=configuration2HDMa_NoData.py --inputFile=rootFile2HDMa_NoData/plots_2HDMaSemlep_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
mkPlot.py --pycfg=configurationDarkHiggs_NoData.py --inputFile=rootFileDarkHiggs_NoData/plots_DarkHiggsSemlep_2017.root --showIntegralLegend=1
mkPlot.py --pycfg=configurationDarkHiggs_NoData.py --inputFile=rootFileDarkHiggs_NoData/plots_DarkHiggsSemlep_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
