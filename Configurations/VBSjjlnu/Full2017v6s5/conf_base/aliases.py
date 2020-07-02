import os
import copy
import inspect

configurations = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/"
conf_folder = configurations +"/VBSjjlnu/Full2017v6s5"

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

############################################
# DNN reader - Updated to 2017 specific

mva_reader_path = os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017v6s5/mva/'
models_path = '/eos/home-d/dmapelli/public/latino/Full2017v6s5/'

aliases['DNNoutput_boosted'] = {
    'class': 'MVAReaderBoosted_v72',
    'args': ( models_path +'/boos_sig_mjjincl/models/v72/', False, 0),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L ' + mva_reader_path + 'mva_reader_boosted_v72.cc+', 
    ],
}

aliases['DNNoutput_resolved'] = {
    'class': 'MVAReaderResolved_v70',
    'args': ( models_path+ '/res_sig_mjjincl/models/v70/', False, 1),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L ' + mva_reader_path + 'mva_reader_resolved_v70.cc+', 
    ],
}

aliases['DNNoutput'] = {
    'expr': '(VBS_category==0)*(DNNoutput_boosted) + (VBS_category==1)*(DNNoutput_resolved)'
}

aliases['detavbs_jetpt_bin'] = {
    'expr':'(VBS_category==0)*1 + \
            (VBS_category==1) * \
                (   2* ((deltaeta_vbs < 3.5)  && vbs_1_pt < 75) + \
                    3* ((deltaeta_vbs >= 3.5 && deltaeta_vbs < 5.5)  && vbs_1_pt < 75) + \
                    4* ((deltaeta_vbs >= 5.5)  && vbs_1_pt < 75) + \
                    \
                    5* ((deltaeta_vbs < 3)                        &&  ( vbs_1_pt >= 75 && vbs_1_pt <150)  ) + \
                    6* ((deltaeta_vbs >= 3  && deltaeta_vbs < 4)  &&  ( vbs_1_pt >= 75 && vbs_1_pt <150) ) + \
                    7* ((deltaeta_vbs >= 4)                       &&  ( vbs_1_pt >= 75 && vbs_1_pt <150) ) + \
                    \
                    8* ((deltaeta_vbs < 3.5)  &&  ( vbs_1_pt >= 150)  ) + \
                    9* ((deltaeta_vbs >= 3.5 )  &&  ( vbs_1_pt >= 150) ) \
                )'
}

############################################
# BTag

bAlgo = 'DeepB'
bWP = '0.1522'

aliases['bVeto'] = {
    'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)'
}

aliases['bReq'] = {
    'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) >= 1)'
}


aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<=20 || abs(CleanJet_eta)>=2.5))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<=20 || abs(CleanJet_eta)>=2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': '(bVeto*bVetoSF + bReq*bReqSF + ( (!bVeto) && (!bReq) ))',
    'samples': mc
}


systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']
#systs = ['jes']

for s in systs:
  aliases['btagSF'+s+'up'] = { 'expr': '(bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_up_'+s)+'+bReq*'+aliases['bReqSF']['expr'].replace('shape','shape_up_'+s)+'+ ( (!bVeto) && (!bReq) ))', 'samples':mc  }
  aliases['btagSF'+s+'down'] = { 'expr': '(bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_down_'+s)+'+bReq*'+aliases['bReqSF']['expr'].replace('shape','shape_down_'+s)+'+ ( (!bVeto) && (!bReq) ))', 'samples':mc  }

################################################################################################


# LastProcessing did not create (anti)topGenPt for ST samples with _ext1
lastcopy = (1 << 13)

aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': ['top']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
     'samples': ['top']
}

# aliases['topGenPtOTF'] = {
#     'expr': 'Sum$((GenPart_pdgId == 6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
#      'samples': ['top']
# }

# aliases['antitopGenPtOTF'] = {
#     'expr': 'Sum$((GenPart_pdgId == -6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
#      'samples': ['top']
# }

# aliases['Top_pTrw'] = {
#     'expr': 'isTTbar * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPtOTF) * TMath::Exp(0.0615 - 0.0005 * antitopGenPtOTF))) + isSingleTop',
#      'samples': ['top']
# }

aliases['fake_weight_corrected'] = {
    'class': 'FakeWeightCorrector',
    'args': ("%s/VBSjjlnu/Full2017v6/corrections/fakeweight_correction.root" % configurations, 
                "mvaFall17V1Iso_WP90", "fakeW_ele_mvaFall17V1Iso_WP90_mu_cut_Tight_HWWW_mu10_ele35", 
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v5/mvaFall17V1Iso_WP90/EleFR_jet35.root",
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v5/mvaFall17V1Iso_WP90/ElePR.root"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/patches/fakeweight_corrector.cc+' % configurations
     ],
    'samples': ["Fake"]
}

# PU jet Id SF

puidSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/JetPUID_effcyandSF.root' % os.getenv('CMSSW_BASE')

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/patches/pujetidsf_event.cc+' % configurations
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2017', 'loose'),
    'samples': mc
}

aliases['whad_pt'] = {
            'class': 'WhadPt',
            'args': (),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L {}/VBSjjlnu/Full2018v6s5/macros/whad_pt.cc+'.format(configurations)
            ]           
}
