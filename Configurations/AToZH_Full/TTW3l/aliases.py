#Aliases (mostly btag)

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
bkg = [skey for skey in samples if not skey.startswith('AZH')]

eleWP = 'mvaFall17V2Iso_WP90'
muWP  = 'cut_Tight_HWWW'

aliases['LepWPCut'] = {
    'expr': 'LepCut3l__ele_'+eleWP+'__mu_'+muWP+'*\
     ( ((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.82) || (abs(Lepton_pdgId[0])==11 && Lepton_mvaTTH_UL[0]>0.90)) \
    && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.82) || (abs(Lepton_pdgId[1])==11 && Lepton_mvaTTH_UL[1]>0.90)) \
    && ((abs(Lepton_pdgId[2])==13 && Muon_mvaTTH[Lepton_muonIdx[2]]>0.82) || (abs(Lepton_pdgId[2])==11 && Lepton_mvaTTH_UL[2]>0.90)) )'
}

aliases['ttHMVAULSF'] = {
    'linesToAdd' : ['.L %s/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/macros/ttHMVASF.C+' % os.getenv('CMSSW_BASE')],
    'class'      : 'ttHMVASF',
    'args'       : ("2017", 3, "all","nominal"),
    'samples'    : mc
}

####################################################################################
# b tagging WPs: https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL17
####################################################################################

# DeepB = DeepCSV
bWP_loose_deepB  = '0.1355'
bWP_medium_deepB = '0.4506' 
bWP_tight_deepB  = '0.7738'

# DeepFlavB = DeepJet
bWP_loose_deepFlavB  = '0.0532'
bWP_medium_deepFlavB = '0.3040'
bWP_tight_deepFlavB  = '0.7476'

# Actual algo and WP definition. BE CONSISTENT!!
bAlgo = 'DeepFlavB' # ['DeepB','DeepFlavB']
bWP   = bWP_medium_deepFlavB
bSF   = 'deepjet' # ['deepcsv','deepjet']

#######################################  b-tag definitions #######################

aliases['bVeto'] = {
        'expr': 'Sum$(CleanJet_pt > 20.0 && abs(CleanJet_eta) < 2.5 && Jet_btag{}[CleanJet_jetIdx] > {}) == 0'.format(bAlgo, bWP)
}

aliases['bVeto_1j'] = {
       'expr': '(Sum$(CleanJet_pt > 30.0 && abs(CleanJet_eta) < 2.5 && Jet_btag{}[CleanJet_jetIdx] > {}) == 1)'.format(bAlgo, bWP)
}

aliases['bReq'] = {
       'expr': '(Sum$(CleanJet_pt > 30.0 && abs(CleanJet_eta) < 2.5 && Jet_btag{}[CleanJet_jetIdx] > {}) >= 2)'. format(bAlgo, bWP)
}

####################################### b-tagging SFs ################################

### WP based approach
### only up/down splitting of btag variations
btagSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/btagSF/wp_deepJet_106XUL17_v3.csv' % os.getenv('CMSSW_BASE')

aliases['Jet_btagSF_deepjet_M'] = {
    'linesToAdd': [
        'gSystem->Load("libCondFormatsBTauObjects.so");',
        'gSystem->Load("libCondToolsBTau.so");',
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/btagSF_reader.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'BtagSF',
    'args': (btagSFSource,'central','deepjet'),
    'samples': mc
}

aliases['Jet_btagEff_deepjet_M'] = {
    'linesToAdd': [
        '.L %s/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/btagEff_reader2.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'btagEff_reader2',
    'args': ('2017'),
    'samples': mc
}

aliases['bReqSF'] = {
     'expr': '(TMath::Exp(Sum$(TMath::Log(((CleanJet_pt>30 && abs(CleanJet_eta)<2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx]<0.3040)*(1-(Jet_btagSF_deepjet_M[CleanJet_jetIdx]*Jet_btagEff_deepjet_M[CleanJet_jetIdx]))) \
                                         +((CleanJet_pt>30 && abs(CleanJet_eta)<2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx]>0.3040)*Jet_btagSF_deepjet_M[CleanJet_jetIdx]*Jet_btagEff_deepjet_M[CleanJet_jetIdx]) \
                                       +(1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5)))))) \
            / (TMath::Exp(Sum$(TMath::Log(((CleanJet_pt>30 && abs(CleanJet_eta)<2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx]<0.3040)*(1-(Jet_btagEff_deepjet_M[CleanJet_jetIdx]))) \
                                         +((CleanJet_pt>30 && abs(CleanJet_eta)<2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx]>0.3040)*Jet_btagEff_deepjet_M[CleanJet_jetIdx]) \
                                       +(1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))))',
     'samples': mc
}

aliases['bVetoSF'] = {
     'expr': '(TMath::Exp(Sum$(TMath::Log(((CleanJet_pt>20 && abs(CleanJet_eta)<2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx]<0.3040)*(1-(Jet_btagSF_deepjet_M[CleanJet_jetIdx]*Jet_btagEff_deepjet_M[CleanJet_jetIdx]))) \
                                         +((CleanJet_pt>20 && abs(CleanJet_eta)<2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx]>0.3040)*Jet_btagSF_deepjet_M[CleanJet_jetIdx]*Jet_btagEff_deepjet_M[CleanJet_jetIdx]) \
                                       +(1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5)))))) \
            / (TMath::Exp(Sum$(TMath::Log(((CleanJet_pt>20 && abs(CleanJet_eta)<2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx]<0.3040)*(1-(Jet_btagEff_deepjet_M[CleanJet_jetIdx]))) \
                                         +((CleanJet_pt>20 && abs(CleanJet_eta)<2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx]>0.3040)*Jet_btagEff_deepjet_M[CleanJet_jetIdx]) \
                                       +(1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))))',
     'samples': mc
}

aliases['btagSF'] = {
    'expr': '((bVeto*bVetoSF) + ((bReq || bVeto_1j)*bReqSF))',
    'samples': mc
}

for syst in ['isr', 'fsr','hdamp', 'jes','jer', 'pileup','qcdscale', 'statistic','topmass','type3','correlated','uncorrelated']:
    aliases['Jet_btagSF_deepjet_M_up_%s' % syst] = {
        'class': 'BtagSF',
        'args': (btagSFSource, 'up_' + syst,'deepjet'),
        'samples': mc
    }
    aliases['Jet_btagSF_deepjet_M_down_%s' % syst] = {
        'class': 'BtagSF',
        'args': (btagSFSource, 'down_' + syst,'deepjet'),
        'samples': mc
    }


    for targ in ['bVeto', 'bReq']:
        alias = aliases['%sSF%sup' % (targ, syst)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_{}_M'.format(bSF), 'btagSF_{}_M_up_{}'.format(bSF,syst))

        alias = aliases['%sSF%sdown' % (targ, syst)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_{}_M'.format(bSF), 'btagSF_{}_M_down_{}'.format(bSF,syst))
         
    aliases['btagSF%sup' % syst]   = { 
        'expr': aliases['btagSF']['expr'].replace('SF','SF' + syst + 'up'),
        'samples':mc
    }

    aliases['btagSF%sdown' % syst] = { 
        'expr': aliases['btagSF']['expr'].replace('SF','SF' + syst + 'down'),
        'samples':mc  
    }



aliases['Jet_PUIDSF'] = {
   'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose)))',
   'samples': mc
}

aliases['Jet_PUIDSF_up'] = {
    'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_up)))',
    'samples': mc
}

aliases['Jet_PUIDSF_down'] = {
    'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_down)))',
    'samples': mc
}

aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

aliases['PromptGenLepMatch3l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1]*Lepton_promptgenmatched[2], 0)',
    'samples': mc
}

aliases['PromptGenLepMatch4l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1]*Lepton_promptgenmatched[2]*Lepton_promptgenmatched[3], 0)',
    'samples': mc
}

aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
    'samples': ['top']
}

# Fake leptons transfer factor
aliases['fakeW'] = {
    'linesToAdd' : ['.L %s/src/PlotsConfigurations/Configurations/WW/FullRunII/Tools/fake_rate_reader.C+' % os.getenv('CMSSW_BASE')],
    'class'      : 'fake_rate_reader',
    'args'       : ('2017', '90', '82', 0.90, 0.82, 'nominal', 3, "std"),
    'samples'    : ['Fake']
}

# And variations - already divided by central values in formulas !
aliases['fakeW_EleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2017', '90', '82', 0.90, 0.82, 'EleUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_EleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2017', '90', '82', 0.90, 0.82, 'EleDown', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_MuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2017', '90', '82', 0.90, 0.82, 'MuUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_MuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2017', '90', '82', 0.90, 0.82, 'MuDown', 3, "std"),
    'samples'    : ['Fake']
}

aliases['fakeW_statEleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2017', '90', '82', 0.90, 0.82, 'StatEleUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_statEleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2017', '90', '82', 0.90, 0.82, 'StatEleDown', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_statMuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2017', '90', '82', 0.90, 0.82, 'StatMuUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_statMuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2017', '90', '82', 0.90, 0.82, 'StatMuDown', 3, "std"),
    'samples'    : ['Fake']
}
#################################### AZH variables ####################################################
aliases['hasGenA'] = {
    'expr' : 'Sum$(GenPart_pdgId==36) != 0',
    'samples' : [skey for skey in samples if skey.startswith('AZH')]
    }

############## ellipse variables ###############
### SFs for tthMVA  ###
#######################

# ttHMVA, LepSF variations are 1+delta
# Combining uncertainties, we want 1+sqrt(delta1^2+delta2^2)
aliases['ttHMVASFUL_eleUp'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2017", 3, "all", "eleUp"),
    'samples'    : mc,
    'nominalOnly': 1
}
aliases['SFweightEleUp'] = {
    'expr': '1+TMath::Sqrt(TMath::Power(LepSF3l__ele_'+eleWP+'__Up-1,2)+TMath::Power(ttHMVASFUL_eleUp-1,2))',
    'samples': mc,
    'nominalOnly': 1
}
aliases['ttHMVAULSF_eleDown'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2017", 3, "all", "eleDown"),
    'samples'    : mc,
    'nominalOnly': 1
}

aliases['SFweightEleDown'] = {
    'expr': '1-TMath::Sqrt(TMath::Power(LepSF3l__ele_'+eleWP+'__Do-1,2)+TMath::Power(ttHMVAULSF_eleDown-1,2))',
    'samples': mc,
    'nominalOnly': 1
}
aliases['ttHMVAULSF_muUp'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2017", 3, "all", "muUp"),
    'samples'    : mc,
    'nominalOnly': 1
}

aliases['SFweightMuUp'] = {
    'expr': '1+TMath::Sqrt(TMath::Power(LepSF3l__mu_'+muWP+'__Up-1,2)+TMath::Power(ttHMVAULSF_muUp-1,2))',
    'samples': mc,
    'nominalOnly': 1
}
aliases['ttHMVAULSF_muDown'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2017", 3, "all", "muDown"),
    'samples'    : mc,
    'nominalOnly': 1
}

aliases['SFweightMuDown'] = {
    'expr': '1-TMath::Sqrt(TMath::Power(LepSF3l__mu_'+muWP+'__Do-1,2)+TMath::Power(ttHMVAULSF_muDown-1,2))',
    'samples': mc,
    'nominalOnly': 1
}


