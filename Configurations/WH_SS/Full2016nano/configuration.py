# example of configuration file
treeName= 'Events'


#tag = 'WH2016nano_forPlotsv2'
#tag = '_WH2016nano_try1'
#tag = '_WH2016nano_try2' #mtw2 < 80
#tag = '_WH2016nano_try3' #DY LO
#tag = '_WH2016nano_try4' #DY LO with Susan tech
#tag = '_WH2016nano_try6' #include deta(ll)
#tag = '_WH2016nano_try7' #include ll categories
#tag = '_WH2016nano_HigPAG' #include ll categories
#tag = '_WH2016nano_HigPAG_v1' #include ll categories
#tag = '_WH2016nano_HigPAG_v2' #include ll categories
#tag = '_WH2016nano_HigPAG_v3' #include ll categories
#tag = 'WH2016nano_CR' #include ll categories
#tag ='fromSarahv1'

#tag = 'postfreeze_try1' #fixed the DY to read eos files
#tag = 'postfreeze_try2' #running only DY
#tag = 'postfreeze_try3' #running only DY
tag = 'postfreeze_try4' #remove DY and add Z veto in mm, cut based tight SS id for electron
#tag = 'postfreeze_try5' #remove DY and add Z veto in mm + change electron id to MVASS
#tag = 'postfreeze_try6' #remove DY and add Z veto in mm + change electron id to MVASS
#tag = 'postfreeze_try7' #for preapproval

# used by mkShape to define output directory for root files
outputDir = 'rootFile'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 
#cutsFile = 'cuts_CR.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'+tag


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


