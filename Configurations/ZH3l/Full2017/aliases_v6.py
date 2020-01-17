#Aliases (mostly btag)

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

#2017
#bWP = '0.1522' #Loose
bWP = '0.4941'

aliases['bVeto'] = {
    'expr': '(Sum$( CleanJet_pt > 20.0 && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+' ) == 0)'
}

aliases['btagSF'] = {
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5) ) ) ) )',
'samples': mc
}

systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']

for s in systs:

    aliases['btagSF'+s+'up']   = { 
        'expr': aliases['btagSF']['expr'].replace('shape','shape_up_'+s),
        'samples':mc  
    }
    aliases['btagSF'+s+'down'] = { 
        'expr': aliases['btagSF']['expr'].replace('shape','shape_down_'+s),
        'samples':mc  
    }

aliases['MuIsoTight'] = {
    'expr' : '(abs(Lepton_pdgId[0]) == 11 || abs(Muon_pfRelIso04_all[Lepton_muonIdx[0]]) < 0.1) && \
              (abs(Lepton_pdgId[1]) == 11 || abs(Muon_pfRelIso04_all[Lepton_muonIdx[1]]) < 0.1) && \
              (abs(Lepton_pdgId[2]) == 11 || abs(Muon_pfRelIso04_all[Lepton_muonIdx[2]]) < 0.1)',
}
