# cuts

supercut = ' mll > 12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>13 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
            '

## Signal regions
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr',
}

cuts['hww2l2v_13TeV_withTrig_singleEl'] = {
   'expr': 'sr_withTrig_singleEl',
}

cuts['hww2l2v_13TeV_withTrig_singleMu'] = {
   'expr': 'sr_withTrig_singleMu',
}

cuts['hww2l2v_13TeV_withTrig_ElMu'] = {
   'expr': 'sr_withTrig_ElMu',
}
'''
cuts['hww2l2v_13TeV_withTrig_MuE'] = {
   'expr': 'sr_withTrig_MuE',
}
'''
cuts['hww2l2v_13TeV_withTrig'] = {
   'expr': 'sr_withTrig',
}
