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
    'args'       : ("2018", 3, "all","nominal"),
    'samples'    : mc
}

####################################################################################
# b tagging WPs: https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL18
####################################################################################

# DeepB = DeepCSV
bWP_loose_deepB  = '0.1208'
bWP_medium_deepB = '0.4168' 
bWP_tight_deepB  = '0.7665'

# DeepFlavB = DeepJet
bWP_loose_deepFlavB  = '0.0490'
bWP_medium_deepFlavB = '0.2783'
bWP_tight_deepFlavB  = '0.7100'

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

aliases['bReqSF'] = {
     'expr': '(TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_{}_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5)))))'.format(bSF),
     'samples': mc
}

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_{}_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))'.format(bSF),
    'samples': mc
}

aliases['btagSF'] = {
    'expr': '((bVeto*bVetoSF) + ((bReq || bVeto_1j)*bReqSF))',
    'samples': mc
}


for syst in ['lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
    for targ in ['bVeto', 'bReq']:
        alias = aliases['%sSF%sup' % (targ, syst)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_{}_shape'.format(bSF), 'btagSF_{}_shape_up_{}'.format(bSF,syst))

        alias = aliases['%sSF%sdown' % (targ, syst)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_{}_shape'.format(bSF), 'btagSF_{}_shape_down_{}'.format(bSF,syst))
         
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
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'nominal', 3, "std"),
    'samples'    : ['Fake']
}

# And variations - already divided by central values in formulas !
aliases['fakeW_EleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'EleUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_EleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'EleDown', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_MuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'MuUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_MuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'MuDown', 3, "std"),
    'samples'    : ['Fake']
}

aliases['fakeW_statEleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'StatEleUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_statEleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'StatEleDown', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_statMuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'StatMuUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeW_statMuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'StatMuDown', 3, "std"),
    'samples'    : ['Fake']
}
#################################### AZH variables ####################################################

aliases['AZH_mA_minus_mH_patch'] = {
    'linesToAdd': [
       '.L %s/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/AZH_patch_2018.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'AZH_patch_2018',
    'args': ("AZH_mA_minus_mH"),
}

aliases['AZH_Amass'] = {
    'class': 'AZH_patch_2018',
    'args': ("AZH_Amass"),
    'samples': [skey for skey in samples if skey not in mc]
}

aliases['nbjet'] = {
    'class': 'AZH_patch_2018',
    'args': ("nbjet"),
}

aliases['AZH_Hmass'] = {
    'class': 'AZH_patch_2018',
    'args': ("AZH_Hmass"),
    'samples': [skey for skey in samples if skey not in mc]
}

aliases['AZH_ChiSquare'] = {
    'class': 'AZH_patch_2018',
    'args': ("AZH_ChiSquare"),
    'samples': [skey for skey in samples if skey not in mc]
}

aliases['AZH_Tophadronic'] = {
    'class': 'AZH_patch_2018',
    'args': ("AZH_Tophadronic")
}

aliases['AZH_mA_minus_mH_onebjet'] = {
    'class' : 'AZH_patch_2018',
    'args' : ("AZH_mA_minus_mH_onebjet")
}

############## ellipse variables ###############

aliases['ellipse_mA_900_mH_400'] = {
    'linesToAdd' : ['.L %s/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/elliptical_bin_2018.cc+' % os.getenv('CMSSW_BASE')],
    'class' : 'elliptical_bin_2018',
    'args'  : (900,400,False),
    'samples' : bkg+['AZH_900_400']
}

aliases['ellipse_mA_500_mH_350'] = {
    'class' : 'elliptical_bin_2018',
    'args'  : (500,350,False),
    'samples' : bkg+['AZH_500_350']
}

aliases['ellipse_mA_1000_mH_600'] = {
    'class' : 'elliptical_bin_2018',
    'args'  : (1000,600,False),
    'samples' : bkg+['AZH_1000_600']
}

aliases['ellipse_mA_800_mH_600'] = {
    'class' : 'elliptical_bin_2018',
    'args'  : (800,600,False),
    'samples' : bkg+['AZH_800_600']
}

############## onebjet ellipse variables ###############

aliases['ellipse_onebjet_mA_900_mH_400'] = {
    'class' : 'elliptical_bin_2018',
    'args'  : (900,400,True),
    'samples' : bkg+['AZH_900_400']
}

aliases['ellipse_onebjet_mA_500_mH_350'] = {
    'class' : 'elliptical_bin_2018',
    'args'  : (500,350,True),
    'samples' : bkg+['AZH_500_350']
}

aliases['ellipse_onebjet_mA_1000_mH_600'] = {
    'class' : 'elliptical_bin_2018',
    'args'  : (1000,600,True),
    'samples' : bkg+['AZH_1000_600']
}

aliases['ellipse_onebjet_mA_800_mH_600'] = {
    'class' : 'elliptical_bin_2018',
    'args'  : (800,600,True),
    'samples' : bkg+['AZH_800_600']
}

#######################
### SFs for tthMVA  ###
#######################

# ttHMVA, LepSF variations are 1+delta
# Combining uncertainties, we want 1+sqrt(delta1^2+delta2^2)
aliases['ttHMVASFUL_eleUp'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2018", 3, "all", "eleUp"),
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
    'args'       : ("2018", 3, "all", "eleDown"),
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
    'args'       : ("2018", 3, "all", "muUp"),
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
    'args'       : ("2018", 3, "all", "muDown"),
    'samples'    : mc,
    'nominalOnly': 1
}

aliases['SFweightMuDown'] = {
    'expr': '1-TMath::Sqrt(TMath::Power(LepSF3l__mu_'+muWP+'__Do-1,2)+TMath::Power(ttHMVAULSF_muDown-1,2))',
    'samples': mc,
    'nominalOnly': 1
}

