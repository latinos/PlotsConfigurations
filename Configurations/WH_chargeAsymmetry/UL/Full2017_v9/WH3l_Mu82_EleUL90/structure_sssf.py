# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_sssf
scale_histo_ttH_hww      = 0.0618564591863/0.0590441836156   # 1.04763001872
scale_histo_WW           = 3.34459517545/3.26990546413       # 1.02284155066
scale_histo_DY           = 32.4936441324/31.117306538        # 1.04423061465
scale_histo_WZ           = 14.691432066/14.6083730833        # 1.00568571067
scale_histo_Wg           = 0.203306455636/0.203306455636     # 1.0
scale_histo_WgS          = 0.240531019447/0.26082099081      # 0.922207291294
scale_histo_ZH_htt       = 0.117572975614/0.114819393016     # 1.02398185992
scale_histo_WH_hww_minus = 1.78755550767/1.78120096803       # 1.00356755905
scale_histo_ggZH_hww     = 0.0234568247489/0.0240133039509   # 0.97682621254
scale_histo_qqH_hww      = 0.00540966807082/0.00541800876744 # 0.998460560517
scale_histo_ZZ           = 2.42444981199/2.41382184949       # 1.0044029606
scale_histo_ggH_hww      = 0.0970930452139/0.100004470667    # 0.970887047011
scale_histo_WH_htt_minus = 0.602733017261/0.599931307043     # 1.0046700517
scale_histo_VVV          = 3.23018076364/3.17897386786       # 1.01610799519
scale_histo_WH_hww_plus  = 2.7670677386/2.75423134909        # 1.00466060686
scale_histo_ggH_htt      = 0.0625138606953/0.0641459369924   # 0.974556825053
scale_histo_qqH_htt      = 0.00481175156565/0.00481175156565 # 1.0
scale_histo_ggWW         = 0.199935071843/0.19848729429      # 1.00729405657
scale_histo_ZgS          = 0.619408951876/0.616856883311     # 1.0041372134
scale_histo_top          = 182.680385279/172.346678592       # 1.05995883861
scale_histo_WWewk        = 0.0168717826444/0.0173046875522   # 0.974983373348
scale_histo_ZH_hww       = 0.296096092846/0.295069661724     # 1.00347860609
scale_histo_Zg           = 1.89794365098/1.90519634746       # 0.996193202614
scale_histo_WH_htt_plus  = 0.919274127525/0.916043657131     # 1.00352654633


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




