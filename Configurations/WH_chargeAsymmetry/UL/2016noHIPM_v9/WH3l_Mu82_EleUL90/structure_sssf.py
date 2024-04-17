# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_sssf
scale_histo_ttH_hww      = 0.0236185256138/0.0199795407922   # 1.18213555854
scale_histo_WW           = 1.54588507511/1.55831000181       # 0.992026665625
scale_histo_DY           = 5.17761085257/5.50352572653       # 0.940780712192
scale_histo_Zg           = 1.61354143654/1.67894179499       # 0.96104667914
scale_histo_WZ           = 7.41098827468/7.36818474581       # 1.00580923665
scale_histo_Wg           = 0.148082162346/0.150181649059     # 0.986020351183
scale_histo_Wg           = 0.148082162346/0.150181649059     # 0.986020351183
scale_histo_WgS          = 0.0255677601904/0.0255677601904   # 1.0
scale_histo_ZH_htt       = 0.0436548599575/0.0436393623394   # 1.00035512934
scale_histo_ggZH_hww     = 0.141038184267/0.142459897078     # 0.990020259455
scale_histo_qqH_hww      = 0.00398669552514/0.00405786865281 # 0.982460465392
scale_histo_ZZ           = 0.550131327276/0.548456375585     # 1.00305393786
scale_histo_ggH_hww      = 0.0448682600636/0.0448549487285   # 1.00029676402
scale_histo_WH_htt_minus = 0.279610989892/0.279242258121     # 1.00132047267
scale_histo_VVV          = 1.52617981081/1.52437088309       # 1.00118667165
scale_histo_WH_hww_plus  = 1.22350748979/1.22306042505       # 1.00036552956
scale_histo_ggH_htt      = 0.0156910429005/0.0137393733325   # 1.14204938761
scale_histo_qqH_htt      = 0.00562712519358/0.00566083538303 # 0.99404501506
scale_histo_ggWW         = 0.0906778319574/0.0903662853328   # 1.003447598
scale_histo_ZgS          = 1.01460566764/1.01385118487       # 1.00074417506
scale_histo_top          = 71.6356485939/68.3712714791       # 1.04774486483
scale_histo_WWewk        = 0.0051843462959/0.0051843462959   # 1.0
scale_histo_ZH_hww       = 0.149231337796/0.15284468321      # 0.976359364698
scale_histo_WH_hww_minus = 0.798415137991/0.800530941131     # 0.997357000172
scale_histo_WH_htt_plus  = 0.432162498942/0.433117974281     # 0.997793960549


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




