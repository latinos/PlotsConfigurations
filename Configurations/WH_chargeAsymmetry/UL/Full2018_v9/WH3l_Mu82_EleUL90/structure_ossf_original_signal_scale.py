# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_ossf
scale_histo_ttH_hww      = 0.207326433653/0.170436879391   # 1.21644115049
scale_histo_WW           = 4.37024213423/4.34843379119     # 1.00501521791
scale_histo_DY           = 177.031320945/178.901628736     # 0.989545607806
scale_histo_WZ           = 256.955904208/251.837951959     # 1.0203224026
scale_histo_Wg           = 0.882308031899/0.882308031899   # 1.0
scale_histo_WgS          = 0.581382768902/0.562793014361   # 1.03303124607
scale_histo_ZH_htt       = 0.321566818356/0.303203443179   # 1.06056453378
scale_histo_WH_htt_plus  = 1.63099405363/1.59659557382     # 1.02154489238
scale_histo_ggZH_hww     = 0.081267203464/0.0780232420435  # 1.04157686012
scale_histo_qqH_hww      = 0.0143895084463/0.0141931431929 # 1.01383521963
scale_histo_ZZ           = 19.0250543863/18.3740327613     # 1.03543161338
scale_histo_Zg           = 99.7614355404/97.4174861687     # 1.02406086899
scale_histo_ggH_hww      = 0.198651131575/0.175196065144   # 1.13387895676
scale_histo_WH_htt_minus = 1.08936465173/1.05610226306     # 1.0314954241
scale_histo_VVV          = 8.85335748793/8.74920050633     # 1.01190474278
scale_histo_WH_hww_plus  = 7.25252938425/7.11678236006     # 1.01907421322
scale_histo_ggH_htt      = 0.0156947572713/0.0156947572713 # 1.0
scale_histo_ggWW         = 0.489402233956/0.473495546782   # 1.03359416426
scale_histo_ZgS          = 82.2681341524/80.4951733094     # 1.02202567893
scale_histo_top          = 317.29713522/289.863221576      # 1.0946443412
scale_histo_WWewk        = 0.077573268559/0.0757180968947  # 1.02450103397
scale_histo_ZH_hww       = 0.984859182497/0.95501818423    # 1.03124652364
scale_histo_WH_hww_minus = 4.6053082335/4.51958950426      # 1.01896604308
scale_histo_qqH_htt      = 0.0/1.0                         # 0.0

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
    'scaleSampleForDatacard' : scale_histo_WH_hww_plus,
}

structure['WH_hww_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WH_hww_minus,
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
    'scaleSampleForDatacard' : scale_histo_WH_htt_plus,
}

structure['WH_htt_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WH_htt_plus,
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




