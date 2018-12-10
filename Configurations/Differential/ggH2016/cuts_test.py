# cuts

#cuts = {}
 
_tmp = [
    'osof',
    'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10',
    'trailingE13',
    'metPfType1>20',
    'mll>12',
    'ptll>30'
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

## Signal regions
_tmp = [
    'mth>=60',
    'mtw2>30',
    'std_vector_electron_passConversionVeto[1] == 1',
    'zeroJet',
    'bVeto'
]
addcut('hww2l2v_13TeV_0j', _tmp)

_tmp = [
    'mth>=60',
    'mtw2>30',
    'std_vector_electron_passConversionVeto[1] == 1',
    'oneJet',
    'bVeto'
]
addcut('hww2l2v_13TeV_1j', _tmp)
