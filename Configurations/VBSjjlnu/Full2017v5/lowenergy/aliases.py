#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

bAlgo = 'DeepB'
bWP = '0.1522'

aliases['bVeto'] = {
'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)'
}

aliases['btag0'] = {
'expr': '( Alt$(CleanJet_pt[0],0)<30  \
           && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522)>0 \
         )'
}

aliases['btag1'] = {
'expr': '(    Alt$(CleanJet_pt[0],0)>30 && Alt$(abs(CleanJet_eta[0]),99)<2.5\
           && Alt$(CleanJet_pt[1],0)<30 \
           && Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]], 0) > 0.1522 )'
}

aliases['btag2'] = {
'expr': '(    Alt$(CleanJet_pt[0],0)>30 \
           && Alt$(CleanJet_pt[1],0)>30 \
           && ( ( Alt$(abs(CleanJet_eta[0]),99)<2.5 && Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],0) > 0.1522 ) \
             || ( Alt$(abs(CleanJet_eta[1]),99)<2.5 && Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],0) > 0.1522 ) ) \
         )' 
}

# NB These scale factors depend on the selections defined above, if different selections are used also the following expressions need to be changed!
aliases['bVetoSF'] = {
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5) ) ) ) )',
'samples': mc
}


aliases['btag0SF'] = {
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || CleanJet_pt>30 || abs(CleanJet_eta)>2.5) ) ) ) )',
'samples': mc
}

aliases['btag1SF'] = {
'expr': '( ( Alt$(CleanJet_pt[0], 0)>30 && Alt$(abs(CleanJet_eta[0]),99)<2.5 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[0]], 1) ) + ( Alt$(CleanJet_pt[0], 0)<30 || Alt$(abs(CleanJet_eta[0]),99)>2.5 ) )',
'samples': mc
}

aliases['btag2SF'] = {
'expr': '( ( ( Alt$(CleanJet_pt[0], 0)>30 && Alt$(abs(CleanJet_eta[0]),99)<2.5 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[0]], 1) ) + ( Alt$(CleanJet_pt[0], 0)<30 || Alt$(abs(CleanJet_eta[0]),99)>2.5 ) )* \
           ( ( Alt$(CleanJet_pt[1], 0)>30 && Alt$(abs(CleanJet_eta[1]),99)<2.5 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[1]], 1) ) + ( Alt$(CleanJet_pt[1], 0)<30 || Alt$(abs(CleanJet_eta[1]),99)>2.5 ) ) )\
        ',
'samples': mc
}

aliases['btagSF'] = {
'expr': '( bVetoSF*bVeto + btag0SF*btag0 + btag1SF*btag1 + btag2SF*btag2 + ( (!bVeto) && (!btag0) && (!btag1) && (!btag2) ) )',
'samples': mc
}


systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']

for s in systs:
  aliases['btagSF'+s+'up'] = { 'expr': '( bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_up_'+s)+'+btag0*'+aliases['btag0SF']['expr'].replace('shape','shape_up_'+s)+'+btag1*'+aliases['btag1SF']['expr'].replace('shape','shape_up_'+s)+'+btag2*'+aliases['btag2SF']['expr'].replace('shape','shape_up_'+s)+' + ( (!bVeto) && (!btag0) && (!btag1) && (!btag2) ) )', 'samples':mc  }
  aliases['btagSF'+s+'down'] = { 'expr': '( bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_down_'+s)+'+btag0*'+aliases['btag0SF']['expr'].replace('shape','shape_down_'+s)+'+btag1*'+aliases['btag1SF']['expr'].replace('shape','shape_down_'+s)+'+btag2*'+aliases['btag2SF']['expr'].replace('shape','shape_down_'+s)+' + ( (!bVeto) && (!btag0) && (!btag1) && (!btag2) ) )', 'samples':mc  }



aliases['fourj_lep_deltaphi'] = {
            'class': 'FourJetsVars',
            'args': ("fourjet_lep_deltaphi"),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/check_fakes/fourjet_class.cc+'
            ]           
}

aliases['fourj_met_deltaphi'] = {
            'class': 'FourJetsVars',
            'args': ("fourjet_met_deltaphi"),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/check_fakes/fourjet_class.cc+'
            ]  
}

aliases['fourj_lep_ptratio'] = {
            'class': 'FourJetsVars',
            'args': ("fourjet_lep_ptratio"),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/check_fakes/fourjet_class.cc+'
            ]  
}

aliases['fourj_pmet'] = {
            'class': 'FourJetsVars',
            'args': ("fourjet_pmet"),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/check_fakes/fourjet_class.cc+'
            ]  
}


aliases['lep_pmet'] = {
            'class': 'FourJetsVars',
            'args': ("lep_pmet"),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/check_fakes/fourjet_class.cc+'
            ]  
}

aliases['fourj_lep_ptratio'] = {
            'class': 'FourJetsVars',
            'args': ("fourjet_lep_ptratio"),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/check_fakes/fourjet_class.cc+'
            ]  
}


aliases['fourj_pt'] = {
            'class': 'FourJetsVars',
            'args': ("fourjet_pt"),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/check_fakes/fourjet_class.cc+'
            ]  
}




aliases['fake_weight_corrected'] = {
    'class': 'FakeWeightCorrector',
    'args': (os.getenv('CMSSW_BASE') +"/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017/lowenergy/fakeweight_correction.root", 
                "mvaFall17V1Iso_WP90", "fakeW_ele_mvaFall17V1Iso_WP90_mu_cut_Tight_HWWW_mu10_ele35", 
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v5/mvaFall17V1Iso_WP90/EleFR_jet35.root",
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v5/mvaFall17V1Iso_WP90/ElePR.root"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L '+os.getenv('CMSSW_BASE')+'/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017/fakeweight_corrector.cc+'
    ],
    'samples': "Fake"           
}


aliases["V_EWK_correction"] = {
    'class': 'V_EWKcorrection',
    'args': (os.getenv('CMSSW_BASE') +"/src/LatinoAnalysis/Gardener/python/data/ewk/kewk_w_for_python.txt", 1),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L '+os.getenv('CMSSW_BASE')+'/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017/V_EWK_NLO_weights.cc+'
    ],
    'samples': "Wjets" 
}


aliases['nvtx_reweighting'] = {
    'class': 'NvtxReweight',
    'args': (os.getenv('CMSSW_BASE') +"/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017/lowenergy/nvtx_weights_ele_Zeefit.txt",
            os.getenv('CMSSW_BASE') +"/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017/lowenergy/nvtx_weights_mu_Zmmfit.txt"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L '+os.getenv('CMSSW_BASE')+'/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017/nvtx_reweight.cc+'
    ],
    'samples' : mc      
}
