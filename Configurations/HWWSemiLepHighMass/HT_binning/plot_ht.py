
# plot configuration

massesAndModelsFile = "massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
    handle = open(massesAndModelsFile,'r')
    exec(handle)
    handle.close()
else:
    print "!!! ERROR file ", massesAndModelsFile, " does not exist."



groupPlot['Wjets'] = {
    'nameHR' : "W+jets",
    'isSignal' : 0,
    'color': 820,      # kGray + 1
    'samples'  : ['Wjets'],
}

# Signal


#HTmasses = ['0', '70', '100', '200', '400', '600', '800', '1200', '2500'] #1000', '3000']#, '500', '600'] # '500','800', '2000', '3000']

#if(MX <= 70):
plot['Wjets']  = {
 'color': 820, # kAzure -4
 'isSignal' : 0,
 'isData'   : 0,
 'scale'    : 1.0
}

plot['Wjets_incl_LO']  = {
    'nameHR' : 'Wjets_incl_LO',
    'color': 1 ,
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 0,
}


# additional options

legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
