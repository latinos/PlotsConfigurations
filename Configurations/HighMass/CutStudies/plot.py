# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

scale_ggH_DF_200 = 5.0
scale_ggH_DF_800 = 100.0
scale_ggH_DF_2000 = 4000.0
scale_ggH_SF_200 = 10.0
scale_ggH_SF_800 = 100.0
scale_ggH_SF_2000 = 4000.0
scale_VBF_DF_200 = 10.0
scale_VBF_DF_800 = 50.0
scale_VBF_DF_2000 = 200.0
scale_VBF_SF_200 = 100.0
scale_VBF_SF_800 = 400.0
scale_VBF_SF_2000 = 1000.0

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
                  'samples'  : ['WW', 'ggWW', 'WWewk','qqWWqq', 'WW2J']
              }

groupPlot['Fake']  = {  
                  'nameHR' : 'Nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake', 'Fake_em', 'Fake_me', 'Fake_ee', 'Fake_mm']
              }


groupPlot['DY']  = {  
                  'nameHR' : 'DY',
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
                  'nameHR' : 'VZ',
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['VZ', 'WZ', 'ZZ']
              }

groupPlot['Vg']  = {  
                  'nameHR' : 'V#gamma',
                  'isSignal' : 0,
                  'color'    : 810,   # kOrange + 10
                  'samples'  : ['Vg', 'Wg']
              }

groupPlot['VgS']  = {
                  'nameHR' : 'V#gamma*',
                  'isSignal' : 0,
                  'color'    : 409,   # kGreen - 9
                  'samples'  : ['VgS','WZgS']
              }



groupPlot['SMHiggs']  = {  
                  'nameHR' : 'SMHiggs',
                  'isSignal' : 0,
                  'color': 632, # kRed 
		  'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WpH_hww', 'WmH_hww', 'qqH_hww', 'ggH_hww','bbH_hww','ttH_hww','ZH_htt', 'ggZH_htt', 'WpH_htt', 'WmH_htt', 'qqH_htt', 'ggH_htt','bbH_htt','ttH_htt' ]
              }

if EMorEEorMM == 'em':
  groupPlot['ALL_GGH200']  = {  
                  'nameHR' : 'GGH 200(x'+str(scale_ggH_DF_200)+')',
                  'isSignal' : 2,
                  'color': 2, # kRed 
		  'samples'  : ['GGH_200'+model_name]
              }
  groupPlot['ALL_QQH200']  = {  
                  'nameHR' : 'VBF 200(x'+str(scale_VBF_DF_200)+')',
                  'isSignal' : 2,
                  'color': 46, # kRed 
		  'samples'  : ['QQH_200'+model_name]
              }
  groupPlot['ALL_GGH800']  = {  
                  'nameHR' : 'GGH 800(x'+str(scale_ggH_DF_800)+')',
                  'isSignal' : 2,
                  'color': 3, # kRed 
		  'samples'  : ['GGH_800'+model_name]
              }
  groupPlot['ALL_QQH800']  = {  
                  'nameHR' : 'VBF 800(x'+str(scale_VBF_DF_800)+')',
                  'isSignal' : 2,
                  'color': 8, # kRed 
		  'samples'  : ['QQH_800'+model_name]
              }
  groupPlot['ALL_GGH2000']  = {  
                  'nameHR' : 'GGH 2000(x'+str(scale_ggH_DF_2000)+')',
                  'isSignal' : 2,
                  'color': 4, # kRed 
		  'samples'  : ['GGH_2000'+model_name]
              }
  groupPlot['ALL_QQH2000']  = {  
                  'nameHR' : 'VBF 2000(x'+str(scale_VBF_DF_2000)+')',
                  'isSignal' : 2,
                  'color': 9, # kRed 
		  'samples'  : ['QQH_2000'+model_name]
              }
else:
  groupPlot['ALL_GGH200']  = {  
                  'nameHR' : 'GGH 200(x'+str(scale_ggH_SF_200)+')',
                  'isSignal' : 2,
                  'color': 2, # kRed 
		  'samples'  : ['GGH_200'+model_name]
              }
  groupPlot['ALL_QQH200']  = {  
                  'nameHR' : 'VBF 200(x'+str(scale_VBF_SF_200)+')',
                  'isSignal' : 2,
                  'color': 46, # kRed 
		  'samples'  : ['QQH_200'+model_name]
              }
  groupPlot['ALL_GGH800']  = {  
                  'nameHR' : 'GGH 800(x'+str(scale_ggH_SF_800)+')',
                  'isSignal' : 2,
                  'color': 3, # kRed 
		  'samples'  : ['GGH_800'+model_name]
              }
  groupPlot['ALL_QQH800']  = {  
                  'nameHR' : 'VBF 800(x'+str(scale_VBF_SF_800)+')',
                  'isSignal' : 2,
                  'color': 8, # kRed 
		  'samples'  : ['QQH_800'+model_name]
              }
  groupPlot['ALL_GGH2000']  = {  
                  'nameHR' : 'GGH 2000(x'+str(scale_ggH_SF_2000)+')',
                  'isSignal' : 2,
                  'color': 4, # kRed 
		  'samples'  : ['GGH_2000'+model_name]
              }
  groupPlot['ALL_QQH2000']  = {  
                  'nameHR' : 'VBF 2000(x'+str(scale_VBF_SF_2000)+')',
                  'isSignal' : 2,
                  'color': 9, # kRed 
		  'samples'  : ['QQH_2000'+model_name]
              }
'''
groupPlot['HM_200V']  = {  
                  'nameHR' : '200GeV signalV',
                  'isSignal' : 2,
                  'color': 46, # kRed 
		  'samples'  : ['QQH_200']
              }

groupPlot['HM_1000V']  = {  
                  'nameHR' : '1000GeV signalV',
                  'isSignal' : 2,
                  'color': 46, # kRed 
		  'samples'  : ['QQH_1000']
              }
groupPlot['HM_3000V']  = {  
                  'nameHR' : '3000GeV signalV',
                  'isSignal' : 2,
                  'color': 46, # kRed 
		  'samples'  : ['QQH_3000']
              }

groupPlot['HM_300']  = {  
                  'nameHR' : '300GeV Signal (x10)',
                  'isSignal' : 2,
                  'color': 46, # kRed 
		  'samples'  : ['GGH_300', 'QQH_300']
              }

groupPlot['HM_2000']  = {  
                  'nameHR' : '2000GeV Signal (x1000)',
                  'isSignal' : 2,
                  'color': 32, # kRed 
		  'samples'  : ['GGH_2000', 'QQH_2000']
              }
'''

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


plot['Fake']  = {  
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


plot['Fake_me']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
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

plot['qqWWqq']  = {
                  'color': 849, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['WW2J']  = {
                  'color': 848, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['WWewk']  = {
                  'color': 847, # kAzure -10
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

plot['VgS'] = { 
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

plot['WZgS']  = {
                  'color': 617, # kViolet + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WZgS_L']  = {
                  'color': 617, # kViolet + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WZgS_H']  = {
                  'color': 617, # kViolet + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


# Htautau

plot['H_htt'] = {
                  'nameHR' : 'Htt',
                  'color': 632+4, # kRed+4 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ZH_htt'] = {
                  'nameHR' : 'ZHtt',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['bbH_htt'] = {
                  'nameHR' : 'bbHtt',
                  'color': 632-1, # kRed-1 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ttH_htt'] = {
                  'nameHR' : 'bbHtt',
                  'color': 632-2, # kRed-1 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }


plot['ggZH_htt'] = {
                  'nameHR' : 'ggZHtt',
                  'color': 632+4, # kRed+4
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WpH_htt'] = {
                  'nameHR' : 'WpHtt',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }
plot['WmH_htt'] = {
                  'nameHR' : 'WmHtt',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['qqH_htt'] = {
                  'nameHR' : 'qqHtt',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggH_htt'] = {
                  'nameHR' : 'ggHtt',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

# HWW 

plot['H_hww'] = {
                  'nameHR' : 'Hww',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

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

plot['WpH_hww'] = {
                  'nameHR' : 'WpH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }
plot['WmH_hww'] = {
                  'nameHR' : 'WmH',
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

plot['bbH_hww'] = {
                  'nameHR' : 'bbH',
                  'color': 632+5, # kRed+5 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ttH_hww'] = {
                  'nameHR' : 'ttH',
                  'color': 632+6, # kRed+6
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

# HIGH MASS HWW 

massesAndModelsFile = "massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
  handle = open(massesAndModelsFile,'r')
  exec(handle)
  handle.close()
else:
  print "!!! ERROR file ", massesAndModelsFile, " does not exist."

massggh = ['200','800','2000']
massvbf = ['200','800','2000']

for m in massggh:
  if EMorEEorMM == 'em':
    mult = scale_ggH_DF_200
    if int(m)>=500: mult = scale_ggH_DF_800
    if int(m)>=1000: mult = scale_ggH_DF_2000
  else:
    mult = scale_ggH_SF_200
    if int(m)>=500: mult = scale_ggH_SF_800
    if int(m)>=1000: mult = scale_ggH_SF_2000
  plot['GGH_'+m+model_name] = {
                  'nameHR' : 'GGH'+m,
                  'color': 632+5, # kRed+5 
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : mult    #
                  }
  plot['GGHSBI_'+m+model_name] = {
                  'nameHR' : 'GGHSBI'+m,
                  'color': 632+5, # kRed+5 
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : mult    #
                  }

for m in massvbf:
  if EMorEEorMM == 'em':
    mult = scale_VBF_DF_200
    if int(m)>=500: mult = scale_VBF_DF_800
    if int(m)>=1000: mult = scale_VBF_DF_2000
  else:
    mult = scale_VBF_SF_200
    if int(m)>=500: mult = scale_VBF_SF_800
    if int(m)>=1000: mult = scale_VBF_SF_2000
  plot['QQH_'+m+model_name] = {
                  'nameHR' : 'QQH'+m,
                  'color': 632+5, # kRed+5 
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : mult    #
                  }
  plot['QQHSBI_'+m+model_name] = {
                  'nameHR' : 'QQHSBI'+m,
                  'color': 632+5, # kRed+5 
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : mult    #
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

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
#legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 0.8/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 2.6/fb'
#legend['lumi'] = 'L = 4.3/fb'
#legend['lumi'] = 'L = 6.3/fb'
#legend['lumi'] = 'L = 12.9/fb'
legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




