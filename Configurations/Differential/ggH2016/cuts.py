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
    'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13',
    'abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13'
    #'((abs(std_vector_lepton_flavour[0]) == 11 && std_vector_electron_passConversionVeto[0]) || (abs(std_vector_lepton_flavour[1]) == 11 && std_vector_electron_passConversionVeto[1]))' # only applied to SR in Full2016
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = {'expr': ' && '.join('(%s)' % e for e in exprs)}

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

njetCutsProgressive = {
    '1': 'std_vector_jet_pt[0] > 30.',
    '2': 'std_vector_jet_pt[1] > 30.',
    '3': 'std_vector_jet_pt[2] > 30.',
    'GE4': 'std_vector_jet_pt[3] > 30.'
}

pthCutsProgressive = {}
for pth in pthBins:
    if pth.startswith('GT'):
        pthCutsProgressive[pth] = 'pTWW > %s' % pth[2:]
    else:
        pthCutsProgressive[pth] = 'pTWW > %s' % pth.split('_')[0]

### Control regions

crCut = 'topcr || dycr || wwcr'

categorization = '{gencat}+dycr*{dyoffset}+wwcr*{wwoffset}'

def addcr(name, binning, cutsMap, slist):
    addcut(name, [crCut])
    cuts[name]['categories'] = []
    cuts[name]['samples'] = slist

    gencat = []
    for bname in binning[1:]:
        gencat.append('(%s)' % cutsMap[bname])

    for bname in binning:
        cuts[name]['categories'].append('%s_top_2016' % bname)
    
    for bname in binning:
        cuts[name]['categories'].append('%s_DY_2016' % bname)
    
    for bname in binning:
        cuts[name]['categories'].append('%s_WW_2016' % bname)
    
    cuts[name]['categorization'] = categorization.format(gencat='+'.join(gencat), dyoffset=len(binning), wwoffset=(2 * len(binning)))

addcr('hww_CR_catNJ', njetBinning, njetCutsProgressive, slist_njsignal)
addcr('hww_CR_catPTH', pthBins, pthCutsProgressive, slist_pthsignal)

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
    addcut(name, ['sr'])
    cuts[name]['categories'] = []
    cuts[name]['samples'] = slist

    cats = []
    for bname in binning:
        for pt2cat, _ in pt2cats:
            for flavcat, _ in flavcats:
                for chargecat, _ in chargecats:
                    cuts[name]['categories'].append('%s_cat%s%s%s_2016' % (bname, pt2cat, flavcat, chargecat))

        if bname != binning[0]:
            cats.append('(%s)' % cutsMap[bname])

    categorization = '8*(%s)' % ('+'.join(cats))
    categorization += '+4*(%s)' % pt2cats[1][1]
    categorization += '+2*(%s)' % flavcats[1][1]
    categorization += '+(%s)' % chargecats[1][1]

    # all bins cover the full phase space - no need for a default category
    cuts[name]['categorization'] = categorization

addsr('hww_NJ', njetBinning, njetCutsProgressive, slist_njsignal)
addsr('hww_PTH', pthBins, pthCutsProgressive, slist_pthsignal)
