#variables = {}

# imported from cuts.py
# cuts
# imported from samples.py
# samples signals

try:
    variables
except NameError:
    import collections
    variables = collections.OrderedDict()

variables['events'] = {
    'name': '0.5',
    'range': (1,0,1),
    'xaxis': 'events'
}

variables['mll'] = {
    'name': 'mll',
    'range': (31,0.,310.)
}

variables['mth'] = {
    'name': 'mth',
    'range': (30,0.,300.)
}

variables['met'] = {
    'name': 'metPfType1',
    'range': (50, 20., 220.),
    'xaxis': 'E_{T}^{miss} [GeV]',
}

variables['ptll'] = {
    'name': 'ptll',
    'range': (20,0,200),
    'xaxis': 'pt_{ll} [GeV]',
}

variables['dphill'] = {
    'name': 'abs(dphill)',     
    'range': (20,0,3.14),   
    'xaxis': ' #Delta #phi_{ll}',
}

# make the unrolled mth:mll distributions by hand

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
}
