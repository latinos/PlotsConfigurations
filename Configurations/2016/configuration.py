# example of configuration file

# Samples :
# mkShapes.py --pycfg=configuration.py --batchSplit=Cuts,Samples --doBatch=True --iihe-wall-time=8:00:00
# mkShapes.py --pycfg=configuration.py --batchSplit=Cuts,Samples --doHadd=True
# mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_VBS.root
# python makePositive.py rootFile/plots_VBS.root
# mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_VBS.root
# ./fixDatacards.sh
# mkComb.py --outputDirDatacard=datacards --combineLocation=/storage_mnt/storage/user/jlauwers/VBS/Run2/Combine/CMSSW_7_4_7/src/ --combcfg=combs.py

# text2workspace.py datacard.txt  -o test.root
# combine -M ProfileLikelihood -t -1 --expectSignal 1 --significance test.root
# combine -M ProfileLikelihood --significance test.root

# impact plot
# combineTool.py -M Impacts -d test.root -m 125 --doInitialFit --allPars --robustFit 1
# combineTool.py -M Impacts -d test.root -m 125 --robustFit 1 --doFits --allPars
# combineTool.py -M Impacts -d test.root -m 125 --allPars -o impacts.json
# plotImpacts.py -i impacts.json -o impacts

# post-fit plot
# combine -M MaxLikelihoodFit --saveNormalizations --saveWithUncertainties test.root
# python mlfitNormsToText.py -u mlfit.root

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
lumi = 35.922

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotVBS'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


