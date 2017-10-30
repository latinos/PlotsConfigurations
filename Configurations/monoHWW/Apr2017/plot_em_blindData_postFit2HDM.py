# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['Fake']  = {  
                  'nameHR' : 'Fake',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
              }


groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bart',
                  'isSignal' : 0,
                  'color': 400, #  kYellow
                  'samples'  : ['top']
              }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW', 'ggWW']
              }

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }


groupPlot['VZ']  = {  
                  'nameHR' : "VZ/#gamma*/#gamma",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['VZ', 'Vg', 'Wg', 'VgS', 'WZ', 'ZZ','Zg']
              }


groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,  #  kGreen+2
                  #'samples'  : ['DY1', 'DY2']
                  'samples'  : ['DY']
              }


groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs',
                  'isSignal' : 0,
                  'color': 632, # kRed 
                  'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww']
              }


ZpMasses={"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses={"300","400","500","600","700","800"}
i=0

# for mZp in ZpMasses:
#     for mA0 in A0Masses :
#          if ((mZp == "600" and (mA0 == "300" or mA0 == "400")) or ((mZp == "800" and (mA0 == "300" or mA0 == "400" or mA0 == "500" or mA0 == "600"))) or (mZp != "600" and mZp != "800")) :
#              if mA0 == "300" :
#                  groupPlot[mZp + '_' + mA0]  = {  
#                      'nameHR' : 'mZ=' + mZp + ' GeV, mA0=' + mA0 + ' GeV x 100',
#                      'isSignal' : 2,
#                      'color': 800 + i, # kOrange + i
#                      'samples'  : ['monoH_' + mZp + '_' + mA0]
#                      }
#                  i = i + 1


groupPlot['monoH_600_300'] = {
    'nameHR' : '2HDM x 100',#'mZ=600 GeV, mA0=300 GeV',
    'isSignal' : 2,
    'color': 801,
    'samples'  : ['monoH_600_300']
    }

# groupPlot['monoH_ZB_10000_50'] = {
#     'nameHR' : 'mZ=10000 GeV, mChi=50 GeV x 100',
#     'isSignal' : 2,
#     'color': 900,
#     'samples'  : ['monoH_ZB_10000_50']
#     }
# groupPlot['monoH_ZB_10000_500'] = {
#     'nameHR' : 'mZ=10000 GeV, mChi=500 GeV x 100',
#     'isSignal' : 2,
#     'color': 901,
#     'samples'  : ['monoH_ZB_10000_500']
# }
# groupPlot['monoH_ZB_1000_1'] = {
#     'nameHR' : 'mZ=1000 GeV, mChi=1 GeV x 100',
#     'isSignal' : 2,
#     'color': 902,
#     'samples'  : ['monoH_ZB_1000_1']
# }
# groupPlot['monoH_ZB_1000_1000'] = {
#     'nameHR' : 'mZ=1000 GeV, mChi=1000 GeV x 100',
#     'isSignal' : 2,
#     'color': 903,
#     'samples'  : ['monoH_ZB_1000_1000']
# }
# groupPlot['monoH_ZB_1000_150'] = {
#     'nameHR' : 'mZ=1000 GeV, mChi=150 GeV x 100',
#     'isSignal' : 2,
#     'color': 904,
#     'samples'  : ['monoH_ZB_1000_150']
# }
# groupPlot['monoH_ZB_995_500'] = {
#     'nameHR' : 'mZ=995 GeV, mChi=500 GeV x 100',
#     'isSignal' : 2,
#     'color': 905,
#     'samples'  : ['monoH_ZB_995_500']
# }

# groupPlot['monoH_ZB_100_1_'] = {
#     'nameHR' : 'mZ=100 GeV, mChi=1 GeV x 100',
#     'isSignal' : 2,
#     'color': 1,
#     'samples'  : ['monoH_ZB_100_1_']
# }
# groupPlot['monoH_ZB_100_10'] = {
#     'nameHR' : 'mZ=100 GeV, mChi=10 GeV x 100',
#     'isSignal' : 2,
#     'color': 907,
#     'samples'  : ['monoH_ZB_100_10']
# }
# groupPlot['monoH_ZB_10_1'] = {
#     'nameHR' : 'mZ=10 GeV, mChi=1 GeV x 100',
#     'isSignal' : 2,
#     'color': 908,
#     'samples'  : ['monoH_ZB_10_1']
# }
# groupPlot['monoH_ZB_10_1000'] = {
#     'nameHR' : 'mZ=10 GeV, mChi=1000 GeV x 100',
#     'isSignal' : 2,
#     'color': 909,
#     'samples'  : ['monoH_ZB_10_1000']
# }
# groupPlot['monoH_ZB_10_50'] = {
#     'nameHR' : 'mZ=10 GeV, mChi=50 GeV x 100',
#     'isSignal' : 2,
#     'color': 910,
#     'samples'  : ['monoH_ZB_10_50']
# }
# groupPlot['monoH_ZB_10_500'] = {
#     'nameHR' : 'mZ=10 GeV, mChi=500 GeV x 100',
#     'isSignal' : 2,
#     'color': 911,
#     'samples'  : ['monoH_ZB_10_500']
# }
# groupPlot['monoH_ZB_15_10'] = {
#     'nameHR' : 'mZ=15 GeV, mChi=10 GeV x 100',
#     'isSignal' : 2,
#     'color': 912,
#     'samples'  : ['monoH_ZB_15_10']
# }
# groupPlot['monoH_ZB_200_150'] = {
#     'nameHR' : 'mZ=200 GeV, mChi=150 GeV x 100',
#     'isSignal' : 2,
#     'color': 913,
#     'samples'  : ['monoH_ZB_200_150']
# }
# groupPlot['monoH_ZB_300_1'] = {
#     'nameHR' : 'mZ=300 GeV, mChi=1 GeV x 100',
#     'isSignal' : 2,
#     'color': 914,
#     'samples'  : ['monoH_ZB_300_1']
# }
# groupPlot['monoH_ZB_300_50'] = {
#     'nameHR' : 'mZ=300 GeV, mChi=50 GeV x 100',
#     'isSignal' : 2,
#     'color': 915,
#     'samples'  : ['monoH_ZB_300_50']
# }
# groupPlot['monoH_ZB_500_150'] = {
#     'nameHR' : 'mZ=500 GeV, mChi=150 GeV x 100',
#     'isSignal' : 2,
#     'color': 916,
#     'samples'  : ['monoH_ZB_500_150']
# }
# groupPlot['monoH_ZB_500_500'] = {
#     'nameHR' : 'mZ=500 GeV, mChi=500 GeV x 100',
#     'isSignal' : 2,
#     'color': 917,
#     'samples'  : ['monoH_ZB_500_500']
# }
# groupPlot['monoH_ZB_50_1'] = {
#     'nameHR' : 'mZ=50 GeV, mChi=1 GeV x 100',
#     'isSignal' : 2,
#     'color': 918,
#     'samples'  : ['monoH_ZB_50_1']
# }
# groupPlot['monoH_ZB_50_10'] = {
#     'nameHR' : 'mZ=50 GeV, mChi=10 GeV x 100',
#     'isSignal' : 2,
#     'color': 919,
#     'samples'  : ['monoH_ZB_50_10']
# }
# groupPlot['monoH_ZB_50_50'] = {
#     'nameHR' : 'mZ=50 GeV, mChi=50 GeV x 100',
#     'isSignal' : 2,
#     'color': 920,
#     'samples'  : ['monoH_ZB_50_50']
# }

#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0   ,
              }

plot['VgS'] = { 
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

 
plot['Vg'] = { 
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['Wjets']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }



               
plot['Fake']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }


plot['top'] = {
                  'nameHR' : 't#bart',
                  'color': 400,   # kYellow 
                  'isSignal' : 0,
                  'isData'   : 0 ,
                  'scale'    : 1.0
                  }

plot['ttbar'] = {   
                  'nameHR' : 't#bart',
                  'color': 400,   # kYellow 
                  'isSignal' : 0,
                  'isData'   : 0 ,
                  'scale'    : 1.0
                  }


plot['singletop'] = {   
                  'nameHR' : 't and tW',
                  'color': 401,   # kYellow +1
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }

plot['top'] = {   
                  'nameHR' : 'tW and t#bart',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
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

plot['ggWW_Int']  = {
                  'color': 616, # kMagenta
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['Wg']  = { 
                  'color': 859, # kAzure -1  
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

plot['WZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ZZ']  = { 
                  'color': 856, # kAzure -4  
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
                  'nameHR' : 'Htt',
                  'color': 632+4, # kRed+4 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

# HWW 

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

plot['bbH_hww'] = {
                  'nameHR' : 'bbH',
                  'color': 632+5, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }


i=0
for mZp in ZpMasses :
    for mA0 in A0Masses :
        if ((mZp == "600" and (mA0 == "300" or mA0 == "400")) or ((mZp == "800" and (mA0 == "300" or mA0 == "400" or mA0 == "500" or mA0 == "600"))) or (mZp != "600" and mZp != "800")) :
            if mA0 == "300" :
                plot['monoH_' + mZp + '_' + mA0]  = {  
                    'nameHR' : 'mZ=' + mZp + ' GeV, mA0=' + mA0 + ' GeV',
                    'color': 800 + i, # kOrange + i
                    'isSignal' : 2,
                    'isData'   : 0,
                    'scale'    : 100  #
                    }
                i = i + 1
            else :
                plot['monoH_' + mZp + '_' + mA0]  = {  
                    'nameHR' : '',
                    'color': 2, # kOrange + i
                    'isSignal' : 0,
                    'isData'   : 0,
                    'scale'    : 0   #
                    }
                i = i + 1

plot['monoH_ZB_10000_1000_'] = {
    'nameHR' : '',
    'color': 900,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_10000_150_'] = {
    'nameHR' : '',
    'color': 901,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_10000_500_'] = {
    'nameHR' : '',
    'color': 902,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
    }
plot['monoH_ZB_10000_50_'] = {
    'nameHR' : '',
    'color': 903,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
    }
plot['monoH_ZB_10000_1_'] = {
    'nameHR' : '',
    'color': 903,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
    }
plot['monoH_ZB_2000_1_'] = {
    'nameHR' : '',
    'color': 904,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_1995_1000_'] = {
    'nameHR' : '',
    'color': 905,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_1000_1000_'] = {
    'nameHR' : '',
    'color': 906,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_1000_150_'] = {
    'nameHR' : '',
    'color': 907,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_1000_1_'] = {
    'nameHR' : '',
    'color': 908,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_995_500_'] = {
    'nameHR' : '',
    'color': 909,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_500_500_'] = {
    'nameHR' : '',
    'color': 910,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_500_150_'] = {
    'nameHR' : '',
    'color': 911,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_500_1_'] = {
    'nameHR' : '',
    'color': 912,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_300_50_'] = {
    'nameHR' : '',
    'color': 913,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_300_1_'] = {
    'nameHR' : '',
    'color': 914,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_295_150_'] = {
    'nameHR' : '',
    'color': 915,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_200_150_'] = {
    'nameHR' : '',
    'color': 916,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_200_50_'] = {
    'nameHR' : '',
    'color': 917,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_200_1_'] = {
    'nameHR' : '',
    'color': 918,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_100_10_'] = {
    'nameHR' : '',
    'color': 919,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_100_1_'] = {
    'nameHR' : 'mZ=100 GeV, mChi=1 GeV x 100',
    'color': 920,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 100
}
plot['monoH_ZB_95_50_'] = {
    'nameHR' : '',
    'color': 921,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_50_50_'] = {
    'nameHR' : '',
    'color': 922,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_50_10_'] = {
    'nameHR' : '',
    'color': 923,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_50_1_'] = {
    'nameHR' : '',
    'color': 924,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_20_1_'] = {
    'nameHR' : '',
    'color': 925,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_15_10_'] = {
    'nameHR' : '',
    'color': 926,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_10_1000_'] = {
    'nameHR' : '',
    'color': 927,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_10_500_'] = {
    'nameHR' : '',
    'color': 928,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_10_150_'] = {
    'nameHR' : '',
    'color': 929,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_10_50_'] = {
    'nameHR' : '',
    'color': 930,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_10_10_'] = {
    'nameHR' : '',
    'color': 931,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}
plot['monoH_ZB_10_1_'] = {
    'nameHR' : '',
    'color': 932,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 0.0000001
}

# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  #'isBlind'  : 1
              }




# additional options

#legend['lumi'] = 'L = 35.9/fb'
legend['lumi'] = 'L = 2.39/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'




