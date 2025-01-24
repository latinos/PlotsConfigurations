# TODO edit -- this should be <file with fit result>:<fit result>
fit_result = fitDiagnosticsComb.root:fit_s

# Make combined-year datacards
combineCards.py 2016_HIPM=Full2016_HIPM_v9/inclusive/datacards/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
		2016_noHIPM=Full2016_noHIPM_v9/inclusive/datacards/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
		2017=Full2017_v9/inclusive/datacards/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
		2018=Full2018_v9/inclusive/datacards/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
		> FullRunII_sr_0j_incl.txt
combineCards.py 2016_HIPM=Full2016_HIPM_v9/inclusive/datacards/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
		2016_noHIPM=Full2016_noHIPM_v9/inclusive/datacards/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
		2017=Full2017_v9/inclusive/datacards/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
		2018=Full2018_v9/inclusive/datacards/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
		> FullRunII_sr_1j_incl.txt
combineCards.py 2016_HIPM=Full2016_HIPM_v9/inclusive/datacards/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
		2016_noHIPM=Full2016_noHIPM_v9/inclusive/datacards/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
		2017=Full2017_v9/inclusive/datacards/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
		2018=Full2018_v9/inclusive/datacards/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
		> FullRunII_sr_2j_incl.txt

# Convert to workspaces, you will need both
text2workspace.py FullRunII_sr_0j_incl.txt -o FullRunII_sr_0j_incl.root -m 125
text2workspace.py FullRunII_sr_1j_incl.txt -o FullRunII_sr_1j_incl.root -m 125
text2workspace.py FullRunII_sr_2j_incl.txt -o FullRunII_sr_2j_incl.root -m 125

# Generate postfit total shape from combined-year workspace
# This takes the input shapes from the above workspace, morphs them according to the nuisance parameters sampled from the covariance matrix in the fit result, and adds everything together
PostFitShapesFromWorkspace -w FullRunII_sr_0j_incl.root -d FullRunII_sr_0j_incl.txt -o output_sr_0j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_sr_1j_incl.root -d FullRunII_sr_1j_incl.txt -o output_sr_1j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_sr_2j_incl.root -d FullRunII_sr_2j_incl.txt -o output_sr_2j_incl.root --sampling -f ${fit_result} --total-shapes

# To include postfit, add --postfit flag
#PostFitShapesFromWorkspace -w FullRunII_sr_0j_incl.root -d FullRunII_sr_0j_incl.txt -o output_sr_0j_incl.root --sampling -f ${fit_result} --total-shapes --postfit
#PostFitShapesFromWorkspace -w FullRunII_sr_1j_incl.root -d FullRunII_sr_1j_incl.txt -o output_sr_1j_incl.root --sampling -f ${fit_result} --total-shapes --postfit
#PostFitShapesFromWorkspace -w FullRunII_sr_2j_incl.root -d FullRunII_sr_2j_incl.txt -o output_sr_2j_incl.root --sampling -f ${fit_result} --total-shapes --postfit

# Run mkPostFitCombinedPlot to convert PostFitShapesFromWorkspace output
# Edit L122 of mkPostFitCombinedPlot.py and change outputFile name if you want all histograms in the same file
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_sr_0j_incl.root --outputFile=plot_sr_0j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_sr_1j_incl.root --outputFile=plot_sr_1j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_sr_2j_incl.root --outputFile=plot_sr_2j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

# postfit is kind=P instead of kind=p
#mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_sr_0j_incl.root --outputFile=plot_sr_0j_incl_postfit.root --kind=P --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
#mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_sr_1j_incl.root --outputFile=plot_sr_1j_incl_postfit.root --kind=P --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
#mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_sr_2j_incl.root --outputFile=plot_sr_2j_incl_postfit.root --kind=P --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

# There should now be configuration_combined.py, cuts_combined.py, variables_combined.py with correct cuts and variable definition
# You will need to define plot file
# Edit the inputFile name and drop onlyCut if you put all the output histograms in the same file above
mkPlot.py --inputFile=plot_sr_0j_incl.root --pycfg=configuration_combined.py --showIntegralLegend=1 --plotFile=<plot file> --onlyCut=ww2l2v_13TeV_sr_0j_B0
mkPlot.py --inputFile=plot_sr_1j_incl.root --pycfg=configuration_combined.py --showIntegralLegend=1 --plotFile=<plot file> --onlyCut=ww2l2v_13TeV_sr_1j_B0
mkPlot.py --inputFile=plot_sr_2j_incl.root --pycfg=configuration_combined.py --showIntegralLegend=1 --plotFile=<plot file> --onlyCut=ww2l2v_13TeV_sr_2j_B0

