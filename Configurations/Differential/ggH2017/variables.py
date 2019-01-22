#variables = {}

# imported from samples.py:
# samples
# imported from cuts.py
# cuts

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

pt2lt20Cuts = [ckey for ckey in cuts if ckey.endswith('pt2lt20')]
pt2ge20Cuts = [ckey for ckey in cuts if ckey.endswith('pt2ge20')]
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events'] = {
    'name': '1',
    'range': (1,0,2),
    'xaxis': 'events',
    'fold': 3
}

variables['mllVSmth_8x9'] = {
    'name': 'mll:mth', #   variable name    
    'range': ([60,80,90,100,110,120,130,150,200],[10,25,35,40,45,50,55,70,90,210],), #   variable range
    'xaxis': 'm_{ll}: m_{T}^{H}', #   x axis name
    'fold': 3,
    'doWeight': 1, # do weighted plot too
    'binX': 8,
    'binY': 9,
    'cuts': pt2ge20Cuts
}

variables['mllVSmth_6x6'] = {
    'name': 'mll:mth', #   variable name    
    'range': ([60,80,90,110,130,150,200],[10,25,40,50,70,90,210],), #   variable range
    'xaxis': 'm_{ll}: m_{T}^{H}', #   x axis name
    'fold': 3,
    'doWeight': 1, # do weighted plot too
    'binX': 6,
    'binY': 6,
    'cuts': pt2lt20Cuts
}
