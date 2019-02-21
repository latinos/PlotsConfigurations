# cuts

#cuts = {}

# imported from samples.py:
# samples, signals

_tmp = [
    'osof',
    'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10',
    'std_vector_electron_passConversionVeto[0] * std_vector_electron_passConversionVeto[1] == 1',
    'trailingE13'
]
supercut = ' && '.join(_tmp)

cuts['all'] = {'expr': '1'}
