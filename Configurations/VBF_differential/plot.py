# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#


groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY', 'Dyemb']
              }
              
groupPlot['top']  = {  
    'nameHR' : 'tW and t#bar{t}',
    'isSignal' : 0,
    'color': 400,   # kYellow
    'samples'  : ['top']
}

groupPlot['WW']  = {  
    'nameHR' : 'WW',
    'isSignal' : 0,
    'color': 851, # kAzure -9 
    'samples'  : ['WW', 'ggWW']
}

groupPlot['WWewk']  = {
    'nameHR' : 'WWewk',
    'isSignal' : 0,
    'color': 855, # kAzure -9 
    'samples'  : ['WWewk']
}

groupPlot['Fake']  = {
    'nameHR' : 'nonprompt',
    'isSignal' : 0,
    'color': 921,    # kGray + 1
    'samples'  : ['Fake_me', 'Fake_em']
}

groupPlot['ggH']  = {
    'nameHR' : 'ggH',
    'isSignal' : 2,
    'color': 409,  
    'samples' : ['ggH_hww']
}


groupPlot['VBF_0']  = {
    'nameHR' : 'VBF -#pi < #Delta#phi_{jj,GEN}< -#pi/2',
    'isSignal' : 2,
    'color': 632,
    'samples'  : ['qqH_hww_GenDeltaPhi_0']
}

groupPlot['VBF_1']  = {
    'nameHR' : 'VBF -#pi/2 < #Delta#phi_{jj,GEN} < 0',
    'isSignal' : 2,
    'color': 632+3,
    'samples'  : ['qqH_hww_GenDeltaPhi_1']
}

groupPlot['VBF_2']  = {
    'nameHR' : 'VBF 0 < #Delta#phi_{jj,GEN} < #pi/2',
    'isSignal' : 2,
    'color': 632-6,
    'samples'  : ['qqH_hww_GenDeltaPhi_2']
}

groupPlot['VBF_3']  = {
    'nameHR' : 'VBF #pi/2 <#Delta#phi_{jj,GEN} < #pi',
    'isSignal' : 2,
    'color': 632-10,
    'samples'  : ['qqH_hww_GenDeltaPhi_3']
}



#plot = {}

# keys here must match keys in samples.py    
#

plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }

if useEmbeddedDY:
  plot['Dyemb']  = {   
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0,  
                  'scale'    : 1.0,
              }



plot['Fake_me']  = {  
    'color': 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

plot['Fake_em']  = {  
    'color': 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}
          
plot['top'] = {   
    'nameHR' : 'tW and t#bar{t}',
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['WW']  = {
    'color': 851, # kAzure -9 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.0
}

plot['ggWW']  = {
    'color': 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.0
}

plot['WWewk']  = {
    'color': 851, # kAzure -9 
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['qqH_hww_GenDeltaPhi_0'] = {
    'nameHR' : 'qqH -#pi <#Delta#phi_{jj,GEN} < -#pi/2',
    'color': 632, # kRed
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1
}

plot['qqH_hww_GenDeltaPhi_1'] = {
    'nameHR' : 'qqH -#pi/2 < #Delta#phi_{jj,GEN} < 0',
    'color': 632+3, # kRed+3 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1
}

plot['qqH_hww_GenDeltaPhi_2'] = {
    'nameHR' : 'qqH 0 < #Delta#phi_{jj,GEN} < #pi/2',
    'color': 632-6, # kRed-6 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1
}

plot['qqH_hww_GenDeltaPhi_3'] = {
    'nameHR' : 'qqH #pi/2 <#Delta#phi_{jj,GEN}< #pi',
    'color': 632-10, # kRed-10 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1
}

plot['ggH_hww'] = {
    'nameHR' : 'ggH',
    'color': 632, # kRed 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1
}

# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 1
              }


# additional options

legend['lumi'] = 'L = 58.74/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




