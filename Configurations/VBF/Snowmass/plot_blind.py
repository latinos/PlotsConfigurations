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
    'samples'  : ['WW', 'ggWW','WWewk']
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
    'samples'  : ['DY', 'Dyemb']
}

groupPlot['VV_VVV']  = {  
    'nameHR' : 'VV/VVV',
    'isSignal' : 0,
    'color': 857, # kAzure -3  
    'samples'  : ['VZ', 'WZ', 'ZZ', 'VVV', 'Vg', 'Wg', 'VgS_H','VgS_L']
}

# groupPlot['VZ']  = {  
#     'nameHR' : "VZ",
#     'isSignal' : 0,
#     'color'    : 617,   # kViolet + 1  
#     'samples'  : ['VZ', 'WZ', 'ZZ']
# }

# groupPlot['Vg']  = {  
#     'nameHR' : "V#gamma",
#     'isSignal' : 0,
#     'color'    : 810,   # kOrange + 10
#     'samples'  : ['Vg', 'Wg']
# }

# groupPlot['VgS']  = {
#     'nameHR' : "V#gamma*",
#     'isSignal' : 0,
#     'color'    : 409,   # kGreen - 9
#     'samples'  : ['VgS_H','VgS_L']
# }

groupPlot['Higgs']  = {
    'nameHR' : 'ggF',
    'isSignal' : 2,
    'color': 409, # kRed 
    'samples' : ['ZH_hww', 'ggZH_hww', 'WH_hww', 'ggH_hww','bbH_hww','ttH_hww','ZH_htt', 'ggZH_htt', 'WH_htt', 'ggH_htt','bbH_htt','ttH_htt' ]
}

groupPlot['VBF']  = {
    'nameHR' : 'All SM VBF',
    'isSignal' : 2,
    'color': 632,
    'samples'  : ['qqH_hww', 'qqH_htt']
}

n_color = 800 # kOrange

# Differential VBF bins (dphijj)
for bin_num in range(0, n_bins):
    sample_name = "qqH_hww_{}".format(bin_num)
    groupPlot[sample_name]  = {
      'nameHR'   : sample_name,
      'isSignal' : 2,
      'color'    : n_color,
      'samples'  : [sample_name]
    }
    n_color = n_color+1

# Non-fiducial VBF
groupPlot['qqH_hww_nonFid'] = {
    'nameHR' : 'qqH_hww_nonFid',
    'isSignal' : 2,
    'color'    : n_color,
    'samples'  : ['qqH_hww_nonFid']
}

# # VBF CP-violation samples
# CP_V_samples = ['VBF_H0PM_ToWWTo2L2Nu',       # Pure SM sample H0PM
#                 'VBF_H0PH_ToWWTo2L2Nu',       # Pure AC sample H0PH - a2 coupling
#                 'VBF_H0Mf05_ToWWTo2L2Nu',     # Mixed SM/AC 
#                 'VBF_H0L1f05_ToWWTo2L2Nu',    # Mixed SM/AC 
#                 'VBF_H0L1Zgf05_ToWWTo2L2Nu']  # Mixed SM/AC 

# for CP_V_sample in CP_V_samples:
#     CP_V_sample_short = CP_V_sample.replace('_ToWWTo2L2Nu','')
#     groupPlot[CP_V_sample] = {
#         'nameHR'   : CP_V_sample_short,
#         'isSignal' : 2,
#         'color'    : n_color,
#         'samples'  : [CP_V_sample]
#     }
#     n_color = n_color+1


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

plot['ZH_htt'] = {
    'nameHR' : 'ZHtt',
    'color': 632+3, # kRed+3 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

#plot['bbH_htt'] = {
#                  'nameHR' : 'bbHtt',
#                  'color': 632-1, # kRed-1 
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }
#
#plot['ttH_htt'] = {
#                  'nameHR' : 'bbHtt',
#                  'color': 632-2, # kRed-1 
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }
#
#
#plot['ggZH_htt'] = {
#                  'nameHR' : 'ggZHtt',
#                  'color': 632+4, # kRed+4
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }
#
plot['WH_htt'] = {
    'nameHR' : 'WHtt',
    'color': 632+2, # kRed+2 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

plot['qqH_htt'] = {
    'nameHR' : 'qqHtt',
    'color': 632+1, # kRed+1 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

plot['ggH_htt'] = {
    'nameHR' : 'ggHtt',
    'color': 632, # kRed 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

# HWW 

#plot['H_hww'] = {
#                  'nameHR' : 'Hww',
#                  'color': 632, # kRed 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }

plot['ZH_hww'] = {
    'nameHR' : 'ZH',
    'color': 632+3, # kRed+3 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1
}

plot['ggZH_hww'] = {
    'nameHR' : 'ggZH',
    'color': 632+4, # kRed+4
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1
}

plot['WH_hww'] = {
    'nameHR' : 'WH',
    'color': 632+2, # kRed+2 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1
}

plot['qqH_hww'] = {
    'nameHR' : 'qqH',
    'color': 632+1, # kRed+1 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1
}

n_color = 632
for bin_num in range(0, n_bins):
    sample_name = "qqH_hww_{}".format(bin_num)
    plot[sample_name]  = {
      'nameHR'   : sample_name,
      'color'    : n_color,
      'isSignal' : 2,
      'isData'   : 0,
      'scale'    : 1
    }
    n_color = n_color+1

plot['qqH_hww_nonFid'] = {
    'nameHR' : 'qqH_hww_nonFid',
    'color': 632+1, # kRed+1 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 1
}

# VBF CP-violation samples
CP_V_samples = ['VBF_H0PM_ToWWTo2L2Nu', 'VBF_H0Mf05_ToWWTo2L2Nu', 'VBF_H0PH_ToWWTo2L2Nu', 'VBF_H0L1f05_ToWWTo2L2Nu', 'VBF_H0L1Zgf05_ToWWTo2L2Nu']

for CP_V_sample in CP_V_samples:
    scale_value = 1
    # # FIXME: by-eye correction as SM sample XS seems to be off by a factor 0.1 wrt VBF powheg sample
    # if CP_V_sample == 'VBF_H0PM_ToWWTo2L2Nu': 
    #     scale_value = 10
    plot[CP_V_sample] = {
        'nameHR'   : CP_V_sample,
        'color'    : 632,
        'isSignal' : 1,
        'isData'   : 0,    
        'scale'    : scale_value
    }

plot['ggH_hww'] = {
    'nameHR' : 'ggH',
    'color': 632, # kRed 
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

#plot['bbH_hww'] = {
#                  'nameHR' : 'bbH',
#                  'color': 632+5, # kRed+5 
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }

plot['ttH_hww'] = {
    'nameHR' : 'ttH',
    'color': 632+6, # kRed+6
    'isSignal' : 1,
    'isData'   : 0,
    'scale'    : 1
}


# Data
plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 1
              }

# additional options

legend['lumi'] = 'L = 59.7/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




