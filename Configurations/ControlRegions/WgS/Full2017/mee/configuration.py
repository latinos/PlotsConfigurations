# example of configuration file

#tag = 'ggHmetXYcor'
#tag = 'WgSt_SnglEle01'
#tag = 'WgSt_Test'
tag = 'WgSt_ZmmWl'
#tag = 'WgSt_ZllWl_histFr01'
#tag = 'WgSt_SnglMu01'
#tag = 'WgSt_NoLepCut_LepSF3'
#tag = 'WgSt'
#tag = 'WZsamples'
#tag = 'DYmetXYcor'
#tag = 'ggH'
#tag = 'ggHTESTPARTIALamassiro'


# used by mkShape to define output directory for root files
#outputDir = 'rootFile_SnglEle01'
#outputDir = 'rootFile_Test'
#outputDir = 'rootFile_ZllWl_histFr01'
outputDir = 'rootFile_ZmmWl'
#outputDir = 'rootFile_SnglMu01'
#outputDir = 'rootFile_NoLepCut_LepSF3'
#outputDir = 'rootFile'


# file with list of variables
#variablesFile = 'variables_WZsampleStudy.py'
#variablesFile = 'variablesDY.py'
#variablesFile = 'variables.py'
variablesFile = 'variables_ZllWl.py'
#variablesFile = 'variables_ZllWl_histFr01.py'

# file with list of cuts
#cutsFile = 'cuts_WZsampleStudy.py' 
#cutsFile = 'cutsDY.py' 
#cutsFile = 'cut_low.py'
cutsFile = 'cut_peak.py'
#cutsFile = 'cuts_ZllWl.py' 
#cutsFile = 'cuts_mmm.py' 
#cutsFile = 'cuts_emm.py' 
#cutsFile = 'cuts.py' 

# file with list of samples
#samplesFile = 'samples_fake.py' 
#samplesFile = 'samples_WZsampleStudy.py' 
samplesFile = 'samples_mee.py' 
#samplesFile = 'samples_emm.py' 
#samplesFile = 'samples_test.py' 
#samplesFile = 'samples_eee.py' 

#samplesFile = 'samples_test.py' 

# file with list of samples
#plotFile = 'plot_WZsampleStudy.py' 
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 41.5 
#lumi = 1.

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = 'plotWgst_SnglEle01'
#outputDirPlots = 'plotWgst_Test'
outputDirPlots = 'plotWgst_ZmmWl_WZ01'
#outputDirPlots = 'plotWgst_ZllWl'
#outputDirPlots = 'plotWgst_SnglMu01'
#outputDirPlots = 'plotWgst_LepCut2l_LepSF2l'
#outputDirPlots = 'plotWgst_NoLepCut_LepSF3l'
#outputDirPlots = 'plotWgSt'
#outputDirPlots = 'plotWZsamples'
#outputDirPlots = 'plotDYCorrMetXYshift'
#outputDirPlots = 'plotGGhCorrMetXYshift'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'


