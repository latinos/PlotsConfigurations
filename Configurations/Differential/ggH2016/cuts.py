# cuts

import re

#cuts = {}

# imported from samples.py:
# samples, signals, pthBins, njetBinning

_tmp = [
    'mll>12',
    'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10',
    'metPfType1>20',
    'ptll>30',
    'osof',
    'trailingE13'
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = {'expr': ' && '.join(exprs)}

### sample lists separating signal bins

slist_njsignal = [sname for sname in samples if sname not in signals]
for sname in signals:
    sample = samples[sname]
    for bname in sample['subsamples']:
        if re.match('.*_NJ_.*', bname):
            slist_njsignal.append('%s/%s' % (sname, bname))

slist_pthsignal = [sname for sname in samples if sname not in signals]
for sname in signals:
    sample = samples[sname]
    for bname in sample['subsamples']:
        if re.match('.*_PTH_.*', bname):
            slist_pthsignal.append('%s/%s' % (sname, bname))

njetCuts = {
    '0': 'zeroJet',
    '1': 'oneJet',
    '2': 'twoJet',
    '3': 'threeJet',
    'GE4': 'manyJets'
}

pthCuts = {}
for pth in pthBins:
    if pth.startswith('GT'):
        pthCuts[pth] = 'pTWW >= %s' % pth[2:]
    else:
        pthCuts[pth] = 'pTWW >= %s && pTWW < %s' % tuple(pth.split('_'))

### Control regions

# top || DY || WW
crCut = '(mtw2>30 && mll>50 && !bVeto && ((zeroJet && Sum$(std_vector_jet_pt > 20. && std_vector_jet_breq) != 0) || Sum$(std_vector_jet_pt > 30. && std_vector_jet_breq) != 0)) || (mth<60 && mll>40 && mll<80 && bVeto) || (mth>60 && mtw2>30 && mll>100 && bVeto)'

# top + DY + WW
categorization = '(mtw2>30 && mll>50 && !bVeto)*(%s)+(mth<60 && mll>40 && mll<80 && bVeto)*(%s)+(mth>60 && mtw2>30 && mll>100 && bVeto)*(%s)'

def addcr(name, binning, cutsMap, slist):
    addcut(name, [crCut])
    cuts[name]['categories'] = []
    cuts[name]['samples'] = slist

    topcat = []
    for ibin, bin in enumerate(binning):
        cuts[name]['categories'].append('%s_top_2016' % bin)
        if ibin != 0:
            topcat.append('%d*(%s)' % (ibin, cutsMap[bin]))
    
    dycat = []
    for ibin, bin in enumerate(binning):
        cuts[name]['categories'].append('%s_DY_2016' % bin)
        if ibin == 0:
            dycat.append('%d' % len(binning))
        else:
            dycat.append('%d*(%s)' % (ibin, cutsMap[bin]))
    
    wwcat = []
    for ibin, bin in enumerate(binning):
        cuts[name]['categories'].append('%s_WW_2016' % bin)
        if ibin == 0:
            wwcat.append('%d' % (2 * len(binning)))
        else:
            wwcat.append('%d*(%s)' % (ibin, cutsMap[bin]))
    
    cuts[name]['categorization'] = categorization % ('+'.join(topcat), '+'.join(dycat), '+'.join(wwcat))


addcr('hww_CR_catNJ', njetBinning, njetCuts, slist_njsignal)
addcr('hww_CR_catPTH', pthBins, pthCuts, slist_pthsignal)

### Signal regions

pt2cats = [
    ('pt2lt20', 'std_vector_lepton_pt[1] < 20.'),
    ('pt2ge20', 'std_vector_lepton_pt[1] >= 20.')
]
flavcats = [
    ('em', 'abs(std_vector_lepton_flavour[0]) == 11'),
    ('me', 'abs(std_vector_lepton_flavour[0]) == 13')
]
chargecats = [
    ('pm', 'std_vector_lepton_flavour[0] > 0'),
    ('mp', 'std_vector_lepton_flavour[0] < 0')
]

def addsr(name, binning, cutsMap, slist):
    addcut(name, ['mth>=60', 'mtw2>30', 'bVeto'])
    cuts[name]['categories'] = []
    cuts[name]['samples'] = slist

    cats = []
    for ibin, bin in enumerate(binning):
        for pt2cat, _ in pt2cats:
            for flavcat, _ in flavcats:
                for chargecat, _ in chargecats:
                    cuts[name]['categories'].append('%s_cat%s%s%s_2016' % (bin, pt2cat, flavcat, chargecat))

        if ibin != 0:
            cats.append('%d*(%s)' % (8 * ibin, cutsMap[bin]))

    cats.append('4*(%s)' % pt2cats[1][1])
    cats.append('2*(%s)' % flavcats[1][1])
    cats.append('(%s)' % chargecats[1][1])

    # all bins cover the full phase space - no need for a default category
    cuts[name]['categorization'] = '+'.join(cats)


addsr('hww_NJ', njetBinning, njetCuts, slist_njsignal)
addsr('hww_PTH', pthBins, pthCuts, slist_pthsignal)

#cuts = {'hww_NJ': cuts['hww_NJ']}
