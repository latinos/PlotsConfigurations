#!/bin/bash

### Best version
## Shapes
#rm ../../../../../../job/mkShapes__MHlnjj_2017__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

## hadd
#rm 2HDMa_root/plots_MHlnjj_2017.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files
#
## plots
#mkPlot.py --pycfg=conf.py --inputFile=2HDMa_root/plots_MHlnjj_2017.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf.py --inputFile=2HDMa_root/plots_MHlnjj_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

## data cards
#mkDatacards.py --pycfg=conf.py --inputFile=2HDMa_BDT_root/plots_MHlnjj_2017.root #--cardList=


### no Angle 
## Shapes
#rm ../../../../../../job/mkShapes__MHlnjj_noAngle_2017__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_noAngle.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_noAngle.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

## hadd
#rm 2HDMa_root_noAngle/plots_MHlnjj_noAngle_2017.root
#mkShapesMulti.py --pycfg=conf_noAngle.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files
#
## plots
#mkPlot.py --pycfg=conf_noAngle.py --inputFile=2HDMa_root_noAngle/plots_MHlnjj_noAngle_2017.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_noAngle.py --inputFile=2HDMa_root_noAngle/plots_MHlnjj_noAngle_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
#mkPlot.py --pycfg=conf_noAngleSA.py --inputFile=2HDMa_root_noAngle/plots_MHlnjj_noAngle_2017.root --showIntegralLegend=1
#mkPlot.py --pycfg=conf_noAngleSA.py --inputFile=2HDMa_root_noAngle/plots_MHlnjj_noAngle_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
#mkPlot.py --pycfg=conf_noAngleSA.py --inputFile=2HDMa_root_noAngle/plots_MHlnjj_noAngle_2017.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=dphi_l_jj

## data cards
#mkDatacards.py --pycfg=conf_noAngle.py --inputFile=2HDMa_BDT_root/plots_MHlnjj_2017.root #--cardList=

### QCD
## Shapes
#rm ../../../../../../job/mkShapes__MHlnjj_QCD_2017__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_QCD.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_QCD.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

## hadd
#rm 2HDMa_root_QCD/plots_MHlnjj_QCD_2017.root
#mkShapesMulti.py --pycfg=conf_QCD.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files
#
## plots
#mkPlot.py --pycfg=conf_QCD.py --inputFile=2HDMa_root_QCD/plots_MHlnjj_QCD_2017.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_QCD.py --inputFile=2HDMa_root_QCD/plots_MHlnjj_QCD_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

## data cards
#mkDatacards.py --pycfg=conf_QCD.py --inputFile=2HDMa_BDT_root/plots_MHlnjj_2017.root #--cardList=

## QCDnA no Angle
## Shapes
#rm ../../../../../../job/mkShapes__MHlnjj_QCDnA_2017__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_QCDnA.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_QCDnA.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

## hadd
#rm 2HDMa_root_QCDnA/plots_MHlnjj_QCDnA_2017.root
#mkShapesMulti.py --pycfg=conf_QCDnA.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files
#
## plots
#mkPlot.py --pycfg=conf_QCDnA.py --inputFile=2HDMa_root_QCDnA/plots_MHlnjj_QCDnA_2017.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_QCDnA.py --inputFile=2HDMa_root_QCDnA/plots_MHlnjj_QCDnA_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
#
### data cards
##mkDatacards.py --pycfg=conf_QCDnA.py --inputFile=2HDMa_BDT_root/plots_MHlnjj_2017.root #--cardList=

## FCR
## Shapes
#rm ../../../../../../job/mkShapes__MHlnjj_FCR_2017__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_FCR.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_FCR.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

# hadd
rm 2HDMa_root_FCR/plots_MHlnjj_FCR_2017.root
mkShapesMulti.py --pycfg=conf_FCR.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

# plots
mkPlot.py --pycfg=conf_FCR.py --inputFile=2HDMa_root_FCR/plots_MHlnjj_FCR_2017.root --showIntegralLegend=1 --scaleToPlot=2
mkPlot.py --pycfg=conf_FCR.py --inputFile=2HDMa_root_FCR/plots_MHlnjj_FCR_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

### data cards
##mkDatacards.py --pycfg=conf_FCR.py --inputFile=2HDMa_BDT_root/plots_MHlnjj_2017.root #--cardList=

### QCR
## Shapes
#rm ../../../../../../job/mkShapes__MHlnjj_QCR_2017__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_QCR.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_QCR.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

# hadd
rm 2HDMa_root_QCR/plots_MHlnjj_QCR_2017.root
mkShapesMulti.py --pycfg=conf_QCR.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

# plots
mkPlot.py --pycfg=conf_QCR.py --inputFile=2HDMa_root_QCR/plots_MHlnjj_QCR_2017.root --showIntegralLegend=1 --scaleToPlot=2
mkPlot.py --pycfg=conf_QCR.py --inputFile=2HDMa_root_QCR/plots_MHlnjj_QCR_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

### FCR nWXS
## Shapes
#rm ../../../../../../job/mkShapes__MHlnjj_FCR_nWXS_2017__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_FCR_nWXS.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_FCR_nWXS.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

## hadd
#rm 2HDMa_root_FCR_nWXS/plots_MHlnjj_FCR_nWXS_2017.root
#mkShapesMulti.py --pycfg=conf_FCR_nWXS.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files
#
## plots
#mkPlot.py --pycfg=conf_FCR_nWXS.py --inputFile=2HDMa_root_FCR_nWXS/plots_MHlnjj_FCR_nWXS_2017.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_FCR_nWXS.py --inputFile=2HDMa_root_FCR_nWXS/plots_MHlnjj_FCR_nWXS_2017.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
