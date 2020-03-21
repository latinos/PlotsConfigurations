# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#


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
                  'samples'  : ['WW', 'ggWW', 'WWewk']
              }

groupPlot['Fake']  = {
                  'nameHR' : 'nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake_me', 'Fake_em']
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



#groupPlot['Higgs']  = {  
#                  'nameHR' : 'Higgs',
#                  'isSignal' : 1,
#                  'color': 632, # kRed 
#                   'samples'  : ['ZH_hww', 'ggZH_hww', 'WH_hww', 'bbH_hww','ttH_hww', 'qqH_htt', 'ggH_htt', 'ZH_htt', 'WH_htt', 'H_htt',  'ggH_hww_FWDH', 'ggH_hww_0J_PTH_0_10', 'ggH_hww_0J_PTH_GT10', 'ggH_hww_1J_PTH_0_60', 'ggH_hww_1J_PTH_60_120', 'ggH_hww_1J_PTH_120_200', 'ggH_hww_GE2J_MJJ_0_350_PTH_0_60', 'ggH_hww_GE2J_MJJ_0_350_PTH_60_120', 'ggH_hww_GE2J_MJJ_0_350_PTH_120_200', 'ggH_hww_GE2J_MJJ_350_700_PTHJJ_0_25', 'ggH_hww_GE2J_MJJ_350_700_PTHJJ_GT25', 'ggH_hww_GE2J_MJJ_GT700_PTHJJ_0_25', 'ggH_hww_GE2J_MJJ_GT700_PTHJJ_GT25',      'ggH_hww_PTH_200_300', 'ggH_hww_PTH_300_450', 'ggH_hww_PTH_450_650', 'ggH_hww_PTH_GT650', 'qqH_hww_FWDH', 'qqH_hww_0J', 'qqH_hww_1J' ,       'qqH_hww_MJJ_0_60',       'qqH_hww_MJJ_60_120' ,       'qqH_hww_MJJ_120_350',       'qqH_hww_MJJ_GT350_PTH_GT200' ,       'qqH_hww_MJJ_350_700_PTHJJ_0_25' ,       'qqH_hww_MJJ_350_700_PTHJJ_GT25' ,       'qqH_hww_MJJ_GT700_PTHJJ_0_25' ,       'qqH_hww_MJJ_GT700_PTHJJ_GT25' ,       'ZH_had_hww_FWDH' ,       'ZH_had_hww_0J' ,       'ZH_had_hww_1J' ,       'ZH_had_hww_MJJ_0_60' ,       'ZH_had_hww_MJJ_60_120' ,       'ZH_had_hww_MJJ_120_350' ,       'ZH_had_hww_MJJ_GT350_PTH_GT200' ,       'ZH_had_hww_MJJ_350_700_PTHJJ_0_25' ,       'ZH_had_hww_MJJ_350_700_PTHJJ_GT25' ,       'ZH_had_hww_MJJ_GT700_PTHJJ_0_25' ,       'ZH_had_hww_MJJ_GT700_PTHJJ_GT25' ,       'WH_had_hww_FWDH' ,       'WH_had_hww_0J' ,       'WH_had_hww_1J' ,       'WH_had_hww_MJJ_0_60' ,       'WH_had_hww_MJJ_60_120' ,       'WH_had_hww_MJJ_120_350' ,       'WH_had_hww_MJJ_GT350_PTH_GT200' ,       'WH_had_hww_MJJ_350_700_PTHJJ_0_25' ,       'WH_had_hww_MJJ_350_700_PTHJJ_GT25' ,       'WH_had_hww_MJJ_GT700_PTHJJ_0_25' ,       'WH_had_hww_MJJ_GT700_PTHJJ_GT25', 'VHlep_hww']
#              }

groupPlot['ggH_comb']  = {
                  'nameHR' : 'ggH',
                  'isSignal' : 2,
                  'color': 632, # kRed 
                  'samples'  : ['ggH_htt', 'ggH_hww_FWDH', 'ggH_hww_0J_PTH_0_10', 'ggH_hww_0J_PTH_GT10', 'ggH_hww_1J_PTH_0_60', 'ggH_hww_1J_PTH_60_120', 'ggH_hww_1J_PTH_120_200', 'ggH_hww_GE2J_MJJ_0_350_PTH_0_60', 'ggH_hww_GE2J_MJJ_0_350_PTH_60_120', 'ggH_hww_GE2J_MJJ_0_350_PTH_120_200', 'ggH_hww_GE2J_MJJ_350_700_PTHJJ_0_25', 'ggH_hww_GE2J_MJJ_350_700_PTHJJ_GT25', 'ggH_hww_GE2J_MJJ_GT700_PTHJJ_0_25', 'ggH_hww_GE2J_MJJ_GT700_PTHJJ_GT25',      'ggH_hww_PTH_200_300', 'ggH_hww_PTH_300_450', 'ggH_hww_PTH_450_650', 'ggH_hww_PTH_GT650']
              }

groupPlot['qqH_comb']  = {
                  'nameHR' : 'VBF',
                  'isSignal' : 2,
                  'color': 417, # kRed 
                  'samples'  : ['qqH_htt', 'qqH_hww_FWDH', 'qqH_hww_0J', 'qqH_hww_1J' ,       'qqH_hww_MJJ_0_60',       'qqH_hww_MJJ_60_120' ,       'qqH_hww_MJJ_120_350',       'qqH_hww_MJJ_GT350_PTH_GT200' ,       'qqH_hww_MJJ_350_700_PTHJJ_0_25' ,       'qqH_hww_MJJ_350_700_PTHJJ_GT25' ,       'qqH_hww_MJJ_GT700_PTHJJ_0_25' ,       'qqH_hww_MJJ_GT700_PTHJJ_GT25' ]
              }

groupPlot['Higgs_oth']  = {
                  'nameHR' : 'Higgs other',
                  'isSignal' : 2,
                  'color': 853, # kRed 
                   'samples'  : ['ZH_hww', 'ggZH_hww', 'WH_hww', 'bbH_hww','ttH_hww', 'ZH_htt', 'WH_htt', 'H_htt', 'ZH_had_hww_FWDH' ,       'ZH_had_hww_0J' ,       'ZH_had_hww_1J' ,       'ZH_had_hww_MJJ_0_60' ,       'ZH_had_hww_MJJ_60_120' ,       'ZH_had_hww_MJJ_120_350' ,       'ZH_had_hww_MJJ_GT350_PTH_GT200' ,       'ZH_had_hww_MJJ_350_700_PTHJJ_0_25' ,       'ZH_had_hww_MJJ_350_700_PTHJJ_GT25' ,       'ZH_had_hww_MJJ_GT700_PTHJJ_0_25' ,       'ZH_had_hww_MJJ_GT700_PTHJJ_GT25' ,       'WH_had_hww_FWDH' ,       'WH_had_hww_0J' ,       'WH_had_hww_1J' ,       'WH_had_hww_MJJ_0_60' ,       'WH_had_hww_MJJ_60_120' ,       'WH_had_hww_MJJ_120_350' ,       'WH_had_hww_MJJ_GT350_PTH_GT200' ,       'WH_had_hww_MJJ_350_700_PTHJJ_0_25' ,       'WH_had_hww_MJJ_350_700_PTHJJ_GT25' ,       'WH_had_hww_MJJ_GT700_PTHJJ_0_25' ,       'WH_had_hww_MJJ_GT700_PTHJJ_GT25', 'VHlep_hww']
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

# Htautau

plot['H_htt'] = {
                  'nameHR' : 'H#tau#tau',
                  'color': 632, # kRed 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

# HWW 
plot['VHlep_hww'] = {
                  'nameHR' : 'VHlep',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


for cat,num in HTXSStage1_1Categories.iteritems():
  if 'GG2H_' in cat and 'GT200' not in cat:
    plot['ggH_hww_'+cat.replace('GG2H_','')] = {
                  'nameHR' : 'ggH_hww_'+cat.replace('GG2H_',''),
                  'color': 632, # kRed
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }
  elif 'QQ2HQQ_' in cat:
    if '0J'  not in cat or '1J' not in cat:
      plot['qqH_hww_'+cat.replace('QQ2HQQ_','')] = {
                    'nameHR' : 'qqH_hww_'+cat.replace('QQ2HQQ_',''),
                    'color': 632, # kRed
                    'isSignal' : 1,
                    'isData'   : 0,
                    'scale'    : 1    #
                    }
    elif 'MJJ_0_60' in cat or 'MJJ_60_120' in cat or 'MJJ_120_350' in cat:
      plot['ZH_had_hww_'+cat.replace('QQ2HQQ_','')] = {
                    'nameHR' : 'ZH_had_hww_'+cat.replace('QQ2HQQ_',''),
                    'color': 632, # kRed
                    'isSignal' : 1,
                    'isData'   : 0,
                    'scale'    : 1    #
                    }
      plot['WH_had_hww_'+cat.replace('QQ2HQQ_','')] = {
                    'nameHR' : 'WH_had_hww_'+cat.replace('QQ2HQQ_',''),
                    'color': 632, # kRed
                    'isSignal' : 1,
                    'isData'   : 0,
                    'scale'    : 1    #
                    }


plot['ggH_hww_PTH_200_300']= {
                  'nameHR' : 'ggH_hww_PTH_200_300',
                  'color': 632, # kRed
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ggH_hww_PTH_300_450']= {
                  'nameHR' : 'ggH_hww_PTH_300_450',
                  'color': 632, # kRed
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ggH_hww_PTH_450_650']= {
                  'nameHR' : 'ggH_hww_PTH_450_650',
                  'color': 632, # kRed
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ggH_hww_PTH_GT650']= {
                  'nameHR' : 'ggH_hww_PTH_650',
                  'color': 632, # kRed
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
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

legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




