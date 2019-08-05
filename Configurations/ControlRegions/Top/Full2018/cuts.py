# cuts

 # cuts

_tmp = [ 
    'Lepton_pt[0]>20. && Lepton_pt[1]>13.' ,
    '(abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25)',
    '(abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13)', 
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
    'fabs(Lepton_eta[0])<2.5 && fabs(Lepton_eta[1])<2.5',
    'Lepton_pt[1]>20', 
    'mll>12.',
    'PuppiMET_pt > 20.',
    'ptll > 30.',
    'mth > 60.',
    'Lepton_pdgId[0]*Lepton_pdgId[1] <0',
    ]

supercut = ' && '.join(_tmp)

cutdf = '(mtw2>30 && mll>50 && !bVeto && Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)'
cutsf = '(mtw2>30 && mll>110 && !bVeto && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 || Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13 ))'

categories=['zeroJet', 'oneJet', 'twoJet']



def addcut(name, cut, categories):
    cuts[name] = { 'expr': cut}
    cuts[name]["categories"] = categories
    cuts[name]["categorization"] = '0'
    for i,cat in enumerate(categories):
      cuts[name]["categorization"] += "+%d*(%s)" % (i, cat) 


addcut('top_df', cutdf, categories)
addcut('top_sf', cutsf, categories)

