#Aliases (mostly btag)

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
bkg = [skey for skey in samples if not skey.startswith('AZH')]

eleWP_new = 'mvaFall17V2Iso_WP90_tthmva_70'
muWP_new  = 'cut_Tight_HWWW_tthmva_80'

###########################################################################################
# b tagging WPs: https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL16preVFP
###########################################################################################

# DeepB = DeepCSV
bWP_loose_deepB  = '0.2027'
bWP_medium_deepB = '0.6001' 
bWP_tight_deepB  = '0.8819'

# DeepFlavB = DeepJet
bWP_loose_deepFlavB  = '0.0508'
bWP_medium_deepFlavB = '0.2598'
bWP_tight_deepFlavB  = '0.6502'

# Actual algo and WP definition. BE CONSISTENT!!
bAlgo = 'DeepFlavB' # ['DeepB','DeepFlavB']
bWP   = bWP_tight_deepFlavB
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
         
    aliases['btagSF'+syst+'up']   = { 
        'expr': aliases['btagSF']['expr'].replace('shape','shape_up_'+syst),
        'samples':mc  
    }

    aliases['btagSF'+syst+'down'] = { 
        'expr': aliases['btagSF']['expr'].replace('shape','shape_down_'+syst),
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

#################################### AZH variables ####################################################

aliases['AZH_mA_minus_mH_patch'] = {
    'linesToAdd': [
       '.L %s/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/AZH_patch_2016.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'AZH_patch',
    'args': ("AZH_mA_minus_mH"),
}

aliases['AZH_Amass'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Amass"),
    'samples': [skey for skey in samples if skey not in mc]
}

aliases['nbjet'] = {
    'class': 'AZH_patch',
    'args': ("nbjet"),
}

aliases['AZH_Hmass'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Hmass"),
    'samples': [skey for skey in samples if skey not in mc]
}

aliases['AZH_ChiSquare'] = {
    'class': 'AZH_patch',
    'args': ("AZH_ChiSquare"),
    'samples': [skey for skey in samples if skey not in mc]
}

aliases['AZH_Tophadronic'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Tophadronic")
}

aliases['AZH_mA_minus_mH_onebjet'] = {
    'class' : 'AZH_patch',
    'args' : ("AZH_mA_minus_mH_onebjet")
}

############## ellipse variables ###############

aliases['ellipse_mA_900_mH_400'] = {
    'linesToAdd' : ['.L %s/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/elliptical_bin.cc+' % os.getenv('CMSSW_BASE')],
    'class' : 'elliptical_bin',
    'args'  : (900,400,False),
    'samples' : bkg+['AZH_900_400']
}

aliases['ellipse_mA_500_mH_350'] = {
    'class' : 'elliptical_bin',
    'args'  : (500,350,False),
    'samples' : bkg+['AZH_500_350']
}

aliases['ellipse_mA_1000_mH_600'] = {
    'class' : 'elliptical_bin',
    'args'  : (1000,600,False),
    'samples' : bkg+['AZH_1000_600']
}

aliases['ellipse_mA_800_mH_600'] = {
    'class' : 'elliptical_bin',
    'args'  : (800,600,False),
    'samples' : bkg+['AZH_800_600']
}

#######################
### SFs for tthMVA  ###
#######################

aliases['SFweightEleUp'] = { 
    'expr': 'LepSF3l__ele_'+eleWP_new+'__Up',
    'samples': mc
}

aliases['SFweightEleDown'] = {
    'expr': 'LepSF3l__ele_'+eleWP_new+'__Do',
    'samples': mc
}

aliases['SFweightMuUp'] = {
    'expr': 'LepSF3l__mu_'+muWP_new+'__Up',
    'samples': mc
}

aliases['SFweightMuDown'] = {
    'expr': 'LepSF3l__mu_'+muWP_new+'__Do',
    'samples': mc
}


aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': ['WZ']
}

#aliases['ggZHreweight'] = {
#    'expr' : '(Sum$((GenPart_statusFlags&128)==128&&(abs(GenPart_pdgId)==11||abs(GenPart_pdgId)==13||abs(GenPart_pdgId)==15)&&abs(GenPart_pdgId[max(GenPart_genPartIdxMother,0)])==23)==2)*(0.0*(nGenJet==0)+0.20*(nGenJet==1)+0.26*(nGenJet==2)+0.38*(nGenJet==3)+0.37*(nGenJet==4)+0.34*(nGenJet==5)+0.32*(nGenJet==6)+0.31*(nGenJet==7)+0.29*(nGenJet==8)+0.26*(nGenJet==9)+0.25*(nGenJet==10)+0.24*(nGenJet==11)+0.20*(nGenJet==12)+0.20*(nGenJet==13)+0.24*(nGenJet==14)+0.21*(nGenJet==15)+0.21*(nGenJet==16)+0.17*(nGenJet==17)+0.12*(nGenJet==18)+1.19*(nGenJet>=19))+(Sum$((GenPart_statusFlags&128)==128&&(abs(GenPart_pdgId)==12||abs(GenPart_pdgId)==14||abs(GenPart_pdgId)==16)&&abs(GenPart_pdgId[max(GenPart_genPartIdxMother,0)])==23)==2)*(0.30*(nGenJet==0)+0.38*(nGenJet==1)+0.34*(nGenJet==2)+0.35*(nGenJet==3)+0.34*(nGenJet==4)+0.31*(nGenJet==5)+0.29*(nGenJet==6)+0.27*(nGenJet==7)+0.25*(nGenJet==8)+0.23*(nGenJet==9)+0.22*(nGenJet==10)+0.21*(nGenJet==11)+0.21*(nGenJet==12)+0.20*(nGenJet==13)+0.18*(nGenJet==14)+0.17*(nGenJet==15)+0.21*(nGenJet==16)+0.14*(nGenJet==17))',
#    'samples' : ['ggZH_hww']
#}


