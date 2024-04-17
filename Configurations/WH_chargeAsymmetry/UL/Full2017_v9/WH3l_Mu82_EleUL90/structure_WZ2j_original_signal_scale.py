# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_2j
scale_histo_ttH_hww      = 12.4124959184/9.96103494137       # 1.24610504746
scale_histo_WW           = 0.446788483963/0.380273656154     # 1.1749130573
scale_histo_DY           = 13.3088286027/9.66502517957       # 1.37700920127
scale_histo_WZ           = 432.961027073/433.767005889       # 0.998141908434
scale_histo_Wg           = 0.0/1                             # 0.0
scale_histo_WgS          = 0.387967854394/0.369932457368     # 1.04875321607
scale_histo_ZH_htt       = 0.887281851424/0.853180221539     # 1.03997001926
scale_histo_WH_hww_minus = 0.431204675098/0.428028818477     # 1.00741972616
scale_histo_ggZH_hww     = 0.254099523334/0.254090580933     # 1.00003519375
scale_histo_qqH_hww      = 0.00100552344527/0.00092929108625 # 1.0820328099
scale_histo_ZZ           = 73.6124824318/72.927771617        # 1.00938888985
scale_histo_ggH_hww      = 0.0/1                             # 0.0
scale_histo_WH_htt_minus = 0.147483341646/0.144690119294     # 1.01930485901
scale_histo_VVV          = 21.791854831/21.5069091001        # 1.01324903219
scale_histo_WH_hww_plus  = 0.67682907079/0.677954588148      # 0.998339833703
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_qqH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.0137853464588/0.0143145790963   # 0.963028417811
scale_histo_ZgS          = 16.557917519/16.2451103889        # 1.0192554635
scale_histo_top          = 8.50420615999/6.00007052393       # 1.4173510338
scale_histo_WWewk        = 0.0240398559048/0.0228602613111   # 1.05160022353
scale_histo_ZH_hww       = 2.60982880369/2.55684671423       # 1.02072165264
scale_histo_Zg           = 25.7784323683/24.7714004914       # 1.04065300536
scale_histo_WH_htt_plus  = 0.237149327659/0.237869828818     # 0.996971027545


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




