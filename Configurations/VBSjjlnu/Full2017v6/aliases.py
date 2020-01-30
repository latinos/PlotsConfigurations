import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

bAlgo = 'DeepB'
bWP = '0.1522'

aliases['bVeto'] = {
    'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)'
}

aliases['bReq'] = {
    'expr': '(Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) >= 1)'
}


aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': 'bVeto*bVetoSF + bReq*bReqSF + ( (!bVeto) && (!bReq) )',
    'samples': mc
}

# LastProcessing did not create (anti)topGenPt for ST samples with _ext1
lastcopy = (1 << 13)

aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': ['singleTop', 'ttbar']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
     'samples': ['singleTop', 'ttbar']
}

aliases['topGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == 6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
     'samples': ['singleTop', 'ttbar']
}

aliases['antitopGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == -6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
     'samples': ['singleTop', 'ttbar']
}

aliases['Top_pTrw'] = {
    'expr': 'isTTbar * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPtOTF) * TMath::Exp(0.0615 - 0.0005 * antitopGenPtOTF))) + isSingleTop',
     'samples': ['singleTop', 'ttbar']
}

# systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']

# for s in systs:
#   aliases['btagSF'+s+'up'] = { 'expr': '( bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_up_'+s)+'+btag0*'+aliases['btag0SF']['expr'].replace('shape','shape_up_'+s)+'+btag1*'+aliases['btag1SF']['expr'].replace('shape','shape_up_'+s)+'+btag2*'+aliases['btag2SF']['expr'].replace('shape','shape_up_'+s)+' + ( (!bVeto) && (!btag0) && (!btag1) && (!btag2) ) )', 'samples':mc  }
#   aliases['btagSF'+s+'down'] = { 'expr': '( bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_down_'+s)+'+btag0*'+aliases['btag0SF']['expr'].replace('shape','shape_down_'+s)+'+btag1*'+aliases['btag1SF']['expr'].replace('shape','shape_down_'+s)+'+btag2*'+aliases['btag2SF']['expr'].replace('shape','shape_down_'+s)+' + ( (!bVeto) && (!btag0) && (!btag1) && (!btag2) ) )', 'samples':mc  }


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
#     'samples': "Fake"           
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


aliases['DNNoutput'] = {
    'class': 'MVAReader',
    # Using Z->mm factors for both electron and muon regions
    'args':(config_val),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/patches/nvtx_reweight.cc+' % configurations
   ],
    'samples' : mc      
}