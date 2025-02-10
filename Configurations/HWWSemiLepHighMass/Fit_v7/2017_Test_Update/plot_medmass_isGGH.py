# plot configuration

#massesAndModelsFile = "../../massesAndModels.py"
#if os.path.exists(massesAndModelsFile) :
#    handle = open(massesAndModelsFile,'r')
#    exec(handle)
#    handle.close()
#else:
#    print "!!! ERROR file ", massesAndModelsFile, " does not exist."


# groupPlot = {}
#
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

#groupPlot['SM Higgs'] = {
# 'nameHR': 'SM Higgs',
# 'isSignal' : 0,
# 'color': 863, # kAzure +3
# 'samples'  : [] #['ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt']
#}
groupPlot['multiboson']  = {
'nameHR' : 'multiboson',
'isSignal' : 0,
'color': 857, # kAzure -3
#'samples'  : ['WW', 'ggWW', 'WWewk', 'qqWWqq', 'WW2J', 'VVV', 'VZ', 'Vg', 'VgS_H',  'VgS_L']
'samples'  : ['WW', 'ggWW', 'qqWWqq', 'WW2J', 'VVV', 'VZ', 'Vg', 'VgS_H',  'VgS_L', 'ZH_hww', 'WH_hww', 'ggH_hww', 'qqH_hww', 'ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt']#'WWewk','VBF_V'],
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

#groupPlot['High Mass Higgs'] = {
#    'nameHR'  : 'Higgs ',
#    'isSignal': 1,
#    'color'   : 2,
#    'samples' : ['ggH_HWW','ggH_HWWSBI', 'qqH_HWW','qqH_HWWSBI'] #'GGHINT_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX),'QQHINT_{}_RelW002'.format(MX), 'QQHSBI_{}_RelW002'.format(MX), 'GGHSBI_{}_RelW002'.format(MX)]
#}


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


#groupPlot['Higgs 1050'] = {
#    'nameHR'  : 'Higgs 450',
#    'isSignal': 1,
#    'color'   : 2,
#    'samples' : ['GGHSBI_450_RelW002','QQH_SBI_450_RelW002','qqWWqq_BinSBI','ggWW_BinSBI','qqH_hww_BinSBI','ggH_hww_BinSBI']#,'GGHSBI_{}_RelW002'.format(MX), 'QQHSBI_{}_RelW002'.format(MX)] #'GGHINT_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX),'QQHINT_{}_RelW002'.format(MX), 'QQHSBI_{}_RelW002'.format(MX), 'GGHSBI_{}_RelW002'.format(MX)]
#
#}


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
    'scale'    : 0.889
}

plot['FAKE_mu']  = {
    'color': 854, # kAzure -5
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.5491
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
    'scale'    : 1.021,
}

plot['top'] = {
   # 'nameHR' : 'tW and t#bar{t}',
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0254,
}


plot['WW']  = {
    'color': 851, # kAzure -9
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0418
}

plot['ggWW']  = {
    'color': 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 2.1099*0.5622
    #'scale'    : 1.0#/(1-0.0098101201)
}

plot['WWewk']  = {
    'color': 851, # kAzure -9
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.9877
}

plot['qqWWqq']  = {
    'color': 852, # kAzure -8
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    :  1.0
    'scale'    :  1.1836*1.11
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
    'scale'    : 0.990
}

plot['VgS_H'] = {
    'color'    : 617,   # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.011
}

plot['VgS_L'] = {
    'color'    : 617,   # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.73
}

plot['VZ']  = {
    'color': 858, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.985
}

plot['VVV']  = {
    'color': 857, # kAzure -3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0761
}

plot['Wjets']  = {
    'color': 856, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.9926,
}

#plot['ggWW_2']  = {
#    'color': 850, # kAzure -10
#    'isSignal' : 1,
#    'isData'   : 0,
#    'scale'    : -0.0098101201/(1-0.0098101201)
#}
#plot['qqH_hww_2'] = {
#    # 'nameHR' : 'qqH',
#    'color': 632+1, # kRed+1
#    'isSignal' : 1,
#    'isData'   : 0,
#    'scale'    :  -0.0098101201/(1-0.0098101201)    #
#}
#plot['ggH_hww_2'] = {
#    # 'nameHR' : 'ggH',
#    'color': 632, # kRed
#    'isSignal' : 1,
#    'isData'   : 0,
#    'scale'    :  -0.0098101201/(1-0.0098101201)    #
#}

#plot['qqWWqq_2']  = {
#    'color': 852, # kAzure -8
#    'isSignal' : 1,
#    'isData'   : 0,
#    'scale'    :  -0.0098101201/(1-0.0098101201)
#}

# HWW
#plot['qqH_hww'] = {
#    # 'nameHR' : 'qqH',
#    'color': 632+1, # kRed+1
#    'isSignal' : 0,
#    'isData'   : 0,
#    #'scale'    :  1.0#/(1-0.0098101201)    #
#    'scale'    :  1/(1-0.0063422996)    #
#}
#plot['ggH_hww'] = {
#    # 'nameHR' : 'ggH',
#    'color': 632, # kRed
#    'isSignal' : 0,
#    'isData'   : 0,
#    #'scale'    :  1.0#/(1-0.0098101201)    #
#    'scale'    :  1/(1-0.0066502158)    #
#}
plot['ZH_hww'] = {
    # 'nameHR' : 'ZH',
    'color': 632+3, # kRed+3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.9445    #
}
plot['WH_hww'] = {
    # 'nameHR' : 'WH',
    'color': 632+2, # kRed+2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0183    #
}
plot['ggH_hww']  = {
    'color': 632+4, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.57*2.1099
    #'scale'    : 1.0#/(1-0.0098101201)
}

plot['qqH_hww']  = {
    'color': 632+5, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.16*1.186
    #'scale'    : 1.0#/(1-0.0098101201)
}
plot['WWewk']  = {
    'color': 428 -3,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.9877,
}

plot['VBF_V']  = {
    'color': 428 -3,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.013,
}
plot['ggH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0142,
}
plot['qqH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.9237,
}
plot['ZH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.000,
}
plot['WH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 0.9825,
}
xs_vbf=1
xs_ggf=1
#
#plot['QQH_450_RelW002'] = {
#    'nameHR'  : 'qqH',
#    'color'   : 1,
#    'isSignal': 1,
#    'isData'  : 0,
#    'scale'   : xs_vbf
#}
#plot['QQHSBI_450_RelW002'] = {
#    'nameHR'  : 'qqH_SBI',
#    'color'   : 1,
#    'isSignal': 1,
#    'isData'  : 0,
#    'scale'   : 0.4099
#}
#
#plot['GGH_450_RelW002'] = {
#    'nameHR'  : 'ggH',
#    'color'   : 1,
#    'isSignal': 1,
#    'isData'  : 0,
#    'scale'   : 0.4191
#}
#plot['GGHSBI_450_RelW002'] = {
#    'nameHR'  : 'ggH_SBI',
#    'color'   : 1,
#    'isSignal': 1,
#    'isData'  : 0,
#    'scale'   : 0.4191
#}
#plot['qqWWqq_BinSBI']  = {
#    'color': 852, # kAzure -8
#    'isSignal' : 1,
#    'isData'   : 0,
#    #'scale'    :  1.0
#    'scale'    : -0.186 
#}
#plot['ggWW_BinSBI']  = {
#    'color': 852, # kAzure -8
#    'isSignal' : 1,
#    'isData'   : 0,
#    #'scale'    :  1.0
#    'scale'    : -1.1099 
#}
#plot['qqH_hww_BinSBI']  = {
#    'color': 852, # kAzure -8
#    'isSignal' : 1,
#    'isData'   : 0,
#    #'scale'    :  1.0
#    'scale'    :  -0.186
#    #'scale'    :  -0.0063422996/(1-0.0063422996)
#}
#plot['ggH_hww_BinSBI']  = {
#    'color': 852, # kAzure -8
#    'isSignal' : 1,
#    'isData'   : 0,
#    #'scale'    :  1.0
#    'scale'    :  -1.1099
#    #'scale'    :  -0.0066502158/(1-0.0066502158)
#}
   # plot['GGHINT_{}_RelW002'.format(MX)] = {
   #     'nameHR'  : 'ggH{}'.format(MX),
   #     'color'   : 1,
   #     'isSignal': 1,
   #     'isData'  : 0,
   #     'scale'   : 1.0 * xs_vbf
   # }

#    plot['GGHSBI_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'ggH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1
#    }

##### Signal
#for MX in massggh:
#    plot['QQH_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'qqH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0
#    }
#   # plot['QQHINT_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'qqH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 1.0 * xs_ggf
#   # }
#    plot['QQHSBI_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'qqH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0 
#    }
#    plot['GGH_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'ggH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0
#    }
#   # plot['GGHINT_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'ggH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 1.0 * xs_vbf
#   # }
#
#    plot['GGHSBI_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'ggH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0 
#    }
#for MX in massggh:
#    plot['QQH_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'qqH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0
#    }
#   # plot['QQHINT_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'qqH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 1.0 * xs_ggf
#   # }
#    plot['QQHSBI_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'qqH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0 
#    }
#    plot['GGH_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'ggH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0
#    }
#   # plot['GGHINT_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'ggH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 1.0 * xs_vbf
#   # }
#
#    plot['GGHSBI_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'ggH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0 
#    }



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

legend['lumi'] = 'L = 139 /fb'  

legend['lumi'] = 'L = 138 /fb'  

