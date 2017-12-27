Produce the fitDiagnostics.root file containinig the fit results

    combine -M FitDiagnostics -d Full2016.root --X-rtd MINIMIZER_analytic --saveShapes --saveNormalizations --saveWithUncertainties

Make the mkPostFitPlot.py output directory

    mkdir plots

Run mkPostFitPlot.py for a given cut and variable

    mkPostFitPlot.py --inputFileCombine inputFiles/fitDiagnostics.root --outputFile plots/ggHtag_of0j_em_mp_0j_pt2ge20.root --variable mllVSmth_pt2ge20 --cut ggHtag_of0j_em_mp_0j_pt2ge20 --cutNameInOriginal hww2l2v_13TeV_em_mp_0j_pt2ge20 --inputFile inputFiles/plots_ggH_3Dec.root --kind s

Run mkPlot.py to get standard latino plots

    mkPlot.py --pycfg=configuration.py --inputFile=plots/ggHtag_of0j_em_mp_0j_pt2ge20.root --onlyCut=hww2l2v_13TeV_em_mp_0j_pt2ge20 --onlyVariable=mllVSmth_pt2ge20

Script to run mkPostFitPlot.py for all cuts signal and control regions
KIND=s(default),b,p
s: signal+background fit results
b: background only fit results
p: prefit results

    ./doPlots.sh KIND
