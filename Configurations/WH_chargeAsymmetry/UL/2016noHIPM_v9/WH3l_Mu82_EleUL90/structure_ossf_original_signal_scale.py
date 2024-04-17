# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_ossf
scale_histo_ttH_hww      = 0.0571624853358/0.0511436080074   # 1.1176858177
scale_histo_WW           = 1.96886995821/1.87252742721       # 1.0514505313
scale_histo_DY           = 91.6598997404/93.4219998897       # 0.98113827416
scale_histo_Zg           = 48.6407439945/48.882108991        # 0.99506230395
scale_histo_WZ           = 78.3981453095/78.6353931902       # 0.996982937694
scale_histo_Wg           = 0.35881003806/0.367123979798      # 0.977353858111
scale_histo_WgS          = 0.146505511851/0.146989954443     # 0.996704246941
scale_histo_ZH_htt       = 0.0975151096705/0.0974681029689   # 1.00048227779
scale_histo_ggZH_hww     = 0.283404927892/0.285967525405     # 0.991038851318
scale_histo_qqH_hww      = 0.00402917869455/0.00394427859376 # 1.02152487426
scale_histo_ZZ           = 7.56722691962/7.6012555291        # 0.995523290941
scale_histo_ggH_hww      = 0.0908299842965/0.0864630833432   # 1.05050595913
scale_histo_WH_htt_minus = 0.349768765801/0.350283168256     # 0.998531466821
scale_histo_VVV          = 3.08478101118/3.10297434538       # 0.994136808049
scale_histo_WH_hww_plus  = 2.17622357631/2.18210159477       # 0.997306258115
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_qqH_htt      = 0.0024713897506/0.0024713897506   # 1.0
scale_histo_ggWW         = 0.175087353194/0.176402556409     # 0.992544307508
scale_histo_ZgS          = 27.4374939461/27.6304635571       # 0.993016055968
scale_histo_top          = 89.5505202316/84.6035665722       # 1.05847216447
scale_histo_WWewk        = 0.00914582871606/0.00914582871606 # 1.0
scale_histo_ZH_hww       = 0.296453405213/0.301496515818     # 0.983273071694
scale_histo_WH_hww_minus = 1.44720677679/1.44613075617       # 1.00074406869
scale_histo_WH_htt_plus  = 0.51206550996/0.512323188883      # 0.999497038337


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




