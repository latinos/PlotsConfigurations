# structure configuration for datacard

# structure = {}

# keys here must match keys in samples.py    
#                    

# BTag normalization factors
# Cut = hww2l2v_13TeV_samesign_1j
scale_histo_ttH_hww      = 0.180276825892/0.112076406383     # 1.60851718672
scale_histo_WW           = 17.3368525364/17.0463611631       # 1.01704125417
scale_histo_DY           = 44.6641027279/49.5473999849       # 0.901441906972
scale_histo_Zg           = 20.6166113057/19.4013313972       # 1.06263899542
scale_histo_WZ           = 135.267286694/126.276144721       # 1.07120222108
scale_histo_Wg           = 156.275315526/155.431783489       # 1.00542702412
scale_histo_WgS          = 65.9150772791/63.6120002002       # 1.0362050725
scale_histo_ZH_htt       = 0.224625941246/0.19374122565      # 1.15941220301
scale_histo_WH_htt_plus  = 1.41360321279/1.31045936383       # 1.0787081628
scale_histo_ggZH_hww     = 0.119893497698/0.114894546858     # 1.04350903482
scale_histo_qqH_hww      = 0.0652589391265/0.0634855506858   # 1.02793373329
scale_histo_ZZ           = 3.62010890634/3.26054685233       # 1.11027661012
scale_histo_ggH_hww      = 0.894624256178/0.85372059232      # 1.04791223759
scale_histo_WH_htt_minus = 0.907955295271/0.848840692488     # 1.06964157504
scale_histo_VVV          = 4.65032694939/4.52020086114       # 1.0287876783
scale_histo_WH_hww_plus  = 3.56933756638/3.42337605238       # 1.04263671644
scale_histo_ggH_htt      = 0.0533884742322/0.0490732410875   # 1.08793454537
scale_histo_ggH_htt      = 0.0533884742322/0.0490732410875   # 1.08793454537
scale_histo_ggWW         = 1.02379148736/1.00096980162       # 1.02279957468
scale_histo_ZgS          = 7.64935533742/7.44793554501       # 1.02704370778
scale_histo_top          = 108.055607163/81.5017466136       # 1.32580725755
scale_histo_WWewk        = 0.137471641848/0.135830927369     # 1.01207909355
scale_histo_ZH_hww       = 0.578285123642/0.536470527952     # 1.0779438823
scale_histo_WH_hww_minus = 2.32124386049/2.22327156849       # 1.04406672284
scale_histo_qqH_htt      = 0.00350350762844/0.00350350762844 # 1.0


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
