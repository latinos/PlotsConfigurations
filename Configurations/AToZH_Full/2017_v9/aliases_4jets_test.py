#Aliases (mostly btag)

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
bkg = [skey for skey in samples if not skey.startswith('AZH')]
#bWP = '0.1522' #Loose
bWP = '0.4941'
bWPtight = '0.7738'

eleWP_new = 'mvaFall17V2Iso_WP90_tthmva_70'
muWP_new  = 'cut_Tight_HWWW_tthmva_80'

#######################################  b-tag definitions #######################

aliases['bVeto'] = {
    'expr': '(Sum$( CleanJet_pt > 20.0 && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+' ) == 0)'
}


aliases['bVeto_1j'] = {
    'expr': '(Sum$( CleanJet_pt > 30.0 && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+' ) == 1)'
}

aliases['bReq'] = {
    'expr': '(Sum$( CleanJet_pt > 30.0 && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+' ) >= 2)'
}

####################################### b-tagging SFs ################################

aliases['bReqSF'] = {
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5) ) ) ) )',
'samples': mc
}

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': '((bVeto*bVetoSF) + ((bReq || bVeto_1j)*bReqSF))',
    'samples': mc
}


systs = ['lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']

for s in systs:
    for targ in ['bVeto', 'bReq']:
         alias = aliases['%sSF%sup' % (targ, s)] = copy.deepcopy(aliases['%sSF' % targ])
	 alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_up_'+s)

	 alias = aliases['%sSF%sdown' % (targ, s)] = copy.deepcopy(aliases['%sSF' % targ])
	 alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_down_'+s)
         

    aliases['btagSF'+s+'up']   = { 
        'expr': aliases['btagSF']['expr'].replace('shape','shape_up_'+s),
        'samples':mc  
    }
    aliases['btagSF'+s+'down'] = { 
        'expr': aliases['btagSF']['expr'].replace('shape','shape_down_'+s),
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

aliases['PromptGenLepMatch3l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1]*Lepton_promptgenmatched[2], 0)',
    'samples': mc
}



aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
    'samples': ['top']
}

#################################### AZH variables ####################################################

aliases['AZH_mA_minus_mH_patch'] = {
    'linesToAdd': [
       '.L %s/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/AZH_patch.cc+' % os.getenv('CMSSW_BASE')
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


aliases['AZH_mA_minus_mH_4jets'] = {
    'class' : 'AZH_patch',
    'args' : ("AZH_mA_minus_mH_4jets")
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

