# cuts

supercut = '1'

# Signal: both reconstructed leptons must be matched to generated leptons (two prompt leptons)
# Background: at least one of the reconstructed leptons must not be matched to a generated lepton (at least one non-prompt lepton)

# Trailing Lepton pT > 5 GeV
cuts['2electrons_SS'] = {
    'expr' : 'nElectron > 1 \
    && nMuon == 0 \
    && Alt$(Electron_charge[0],0) == Alt$(Electron_charge[1],0) \
    && Alt$(Electron_pt[1],0) > 5 \
    && abs(Electron_eta[0]) < 2.5 && abs(Electron_eta[1]) < 2.5 \
    && Alt$(Electron_mvaFall17V2Iso_WP90[0],0) == 1 && Alt$(Electron_mvaFall17V2Iso_WP90[1],0) == 1 \
    && Electron_convVeto[0] == 1 && Electron_convVeto[1] == 1 \
    && Electron_pfRelIso03_all[0] < 0.06 && Electron_pfRelIso03_all[1] \
    && ((abs(Electron_eta[0]) <= 1.479 && abs(Electron_dxy[0]) < 0.05 && abs(Electron_dz[0]) < 0.10) \
    ||  (abs(Electron_eta[0]) >  1.479 && abs(Electron_dxy[0]) < 0.10 && abs(Electron_dz[0]) < 0.20)) \
    && ((abs(Electron_eta[1]) <= 1.479 && abs(Electron_dxy[1]) < 0.05 && abs(Electron_dz[1]) < 0.10) \
    ||  (abs(Electron_eta[1]) >  1.479 && abs(Electron_dxy[1]) < 0.10 && abs(Electron_dz[1]) < 0.20))',
    'categories' : {
        'signal'     : '(Electron_genPartFlav[0] == 1 || Electron_genPartFlav[0] == 15) && (Electron_genPartFlav[1] == 1 || Electron_genPartFlav[1] == 15)',
        'background' : '(Electron_genPartFlav[0] != 1 && Electron_genPartFlav[0] != 15) || (Electron_genPartFlav[1] != 1 && Electron_genPartFlav[1] != 15)',
    }
}

cuts['2muons_SS'] = {
    'expr' : 'nElectron == 0 \
    && nMuon > 1 \
    && Alt$(Muon_charge[0],-1) == Alt$(Muon_charge[1],-2) \
    && Alt$(Muon_pt[1],0) > 5 \
    && abs(Muon_eta[0]) < 2.4 && abs(Muon_eta[1]) < 2.4 \
    && Muon_tightId[0] == 1 && Muon_tightId[1] == 1 \
    && abs(Muon_dz[0] < 0.1) && abs(Muon_dz[1]) < 0.1 \
    && Muon_pfRelIso04_all[0] < 0.4 && Muon_pfRelIso04_all[1] < 0.4 \
    && ((Muon_pt[0] <= 20 && abs(Muon_dxy[0]) < 0.1) || (Muon_pt[0] > 20 && abs(Muon_dxy[0]) < 0.2)) \
    && ((Muon_pt[1] <= 20 && abs(Muon_dxy[1]) < 0.1) || (Muon_pt[1] > 20 && abs(Muon_dxy[1]) < 0.2))',
    'categories' : {
        'signal'     : '(Muon_genPartFlav[0] == 1 || Muon_genPartFlav[0] == 15) && (Muon_genPartFlav[1] == 1 || Muon_genPartFlav[1] == 15)',
        'background' : '(Muon_genPartFlav[0] != 1 && Muon_genPartFlav[0] != 15) || (Muon_genPartFlav[1] != 1 && Muon_genPartFlav[1] != 15)',
    }
}


# Trailing Lepton pT > 10 GeV
cuts['2electrons_SS_10GeV'] = {
    'expr' : 'nElectron > 1 \
    && nMuon == 0 \
    && Alt$(Electron_charge[0],-1) == Alt$(Electron_charge[1],-2) \
    && Alt$(Electron_pt[1],0) > 10 \
    && abs(Electron_eta[0]) < 2.5 && abs(Electron_eta[1]) < 2.5 \
    && Alt$(Electron_mvaFall17V2Iso_WP90[0],0) == 1 && Alt$(Electron_mvaFall17V2Iso_WP90[1],0) == 1 \
    && Electron_convVeto[0] == 1 && Electron_convVeto[1] == 1 \
    && Electron_pfRelIso03_all[0] < 0.06 && Electron_pfRelIso03_all[1] \
    && ((abs(Electron_eta[0]) <= 1.479 && abs(Electron_dxy[0]) < 0.05 && abs(Electron_dz[0]) < 0.10) \
    ||  (abs(Electron_eta[0]) >  1.479 && abs(Electron_dxy[0]) < 0.10 && abs(Electron_dz[0]) < 0.20)) \
    && ((abs(Electron_eta[1]) <= 1.479 && abs(Electron_dxy[1]) < 0.05 && abs(Electron_dz[1]) < 0.10) \
    ||  (abs(Electron_eta[1]) >  1.479 && abs(Electron_dxy[1]) < 0.10 && abs(Electron_dz[1]) < 0.20))',
    'categories' : {
        'signal'     : '(Electron_genPartFlav[0] == 1 || Electron_genPartFlav[0] == 15) && (Electron_genPartFlav[1] == 1 || Electron_genPartFlav[1] == 15)',
        'background' : '(Electron_genPartFlav[0] != 1 && Electron_genPartFlav[0] != 15) || (Electron_genPartFlav[1] != 1 && Electron_genPartFlav[1] != 15)',
    }
}

cuts['2muons_SS_10GeV'] = {
    'expr' : 'nElectron == 0 \
    && nMuon > 1 \
    && Alt$(Muon_charge[0],-1) == Alt$(Muon_charge[1],-2) \
    && Alt$(Muon_pt[1],0) > 10 \
    && abs(Muon_eta[0]) < 2.4 && abs(Muon_eta[1]) < 2.4 \
    && Muon_tightId[0] == 1 && Muon_tightId[1] == 1 \
    && abs(Muon_dz[0] < 0.1) && abs(Muon_dz[1]) < 0.1 \
    && Muon_pfRelIso04_all[0] < 0.4 && Muon_pfRelIso04_all[1] < 0.4 \
    && ((Muon_pt[0] <= 20 && abs(Muon_dxy[0]) < 0.1) || (Muon_pt[0] > 20 && abs(Muon_dxy[0]) < 0.2)) \
    && ((Muon_pt[1] <= 20 && abs(Muon_dxy[1]) < 0.1) || (Muon_pt[1] > 20 && abs(Muon_dxy[1]) < 0.2))',
    'categories' : {
        'signal'     : '(Muon_genPartFlav[0] == 1 || Muon_genPartFlav[0] == 15) && (Muon_genPartFlav[1] == 1 || Muon_genPartFlav[1] == 15)',
        'background' : '(Muon_genPartFlav[0] != 1 && Muon_genPartFlav[0] != 15) || (Muon_genPartFlav[1] != 1 && Muon_genPartFlav[1] != 15)',
    }
}
