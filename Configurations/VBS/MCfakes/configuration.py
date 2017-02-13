# example of configuration file

# Samples :
# dcap://maite.iihe.ac.be//pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__vbsSel/

# mkShapes.py --pycfg=configuration_batch.py --inputDir=dcap://maite.iihe.ac.be//pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__vbsSel/ --doHadd=True --batchSplit=Cuts,Samples
tag = 'VBS'


# used by mkShape to define output directory for root files
outputDir = 'rootFile'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 

# options of the plots
#plotNormalizedDistributions = True   # default is False



# luminosity to normalize to (in 1/fb)
#lumi = 6.264
#lumi = 4.3
# lumi = 5
#lumi = 27.915
lumi = 36.7  

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotVBS'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


