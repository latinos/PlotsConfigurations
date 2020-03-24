#Aliases (mostly btag)

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

#2018
#bWP = '0.1241' #Loose
bWP = '0.4184'

aliases['bVeto'] = {
    'expr': '(Sum$( CleanJet_pt > 20.0 && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+' ) == 0)'
}

# Temporary patch for BTV postprocessor bug (no SF for eta < 0, <= 102X_nAODv5_Full2018v5)

#2018
btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepCSV_102XSF_V1.csv' % os.getenv('CMSSW_BASE')

aliases['Jet_btagSF_shapeFix'] = {
    'linesToAdd': [
        'gSystem->Load("libCondFormatsBTauObjects.so");',
        'gSystem->Load("libCondToolsBTau.so");',
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/btagsfpatch.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'BtagSF',
    'args': (btagSFSource,),
    'samples': mc
}

aliases['btagSF'] = {
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5) ) ) ) )',
'samples': mc
}

systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']

for s in systs:

    aliases['Jet_btagSF_shapeFix_up_%s' % s] = {
        'class': 'BtagSF',
        'args': (btagSFSource, 'up_' + s),
        'samples': mc
    }

    aliases['Jet_btagSF_shapeFix_down_%s' % s] = {
        'class': 'BtagSF',
        'args': (btagSFSource, 'down_' + s),
        'samples': mc
    }

    aliases['btagSF'+s+'up']   = { 
        'expr': aliases['btagSF']['expr'].replace('shapeFix','shapeFix_up_'+s),
        'samples':mc  
    }
    aliases['btagSF'+s+'down'] = { 
        'expr': aliases['btagSF']['expr'].replace('shapeFix','shapeFix_down_'+s),
        'samples':mc  
    }

aliases['PromptGenLepMatch3l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1]*Lepton_promptgenmatched[2], 0)',
    'samples': mc
}

aliases['LepWPCutNew'] = { 'expr': '(((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.8) || (abs(Lepton_pdgId[0])==11 && Electron_mvaTTH[Lepton_electronIdx[0]]>0.7)) && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.8) || (abs(Lepton_pdgId[1])==11 && Electron_mvaTTH[Lepton_electronIdx[1]]>0.7)) && ((abs(Lepton_pdgId[2])==13 && Muon_mvaTTH[Lepton_muonIdx[2]]>0.8) || (abs(Lepton_pdgId[2])==11 && Electron_mvaTTH[Lepton_electronIdx[2]]>0.7)))', 
                           'samples': mc + ['DATA'] 
}

aliases['AntitopGenPt'] = {
    'expr': 'Sum$(GenPart_pt*(GenPart_pdgId == -6 && (GenPart_statusFlags & 8192)))',
    'samples' : ['top']
}

aliases['TopGenPt'] = {
    'expr': 'Sum$(GenPart_pt*(GenPart_pdgId == 6 && (GenPart_statusFlags & 8192)))',
    'samples' : ['top']
}

aliases['Top_pTrw'] = {
    'expr': '(TopGenPt * AntitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * TopGenPt) * TMath::Exp(0.0615 - 0.0005 * AntitopGenPt))) + (TopGenPt * AntitopGenPt <= 0.)',
    'samples': ['top']
}
