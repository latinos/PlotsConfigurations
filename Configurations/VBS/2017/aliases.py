#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake_lep', 'DATA')]

bAlgo = 'DeepB'
bWP = '0.1522'

aliases['bVeto'] = {
    'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)'
}
aliases['tauVeto_ww'] = {
    'expr': '(Sum$(Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)<10 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[0],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[0],-9999.))-pi)-pi, 2) ) > 0.4 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[1],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[1],-9999.))-pi)-pi, 2) ) > 0.4) == 0)'
}
aliases['tauVeto_wz'] = {
    'expr': '(Sum$(Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)>20 && Alt$(Lepton_pt[3],0.)<10 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[0],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[0],-9999.))-pi)-pi, 2) ) > 0.4 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[1],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[1],-9999.))-pi)-pi, 2) ) > 0.4 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[2],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[2],-9999.))-pi)-pi, 2) ) > 0.4) == 0)'
}

aliases['tauVeto_zz'] = {
    'expr': '(Sum$(Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)>10 && Alt$(Lepton_pt[3],0.)>10 && Alt$(Lepton_pt[4],0.)<10 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[0],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[0],-9999.))-pi)-pi, 2) ) > 0.4 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[1],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[1],-9999.))-pi)-pi, 2) ) > 0.4 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[2],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[2],-9999.))-pi)-pi, 2) ) > 0.4 && sqrt( pow(Tau_eta - Alt$(Lepton_eta[3],-9999.), 2) + pow(abs(abs(Tau_phi - Alt$(Lepton_phi[3],-9999.))-pi)-pi, 2) ) > 0.4) == 0)'
}