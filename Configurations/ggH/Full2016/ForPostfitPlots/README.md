Tutorial slides from Andrea: https://indico.cern.ch/event/628839/contributions/2671229/attachments/1497414/2330676/Jul-26-postFitPlots_Massironi.pdf

Produce the fitDiagnostics.root file containinig the fit results

    combine -M FitDiagnostics -d Full2016.root --X-rtd MINIMIZER_analytic --saveShapes --saveNormalizations --saveWithUncertainties

The fitDiagnostics.root obtained with the command above can be found in the following directory:

    inputFiles/fitDiagnostics.root

Run mkPostFitPlot.py for a given cut and variable

    mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots/ggHtag_of0j_em_mp_0j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of0j_em_mp_0j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_em_mp_0j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind s

Run mkPlot.py to get standard latino plots

    mkPlot.py --pycfg=configuration.py --inputFile=plots/ggHtag_of0j_em_mp_0j_pt2ge20.root --onlyCut=hww2l2v_13TeV_em_mp_0j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20

Script to run mkPostFitPlot.py for all signal and control regions

    ./doPlots.sh KIND
    
KIND=s, b, p

*s*: signal+background fit results (default)

*b*: background only fit results

*p*: prefit results
