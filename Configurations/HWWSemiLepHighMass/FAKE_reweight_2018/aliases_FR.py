import os
import copy
import inspect
import numpy as np

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
## samples, signals
#signal_file = '2HDMa_signal.py'
#if os.path.exists(signal_file) :
#    handle = open(signal_file,'r')
#    exec(handle)
#    handle.close()
#else:
#    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')


mc = [skey for skey in samples if skey not in ('FAKE', 'DATA')]

eleWP    = 'mvaFall17V1Iso_WP90'
muWP     = 'cut_Tight_HWWW'

LepWPCut='(Lepton_isTightElectron_'+eleWP+'[0] > 0.5 || Lepton_isTightMuon_'+muWP+'[0] > 0.5)'

Lep1WPCut='(Alt$(Lepton_isTightElectron_'+eleWP+'[1], 0) > 0.5 || Alt$(Lepton_isTightMuon_'+muWP+'[1], 0) > 0.5)'

###### Lepton WP ######

aliases['WPTight'] = {
    'expr': LepWPCut,
}


###### PromptGenMatch ######

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch1l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0], 0)',
    'samples': mc
}

###### SFweight ######

# single ele trigger eff fix
#aliases['ele_trig_eff'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'TrigEff_1lep',
#    'args': ('/afs/cern.ch/user/a/arun/public/fixedTextfiles/2018/mvaid/Ele32_pt_eta_efficiency_withSys_Run2018.txt'),
#    'samples': mc
#}
#
#aliases['TriggerEffWeight_1l_fixed'] = {
#    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l',
#    'samples': mc
#}
eff_tr_dir = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/TriggEff/fixedTextfiles/"
aliases['ele_trig_eff'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': (eff_tr_dir+'2018/mvaid/Ele32_pt_eta_efficiency_withSys_Run2018.txt'),
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[0] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l',
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed_u'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[1] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_u',
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed_d'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[2] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_d',
    'samples': mc
}

aliases['WPTightSF'] = {
    'expr': 'Lepton_tightElectron_'+eleWP+'_IdIsoSF[0]*Lepton_tightMuon_'+muWP+'_IdIsoSF[0]',
    'samples': mc
}

# data/MC scale factors
aliases['SFweight1l'] = {
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'Lepton_RecoSF[0]', 'EMTFbug_veto']),
    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed[0]', 'Lepton_RecoSF[0]', 'EMTFbug_veto']),
    'samples': mc
}

## # variations of tight lepton WP
#aliases['SFweightEleUp'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Up[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
#    'samples': mc
#}
#aliases['SFweightEleDown'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Down[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
#    'samples': mc
#}
#aliases['SFweightMuUp'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Up[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
#    'samples': mc
#}
#aliases['SFweightMuDown'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Down[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
#    'samples': mc
#}

###### bVeto ######

###### top ######

##### DY Z pT reweighting

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': mc
}

aliases['getGenZpt_OTF'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/patches/getGenZpt.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'getGenZpt',
    'samples': ['DY', 'DYlow']
}

handle = open('%s/src/PlotsConfigurations/Configurations/patches/DYrew30.py' % os.getenv('CMSSW_BASE'),'r')
exec(handle)
handle.close()

aliases['DY_NLO_pTllrw'] = {
    'expr': '('+DYrew['2018']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY', 'DYlow']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2018']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY', 'DYlow']
}

###### PU jet Id SF ######

#puidSFSource = ' {}/src/PlotsConfigurations/Configurations/patches/PUID_81XTraining_EffSFandUncties.root'.format(os.getenv('CMSSW_BASE'))

aliases['PUJetIdSF'] = {
    'expr' : 'TMath::Exp(Sum$( \
        (Jet_jetId>=2 \
        && ( (Jet_electronIdx1 != Lepton_electronIdx[0]) || Jet_electronIdx1 < 0 )  \
        && ( (Jet_muonIdx1 != Lepton_muonIdx[0] ) || Jet_muonIdx1 < 0 ) \
        )*TMath::Log(Jet_PUIDSF_loose)\
    ))',
  'samples': mc
}


###### W EWK nlo ######


aliases['LHEPartWlepPt'] = {
    'linesToAdd': ['.L %s/HWWSemiLepHighMass/LHEPartWlepPt.cc+' % configurations],
    'class': 'LHEPartWlepPt',
    'samples': 'Wjets'
}
data = np.genfromtxt(os.getenv('CMSSW_BASE')+'/src/LatinoAnalysis/Gardener/python/data/ewk/kewk_w.dat', skip_header=2, skip_footer=7)

weight_string = "("
uncert_string = "("
for row in data:
    low  = row[0]
    high = row[1]
    weight = (1+row[2])
    ucert = row[3]

    weight_string+="({}<LHEPartWlepPt[0] && LHEPartWlepPt[0]<={})\
                    *{}+".format(low, high, weight)
    uncert_string+="({}<LHEPartWlepPt[0] && LHEPartWlepPt[0]<={})\
                    *{}+".format(low, high, weight)
# remove trailing + sign and close parentheses
weight_string=weight_string[:-1]+")"
uncert_string=uncert_string[:-1]+")"

aliases['EWK_W_correction'] = {
    'expr': weight_string,
    'samples': 'Wjets'
}
aliases['EWK_W_correction_uncert'] = {
    'expr': uncert_string,
    'samples': 'Wjets'
}

aliases['kfact'] = { 
    'linesToAdd': [
	'gSystem->Load("%s/src/JHUGenMELA/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
        'gSystem->Load("libJHUGenMELAMELA.so","", kTRUE);',
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/kFactorUnc2.cc+' % os.getenv('CMSSW_BASE')
    ],  
    'class': 'kFactorUnc2',
    'args': ('PlotsConfigurations/Configurations/HWWSemiLepHighMass/wjets_kfactor_DH/HT_to_NLO_QCD_k_factors_all.root', 'k_factor_2017'),
    'samples': 'Wjets', 
}
#aliases['EWKnloW'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v6/2HDMa/EWKnloW.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'EWKnloW',
#    'samples': "Wjets"
#}

###### R(l[0], j) ######


aliases['Adphi_lVj'] = {
    'expr': 'TMath::Abs(Lepton_phi[0] - CleanJet_phi)',
}

aliases['dphi_lVj'] = {
    'expr': '(Adphi_lVj < 3.141592653)*Adphi_lVj + (Adphi_lVj >= 3.141592653)*TMath::Abs(Adphi_lVj - 2*3.141592653)',
}

aliases['deta_lVj'] = {
    'expr': 'TMath::Abs(Lepton_eta[0] - CleanJet_eta)',
}

aliases['dR_lVj'] = {
    'expr': 'TMath::Sqrt(deta_lVj*deta_lVj + dphi_lVj*dphi_lVj)',
}

#Jet_Et = 20
for Jet_Et in [10, 15, 20, 25, 30, 35, 40, 45]:
    aliases['PassJet_Et'+str(Jet_Et)] = {
        'expr': 'Sum$((dR_lVj > 1.)*(CleanJet_pt > '+str(Jet_Et)+')*(CleanJet_pt > 10 && abs(CleanJet_eta) < 2.5)) > 0.',
    }


# PostProcessing did not create (anti)topGenPt for ST samples with _ext1
lastcopy = (1 << 13)


aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': ['top']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
    'samples': ['top']
}

aliases['topGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == 6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}

aliases['antitopGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == -6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}

aliases['Top_pTrw'] = {
    'expr': 'isTTbar * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973))) + isSingleTop',
    'samples': ['top']
}

aliases['bWP'] = {
    'expr': '0.1241'
}
bJetV_req = '( CleanJet_pt > 20 && abs(CleanJet_eta) < 2.5 )'
bJetR_req = '( CleanJet_pt > 30 && abs(CleanJet_eta) < 2.5 )'

aliases['nbJet'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > bWP[0] && CleanJet_pt > 30)',
}

aliases['bVeto'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > bWP[0] && '+bJetV_req+' ) == 0',
}

aliases['bReq'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > bWP[0] && '+bJetR_req+' ) >= 1',
}
aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetV_req+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(!'+bJetV_req+'))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetR_req+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(!'+bJetR_req+'))))',
    'samples': mc
}
aliases['btagSF'] = {
    'expr': 'bVetoSF[0]*bVeto[0] + bReqSF[0]*bReq[0]',
    'samples': mc
}
for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:

    for targ in ['bVeto', 'bReq']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_down_%s' % shift)


    aliases['btagSF%sup' % shift] = {
        'expr': 'bVeto*bVetoSF{shift}up + bReq*bReqSF{shift}up + (!bVeto && !bReq)'\
                .format(shift = shift),
        'samples': mc
    }
    aliases['btagSF%sdown' % shift] = {
        'expr': 'bVeto*bVetoSF{shift}down + bReq*bReqSF{shift}down + (!bVeto && !bReq)'\
                .format(shift = shift),
        'samples': mc
    }
aliases['SFweight'] = {
    #'expr': ' * '.join(['SFweight1l[0]', 'WPTightSF[0]', 'PrefireWeight']),
    'expr': ' * '.join(['SFweight1l[0]','btagSF[0]']),
    'samples': mc
}

