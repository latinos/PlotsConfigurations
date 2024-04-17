# structure configuration for datacard

# structure = {}

# keys here must match keys in samples.py    
#                    

# BTag normalization factors
# Cut = hww2l2v_13TeV_samesign_1j
scale_histo_ttH_hww      = 0.160537372171/0.105836109911   # 1.51684876084
scale_histo_WW           = 13.1478410113/12.9925824875     # 1.01194978165
scale_histo_DY           = 23.1120856722/21.6856215092     # 1.06577926127
scale_histo_Zg           = 16.0942073492/16.2827654077     # 0.988419776752
scale_histo_WZ           = 115.896303073/117.772801287     # 0.984066794763
scale_histo_Wg           = 123.865202644/120.851067654     # 1.02494090494
scale_histo_WgS          = 51.4646013319/49.3716146509     # 1.04239251027
scale_histo_ZH_htt       = 0.206772897183/0.21476539759    # 0.962784971428
scale_histo_ggZH_hww     = 0.115696593519/0.110430456832   # 1.04768735761
scale_histo_qqH_hww      = 0.0418143373177/0.0406604978316 # 1.02837740676
scale_histo_ZZ           = 3.6062138988/3.62806772315      # 0.993976456334
scale_histo_ggH_hww      = 0.516740512838/0.500764939631   # 1.03190233969
scale_histo_WH_htt_minus = 0.760284077219/0.790188965083   # 0.962154764005
scale_histo_VVV          = 4.0070473387/4.12788750782      # 0.970725905469
scale_histo_WH_hww_plus  = 3.12916804508/3.03427517747     # 1.03127365254
scale_histo_ggH_htt      = 0.0547492764387/0.058092494244  # 0.942450090175
scale_histo_ggH_htt      = 0.0547492764387/0.058092494244  # 0.942450090175
scale_histo_qqH_htt      = 0.0261558449402/0.0265182022699 # 0.986335524331
scale_histo_ggWW         = 0.864962033063/0.851737593944   # 1.01552642412
scale_histo_ZgS          = 5.54053867478/5.26867838135     # 1.0515993336
scale_histo_top          = 76.8733454708/59.7989943761     # 1.28552906738
scale_histo_WWewk        = 0.0937543443187/0.0920893788864 # 1.01807988557
scale_histo_ZH_hww       = 0.468019653719/0.456889363186   # 1.02436101916
scale_histo_WH_hww_minus = 1.84971389157/1.80063731754     # 1.02725511326
scale_histo_WH_htt_plus  = 1.25210961736/1.291978315       # 0.969141356961


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
