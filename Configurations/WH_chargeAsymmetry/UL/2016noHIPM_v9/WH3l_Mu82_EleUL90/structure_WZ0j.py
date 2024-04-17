# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_0j
scale_histo_ttH_hww      = 0.0266588448608/0.0288453955796     # 0.924197582497
scale_histo_WW           = 0.573648227118/0.573206399261       # 1.00077080064
scale_histo_DY           = 232.342248626/235.390466391         # 0.987050377138
scale_histo_Zg           = 15.9382286652/15.9430696727         # 0.999696356622
scale_histo_WZ           = 663.604212652/665.785134346         # 0.996724285988
scale_histo_Wg           = 0.0695248429578/0.0625076981603     # 1.11226048957
scale_histo_WgS          = 0.275695192911/0.274453183856       # 1.00452539496
scale_histo_ZH_htt       = 1.17430530813/1.19884419084         # 0.979531216062
scale_histo_ggZH_hww     = 1.68064426865/1.70146705096         # 0.987761865678
scale_histo_qqH_hww      = 0.000571995338771/0.000571995338771 # 1.0
scale_histo_ZZ           = 13.9462402249/14.0816685741         # 0.990382649014
scale_histo_ggH_hww      = 0.0/1                               # 0.0
scale_histo_WH_htt_minus = 0.112658959717/0.112434591229       # 1.00199554679
scale_histo_VVV          = 3.62649430561/3.70255267107         # 0.979457857264
scale_histo_WH_hww_plus  = 0.425291807951/0.426072297363       # 0.998168176112
scale_histo_ggH_htt      = 0.0706463706083/0.0690428361669     # 1.02322521105
scale_histo_qqH_htt      = 0.0/1                               # 0.0
scale_histo_ggWW         = 0.0574916870759/0.0570189031127     # 1.00829170569
scale_histo_ZgS          = 7.88376693702/7.89726919468         # 0.998290262453
scale_histo_top          = 51.2996983776/50.1080389419         # 1.0237818015
scale_histo_WWewk        = 0.00687353821859/0.00687353821859   # 1.0
scale_histo_ZH_hww       = 2.49864820605/2.51767206137         # 0.992443870822
scale_histo_WH_hww_minus = 0.255323905335/0.255774837284       # 0.998236996436
scale_histo_WH_htt_plus  = 0.186128643547/0.187530643109       # 0.99252389082


structure['top']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_top,
}

structure['WW']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WW,
}

structure['Wg']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_Wg,
}

structure['Zg']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_Zg,
}

structure['WgS']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WgS,
}

structure['ZgS']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZgS,
}

structure['ZZ']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZZ,
}

structure['WZ']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WZ * 1.138 # NLO -> NNLO k-factor
}

structure['VVV']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_VVV,
}

structure['ggH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ggH_hww,
}

structure['qqH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_qqH_hww,
}

structure['ZH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZH_hww,
}

structure['ggZH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ggZH_hww,
}

structure['WH_hww_plus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : 10.0 * scale_histo_WH_hww_plus, # scaling signal to have sensitivity
}

structure['WH_hww_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : 10.0 * scale_histo_WH_hww_minus, # scaling signal to have sensitivity
}

structure['ttH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ttH_hww,
}

structure['ggH_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ggH_htt,
}

structure['qqH_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_qqH_htt,
}

structure['ZH_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZH_htt,
}

structure['WH_htt_plus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : 10.0 * scale_histo_WH_htt_plus, # scaling signal to have sensitivity
}

structure['WH_htt_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : 10.0 * scale_histo_WH_htt_plus, # scaling signal to have sensitivity
}

structure['Fake']  = {
    'isSignal' : 0,
    'isData'   : 0
}


# Data
structure['DATA']  = {
    'isSignal' : 0,
    'isData'   : 1
}




