#variables = {}

# imported from cuts.py
# cuts

import math

try:
    variables
except NameError:
    import collections
    variables = collections.OrderedDict()
    cuts = []

sr = [ckey for ckey in cuts if '_CR' not in ckey]
cr = [ckey for ckey in cuts if '_CR' in ckey]

#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events'] = {
    'name': '0.5',
    'range': (1,0,1),
    'xaxis': 'events'
}

mthbinning = [60,80,90,100,110,120,130,150,200]
mllbinning = [10,25,35,40,45,50,55,70,90,210]
name = ''
mllbin = ['1'] # folding underflow -> always 1
for imll in range(1, len(mllbinning) - 1):
    mllbin.append('(mll >= %d)' % mllbinning[imll])
name += '+'.join(mllbin)
name += ' + %d*(' % (len(mllbinning) - 1)
mthbin = [] # 1-1 for first bin
for imth in range(1, len(mthbinning) - 1):
    mthbin.append('(mth >= %d)' % mthbinning[imth])
name += '+'.join(mthbin)
name += ') - 0.5'

variables['mllVSmth_8x9'] = {
    'name': name,
    'range': (72, 0., 72.),
    'xaxis': 'm^{ll}:m_{T}^{H}', #   x axis name
    'doWeight': 1, # do weighted plot too
    'cuts': sr
}

mthbinning = [60,80,90,110,130,150,200]
mllbinning = [10,25,40,50,70,90,210]
name = ''
mllbin = ['1'] # folding underflow -> always 1
for imll in range(1, len(mllbinning) - 1):
    mllbin.append('(mll >= %d)' % mllbinning[imll])
name += '+'.join(mllbin)
name += ' + %d*(' % (len(mllbinning) - 1)
mthbin = [] # 1-1 for first bin
for imth in range(1, len(mthbinning) - 1):
    mthbin.append('(mth >= %d)' % mthbinning[imth])
name += '+'.join(mthbin)
name += ') - 0.5'

variables['mllVSmth_6x6'] = {
    'name': name,
    'range': (36, 0., 36.),
    'xaxis': 'm^{ll}:m_{T}^{H}', #   x axis name
    'doWeight': 1, # do weighted plot too
    'cuts': sr
}

mllbinning = [10,25,35,40,45,50,55,70,90,210]

variables['mll'] = {
    'name': 'mll',
    'range': (mllbinning,),
    'xaxis': 'm^{ll} [GeV]', #   x axis name
    'doWeight': 1, # do weighted plot too
    'cuts': cr
}

variables['jet1Eta'] = {
    'name': 'CleanJet_eta[0] * (CleanJet_pt[0] > 30.) - 5. * (CleanJet_pt[0] < 30.)',
    'range': (50, -4.7, 4.7),
    'xaxis': '#eta^{j1}',
    'doWeight': 1
}

variables['jet2Eta'] = {
    'name': 'CleanJet_eta[1] * (CleanJet_pt[1] > 30.) - 5. * (CleanJet_pt[1] < 30.)',
    'range': (50, -4.7, 4.7),
    'xaxis': '#eta^{j2}',
    'doWeight': 1
}

variables['met'] = {
    'name': 'PuppiMET_pt',
    'range': (50, 0., 100.),
    'xaxis': 'E_{T}^{miss} [GeV]',
    'doWeight': 1
}

variables['metPhi'] = {
    'name': 'PuppiMET_phi',
    'range': (50, -math.pi, math.pi),
    'xaxis': '#phi(E_{T}^{miss})',
    'doWeight': 1
}

variables['ptWW'] = {
    'name': 'pTWW',
    'range': (50, 0., 400.),
    'xaxis': 'p_{T}^{WW} [GeV]',
    'doWeight': 1,
    'cuts': cr
}

variables['ht'] = {
    'name': 'Sum$(CleanJet_pt * (CleanJet_pt > 30. && TMath::Abs(CleanJet_eta) < 4.7))',
    'range': (50, 0., 1000.),
    'xaxis': 'H_{T} [GeV]',
    'doWeight': 1,
    'cuts': cr
}
