#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake_lep', 'DATA')]

bAlgo = 'DeepB'
bWP = '0.1522'

aliases['bVeto1'] = {
    'expr': '(Sum$(Jet_pt > 20. && Jet_btagCSVV2 > 0.8484) == 0)'
}
aliases['bVeto2'] = {
    'expr': '(Sum$(Jet_pt > 20. && Jet_btagDeepB > 0.1522) == 0)'
}
aliases['bVeto3'] = {
      'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagCSVV2[CleanJet_jetIdx] > 0.8484) == 0)'
}
aliases['bVeto'] = {
      'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)'
}
aliases['tauVeto_ww'] = {
    'expr': '(Sum$(Tau_pt > 18 && Tau_rawIso >=1 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[0],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[0],-9999.))-pi)-pi, 2) ) >= 0.3 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[1],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[1],-9999.))-pi)-pi, 2) ) >= 0.3) == 0)'
}

