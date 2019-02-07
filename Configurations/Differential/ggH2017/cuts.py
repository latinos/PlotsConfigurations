# cuts

import re

#cuts = {}

# imported from samples.py:
# samples, signals

_tmp = [
    'mll>12',
    'Lepton_pt[0]>25 && Sum$(Lepton_pt>10) == 2',
    'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
    'MET_pt > 20',
    'ptll>30',
    'osof',
    'trailingE13'
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = {'expr': ' && '.join(exprs)}

# treat all CR as categories (total 10)
addcut('hww_CR', ['1'])

njbinning = [
    ('reco0j', 'zeroJet'),
    ('reco1j', 'oneJet'),
    ('reco2j', 'twoJet'),
    ('reco3j', 'threeJet'),
    ('recoge4j', 'manyJets')
]
nnjbins = len(njbinning)

cuts['hww_CR']['categories'] = []

categorization = '-1'

categorization += '+(mth<60 && mll>40 && mll<80 && bVeto)'
dycategorization = []
for ibin, (bname, bcut) in enumerate(njbinning):
    cuts['hww_CR']['categories'].append('catDY' + bname)
    dycategorization.append('%d*%s' % (ibin + 1, bcut))
categorization += '*(' + '+'.join(dycategorization) + ')'

categorization += '+(mtw2>30 && mll>50)'
categorization += '*(%d*btag0*zeroJet' % (nnjbins + 1)
categorization += '+bReq'
topcategorization = []
for ibin, (bname, bcut) in enumerate(njbinning):
    cuts['hww_CR']['categories'].append('cattop' + bname)
    if ibin != 0:
        topcategorization.append('%d*%s' % (ibin + nnjbins + 1, bcut))
categorization += '*(' + '+'.join(topcategorization) + ')'
categorization += ')'

categorization += '+(mth>60 && mtw2>30 && bVeto && mll>100)'
highmllcategorization = []
for ibin, (bname, bcut) in enumerate(njbinning):
    cuts['hww_CR']['categories'].append('cathighmll' + bname)
    highmllcategorization.append('%d*%s' % (ibin + 2 * nnjbins + 1, bcut))
categorization += '*(' + '+'.join(highmllcategorization) + ')'

cuts['hww_CR']['categorization'] = categorization

## Signal regions
pt2confs = [
    ('pt2lt20', 'Lepton_pt[1] < 20.'),
    ('pt2ge20', 'Lepton_pt[1] >= 20.')
]
lepconfs = [
    ('emmp', 'Lepton_pdgId[0] == 11'),
    ('mmep', 'Lepton_pdgId[0] == 13'),
    ('epmm', 'Lepton_pdgId[0] == -11'),
    ('mpem', 'Lepton_pdgId[0] == -13')
]

def addsr(name, srbins, signalbins):
    apply_to = [sname for sname in samples if sname not in signals]
    for sname in signals:
        sample = samples[sname]
        for bname in sample['subsamples']:
            if re.match(signalbins, bname):
                apply_to.append('%s/%s' % (sname, bname))

    cuts[name]['samples'] = apply_to
    cuts[name]['categories'] = []
    categorization = []
    for ibin, (bname, bcut) in enumerate(srbins):
        for pt2, _ in pt2confs:
            for lep, _ in lepconfs:
                cuts[name]['categories'].append(bname + '_cat' + lep + pt2)

        if ibin != 0:
            categorization.append('%d * (%s)' % (8 * ibin, bcut))

    categorization.append('4 * (%s)' % pt2confs[1][1])
    for ilep, (_, lepcut) in enumerate(lepconfs):
        if ilep != 0:
            categorization.append('%d * (%s)' % (ilep, lepcut))

    # all bins cover the full phase space - no need for a default category
    cuts[name]['categorization'] = ' + '.join(categorization)
    print cuts[name]['categorization']

_tmp = [
    'mth>=60',
    'mtw2>30',
    'bVeto'
]

addcut('hww_PTH', _tmp)
addcut('hww_NJ', _tmp)

pthBinning = ['0', '20', '30', '45', '60', '80', '100', '120', '155', '200', '260', '350', 'inf']
#yhBinning = [0., 0.15, 0.3, 0.6, 0.9, 1.2, 2.5, 10.]
njetBinning = ['0', '1', '2', '3', '4+']

srBins = []
for ipt in range(len(pthBinning) - 1):
    low, high = pthBinning[ipt:ipt+2]

    if high == 'inf':
        binName = 'GT%s' % low
        cut = 'pTWW >= %s' % low
    else:
        binName = '%s_%s' % (low, high)
        cut = 'pTWW >= %s && pTWW < %s' % (low, high)

    srBins.append((binName, cut))
        
addsr('hww_PTH', srBins, 'PTH_.*')

srBins = []
for nj in njetBinning:
    if nj.endswith('+'):
        binName = 'GE%s' % nj[:-1] # correct
        cut = 'Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.5) >= %s' % nj[:-1]
    elif nj == '0':
        binName = '0'
        cut = 'Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.5) == 0'
    else:
        binName = str(nj)
        cut = 'Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.5) == %s' % nj

    srBins.append((binName, cut))

addsr('hww_NJ', srBins, 'NJ_.*')

