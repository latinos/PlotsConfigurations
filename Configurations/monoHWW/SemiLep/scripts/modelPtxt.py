import ROOT

model_dict = {
    '2HDMa': {
        'model_str': '2HDM+a, A #rightarrow a + h (WW #rightarrow l#nuqq\')',
        'coup_str' : 'sin#theta = 0.35, tan#beta = 1.0, m_{a} = 150 GeV, m_{#chi} = 10 GeV',
        'm_str'    : 'A',
    },
    'darkHiggs': {
        'decay_str': 'Dark Higgs, Z\' #rightarrow DM + s (WW)',
        'model_str': 'Majorana DM',
        'coup_str' : '#theta = 0.01, g_{q} = 0.25, g_{#chi} = 1',
        'm_str'     : 'Z\'',
    },
}

def mod_PT(x1, y1, x2, y2, model, mp_str, chan='ww'):
    dec_str = model_dict[model]['decay_str']
    mod_str = model_dict[model]['model_str']+', '+mp_str
    cop_str = model_dict[model]['coup_str']

    if 'semi' in chan: dec_str = dec_str.replace('WW', 'WW #rightarrow l#nuqq\'')
    if 'full' in chan: dec_str = dec_str.replace('WW', 'WW #rightarrow 2l2#nu')
    if 'none' in chan: dec_str = dec_str.split(',')[0]

    pavetext = ROOT.TPaveText(x1, y1, x2, y2, 'NDC')
    #pavetext.SetNDC()
    pavetext.SetLineColor(0)
    pavetext.SetFillColor(0)
    pavetext.SetBorderSize(1)
    pavetext.SetShadowColor(0)
    pavetext.SetTextFont(42)
    #pavetext.SetTextSize(0.021)
    pavetext.SetTextSize(0.03)
    pavetext.SetTextAlign(12)
    pavetext.AddText(dec_str)
    pavetext.AddText(mod_str)
    pavetext.AddText(cop_str)
    #pavetext.Draw()
    return pavetext
