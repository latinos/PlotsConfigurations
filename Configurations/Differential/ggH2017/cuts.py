# cuts

#cuts = {}

_tmp = [
    'osof',
    'Lepton_pt[0]>20 && Sum$(Lepton_pt>10) == 2',
    'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
    'trailingE13',
    'MET_pt > 20',
    'mll>12',
    'ptll>30',
    'mtw2>30.'
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

## DY control regions
_tmp = [
    'mth<60',
    'mll>30 && mll<80',
    'bVeto'
]
addcut('dycr_incl', _tmp)

_tmp = [
    'mth<60',
    'mll>30 && mll<80',
    'zeroJet',
    'bVeto'
]
addcut('dycr_0j', _tmp)

_tmp = [
    'mth<60',
    'mll>30 && mll<80',
    'oneJet',
    'bVeto'
]
addcut('dycr_1j', _tmp)

_tmp = [
    'mth<60',
    'mll>30 && mll<80',
    'manyJet',
    'bVeto'
]
addcut('dycr_ge2j', _tmp)

## Top control regions
_tmp = [
    'mll>50',
    '!bVeto'
]
addcut('topcr_incl', _tmp)

_tmp = [
    'mll>50',
    'zeroJet',
    '!bVeto'
]
addcut('topcr_0j', _tmp)

_tmp = [
    'mll>50',
    'oneJet',
    'leadingBJet'
]
addcut('topcr_1j', _tmp)

_tmp = [
    'mll>50',
    'manyJet',
    'atleastoneBJet'
]
addcut('topcr_ge2j', _tmp)

## Signal regions
pt2confs = [
    ('pt2lt20', 'Lepton_pt[1] < 20.'),
    ('pt2ge20', 'Lepton_pt[1] >= 20.')
]
lepconfs = [
    ('em', 'abs(Lepton_pdgId[0]) == 11'),
    ('me', 'abs(Lepton_pdgId[0]) == 13'),
    ('emmp', 'Lepton_pdgId[0] == 11'),
    ('mmep', 'Lepton_pdgId[0] == 13'),
    ('epmm', 'Lepton_pdgId[0] == -11'),
    ('mpem', 'Lepton_pdgId[0] == -13')
]

srcuts = []
for pt2, pt2cut in pt2confs:
    srcuts.append((pt2, [pt2cut]))
    for lep, lepcut in lepconfs:
        srcuts.append((lep + '_' + pt2, [lepcut, pt2cut]))

def addsr(name, cuts):
    addcut(name, cuts)
    for suffix, expr in srcuts:
        addcut(name + '_' + suffix, cuts + expr)

_tmp = [
    'mth>=60',
    'bVeto'
]
addsr('sr_incl', _tmp)

pthBinning1 = [0., 20., 45., 80., 120., 200., 6500.]
pthBinning2 = [0., 30., 60., 100., 200., 350., 6500.]
yhBinning = [0., 0.15, 0.3, 0.6, 0.9, 1.2, 2.5, 10.]
njetBinning = [0, 1, 2, 3, 4]

for ipt in range(len(pthBinning1) - 1):
    low, high = pthBinning1[ipt:ipt+2]
    addsr('sr_pth_%.0f_%.0f' % (low, high), _tmp + ['pTWW > %f && pTWW < %f' % (low, high)])

for ipt in range(len(pthBinning2) - 1):
    low, high = pthBinning2[ipt:ipt+2]
    addsr('sr_pth_%.0f_%.0f' % (low, high), _tmp + ['pTWW > %f && pTWW < %f' % (low, high)])

#for n in njetBinning:
#    if n == 0:
#        njcut = 'std_vector_jet_pt[0] < 20'
#    elif n == njetBinning[-1]:
#        njcut = 'std_vector_jet_pt[%d] < 20' % n
#    else:
#        njcut = 'std_vector_jet_pt[%d] > 20 && std_vector_jet_pt[%d] < 20' % (n - 1, n)
#
#    addsr('sr_nj_%d' % n, _tmp + [njcut])
