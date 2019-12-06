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
                  'samples'  : ['Fake_ee', 'Fake_mm']
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



groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs',
                  'isSignal' : 0,
                  'color': 632, # kRed 
		  #'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww','ttH_hww','ZH_htt', 'ggZH_htt', 'WH_htt', 'qqH_htt', 'ggH_htt','bbH_htt','ttH_htt' ]
		  'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww','ttH_hww', 'qqH_htt', 'ggH_htt' ]
              }


groupPlot['2HDMa_MH3_300_MH4_150']  = {
                  'nameHR' : '2HDMa_300_150',
                  'isSignal' : 1,
                  'color': 632, # kRed
                  'samples'  : ['2HDMa_MH3_300_MH4_150']
              }


groupPlot['2HDMa_MH3_500_MH4_150']  = {
                  'nameHR' : '2HDMa_500_150',
                  'isSignal' : 1,
                  'color': 633, # kRed
                  'samples'  : ['2HDMa_MH3_500_MH4_150']
              }


groupPlot['2HDMa_MH3_700_MH4_150']  = {
                  'nameHR' : '2HDMa_700_150',
                  'isSignal' : 1,
                  'color': 634, # kRed
                  'samples'  : ['2HDMa_MH3_700_MH4_150']
              }


groupPlot['2HDMa_MH3_900_MH4_150']  = {
                  'nameHR' : '2HDMa_900_150',
                  'isSignal' : 1,
                  'color': 635, # kRed
                  'samples'  : ['2HDMa_MH3_900_MH4_150']
              }


groupPlot['2HDMa_MH3_1200_MH4_150']  = {
                  'nameHR' : '2HDMa_1200_150',
                  'isSignal' : 1,
                  'color': 636, # kRed
                  'samples'  : ['2HDMa_MH3_1200_MH4_150']
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


plot['Fake_ee']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }


plot['Fake_mm']  = {  
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


plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
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

# Htautau

#plot['ZH_htt'] = {
#                  'nameHR' : 'ZHtt',
#                  'color': 632+3, # kRed+3 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }
#
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
#plot['WH_htt'] = {
#                  'nameHR' : 'WHtt',
#                  'color': 632+2, # kRed+2 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }
#
#
#plot['qqH_htt'] = {
#                  'nameHR' : 'qqHtt',
#                  'color': 632+1, # kRed+1 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }
#
#
#plot['ggH_htt'] = {
#                  'nameHR' : 'ggHtt',
#                  'color': 632, # kRed 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }
#
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
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ggZH_hww'] = {
                  'nameHR' : 'ggZH',
                  'color': 632+4, # kRed+4
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['qqH_hww'] = {
                  'nameHR' : 'qqH',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggH_hww'] = {
                  'nameHR' : 'ggH',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

#plot['bbH_hww'] = {
#                  'nameHR' : 'bbH',
#                  'color': 632+5, # kRed+5 
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }

#plot['ttH_hww'] = {
#                  'nameHR' : 'ttH',
#                  'color': 632+6, # kRed+6
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }
#

# data

mass_list = ['MH3_300_MH4_150', 'MH3_500_MH4_150','MH3_700_MH4_150','MH3_900_MH4_150','MH3_1200_MH4_150']

color_add = 0
for mass in mass_list:
    plot['2HDMa_'+mass] = {
                                     'color': 632 + color_add,
                                     'isSignal' : 1,
                                     'isData'   : 0,
                                     'scale'    : 1
                                     }
    color_add += 1


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




