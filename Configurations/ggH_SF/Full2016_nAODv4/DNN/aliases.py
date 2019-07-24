#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake_ee', 'Fake_mm' , 'DATA')]

bAlgo = 'DeepB'
bWP = '0.2217'

aliases['sameFlavor'] = {
'expr': '((Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11))'
}

aliases['0j'] = {
'expr': '( Alt$(CleanJet_pt[0],0)<30 )'
}

aliases['1j'] = {
'expr': 'Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30'
}

aliases['2jggH'] = {
'expr': '( Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && ( abs(detajj)<3.5 || ( mjj<400 && abs(detajj)>=3.5 ) ) )'
}

aliases['2jVBF'] = {
'expr': '(Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && (mjj>=400 && abs(detajj)>=3.5))'
}

##datacards/hww2l2v_13TeV_2016_0jee_mlllt45/comb/SExpPre_comb_hww2l2v_13TeV_2016_0jee_mlllt45:Significance: 0.780526
##datacards/hww2l2v_13TeV_2016_1jee_mlllt50/comb/SExpPre_comb_hww2l2v_13TeV_2016_1jee_mlllt50:Significance: 0.566066
##datacards/hww2l2v_13TeV_2016_2jee_mlllt50/comb/SExpPre_comb_hww2l2v_13TeV_2016_2jee_mlllt50:Significance: 0.504887
##datacards/hww2l2v_13TeV_2016_2jee_vbf_mlllt55/comb/SExpPre_comb_hww2l2v_13TeV_2016_2jee_vbf_mlllt55:Significance: 0.485807
##datacards/hww2l2v_13TeV_2016_0jmm_mlllt45/comb/SExpPre_comb_hww2l2v_13TeV_2016_0jmm_mlllt45:Significance: 0.980383
##datacards/hww2l2v_13TeV_2016_1jmm_mlllt55/comb/SExpPre_comb_hww2l2v_13TeV_2016_1jmm_mlllt55:Significance: 0.844504
##datacards/hww2l2v_13TeV_2016_2jmm_mlllt65/comb/SExpPre_comb_hww2l2v_13TeV_2016_2jmm_mlllt65:Significance: 0.965655
##datacards/hww2l2v_13TeV_2016_2jmm_vbf_mlllt60/comb/SExpPre_comb_hww2l2v_13TeV_2016_2jmm_vbf_mlllt60:Significance: 0.99185

##datacards/hww2l2v_13TeV_2016_0jee_mthgt85/comb/SExpPre_comb_hww2l2v_13TeV_2016_0jee_mthgt85:Significance: 1.24158
##datacards/hww2l2v_13TeV_2016_1jee_mthgt40/comb/SExpPre_comb_hww2l2v_13TeV_2016_1jee_mthgt40:Significance: 1.11346
##datacards/hww2l2v_13TeV_2016_2jee_mthgt50/comb/SExpPre_comb_hww2l2v_13TeV_2016_2jee_mthgt50:Significance: 0.504662
##datacards/hww2l2v_13TeV_2016_2jee_vbf_mthgt45/comb/SExpPre_comb_hww2l2v_13TeV_2016_2jee_vbf_mthgt45:Significance: 0.476216
##datacards/hww2l2v_13TeV_2016_0jmm_mthgt90/comb/SExpPre_comb_hww2l2v_13TeV_2016_0jmm_mthgt90:Significance: 2.19526
##datacards/hww2l2v_13TeV_2016_1jmm_mthgtNO/comb/SExpPre_comb_hww2l2v_13TeV_2016_1jmm_mthgtNO:Significance: 1.34629
##datacards/hww2l2v_13TeV_2016_2jmm_mthgtNO/comb/SExpPre_comb_hww2l2v_13TeV_2016_2jmm_mthgtNO:Significance: 1.88546
##datacards/hww2l2v_13TeV_2016_2jmm_vbf_mthgtNO/comb/SExpPre_comb_hww2l2v_13TeV_2016_2jmm_vbf_mthgtNO:Significance: 3.29586

aliases['Higgs0jetee'] = {
'expr': '(mll < 45 && mth > 85)'
}

aliases['Higgs1jetee'] = {
'expr': '(abs(dphill) < 2.50 && mll < 50 && mth > 40)'
}

aliases['Higgs2jetee'] = {
'expr': '(abs(dphill) < 1.70 && mll < 50 && mth > 50)'
}

aliases['Higgsvbfee'] = {
'expr': '(abs(dphill) < 2.20 && mll < 55 && mth > 45)'
}

aliases['Higgs0jetmm'] = {
'expr': '(mll < 45 && mth > 90)'
}

aliases['Higgs1jetmm'] = {
'expr': '(abs(dphill) < 2.50 && mll < 55)'
}

aliases['Higgs2jetmm'] = {
'expr': '(abs(dphill) < 2.00 && mll < 65)'
}

aliases['Higgsvbfmm'] = {
'expr': '(abs(dphill) < 2.30 && mll < 60)'
}

aliases['ZVeto'] = {
'expr': '(fabs(91.1876 - mll) > 15)'
}

aliases['bVeto'] = {
'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0)'
}

aliases['btag0'] = {
'expr': '( Alt$(CleanJet_pt[0],0)<30  \
           && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217)>0 \
         )'
}

aliases['btag1'] = {
'expr': '(    Alt$(CleanJet_pt[0],0)>30 && Alt$(abs(CleanJet_eta[0]),99)<2.5\
           && Alt$(CleanJet_pt[1],0)<30 \
           && Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]], 0) > 0.2217 )'
}

aliases['btag2'] = {
'expr': '(    Alt$(CleanJet_pt[0],0)>30 \
           && Alt$(CleanJet_pt[1],0)>30 \
           && ( ( Alt$(abs(CleanJet_eta[0]),99)<2.5 && Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],0) > 0.2217 ) \
             || ( Alt$(abs(CleanJet_eta[1]),99)<2.5 && Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],0) > 0.2217 ) ) \
         )' 
}

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
