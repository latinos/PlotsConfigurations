#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake_em', 'Fake_me', 'DATA')]

bAlgo = 'DeepB'
bWP = '0.1522'

aliases['bVeto'] = {
'expr': '( ( Alt$(CleanJet_pt[0],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[0]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[1],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[1]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[2],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[2]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[3],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[3]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[4],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[4]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[5],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[5]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[6],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[6]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[7],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[7]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[8],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[8]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[9],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[9]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[10],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[10]],0)<'+bWP+' ) )\
      '
}

#aliases['btag0'] = {
#'expr': '( Alt$(CleanJet_pt[0],0)<30 \
#           &&    ( ( Alt$(CleanJet_pt[0],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[0]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[1],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[1]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[2],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[2]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[3],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[3]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[4],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[4]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[5],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[5]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[6],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[6]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[7],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[7]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[8],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[8]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[9],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[9]],0)>'+bWP+' ) \
#           ||    ( Alt$(CleanJet_pt[10],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[10]],0)>'+bWP+' ) \
#       ) )'
#}

aliases['btag0'] = {
'expr': '( Alt$(CleanJet_pt[0],0)<30 \
        && ( Alt$(CleanJet_pt[0],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[0]],0)>'+bWP+' ) \
         )'
}

aliases['btag1'] = {
'expr': '(    Alt$(CleanJet_pt[0],0)>30 \
           && Alt$(CleanJet_pt[1],0)<30 \
           && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[0]],0)>'+bWP+')'
}

aliases['btag2'] = {
'expr': '(    Alt$(CleanJet_pt[0],0)>30 \
           && Alt$(CleanJet_pt[1],0)>30 \
           && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[0]],0)>'+bWP+' || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[1]],0)>'+bWP+' )'
}

aliases['bVetoSF'] = {
'expr': '( \
         ( ( Alt$(CleanJet_pt[0], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[0]], 1) ) + ( Alt$(CleanJet_pt[0], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[1], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[1]], 1) ) + ( Alt$(CleanJet_pt[1], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[2], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[2]], 1) ) + ( Alt$(CleanJet_pt[2], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[3], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[3]], 1) ) + ( Alt$(CleanJet_pt[3], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[4], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[4]], 1) ) + ( Alt$(CleanJet_pt[4], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[5], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[5]], 1) ) + ( Alt$(CleanJet_pt[5], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[6], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[6]], 1) ) + ( Alt$(CleanJet_pt[6], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[7], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[7]], 1) ) + ( Alt$(CleanJet_pt[7], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[8], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[8]], 1) ) + ( Alt$(CleanJet_pt[8], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[9], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[9]], 1) ) + ( Alt$(CleanJet_pt[9], 0)<20 ) )* \
         ( ( Alt$(CleanJet_pt[10], 0)>20 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[10]], 1) ) + ( Alt$(CleanJet_pt[10], 0)<20 ) ) ) \
',
'samples': mc
}

#aliases['btag0SF'] = {
#'expr': '( \
#         ( ( Alt$(CleanJet_pt[0], 0)>20 && Alt$(CleanJet_pt[0], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[0]], 1) ) + ( Alt$(CleanJet_pt[0], 0)<20 || Alt$(CleanJet_pt[0], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[1], 0)>20 && Alt$(CleanJet_pt[1], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[1]], 1) ) + ( Alt$(CleanJet_pt[1], 0)<20 || Alt$(CleanJet_pt[1], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[2], 0)>20 && Alt$(CleanJet_pt[2], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[2]], 1) ) + ( Alt$(CleanJet_pt[2], 0)<20 || Alt$(CleanJet_pt[2], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[3], 0)>20 && Alt$(CleanJet_pt[3], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[3]], 1) ) + ( Alt$(CleanJet_pt[3], 0)<20 || Alt$(CleanJet_pt[3], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[4], 0)>20 && Alt$(CleanJet_pt[4], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[4]], 1) ) + ( Alt$(CleanJet_pt[4], 0)<20 || Alt$(CleanJet_pt[4], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[5], 0)>20 && Alt$(CleanJet_pt[5], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[5]], 1) ) + ( Alt$(CleanJet_pt[5], 0)<20 || Alt$(CleanJet_pt[5], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[6], 0)>20 && Alt$(CleanJet_pt[6], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[6]], 1) ) + ( Alt$(CleanJet_pt[6], 0)<20 || Alt$(CleanJet_pt[6], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[7], 0)>20 && Alt$(CleanJet_pt[7], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[7]], 1) ) + ( Alt$(CleanJet_pt[7], 0)<20 || Alt$(CleanJet_pt[7], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[8], 0)>20 && Alt$(CleanJet_pt[8], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[8]], 1) ) + ( Alt$(CleanJet_pt[8], 0)<20 || Alt$(CleanJet_pt[8], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[9], 0)>20 && Alt$(CleanJet_pt[9], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[9]], 1) ) + ( Alt$(CleanJet_pt[9], 0)<20 || Alt$(CleanJet_pt[9], 0)>=30 ) )* \
#         ( ( Alt$(CleanJet_pt[10], 0)>20 && Alt$(CleanJet_pt[10], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[10]], 1) ) + ( Alt$(CleanJet_pt[10], 0)<20 || Alt$(CleanJet_pt[10], 0)>=30 ) ) ) \
#',
#'samples': mc 
#}

aliases['btag0SF'] = {
'expr': '( ( Alt$(CleanJet_pt[0], 0)>20 && Alt$(CleanJet_pt[0], 0)<30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[0]], 1) ) + ( Alt$(CleanJet_pt[0], 0)<20 || Alt$(CleanJet_pt[0], 0)>=30 ) )',
'samples': mc
}

aliases['btag1SF'] = {
'expr': '( ( Alt$(CleanJet_pt[0], 0)>30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[0]], 1) ) + ( Alt$(CleanJet_pt[0], 0)<30 ) )',
'samples': mc
}

aliases['btag2SF'] = {
'expr': '( ( ( Alt$(CleanJet_pt[0], 0)>30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[0]], 1) ) + ( Alt$(CleanJet_pt[0], 0)<30 ) )* \
           ( ( Alt$(CleanJet_pt[1], 0)>30 )*( Alt$(Jet_btagSF_shape[CleanJet_jetIdx[1]], 1) ) + ( Alt$(CleanJet_pt[1], 0)<30 ) ) )\
        ',
'samples': mc
}

aliases['btagSF'] = {
'expr': '(bVeto*bVetoSF + btag0SF*btag0 + btag1SF*btag1 + btag2SF*btag2)',
'samples': mc
}


systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']

for s in systs:
  aliases['btagSF'+s+'up'] = { 'expr': 'bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_up_'+s)+'+btag0*'+aliases['btag0SF']['expr'].replace('shape','shape_up_'+s)+'+btag1*'+aliases['btag1SF']['expr'].replace('shape','shape_up_'+s)+'+btag2*'+aliases['btag2SF']['expr'].replace('shape','shape_up_'+s), 'samples':mc  }
  aliases['btagSF'+s+'down'] = { 'expr': 'bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_down_'+s)+'+btag0*'+aliases['btag0SF']['expr'].replace('shape','shape_down_'+s)+'+btag1*'+aliases['btag1SF']['expr'].replace('shape','shape_down_'+s)+'+btag2*'+aliases['btag2SF']['expr'].replace('shape','shape_down_'+s), 'samples':mc  }

