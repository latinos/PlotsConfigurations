# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_0j
scale_histo_ttH_hww      = 0.0209199536457/0.0160189954293   # 1.30594666426
scale_histo_WW           = 0.701283713155/0.735598628195     # 0.953351034484
scale_histo_DY           = 300.450692418/290.606001207       # 1.03387642089
scale_histo_Zg           = 14.2044454926/13.8783945246       # 1.02349342119
scale_histo_WZ           = 708.217267388/701.373117571       # 1.0097582152
scale_histo_Wg           = 0.134107044499/0.129074478062     # 1.03898963228
scale_histo_WgS          = 0.338242812333/0.338242812333     # 1.0
scale_histo_ZH_htt       = 1.28605263957/1.2377110684        # 1.03905723428
scale_histo_WH_htt_plus  = 0.182651076195/0.181626026677     # 1.00564373695
scale_histo_ggZH_hww     = 1.66862949896/1.64198266514       # 1.01622845014
scale_histo_qqH_hww      = 0.00140445037169/0.00140445037169 # 1.0
scale_histo_ZZ           = 11.6929645213/11.3204247685       # 1.0329086373
scale_histo_ggH_hww      = 0.0/1                             # 0.0
scale_histo_WH_htt_minus = 0.132446203032/0.132355474256     # 1.00068549319
scale_histo_VVV          = 3.84870215586/3.96622625598       # 0.970368785709
scale_histo_WH_hww_plus  = 0.433291621311/0.435664408242     # 0.994553636042
scale_histo_ggH_htt      = 0.0343676731798/0.0367198199557   # 0.935943401174
scale_histo_ggWW         = 0.0569898829264/0.0566945667715   # 1.00520889693
scale_histo_ZgS          = 6.77691785228/6.39034886522       # 1.06049262649
scale_histo_top          = 55.0042059133/53.5828014318       # 1.0265272521
scale_histo_WWewk        = 0.0107066885131/0.0112027627088   # 0.95571858402
scale_histo_ZH_hww       = 2.7381895438/2.70463559113        # 1.01240609004
scale_histo_WH_hww_minus = 0.315796568398/0.312464116948     # 1.01066506927
scale_histo_qqH_htt      = 0.00176438079285/0.00176438079285 # 1.0


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




