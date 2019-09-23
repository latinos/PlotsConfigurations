#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake_em', 'Fake_me', 'DATA')]

bAlgo = 'DeepB'
bWP = '0.1241'


aliases['bVeto'] = {
'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1241) == 0) && mth > 60'
}

aliases['bVetoDY'] = {                                                                                                              
'expr': '(Sum$(CleanJet_pt > 30. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1241) == 0) && mth < 60'                       
}



aliases['btag1'] = {
'expr': '(    Alt$(CleanJet_pt[0],0)>30 \
           && Alt$(CleanJet_pt[1],0)>30 \
           && ( ( Alt$(abs(CleanJet_eta[0]),99)<2.5 && Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],0) > 0.1241 ) \
             || ( Alt$(abs(CleanJet_eta[1]),99)<2.5 && Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],0) > 0.1241 ) ) \
         )' 
}



aliases['bVetoSF'] = {
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5) ) ) ) )',
'samples': mc
}



aliases['bVetoSFDY'] = {                                                                                                            
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5) ) ) ) )',                                                                                             
'samples': mc                                                                                                                       
}                                                                                                                                    


aliases['btag1SF'] = {
'expr': '( ( ( Alt$(CleanJet_pt[0], 0)>30 && Alt$(abs(CleanJet_eta[0]),99)<2.5 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[0]], 1) ) + ( Alt$(CleanJet_pt[0], 0)<30 || Alt$(abs(CleanJet_eta[0]),99)>2.5 ) )* \
           ( ( Alt$(CleanJet_pt[1], 0)>30 && Alt$(abs(CleanJet_eta[1]),99)<2.5 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[1]], 1) ) + ( Alt$(CleanJet_pt[1], 0)<30 || Alt$(abs(CleanJet_eta[1]),99)>2.5 ) ) )\
        ',
'samples': mc
}

aliases['btagSF'] = {
'expr': '( bVetoSF*bVeto +  bVetoSFDY*bVetoDY + btag1SF*btag1  + ( (!bVeto) && (!bVetoDY) &&  (!btag1) ) )',
'samples': mc
}


systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']

for s in systs:
  aliases['btagSF'+s+'up'] = { 'expr': 'bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_up_'+s) + '+bVetoDY*'+aliases['bVetoSFDY']\
['expr'].replace('shape','shape_up_'+s) + '+btag1*'+ aliases['btag1SF']['expr'].replace('shape','shape_up_'+s), 'samples':mc  }  
  aliases['btagSF'+s+'down'] = { 'expr': 'bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_down_'+s) + '+bVetoDY*'+aliases['bVetoSFDY']['expr'].replace('shape','shape_down_'+s) + '+btag1*'+ aliases['btag1SF']['expr'].replace('shape','shape_down_'+s), 'samples':mc  }


