#!/bin/bash

cp configuration.py tmp.py

kind=${1}

if [ $kind = 's' ]
then
  echo Making signal+background postfit plots...
  outdir=plots_s
  outdirplots=postFitPlotsWH3l
elif [ $kind = 'b' ]
then
  echo Making background only postfit plots...
  outdir=plots_b
  outdirplots=postFitPlotsBonlyWH3l
elif [ $kind = 'p' ]
then
  echo Making prefit plots...
  outdir=plots_p
  outdirplots=preFitPlotsWH3l
else
  echo Unrecognized option. Exit.
  exit
fi

if [ ! -d  ${outdir} ]
then
  mkdir ${outdir}
else
  rm -r ${outdir}
  mkdir ${outdir}
fi

sed -i "s/REPLACE_ME/'${outdirplots}'/g" configuration.py

# WH3l OSSF

mkPostFitPlot.py --inputFileCombine InputFiles/fitDiagnostics.root --outputFile ${outdir}/wh3ltag_wh3l_13TeV_ossf.root --variable drllmin3l --cut wh3ltag_wh3l_13TeV_ossf --cutNameInOriginal wh3l_13TeV_ossf --inputFile InputFiles/plots_WH3l_Signal_Rochester_mva_90p_Iso2016.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=${outdir}/wh3ltag_wh3l_13TeV_ossf.root --minLogCratio=0.1 --minLogC=0.1 --onlyCut=wh3l_13TeV_ossf --onlyVariable=drllmin3l #--showIntegralLegend=1 

# WH3l SSSF

mkPostFitPlot.py --inputFileCombine InputFiles/fitDiagnostics.root --outputFile ${outdir}/wh3ltag_wh3l_sssf.root --variable drllmin3l_sssf --cut wh3ltag_wh3l_sssf --cutNameInOriginal wh3l_13TeV_sssf --inputFile InputFiles/plots_WH3l_Signal_Rochester_mva_90p_Iso2016.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=${outdir}/wh3ltag_wh3l_sssf.root --minLogCratio=0.1 --minLogC=0.1 --onlyCut=wh3l_13TeV_sssf --onlyVariable=drllmin3l_sssf #--showIntegralLegend=1

#-------------------------------------------------------------------------------------------------------------------------------------------------

# WZ CR

mkPostFitPlot.py --inputFileCombine InputFiles/fitDiagnostics.root --outputFile ${outdir}/wh3ltag_wh3l_wz_13TeV.root --variable events --cut wh3ltag_wh3l_wz_13TeV --cutNameInOriginal wh3l_wz_13TeV --inputFile InputFiles/plots_WH3l_ControlRegion_Rochester_mva_90p_Iso2016.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=${outdir}/wh3ltag_wh3l_wz_13TeV.root --minLogCratio=1 --minLogC=1 --onlyCut=wh3l_wz_13TeV --onlyVariable=events #--showIntegralLegend=1


# Zg CR
mkPostFitPlot.py --inputFileCombine InputFiles/fitDiagnostics.root --outputFile ${outdir}/wh3ltag_wh3l_zg_13TeV.root --variable events --cut wh3ltag_wh3l_zg_13TeV --cutNameInOriginal wh3l_zg_13TeV --inputFile InputFiles/plots_WH3l_ControlRegion_Rochester_mva_90p_Iso2016.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=${outdir}/wh3ltag_wh3l_zg_13TeV.root --minLogCratio=1 --minLogC=1 --onlyCut=wh3l_zg_13TeV --onlyVariable=events #--showIntegralLegend=1


mv tmp.py configuration.py
