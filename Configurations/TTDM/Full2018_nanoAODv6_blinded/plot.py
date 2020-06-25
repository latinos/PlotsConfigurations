# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#


groupPlot['ttbar']  = {  
                  'nameHR' : 't#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['ttbar']
              }

groupPlot['singleTop']  = {  
                  'nameHR' : 'Single top',
                  'isSignal' : 0,
                  'color': 401,   # kYellow
                  'samples'  : ['singleTop']
              }

groupPlot['TTToSemiLeptonic']  = {  
                  'nameHR' : 'TTToSemiLeptonic',
                  'isSignal' : 0,
                  'color': 402,   # kYellow
                  'samples'  : ['TTToSemiLeptonic']
              }

groupPlot['ttV']  = {  
                  'nameHR' : 'ttV',
                  'isSignal' : 0,
                  'color': 403,   # kYellow
                  'samples'  : ['ttV']
              }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW']
              }

groupPlot['Fake']  = {
                  'nameHR' : 'nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['WJets']
}

groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY']
              }

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }

groupPlot['VZ']  = {  
                  'nameHR' : "VZ",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['VZ', 'WZ', 'ZZ']
              }

groupPlot['Vg']  = {  
                  'nameHR' : "V#gamma",
                  'isSignal' : 0,
                  'color'    : 810,   # kOrange + 10
                  'samples'  : ['Vg', 'Wg']
              }

groupPlot['VgS']  = {
                  'nameHR' : "V#gamma*",
                  'isSignal' : 0,
                  'color'    : 409,   # kGreen - 9
                  'samples'  : ['VgS_H','VgS_L']
              }

groupPlot['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_100']  = {
    'nameHR' : "PS100GeV (x10)",
    'isSignal' : 2,
    'color': 632,    # kRed                                                                                                                                                            
    'samples'  : ['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_100']
}

groupPlot['TTbarDMJets_Dileptondoscalar_LO_Mchi_1_Mphi_100']  = {
    'nameHR' : "S100GeV (x10)",
    'isSignal' : 2,
    'color': 634,    # kRed                                                                                                                                                            
    'samples'  : ['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_100']
}

groupPlot['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi100']  = {
    'nameHR' : "tW S100GeV (x100)",
    'isSignal' : 2,
    'color': 636,    # kRed                                                                                                                                                            
    'samples'  : ['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi100']
}

#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  #'cuts'  : {
                       #'hww2l2v_13TeV_of0j'      : 0.95 ,
                       #'hww2l2v_13TeV_top_of0j'  : 0.95 , 
                       #'hww2l2v_13TeV_dytt_of0j' : 0.95 ,
                       #'hww2l2v_13TeV_em_0j'     : 0.95 , 
                       #'hww2l2v_13TeV_me_0j'     : 0.95 , 
                       ##
                       #'hww2l2v_13TeV_of1j'      : 1.08 ,
                       #'hww2l2v_13TeV_top_of1j'  : 1.08 , 
                       #'hww2l2v_13TeV_dytt_of1j' : 1.08 ,
                       #'hww2l2v_13TeV_em_1j'     : 1.08 , 
                       #'hww2l2v_13TeV_me_1j'     : 1.08 , 
                        #},

              }

plot['WJets']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['ttbar'] = {   
                  'nameHR' : 't#bar{t}',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  #'cuts'  : {
                       #'hww2l2v_13TeV_of0j'      : 0.94 ,
                       #'hww2l2v_13TeV_top_of0j'  : 0.94 , 
                       #'hww2l2v_13TeV_dytt_of0j' : 0.94 ,
                       #'hww2l2v_13TeV_em_0j'     : 0.94 , 
                       #'hww2l2v_13TeV_me_0j'     : 0.94 , 
                       ##
                       #'hww2l2v_13TeV_of1j'      : 0.86 ,
                       #'hww2l2v_13TeV_top_of1j'  : 0.86 , 
                       #'hww2l2v_13TeV_dytt_of1j' : 0.86 ,
                       #'hww2l2v_13TeV_em_1j'     : 0.86 , 
                       #'hww2l2v_13TeV_me_1j'     : 0.86 , 
                        #},
                  }

plot['singleTop'] = {   
                  'nameHR' : 'Single top',
                  'color': 401,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
}

plot['TTToSemiLeptonic'] = {   
                  'nameHR' : 'TTToSemiLeptonic',
                  'color': 402,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
}

plot['ttV'] = {   
                  'nameHR' : 'ttV',
                  'color': 403,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
}

plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['Vg']  = { 
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VgS_H'] = { 
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VgS_L'] = {
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_100']  = {
    'color': 632, # kRed                                                                                                                                                                                  
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 10.0
}

plot['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_100']  = {
    'color': 635, # kRed                                                                                                                                                                                  
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 10.0
}

plot['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi100']  = {
    'color': 638, # kRed                                                                                                                                                                                  
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 100.0
}

# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }

# additional options

legend['lumi'] = 'L = 59.7/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'




