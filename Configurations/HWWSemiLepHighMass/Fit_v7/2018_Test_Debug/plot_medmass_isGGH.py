# plot configuration

massesAndModelsFile = "../2016_v7_BTagSF/massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
    handle = open(massesAndModelsFile,'r')
    exec(handle)
    handle.close()
else:
    print "!!! ERROR file ", massesAndModelsFile, " does not exist."

#groupPlot={}

groupPlot['multiboson']  = {
'nameHR' : 'multiboson',
'isSignal' : 0,
'color': 857, # kAzure -3
#'samples'  : ['WW', 'ggWW', 'WWewk', 'qqWWqq', 'WW2J', 'VVV', 'VZ', 'Vg', 'VgS_H',  'VgS_L']
'samples'  : ['WW', 'ggWW', 'WWewk', 'qqWWqq', 'WW2J', 'VVV', 'VZ', 'Vg', 'VgS_H',  'VgS_L', 'ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt'],
}
groupPlot['FAKE'] = {
'nameHR' : "Fake",
'isSignal' : 0,
'color'    : 617,   # kViolet + 1
'samples'  : ['FAKE_mu', "FAKE_el"],
#'scale': 1/479866.,
}
#groupPlot['QCD'] = {
# 'nameHR' : "QCD",
# 'isSignal' : 0,
# 'color'    : 617,   # kViolet + 1
# 'samples'  : ['QCD']
#}
groupPlot['DY']  = {
'nameHR' : "DY",
'isSignal' : 0,
'color': 418,    # kGreen+2
'samples'  : ['DY'],
}
groupPlot['top']  = {
    'nameHR' : 't#bar{t} and ST',
    'isSignal' : 0,
    'color': 400,   # kYellow
    'samples'  : ['top'],
}
groupPlot['Wjets'] = {
    'nameHR' : "W+jets",
    'isSignal' : 0,
    'color': 921,      # kGray + 1
    'samples'  : ['Wjets'],
}

groupPlot['VBS']  = {
'nameHR' : "VBS",
'isSignal' : 0,
'color': 632,    # kGreen+2
'samples'  : ['WWewk'],
}

groupPlot['VBF']  = {
'nameHR' : "VBF V",
'isSignal' : 0,
'color': 840,    # kGreen+2
'samples'  : ['VBF_V'],
}

#groupPlot['Higgs_500'] = {
#'nameHR' : "Higgs 500",
#'isSignal' : 2,
#'color': 1,    # kGreen+2
#'samples'  : ['GGH_500_RelW002','QQH_500_RelW002'],
#}
#groupPlot['Higgs_700'] = {
#'nameHR' : "Higgs 700",
#'isSignal' : 2,
#'color': 2,    # kGreen+2
#'samples'  : ['GGH_700_RelW002','QQH_700_RelW002'],
#}
#
#groupPlot['Higgs_1000'] = {
#'nameHR' : "Higgs 1000",
#'isSignal' : 2,
#'color': 3,    # kGreen+2
#'samples'  : ['GGH_1000_RelW002','QQH_1000_RelW002'],
#}
#groupPlot['Higgs_3000'] = {
#'nameHR' : "Higgs 3000",
#'isSignal' : 2,
#'color': 4,    # kGreen+2
#'samples'  : ['GGH_3000_RelW002','QQH_3000_RelW002'],
#}

#for counter, MX in enumerate(plotmasses):
#    print(MX)
#    groupPlot['Higgs_'.format(MX)] = {
#        'nameHR'  : 'Higgs {}'.format(MX),
#        'isSignal': 1,
#        'color'   : counter+1,
#        'samples' : ['GGH_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX)] #'GGHINT_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX),'QQHINT_{}_RelW002'.format(MX), 'QQHSBI_{}_RelW002'.format(MX), 'GGHSBI_{}_RelW002'.format(MX)]
#    }
#

#for counter, MX in enumerate(plotmasses):
#    groupPlot['Higgs_vbf{}'.format(MX)] = {
#        'nameHR'  : 'Higgs VBF {}'.format(MX),
#        'isSignal': 2,
#        'color'   : counter+4,
#        'samples' : ['QQH_{}_RelW002'.format(MX)]# 'QQH_{}_RelW002'.format(MX)] #'GGHINT_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX),'QQHINT_{}_RelW002'.format(MX), 'QQHSBI_{}_RelW002'.format(MX), 'GGHSBI_{}_RelW002'.format(MX)]
#    }
#for counter, MX in enumerate(plotmasses):
#    groupPlot['Higgs{}'.format(MX)] = {
#        'nameHR'  : 'Higgs {}'.format(MX),
#        'isSignal': 1,
#        'color'   : counter+1,
#        'samples' : ['GGH_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX)] #'GGHINT_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX),'QQHINT_{}_RelW002'.format(MX), 'QQHSBI_{}_RelW002'.format(MX), 'GGHSBI_{}_RelW002'.format(MX)]
#    }
#


#for counter, MX in enumerate(plotmasses):
#    groupPlot['Higgs{}'.format(MX)] = {
#        'nameHR'  : 'Higgs {}'.format(MX),
#        'isSignal': 2,
#        'color'   : counter+1,
#        'samples' : ['GGH_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX)]#,'GGHSBI_{}_RelW002'.format(MX), 'QQHSBI_{}_RelW002'.format(MX)] #'GGHINT_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX),'QQHINT_{}_RelW002'.format(MX), 'QQHSBI_{}_RelW002'.format(MX), 'GGHSBI_{}_RelW002'.format(MX)]
#    }
#

#plot = {}

# keys here must match keys in samples.py
#

#plot['FAKE']  = {
#    'color': 855, # kAzure -5
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}

#plot['QCD']  = {
#    'color': 1,
#    'isSignal' : 0,
#    'isData'   : 0 ,
#    'isBlind'   :  0 ,
#    'scale'    : 1.0
#}


#plot['FAKE']  = {
#    'color': 855, # kAzure -5
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}

plot['FAKE_el']  = {
    'color': 855, # kAzure -5
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.684
}

plot['FAKE_mu']  = {
    'color': 854, # kAzure -5
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.538,
}
#plot['QCD']  = {
#    'color': 1,
#    'isSignal' : 0,
#    'isData'   : 0 ,
#    'isBlind'   :  0 ,
#    'scale'    : 1.0
#}

plot['DY']  = {
    'color': 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0002,
}

plot['top'] = {
   # 'nameHR' : 'tW and t#bar{t}',
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.8847,
}


plot['WW']  = {
    'color': 851, # kAzure -9
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.9567
}

plot['ggWW']  = {
    'color': 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1
}

#plot['WWewk']  = {
#    'color': 851, # kAzure -9
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}
#
plot['WWewk']  = {
    'color': 428 -3,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.9203,
}

plot['VBF_V']  = {
    'color': 428 -3,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.894,
}
plot['qqWWqq']  = {
    'color': 852, # kAzure -8
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.9903
}

plot['WW2J']  = {
    'color': 852, # kAzure -8
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['Vg']  = {
    'color': 859, # kAzure -1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.958
}

plot['VgS_H'] = {
    'color'    : 617,   # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.947
}

plot['VgS_L'] = {
    'color'    : 617,   # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.099
}

plot['VZ']  = {
    'color': 858, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.912
}

plot['VVV']  = {
    'color': 857, # kAzure -3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.936
}

plot['Wjets']  = {
    'color': 856, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0026,
}



# HWW
plot['qqH_hww'] = {
    # 'nameHR' : 'qqH',
    'color': 632+1, # kRed+1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}
plot['ggH_hww'] = {
    # 'nameHR' : 'ggH',
    'color': 632, # kRed
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}
plot['ZH_hww'] = {
    # 'nameHR' : 'ZH',
    'color': 632+3, # kRed+3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}
plot['WH_hww'] = {
    # 'nameHR' : 'WH',
    'color': 632+2, # kRed+2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}


plot['ggH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}
plot['qqH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}
plot['ZH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}
plot['WH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}

#for MX in plotmasses:
#    xs_ggf = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWToLNuQQ_M{}'.format(MX))['xs']
#    xs_vbf = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWToLNuQQ_M{}'.format(MX))['xs']
#    plot['QQH_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'qqH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 2*xs_vbf
#    }
#   # plot['QQHINT_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'qqH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 2.0 * xs_ggf
#   # }
##    plot['QQHSBI_{}_RelW002'.format(MX)] = {
##        'nameHR'  : 'qqH{}'.format(MX),
##        'color'   : 1,
##        'isSignal': 1,
##        'isData'  : 0,
##        'scale'   : 1 
##    }
#    plot['GGH_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'ggH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 2*xs_ggf
#    }
#   # plot['GGHINT_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'ggH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 1.0 * xs_vbf
#   # }
#
##    plot['GGHSBI_{}_RelW002'.format(MX)] = {
##        'nameHR'  : 'ggH{}'.format(MX),
##        'color'   : 1,
##        'isSignal': 1,
##        'isData'  : 0,
##        'scale'   : 1
##    }
#
###### Signal
# #for MX in massggh:
# #    plot['QQH_{}_RelW002'.format(MX)] = {
# #        'nameHR'  : 'qqH{}'.format(MX),
# #        'color'   : 1,
# #        'isSignal': 1,
# #        'isData'  : 0,
# #        'scale'   : 1.0
# #    }
##   # plot['QQHINT_{}_RelW002'.format(MX)] = {
##   #     'nameHR'  : 'qqH{}'.format(MX),
##   #     'color'   : 1,
##   #     'isSignal': 1,
##   #     'isData'  : 0,
##   #     'scale'   : 1.0 * xs_ggf
##   # }
##    plot['QQHSBI_{}_RelW002'.format(MX)] = {
##        'nameHR'  : 'qqH{}'.format(MX),
##        'color'   : 1,
##        'isSignal': 1,
##        'isData'  : 0,
##        'scale'   : 1.0 
##    }
##    plot['GGH_{}_RelW002'.format(MX)] = {
##        'nameHR'  : 'ggH{}'.format(MX),
##        'color'   : 1,
##        'isSignal': 1,
##        'isData'  : 0,
##        'scale'   : 1.0
##    }
##   # plot['GGHINT_{}_RelW002'.format(MX)] = {
##   #     'nameHR'  : 'ggH{}'.format(MX),
##   #     'color'   : 1,
##   #     'isSignal': 1,
##   #     'isData'  : 0,
##   #     'scale'   : 1.0 * xs_vbf
##   # }
##
##    plot['GGHSBI_{}_RelW002'.format(MX)] = {
##        'nameHR'  : 'ggH{}'.format(MX),
##        'color'   : 1,
##        'isSignal': 1,
##        'isData'  : 0,
##        'scale'   : 1.0 
##    }
##for MX in massggh:
##    plot['QQH_{}_RelW002'.format(MX)] = {
##        'nameHR'  : 'qqH{}'.format(MX),
##        'color'   : 1,
##        'isSignal': 1,
##        'isData'  : 0,
##        'scale'   : 1.0
##    }
##   # plot['QQHINT_{}_RelW002'.format(MX)] = {
##   #     'nameHR'  : 'qqH{}'.format(MX),
##   #     'color'   : 1,
##   #     'isSignal': 1,
##   #     'isData'  : 0,
##   #     'scale'   : 1.0 * xs_ggf
##   # }
##    plot['QQHSBI_{}_RelW002'.format(MX)] = {
##        'nameHR'  : 'qqH{}'.format(MX),
##        'color'   : 1,
##        'isSignal': 1,
##        'isData'  : 0,
##        'scale'   : 1.0 
##    }
##    plot['GGH_{}_RelW002'.format(MX)] = {
##        'nameHR'  : 'ggH{}'.format(MX),
##        'color'   : 1,
##        'isSignal': 1,
##        'isData'  : 0,
##        'scale'   : 1.0
##    }
##   # plot['GGHINT_{}_RelW002'.format(MX)] = {
##   #     'nameHR'  : 'ggH{}'.format(MX),
##   #     'color'   : 1,
##   #     'isSignal': 1,
##   #     'isData'  : 0,
##   #     'scale'   : 1.0 * xs_vbf
##   # }
##
##    plot['GGHSBI_{}_RelW002'.format(MX)] = {
##        'nameHR'  : 'ggH{}'.format(MX),
##        'color'   : 1,
##        'isSignal': 1,
##        'isData'  : 0,
##        'scale'   : 1.0 
##    }



# data

plot['data_obs']  = {
    'nameHR' : 'Data',
    'color': 1 ,
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 0,
}




# additional options

legend['lumi'] = 'L =59.7/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
