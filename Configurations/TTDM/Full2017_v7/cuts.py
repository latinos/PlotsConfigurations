# cuts

supercut = """Lepton_pt[0] > 25. && Lepton_pt[1] > 20. \
&& abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4"""

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

dy = [ 
    'nLepton>=2 && Alt$(Lepton_pt[2],0)<10',
    '(Lepton_pdgId[0]*Lepton_pdgId[1]) < 0',
    'mll > 20.',
    'Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) >= 1',
    'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > 0.4941) > 0'
]

addcut('inclusiveCR_ll', dy)
addcut('inclusiveCR_ee', dy + ['(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'])
addcut('inclusiveCR_mm', dy + ['(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'])
addcut('inclusiveCR_df', dy + ['(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'])

addcut('lowmt2CR_ll', dy + ['mt2ll < 80.'])
addcut('lowmt2CR_ee', dy + ['mt2ll < 80.', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'])
addcut('lowmt2CR_mm', dy + ['mt2ll < 80.', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'])
addcut('lowmt2CR_df', dy + ['mt2ll < 80.', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'])

addcut('dyCR_ll', dy + ['mt2ll > 80.', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106))'])
addcut('dyCR_ee', dy + ['mt2ll > 80.', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106))', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'])
addcut('dyCR_mm', dy + ['mt2ll > 80.', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106))', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'])
addcut('dyCR_df', dy + ['mt2ll > 80.', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106))', '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'])

ttW = [
    'nLepton >= 3 && Alt$(Lepton_pt[2],0)>10',
    'abs(Lepton_eta[2])<2.4',
    'mt2ll > 80.',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll < 76 || mll > 106))'
]

addcut('ttWCR_ll', ttW)

ttZ = [
    'nLepton >= 4 && Alt$(Lepton_pt[3],0)>10',
    'abs(Lepton_eta[2])<2.4 && abs(Lepton_eta[3])<2.4',
    'mt2ll > 80.'
]

addcut('ttZCR_ll', ttZ)

sameSign = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] > 0',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll < 76 || mll > 106))'
]

addcut('SSCR_ll', sameSign)
