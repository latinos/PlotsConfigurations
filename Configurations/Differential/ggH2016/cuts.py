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

## DY control regions               
_tmp = [
    'mth<60',
    'mll>40 && mll<80',
    'zeroJet',
    'bVeto'
]
addcut('hww2l2v_13TeV_dytt_of0j', _tmp)

_tmp = [
    'mth<60',
    'mll>40 && mll<80',
    'oneJet',
    'bVeto'
]
addcut('hww2l2v_13TeV_dytt_of1j', _tmp)

## Top control regions
_tmp = [
    'mll>50',
    'mtw2>30',
    'zeroJet',
    'Sum$(std_vector_jet_pt > 20. && std_vector_jet_cmvav2 > -0.5884) != 0'
]
addcut('hww2l2v_13TeV_top_of0j', _tmp)

_tmp = [
    'mll>50',
    'mtw2>30',
    'oneJet',
    'std_vector_jet_cmvav2[0] > -0.5884'
]
addcut('hww2l2v_13TeV_top_of1j', _tmp)

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
