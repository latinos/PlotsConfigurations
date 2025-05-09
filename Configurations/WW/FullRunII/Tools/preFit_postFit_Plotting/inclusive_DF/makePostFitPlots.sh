#!/bin/bash

# TODO edit -- this should be <file with fit result>:<fit result>
fit_result=fitDiagnosticsWW_DF_incl.root:fit_s

##############################################################################
### Run mkPostFitCombinedPlot to convert PostFitShapesFromWorkspace output ###
##############################################################################
: <<'COMMENT'
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_HIPM_DF_sr_0j_incl.root --outputFile=plot_2016_HIPM_DF_sr_0j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_HIPM_DF_sr_1j_incl.root --outputFile=plot_2016_HIPM_DF_sr_1j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_HIPM_DF_sr_2j_incl.root --outputFile=plot_2016_HIPM_DF_sr_2j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_noHIPM_DF_sr_0j_incl.root --outputFile=plot_2016_noHIPM_DF_sr_0j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_noHIPM_DF_sr_1j_incl.root --outputFile=plot_2016_noHIPM_DF_sr_1j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_noHIPM_DF_sr_2j_incl.root --outputFile=plot_2016_noHIPM_DF_sr_2j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2017_DF_sr_0j_incl.root --outputFile=plot_2017_DF_sr_0j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2017_DF_sr_1j_incl.root --outputFile=plot_2017_DF_sr_1j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2017_DF_sr_2j_incl.root --outputFile=plot_2017_DF_sr_2j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2018_DF_sr_0j_incl.root --outputFile=plot_2018_DF_sr_0j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2018_DF_sr_1j_incl.root --outputFile=plot_2018_DF_sr_1j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2018_DF_sr_2j_incl.root --outputFile=plot_2018_DF_sr_2j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_FullRunII_DF_sr_0j_incl.root --outputFile=plot_FullRunII_DF_sr_0j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_FullRunII_DF_sr_1j_incl.root --outputFile=plot_FullRunII_DF_sr_1j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_FullRunII_DF_sr_2j_incl.root --outputFile=plot_FullRunII_DF_sr_2j_incl.root --kind=p --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

#########################################
## postfit is kind=P instead of kind=p ##
#########################################

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_HIPM_DF_sr_0j_incl_postFit.root --outputFile=plot_2016_HIPM_DF_sr_0j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_HIPM_DF_sr_1j_incl_postFit.root --outputFile=plot_2016_HIPM_DF_sr_1j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_HIPM_DF_sr_2j_incl_postFit.root --outputFile=plot_2016_HIPM_DF_sr_2j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_noHIPM_DF_sr_0j_incl_postFit.root --outputFile=plot_2016_noHIPM_DF_sr_0j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_noHIPM_DF_sr_1j_incl_postFit.root --outputFile=plot_2016_noHIPM_DF_sr_1j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2016_noHIPM_DF_sr_2j_incl_postFit.root --outputFile=plot_2016_noHIPM_DF_sr_2j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2017_DF_sr_0j_incl_postFit.root --outputFile=plot_2017_DF_sr_0j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2017_DF_sr_1j_incl_postFit.root --outputFile=plot_2017_DF_sr_1j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2017_DF_sr_2j_incl_postFit.root --outputFile=plot_2017_DF_sr_2j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2018_DF_sr_0j_incl_postFit.root --outputFile=plot_2018_DF_sr_0j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2018_DF_sr_1j_incl_postFit.root --outputFile=plot_2018_DF_sr_1j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_2018_DF_sr_2j_incl_postFit.root --outputFile=plot_2018_DF_sr_2j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_FullRunII_DF_sr_0j_incl_postFit.root --outputFile=plot_FullRunII_DF_sr_0j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_0j_B0 --variable=BDTOutput_0j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_FullRunII_DF_sr_1j_incl_postFit.root --outputFile=plot_FullRunII_DF_sr_1j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_1j_B0 --variable=BDTOutput_1j
mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_FullRunII_DF_sr_2j_incl_postFit.root --outputFile=plot_FullRunII_DF_sr_2j_incl_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j
COMMENT
###############################################################################################################################################
# There should now be configuration_combined.py, cuts_combined.py, variables_combined.py with correct cuts and variable definition
# You will need to define plot file
# Edit the inputFile name and drop onlyCut if you put all the output histograms in the same file above
###############################################################################################################################################
: <<'COMMENT'
mkPlot.py --inputFile=plot_2016_HIPM_DF_sr_0j_incl.root --pycfg=configuration_combined_2016_HIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2016_HIPM_DF_sr_1j_incl.root --pycfg=configuration_combined_2016_HIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2016_HIPM_DF_sr_2j_incl.root --pycfg=configuration_combined_2016_HIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root

mkPlot.py --inputFile=plot_2016_noHIPM_DF_sr_0j_incl.root --pycfg=configuration_combined_2016_noHIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2016_noHIPM_DF_sr_1j_incl.root --pycfg=configuration_combined_2016_noHIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2016_noHIPM_DF_sr_2j_incl.root --pycfg=configuration_combined_2016_noHIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root

mkPlot.py --inputFile=plot_2017_DF_sr_0j_incl.root --pycfg=configuration_combined_2017.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2017_DF_sr_1j_incl.root --pycfg=configuration_combined_2017.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2017_DF_sr_2j_incl.root --pycfg=configuration_combined_2017.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root

mkPlot.py --inputFile=plot_2018_DF_sr_0j_incl.root --pycfg=configuration_combined_2018.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2018_DF_sr_1j_incl.root --pycfg=configuration_combined_2018.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2018_DF_sr_2j_incl.root --pycfg=configuration_combined_2018.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root

mkPlot.py --inputFile=plot_FullRunII_DF_sr_0j_incl.root --pycfg=configuration_combined_FullRunII.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_FullRunII_DF_sr_1j_incl.root --pycfg=configuration_combined_FullRunII.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_FullRunII_DF_sr_2j_incl.root --pycfg=configuration_combined_FullRunII.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root
COMMENT
# Replace the  --inputFile=plot_FullRunII_DF_sr_0j_incl.root with  --inputFile=plot_FullRunII_DF_sr_0j_incl_postFit.root for postFit plots
#: <<'COMMENT'
mkPlot.py --inputFile=plot_2016_HIPM_DF_sr_0j_incl_postFit.root --pycfg=configuration_combined_2016_HIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2016_HIPM_DF_sr_1j_incl_postFit.root --pycfg=configuration_combined_2016_HIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2016_HIPM_DF_sr_2j_incl_postFit.root --pycfg=configuration_combined_2016_HIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root

mkPlot.py --inputFile=plot_2016_noHIPM_DF_sr_0j_incl_postFit.root --pycfg=configuration_combined_2016_noHIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2016_noHIPM_DF_sr_1j_incl_postFit.root --pycfg=configuration_combined_2016_noHIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2016_noHIPM_DF_sr_2j_incl_postFit.root --pycfg=configuration_combined_2016_noHIPM.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root

mkPlot.py --inputFile=plot_2017_DF_sr_0j_incl_postFit.root --pycfg=configuration_combined_2017.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2017_DF_sr_1j_incl_postFit.root --pycfg=configuration_combined_2017.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2017_DF_sr_2j_incl_postFit.root --pycfg=configuration_combined_2017.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root

mkPlot.py --inputFile=plot_2018_DF_sr_0j_incl_postFit.root --pycfg=configuration_combined_2018.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2018_DF_sr_1j_incl_postFit.root --pycfg=configuration_combined_2018.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_2018_DF_sr_2j_incl_postFit.root --pycfg=configuration_combined_2018.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root

mkPlot.py --inputFile=plot_FullRunII_DF_sr_0j_incl_postFit.root --pycfg=configuration_combined_FullRunII.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_0j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_FullRunII_DF_sr_1j_incl_postFit.root --pycfg=configuration_combined_FullRunII.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B0 --fileFormats=png,pdf,root
mkPlot.py --inputFile=plot_FullRunII_DF_sr_2j_incl_postFit.root --pycfg=configuration_combined_FullRunII.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B0 --fileFormats=png,pdf,root
#COMMENT
