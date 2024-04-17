# structure configuration for datacard

# structure = {}

# keys here must match keys in samples.py    
#                    

# BTag normalization factors
# Cut = hww2l2v_13TeV_samesign_2j
scale_histo_ttH_hww      = 0.617010001941/0.446976799456     # 1.38040722179
scale_histo_WW           = 1.18766327892/1.11941960177       # 1.06096344663
scale_histo_DY           = 2.73201114062/0.608771954656      # 4.48774146004
scale_histo_Zg           = 1.52588834242/1.44067413887       # 1.05914883959
scale_histo_WZ           = 14.3395874219/14.5601910428       # 0.984848851212
scale_histo_Wg           = 14.1373403782/13.3726960287       # 1.05717952071
scale_histo_WgS          = 5.08787522305/4.79282588245       # 1.06156062161
scale_histo_ZH_htt       = 0.0461453275357/0.0465742645873   # 0.990790256048
scale_histo_ggZH_hww     = 0.0297800727078/0.0349759598491   # 0.851444044317
scale_histo_qqH_hww      = 0.0075359367047/0.0066903584339   # 1.12638758882
scale_histo_ZZ           = 0.495265502014/0.498023693388     # 0.994461726599
scale_histo_ggH_hww      = 0.0441757111415/0.0460026087971   # 0.960287085811
scale_histo_WH_htt_minus = 0.0941584918584/0.0962440831445   # 0.978330186979
scale_histo_VVV          = 1.01443537458/1.06235296784       # 0.9548948469
scale_histo_WH_hww_plus  = 0.649373521985/0.644823292629     # 1.0070565524
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_qqH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.072279298858/0.069415504322     # 1.04125583418
scale_histo_ZgS          = 1.15543489932/0.954033381473      # 1.21110531535
scale_histo_top          = 34.3826934095/25.3486171412       # 1.35639325877
scale_histo_WWewk        = 0.00912821559271/0.00909789799107 # 1.00333237432
scale_histo_ZH_hww       = 0.100156164997/0.0990130825874    # 1.01154476136
scale_histo_WH_hww_minus = 0.371555178345/0.369464620919     # 1.00565834266
scale_histo_WH_htt_plus  = 0.1320381988/0.133786809382       # 0.986929873051


structure['DY']  = {  
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_DY,
}

structure['top'] = {   
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_top,
}

structure['WW']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WW,
}

structure['WWewk']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WWewk,
}

structure['ggWW']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ggWW,
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

structure['WgS'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WgS,
}

structure['ZgS']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZgS,
}

structure['WZ'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WZ * 1.138 # NLO -> NNLO k-factor
}

structure['ZZ']  = { 
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZZ,
}

structure['VVV']  = { 
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_VVV,
}


# Higgs
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
    'scaleSampleForDatacard' : scale_histo_WH_hww_plus * 10.0, # scaling signal to have sensitivity
}

structure['WH_hww_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WH_hww_minus * 10.0 # scaling signal to have sensitivity
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
    'scaleSampleForDatacard' : scale_histo_WH_htt_plus * 10.0 # scaling signal to have sensitivity
}

structure['WH_htt_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WH_htt_minus * 10.0, # scaling signal to have sensitivity
}


# Fakes
structure['Fake_ee']  = {
    'isSignal' : 0,
    'isData'   : 0,
}

structure['Fake_mm']  = {
    'isSignal' : 0,
    'isData'   : 0,
}

structure['Fake_em']  = {
    'isSignal' : 0,
    'isData'   : 0,
}


# Data
structure['DATA']  = { 
    'isSignal' : 0,
    'isData'   : 1 
}
