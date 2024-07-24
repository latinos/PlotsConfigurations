# cuts


_tmp = [
    '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
    'Lepton_pt[0]>25.',
    'Lepton_pt[1]>20.',
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
    'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
    'mll>20.',
    'PuppiMET_pt > 20.',
    'ptll > 30.',
    'mth > 60.',
]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

_tmp = [
    'multiJet',
    'bVeto',
    #'detajj > 3.5',
    #'mjj >= 120.',
    'dnnScore_VBF_OFF > .5',
       ]
addcut('SR_VBF_OFF_2j', _tmp)

_tmp = [
    'multiJet',
    'bVeto',
    #'detajj < 3.5',
    #'mjj >= 120.',
    'dnnScore_ggH_OFF > .5',
       ]
addcut('SR_ggH_OFF_2j', _tmp)

_tmp = [
    'multiJet',
    'bVeto',
    #'detajj < 3.5',
    #'mjj >= 120.',
    'dnnScore_WW > .5',
    'dnnScore_top < .1'
       ]
addcut('WWCR_2j', _tmp)

_tmp = [
    'multiJet',
    '(bReq || (!bVeto && zeroJet))',
    #'detajj > 3.5',
    #'mjj >= 120.',
    'dnnScore_top > .5',
       ]
addcut('TopCR_2j', _tmp)
_tmp = [
    'multiJet',
    'bVeto',
    #'detajj > 3.5',
    #'mjj >= 120.',
    'dnnScore_VBF_ON > .5',
       ]
addcut('CR_VBF_ON_2j', _tmp)
_tmp = [
    'multiJet',
    'bVeto',
    #'detajj < 3.5',
    #'mjj >= 120.' ,
    'dnnScore_ggH_ON > .5',
       ]
addcut('CR_ggH_ON_2j', _tmp)
