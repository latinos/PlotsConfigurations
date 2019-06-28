# example of configuration file

tag = 'PDFandScale'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_WW_PDFandScale'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'
#variablesFile = 'variables_scale.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
# lumi = 2.264
#lumi = 4.3
#lumi = 12.2950
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = '~/www/figuresLxplus/18Jul2016/PDFQCD/'
outputDirPlots = 'testPDFandScale/'
#outputDirPlots = 'testscale/'

# used by mkDatacards to define output directory for datacards
#outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'


