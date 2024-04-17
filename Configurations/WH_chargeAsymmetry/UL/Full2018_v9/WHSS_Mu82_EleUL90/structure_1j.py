# structure configuration for datacard

# structure = {}

# keys here must match keys in samples.py    
#                    

# BTag normalization factors
# Cut = hww2l2v_13TeV_samesign_1j
scale_histo_ttH_hww      = 0.403852438299/0.206065949512   # 1.95982130602
scale_histo_WW           = 20.7930003307/18.5931357677     # 1.11831595221
scale_histo_DY           = 38.1653356007/37.1564763287     # 1.02715164008
scale_histo_WZ           = 338.331846275/301.754102591     # 1.12121705511
scale_histo_Wg           = 313.554153169/280.951504356     # 1.11604368835
scale_histo_WgS          = 159.019637682/133.120233942     # 1.19455647704
scale_histo_ZH_htt       = 0.52702471516/0.418377509104    # 1.25968701398
scale_histo_WH_htt_plus  = 3.51317983868/2.99417382907     # 1.17333863671
scale_histo_ggZH_hww     = 0.0487489906276/0.0416125294193 # 1.17149789517
scale_histo_qqH_hww      = 0.0551519111922/0.0493745882637 # 1.11701004771
scale_histo_ZZ           = 8.20543225456/7.02369155076     # 1.16825065498
scale_histo_Zg           = 31.6778612999/26.9277000005     # 1.17640427141
scale_histo_ggH_hww      = 0.835377131709/0.704517384148   # 1.18574381627
scale_histo_WH_htt_minus = 2.14421993024/1.78486436835     # 1.20133494077
scale_histo_VVV          = 10.9161024993/9.13050235687     # 1.19556428252
scale_histo_WH_hww_plus  = 10.0694789513/8.4373732424      # 1.19343765672
scale_histo_ggH_htt      = 0.245521798327/0.219229582295   # 1.11993005577
scale_histo_ggWW         = 1.29296483445/1.18493739596     # 1.09116721175
scale_histo_ZgS          = 13.8422447313/11.7705334283     # 1.17600827656
scale_histo_top          = 124.585001211/87.4139634172     # 1.42522997861
scale_histo_WWewk        = 0.142280711039/0.133346344487   # 1.06700121092
scale_histo_ZH_hww       = 1.42081496306/1.1573508904      # 1.2276440748
scale_histo_WH_hww_minus = 5.96461104674/5.00138194371     # 1.19259259018
scale_histo_qqH_htt      = 0.011234128291/0.0123404588292  # 0.910349318975


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
