# cuts

import re

#cuts = {}

# imported from samples.py:
# samples, signals, pthBins, njetBinning

_tmp = [
    'mll>12',
    'Lepton_pt[0]>25 && Sum$(Lepton_pt>10) == 2',
    'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
    'PuppiMET_pt > 20',
    'ptll>30',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'Lepton_pt[1] > 13.'
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = {'expr': ' && '.join('(%s)' % e for e in exprs)}

### sample lists separating signal bins

slist_njsignal = [sname for sname in samples if sname not in signals]
for sname in signals:
    sample = samples[sname]
    for bname in sample['subsamples']:
        if re.match('.*NJ_.*', bname):
            slist_njsignal.append('%s/%s' % (sname, bname))

slist_pthsignal = [sname for sname in samples if sname not in signals]
for sname in signals:
    sample = samples[sname]
    for bname in sample['subsamples']:
        if re.match('.*PTH_.*', bname):
            slist_pthsignal.append('%s/%s' % (sname, bname))

njetCutsProgressive = {
    '1': 'Alt$(CleanJet_pt[0], 0) > 30.',
    '2': 'Alt$(CleanJet_pt[1], 0) > 30.',
    '3': 'Alt$(CleanJet_pt[2], 0) > 30.',
    'GE4': 'Alt$(CleanJet_pt[3], 0) > 30.',
}

pthCutsProgressive = {}
for pth in pthBins[1:]:
    if pth.startswith('GT'):
        pthCutsProgressive[pth] = 'pTWW > %s' % pth[2:]
    else:
        pthCutsProgressive[pth] = 'pTWW > %s' % pth.split('_')[0]

### Control regions

# top || DY || WW
crCut = 'topcr || dycr || wwcr'

# top + DY + WW
categorization = 'topcr*({topcat})+dycr*({dyoffset}+{dycat})+wwcr*({wwoffset}+{wwcat})'

def addcr(name, binning, cutsMap, slist):
    addcut(name, [crCut])
    cuts[name]['categories'] = []
    cuts[name]['samples'] = slist

    topcat = []
    for bname in binning:
        cuts[name]['categories'].append('%s_top_2018' % bname)
        if bname != binning[0]:
            topcat.append('(%s)' % cutsMap[bname])
    
    dycat = []
    for bname in binning:
        cuts[name]['categories'].append('%s_DY_2018' % bname)
        if bname != binning[0]:
            dycat.append('(%s)' % cutsMap[bname])
    
    wwcat = []
    for bname in binning:
        cuts[name]['categories'].append('%s_WW_2018' % bname)
        if bname != binning[0]:
            wwcat.append('(%s)' % cutsMap[bname])
    
    cuts[name]['categorization'] = categorization.format(topcat='+'.join(topcat), dycat='+'.join(dycat), wwcat='+'.join(wwcat), dyoffset=len(binning), wwoffset=(2 * len(binning)))

addcr('hww_CR_catNJ', njetBinning, njetCutsProgressive, slist_njsignal)
addcr('hww_CR_catPTH', pthBins, pthCutsProgressive, slist_pthsignal)

### Signal regions

pt2cats = [
    ('pt2lt20', 'Lepton_pt[1] < 20.'),
    ('pt2ge20', 'Lepton_pt[1] >= 20.')
]
flavcats = [
    ('em', 'abs(Lepton_pdgId[0]) == 11'),
    ('me', 'abs(Lepton_pdgId[0]) == 13')
]
chargecats = [
    ('pm', 'Lepton_pdgId[0] < 0'),
    ('mp', 'Lepton_pdgId[0] > 0')
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
                    cuts[name]['categories'].append('%s_cat%s%s%s_2018' % (bname, pt2cat, flavcat, chargecat))

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

addcut('hww_ggH2J', ['sr', 'multiJet', 'mjj < 65. || 105. < mjj < 400.'])
cuts['hww_ggH2J']['categories'] = []
cuts['hww_ggH2J']['samples'] = slist_njsignal

for pt2cat, _ in pt2cats:
    for flavcat, _ in flavcats:
        cuts['hww_ggH2J']['categories'].append('cat%s%s_2018' % (pt2cat, flavcat))

cuts['hww_ggH2J']['categorization'] = '2*(%s)+(%s)' % (pt2cats[1][1], flavcats[1][1])
