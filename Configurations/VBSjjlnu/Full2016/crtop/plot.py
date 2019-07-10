# plot configuration

#legend['lumi'] = 'L = 6.3/fb'
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

colors = [
    415, # VBS
    797, # TT
    629, # Wjets
    861, # TTWJets
    632, # VV_VVV
    617, # DYJets
    860, # ST
    620, # QCD_Pt
    500  # QCD_WW
]

groupPlot['VBS']  = {  
    'nameHR'   : 'VBS',
    'isSignal' : 1,
    'color'    : colors[0],
    'samples'  : ['VBS']
}

groupPlot['TT']  = {    
    'nameHR'   : 'TT',
    'isSignal' : 0,
    'color'    : colors[1],
    'samples' : ['TT']
}

groupPlot['Wjets']  = {
    'nameHR'   : 'W+Jets',
    'isSignal' : 0,
    'color'    : colors[2],
    'samples'  : ['Wjets']
}

groupPlot['TTWJets']  = {  
    'nameHR'   : 'TTWJets',
    'isSignal' : 0,
    'color'    : colors[3],
    'samples'  : ['TTWJets']
}

groupPlot['VV_VVV']  = {
    'nameHR'   : 'VV_VVV',
    'isSignal' : 0,
    'color'    : colors[4],
    'samples'  : ['VV_VVV']
}

groupPlot['DYJets']  = {
    'nameHR'   : 'DYJets',
    'isSignal' : 0,
    'color'    : colors[5],
    'samples'  : ['DYJets']
}

groupPlot['ST'] = {
    'nameHR'   : 'ST',
    'isSignal' : 0,
    'color'    : colors[6],
    'samples'  : ['ST']
}

groupPlot['QCD_Pt'] = {
    'nameHR'   : 'QCD_Pt',
    'isSignal' : 0,
    'color'    : colors[7],
    'samples'  : ['QCD_Pt']
}

groupPlot['QCD_WW'] = {
    'nameHR'   : 'QCD_WW',
    'isSignal' : 0,
    'color'    : colors[8],
    'samples'  : ['QCD_WW']
}

#plot = {}

# keys here must match keys in samples.py    
#                    
# cr top
plot['VBS']  = {  
    'color'    : colors[0],
    'isSignal' : 1,
    'isData'   : 0, 
    'scale'    : 1.
}

plot['TT']  = {
    'color'    : colors[1],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['Wjets']  = {
    'color'    : colors[2],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['TTWJets']  = {  
    'color'    : colors[3],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['VV_VVV']  = {
    'color'    : colors[4],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['DYJets']  = {
    'color'    : colors[5],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['ST'] = {
    'color'    : colors[6],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['QCD_Pt'] = {
    'color'    : colors[7],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['QCD_WW']=  {
    'color'    : colors[8],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.,
}