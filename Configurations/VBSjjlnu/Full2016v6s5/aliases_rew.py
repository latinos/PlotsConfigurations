import os
import copy
import inspect

thisfile = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
conf_folder = os.path.dirname(thisfile) # Full2017v6s5
vbsjjlnu_folder = os.path.dirname(conf_folder) # VBSjjlnu
configurations = os.path.dirname(vbsjjlnu_folder) # Configurations

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

############################################
# DNN reader

mva_reader_path = os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2018v6s5/mva/'
models_path = '/eos/home-d/dmapelli/public/latino/Full2018v6s5/'

aliases['DNNoutput_boosted'] = {
    'class': 'MVAReaderBoosted',
    'args': ( models_path +'boos_sig_mjjincl/models/v13/', False, 0),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L ' + mva_reader_path + 'mva_reader_boosted.cc+', 
    ],
}

aliases['DNNoutput_resolved'] = {
    'class': 'MVAReaderResolved',
    'args': ( models_path+ '/res_sig_mjjincl/models/v18/', False, 1),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L ' + mva_reader_path + 'mva_reader_resolved.cc+', 
    ],
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

## top weight from 2017/2018
# aliases['isTTbar'] = {
#     'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
#     'samples': ['top']
# }

# aliases['isSingleTop'] = {
#     'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
#      'samples': ['top']
# }

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

# alternative top weight from 2016 ggH
## BROKEN ON SOME SAMPLES
# aliases['Top_pTrw'] = {
#     'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
#     'samples': ['top']
# }

# aliases['fake_weight_corrected'] = {
#     'class': 'FakeWeightCorrector',
#     'args': ("%s/VBSjjlnu/Full2017v6/corrections/fakeweight_correction.root" % configurations, 
#                 "mvaFall17V1Iso_WP90", "fakeW_ele_mvaFall17V1Iso_WP90_mu_cut_Tight_HWWW_mu10_ele35", 
#                 os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v5/mvaFall17V1Iso_WP90/EleFR_jet35.root",
#                 os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v5/mvaFall17V1Iso_WP90/ElePR.root"),
#     'linesToAdd' : [
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         '.L %s/patches/fakeweight_corrector.cc+' % configurations
#      ],
#     'samples': ["Fake"]
# }


# aliases['nvtx_reweighting'] = {
#     'class': 'NvtxReweight',
#     # Using Z->mm factors for both electron and muon regions
#     'args':("%s/VBSjjlnu/Full2017v6/corrections/zmmnorm_reweighting_Zmm_fit_2017.txt" % configurations),
#     'linesToAdd' : [
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         '.L %s/patches/nvtx_reweight.cc+' % configurations
#    ],
#     'samples' : mc      
# }

# aliases['deltaetavbs_reweighting'] = {
#     'class': 'DeltaEtaVbsReweight',
#     'args':("%s/VBSjjlnu/Full2017v6s5/corrections/reweight_ratiodatamc_wjets_deltaetavbs_mu_fit_scaled.txt" % configurations),
#     'linesToAdd' : [
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         '.L %s/VBSjjlnu/Full2017v6s5/corrections/deltaetavbs_reweight.cc+' % configurations
#    ],
#     'samples' : ["Wjets"]
# }


# aliases['Wpt_lhe'] = {
#     'class': 'WptLHE',
#     'args':(),
#     'linesToAdd' : [
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         '.L %s/VBSjjlnu/Full2016v6s5/macros/Wpt_lhe.cc+' % configurations
#    ],
#     'samples' : ["Wjets"]
# }

# reweight_path = conf_folder+"/corrections/corr_factors/reweight_wjets_nohorns_"
reweight_path = conf_folder+"/corrections/corr_factors/reweight_wjets_"

aliases['deltaetavbs_reweight'] = {
    'class': 'ReweightDeltaEta',
    'args':(reweight_path+"deltaetavbs_ele.root", reweight_path+"deltaetavbs_mu.root", "wf_norm", 7.6),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/corrections/reweight_deltaetavbs.cc+' % conf_folder
   ],
    'samples' : ["Wjets"]
}

aliases['leptonpt_reweight'] = {
    'class': 'ReweightLeptonPt',
    'args':(reweight_path+"leptonpt_ele.root", reweight_path+"leptonpt_mu.root", "wf_norm", 500),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/corrections/reweight_leptonpt.cc+' % conf_folder
   ],
    'samples' : ["Wjets"]
}

