#['WW', 'ggHWWlnuqq_M1500', 'DY', 'DATA', 'WZ', 'ggHWWlnuqq_M125', 'ZZZ', 'ggHWWlnuqq_M900', 'vbfHWWlnuqq_M500', 'Wjets1j', 'QCD_MU', 'WZZ', 'vbfHWWlnuqq_M900', 'QCD_bcToE', 'Wjets2j', 'QCD_EM', 'ggHWWlnuqq_M500', 'ZZ', 'WWW', 'vbfHWWlnuqq_M1500', 'vbfHWWlnuqq_M125', 'WWZ', 'Wjets0j', 'top']

for name in ['WW','DY','WZ','ZZZ','Wjets1j','QCD_MU','WZZ','QCD_bcToE','Wjets2j','QCD_EM','ZZ','WWW','WWZ','Wjets0j','top','ggHWWlnuqq_M125','vbfHWWlnuqq_M125']: ##bkg
    structure[name]  = {
        'isSignal' : 0,
        'isData'   : 0
    }

#ggHWWlnuqq_M500_S_B_I
structure['ggHWWlnuqq_M500'] = {
    'isSignal' : 1,
    'isData'   : 0
}


structure['vbfHWWlnuqq_M500'] = {
    'isSignal' : 1,
    'isData'   : 0
}


'''

#ggHWWlnuqq_M500_S_B_I
structure['ggHWWlnuqq_M500_S_B_I'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['ggHWWlnuqq_M500_S'] = {
    'isSignal' : 1,
    'isData'   : 0
}

#ggHWWlnuqq_M500_S_B_I
structure['VBFHToWWToLNuQQ_M500_S_B_I'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['VBFHToWWToLNuQQ_M500_S'] = {
    'isSignal' : 1,
    'isData'   : 0
}

structure['ggWW_MELA'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['qqWW_MELA'] = {
    'isSignal' : 0,
    'isData'   : 0
}
'''



structure['DATA']  = {
                  'isSignal' : 0,
                  'isData'   : 1
              }
