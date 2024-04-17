# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_1j
scale_histo_ttH_hww      = 0.298464288381/0.215040919122     # 1.3879418373
scale_histo_WW           = 0.103100117691/0.0904929985178    # 1.13931596234
scale_histo_DY           = 13.2649886169/12.00524318         # 1.10493293789
scale_histo_Zg           = 30.0005877306/29.7004399589       # 1.01010583588
scale_histo_WZ           = 302.286389032/300.073788617       # 1.00737352111
scale_histo_Wg           = 0.0/1                             # 0.0
scale_histo_Wg           = 0.0/1                             # 0.0
scale_histo_WgS          = 0.276432899238/0.277869947188     # 0.994828343386
scale_histo_ZH_htt       = 0.613749531432/0.633072495768     # 0.969477485651
scale_histo_ggZH_hww     = 0.818642417084/0.845081952921     # 0.968713642806
scale_histo_qqH_hww      = 0.0/1                             # 0.0
scale_histo_ZZ           = 17.9965424287/18.5429051303       # 0.970535215611
scale_histo_ggH_hww      = 0.0/1                             # 0.0
scale_histo_WH_htt_minus = 0.116386676841/0.115609165678     # 1.00672534187
scale_histo_VVV          = 4.61298656248/4.65646880707       # 0.990661970177
scale_histo_WH_hww_plus  = 0.49080337886/0.487825137365      # 1.00610514151
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_qqH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.00770672674942/0.00794409351351 # 0.970120346181
scale_histo_ZgS          = 13.8428491692/13.2084316635       # 1.04803125169
scale_histo_top          = 3.1087215659/2.82231933933        # 1.1014776119
scale_histo_WWewk        = 0.00307696665656/0.00307696665656 # 1.0
scale_histo_ZH_hww       = 1.31927524779/1.32201481111       # 0.997927736287
scale_histo_WH_hww_minus = 0.332609135498/0.32796579997      # 1.01415798699
scale_histo_WH_htt_plus  = 0.193502450572/0.192178996171     # 1.00688657152


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




