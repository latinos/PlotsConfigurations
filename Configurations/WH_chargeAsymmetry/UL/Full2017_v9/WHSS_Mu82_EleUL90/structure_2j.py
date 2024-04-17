# structure configuration for datacard

# structure = {}

# keys here must match keys in samples.py    
#                    

# BTag normalization factors
# Cut = hww2l2v_13TeV_samesign_2j
scale_histo_ttH_hww      = 1.1803166785/0.780252823127       # 1.51273618437
scale_histo_WW           = 1.29804147219/1.34410144782       # 0.965731771432
scale_histo_DY           = -1.09104493997/-1.12253183916     # 0.971950105924
scale_histo_WZ           = 33.121183066/32.785477929         # 1.01023944619
scale_histo_Wg           = 22.5236718439/20.6908196875       # 1.08858286835
scale_histo_WgS          = 13.9495048623/14.0157533572       # 0.99527328334
scale_histo_ZH_htt       = 0.0888002900984/0.0897049710204   # 0.98991492989
scale_histo_WH_hww_minus = 0.8570241303/0.836767378153       # 1.02420834353
scale_histo_ggZH_hww     = 0.00767652292982/0.00759345916147 # 1.01093885759
scale_histo_qqH_hww      = 0.006475048409/0.00619169922887   # 1.04576274939
scale_histo_ZZ           = 2.98772319052/2.9255129884        # 1.02126471575
scale_histo_ggH_hww      = 0.0547674172497/0.0549439861666   # 0.996786383201
scale_histo_WH_htt_minus = 0.183973591076/0.183143189872     # 1.00453416371
scale_histo_VVV          = 2.91965535533/3.11576174164       # 0.937059890143
scale_histo_WH_hww_plus  = 1.38397163942/1.36446678653       # 1.01429485355
scale_histo_ggH_htt      = 0.00572924248408/0.00516450431474 # 1.10934992691
scale_histo_qqH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.0973439684049/0.0992680482606   # 0.98061732965
scale_histo_ZgS          = 1.48345866304/1.60588600092       # 0.923763369377
scale_histo_top          = 44.6381487263/35.3672818646       # 1.2621311668
scale_histo_WWewk        = 0.00758287414645/0.00758287414645 # 1.0
scale_histo_ZH_hww       = 0.236340643576/0.232267383369     # 1.01753694448
scale_histo_Zg           = 3.84908194299/3.61842809319       # 1.06374421264
scale_histo_WH_htt_plus  = 0.294926427577/0.286096884733     # 1.03086207266


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
