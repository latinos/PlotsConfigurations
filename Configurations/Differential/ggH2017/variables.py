#variables = {}

# imported from samples.py:
# samples
# imported from cuts.py
# cuts

sr = [ckey for ckey in cuts if '_CR' not in ckey]

#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events'] = {
    'name': '0.5',
    'range': (1,0,1),
    'xaxis': 'events',
    'fold': 3
}

mthbinning = [60,80,90,100,110,120,130,150,200]
mllbinning = [10,25,35,40,45,50,55,70,90,210]
name = ''
mthbin = ['1'] # folding underflow -> always 1
for imth in range(1, len(mthbinning) - 1):
    mthbin.append('(mth >= %d)' % mthbinning[imth])
name += '+'.join(mthbin)
name += ' + %d*(' % (len(mthbinning) - 1)
mllbin = [] # 1-1 for first bin
for imll in range(1, len(mllbinning) - 1):
    mllbin.append('(mll >= %d)' % mllbinning[imll])
name += '+'.join(mllbin)
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
mthbin = ['1']
for imth in range(1, len(mthbinning) - 1):
    mthbin.append('(mth >= %d)' % mthbinning[imth])
name += '+'.join(mthbin)
name += ' + %d*(' % (len(mthbinning) - 1)
mllbin = []
for imll in range(1, len(mllbinning) - 1):
    mllbin.append('(mll >= %d)' % mllbinning[imll])
name += '+'.join(mllbin)
name += ') - 0.5'

variables['mllVSmth_6x6'] = {
    'name': name,
    'range': (36, 0., 36.),
    'xaxis': 'm^{ll}:m_{T}^{H}', #   x axis name
    'doWeight': 1, # do weighted plot too
    'cuts': sr
}
