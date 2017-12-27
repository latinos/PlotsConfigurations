#!/bin/bash

kind=${1}

if [ $kind = 's'  ]
then
  echo Making signal+background postfit plots...
elif [ $kind = 'b' ]
then
  echo Making background only postfit plots...
elif [ $kind = 'p' ]
then
  echo Making prefit plots...
else
  echo Unrecognized option. Exit.
  exit
fi

# em mp 0j pt2ge20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of0j_em_mp_0j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of0j_em_mp_0j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_em_mp_0j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of0j_em_mp_0j_pt2ge20.root --onlyCut=hww2l2v_13TeV_em_mp_0j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20 #--showIntegralLegend=1 


# em pm 0j pt2ge20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of0j_em_pm_0j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of0j_em_pm_0j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_em_pm_0j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of0j_em_pm_0j_pt2ge20.root --onlyCut=hww2l2v_13TeV_em_pm_0j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20 #--showIntegralLegend=1


# me mp 0j pt2ge20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of0j_me_mp_0j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of0j_me_mp_0j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_me_mp_0j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of0j_me_mp_0j_pt2ge20.root --onlyCut=hww2l2v_13TeV_me_mp_0j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20 #--showIntegralLegend=1


# me pm 0j pt2ge20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of0j_me_pm_0j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of0j_me_pm_0j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_me_pm_0j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of0j_me_pm_0j_pt2ge20.root  --onlyCut=hww2l2v_13TeV_me_pm_0j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20 #--showIntegralLegend=1

#---------------------------------------------------------------------------------------------------------------------------------------

# em mp 0j pt2lt20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of0j_em_mp_0j_pt2lt20.root --variable mllVSmth_pt2lt20 --cut ggHtag_of0j_em_mp_0j_pt2lt20 --cutNameInOriginal hww2l2v_13TeV_em_mp_0j_pt2lt20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of0j_em_mp_0j_pt2lt20.root  --onlyCut=hww2l2v_13TeV_em_mp_0j_pt2lt20 --onlyVariable=mllVSmth_pt2lt20 #--showIntegralLegend=1


# em pm 0j pt2lt20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of0j_em_pm_0j_pt2lt20.root --variable mllVSmth_pt2lt20 --cut ggHtag_of0j_em_pm_0j_pt2lt20 --cutNameInOriginal hww2l2v_13TeV_em_pm_0j_pt2lt20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of0j_em_pm_0j_pt2lt20.root  --onlyCut=hww2l2v_13TeV_em_pm_0j_pt2lt20 --onlyVariable=mllVSmth_pt2lt20 #--showIntegralLegend=1


# me mp 0j pt2lt20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of0j_me_mp_0j_pt2lt20.root --variable mllVSmth_pt2lt20 --cut ggHtag_of0j_me_mp_0j_pt2lt20 --cutNameInOriginal hww2l2v_13TeV_me_mp_0j_pt2lt20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of0j_me_mp_0j_pt2lt20.root  --onlyCut=hww2l2v_13TeV_me_mp_0j_pt2lt20 --onlyVariable=mllVSmth_pt2lt20 #--showIntegralLegend=1


# me pm 0j pt2lt20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of0j_me_pm_0j_pt2lt20.root --variable mllVSmth_pt2lt20 --cut ggHtag_of0j_me_pm_0j_pt2lt20 --cutNameInOriginal hww2l2v_13TeV_me_pm_0j_pt2lt20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of0j_me_pm_0j_pt2lt20.root  --onlyCut=hww2l2v_13TeV_me_pm_0j_pt2lt20 --onlyVariable=mllVSmth_pt2lt20 #--showIntegralLegend=1
 

#-------------------------------------------------------------------------------------------------------------------------------------------------

# em mp 1j pt2ge20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of1j_em_mp_1j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of1j_em_mp_1j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_em_mp_1j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of1j_em_mp_1j_pt2ge20.root  --onlyCut=hww2l2v_13TeV_em_mp_1j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20 #--showIntegralLegend=1


# em pm 1j pt2ge20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of1j_em_pm_1j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of1j_em_pm_1j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_em_pm_1j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of1j_em_pm_1j_pt2ge20.root  --onlyCut=hww2l2v_13TeV_em_pm_1j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20 #--showIntegralLegend=1


# me mp 1j pt2ge20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of1j_me_mp_1j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of1j_me_mp_1j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_me_mp_1j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of1j_me_mp_1j_pt2ge20.root  --onlyCut=hww2l2v_13TeV_me_mp_1j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20 #--showIntegralLegend=1


# me pm 1j pt2ge20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of1j_me_pm_1j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of1j_me_pm_1j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_me_pm_1j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of1j_me_pm_1j_pt2ge20.root  --onlyCut=hww2l2v_13TeV_me_pm_1j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20 #--showIntegralLegend=1

#---------------------------------------------------------------------------------------------------------------------------------------

# em mp 1j pt2lt20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of1j_em_mp_1j_pt2lt20.root --variable mllVSmth_pt2lt20 --cut ggHtag_of1j_em_mp_1j_pt2lt20 --cutNameInOriginal hww2l2v_13TeV_em_mp_1j_pt2lt20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of1j_em_mp_1j_pt2lt20.root  --onlyCut=hww2l2v_13TeV_em_mp_1j_pt2lt20 --onlyVariable=mllVSmth_pt2lt20 #--showIntegralLegend=1


# em pm 1j pt2lt20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of1j_em_pm_1j_pt2lt20.root --variable mllVSmth_pt2lt20 --cut ggHtag_of1j_em_pm_1j_pt2lt20 --cutNameInOriginal hww2l2v_13TeV_em_pm_1j_pt2lt20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of1j_em_pm_1j_pt2lt20.root  --onlyCut=hww2l2v_13TeV_em_pm_1j_pt2lt20 --onlyVariable=mllVSmth_pt2lt20 #--showIntegralLegend=1


# me mp 1j pt2lt20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of1j_me_mp_1j_pt2lt20.root --variable mllVSmth_pt2lt20 --cut ggHtag_of1j_me_mp_1j_pt2lt20 --cutNameInOriginal hww2l2v_13TeV_me_mp_1j_pt2lt20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of1j_me_mp_1j_pt2lt20.root  --onlyCut=hww2l2v_13TeV_me_mp_1j_pt2lt20 --onlyVariable=mllVSmth_pt2lt20 #--showIntegralLegend=1


# me pm 1j pt2lt20
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/ggHtag_of1j_me_pm_1j_pt2lt20.root --variable mllVSmth_pt2lt20 --cut ggHtag_of1j_me_pm_1j_pt2lt20 --cutNameInOriginal hww2l2v_13TeV_me_pm_1j_pt2lt20 --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/ggHtag_of1j_me_pm_1j_pt2lt20.root  --onlyCut=hww2l2v_13TeV_me_pm_1j_pt2lt20 --onlyVariable=mllVSmth_pt2lt20 #--showIntegralLegend=1



#-------------------------------------------------------------------------------------------------------------------------------------------------

# of 0j Top
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/hww2l2v_13TeV_top_of0j.root --variable events --cut ggHtag_of0j_of0j_Top --cutNameInOriginal hww2l2v_13TeV_top_of0j --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/hww2l2v_13TeV_top_of0j.root  --onlyCut=hww2l2v_13TeV_top_of0j --onlyVariable=events #--showIntegralLegend=1


# of 0j DYtt
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/hww2l2v_13TeV_dytt_of0j.root --variable events --cut ggHtag_of0j_of0j_DYtt --cutNameInOriginal hww2l2v_13TeV_dytt_of0j --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/hww2l2v_13TeV_dytt_of0j.root  --onlyCut=hww2l2v_13TeV_dytt_of0j --onlyVariable=events #--showIntegralLegend=1


# of 1j Top
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/hww2l2v_13TeV_top_of1j.root --variable events --cut ggHtag_of1j_of1j_Top --cutNameInOriginal hww2l2v_13TeV_top_of1j --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/hww2l2v_13TeV_top_of1j.root  --onlyCut=hww2l2v_13TeV_top_of1j --onlyVariable=events #--showIntegralLegend=1


# of 1j DYtt
mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots_27Dec/hww2l2v_13TeV_dytt_of1j.root --variable events --cut ggHtag_of1j_of1j_DYtt --cutNameInOriginal hww2l2v_13TeV_dytt_of1j --inputFile inputFiles/plots_ggH_3Dec.root --kind ${kind}

mkPlot.py --pycfg=configuration.py --inputFile=plots_27Dec/hww2l2v_13TeV_dytt_of1j.root  --onlyCut=hww2l2v_13TeV_dytt_of1j --onlyVariable=events #--showIntegralLegend=1

