#Aliases (mostly btag)

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

#bWP = '0.1522' #Loose
bWP = '0.4506'
bWPtight = '0.7738'

eleWP_new = 'mvaFall17V2Iso_WP90_tthmva_70'
muWP_new  = 'cut_Tight_HWWW_tthmva_80'

aliases['bVeto'] = {
    'expr': '(Sum$( CleanJet_pt > 20.0 && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+' ) == 0)'
}


aliases['bVeto_1j'] = {
    'expr': '(Sum$( CleanJet_pt > 30.0 && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+' ) == 1)'
}

aliases['bReq'] = {
    'expr': '(Sum$( CleanJet_pt > 30.0 && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+' ) >= 2)'
}
aliases['btagSF'] = {
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5) ) ) ) )',
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


aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
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

aliases['AZH_mA_minus_mH_test'] = {
    'linesToAdd': [
       '.L %s/src/PlotsConfigurations/Configurations/AToZH_Full/AZH_patch.cc++' % os.getenv('CMSSW_BASE')
    ],
    'class': 'AZH_patch',
    'args': ("AZH_mA_minus_mH")
}

aliases['AZH_Amass_test'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Amass")
}


aliases['AZH_Hmass_test'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Hmass")
}

aliases['AZH_Zmass'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Zmass")
}


aliases['AZH_ChiSquare_test'] = {
    'class': 'AZH_patch',
    'args': ("AZH_ChiSquare")
}

aliases['AZH_Tophadronic_test'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Tophadronic")
}

aliases['AZH_Topleptonic_test'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Topleptonic")
}
aliases['AZH_Whadronic_test'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Whadronic")
}
aliases['AZH_Wleptonic_test'] = {
    'class': 'AZH_patch',
    'args': ("AZH_Wleptonic")
}
#aliases['ZH3l_mTlmet_test'] = {
#    'class': 'ZH3l_patch',
#    'args': ("mTlmet")
#}

#aliases['ZH3l_mTlmetj_test'] = {
#    'class': 'ZH3l_patch',
#    'args': ("mTlmetj")
#}

aliases['ZH3l_mTlmetjj_test'] = {
    'class': 'AZH_patch',
    'args': ("mTlmetjj")
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

