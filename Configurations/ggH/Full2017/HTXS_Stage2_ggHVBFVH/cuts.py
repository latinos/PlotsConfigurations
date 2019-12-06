# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '

## Signal regions
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
       'of0j_pth0_10' : ' zeroJet && pTWW <= 10 ',
       'of0j_pth10_200' : ' zeroJet && pTWW > 10 && pTWW <= 200 ',
       'of1j_pth0_60' : ' oneJet && Alt$(CleanJet_pt[1],0)<30 && pTWW <= 60 ',
       'of1j_pth60_120' : ' oneJet && Alt$(CleanJet_pt[1],0)<30 && pTWW > 60 && pTWW <= 120 ',
       'of1j_pth120_200' : ' oneJet && Alt$(CleanJet_pt[1],0)<30 && pTWW > 120 && pTWW <= 200 ',
       #
       'of2j_lowmjj_gghlike_pth0_60' : ' multiJet && (mjj<=60 || mjj>120) && (mjj<200 || (mjj>200 && mjj<350 && mth<125 && gghlike_mjjlow) ) && pTWW <= 60 ',
       'of2j_lowmjj_gghlike_pth60_120' : ' multiJet && (mjj<=60 || mjj>120) &&  (mjj<200 || (mjj>200 && mjj<350 && mth<125 && gghlike_mjjlow) ) && pTWW > 60 && pTWW <= 120 ',
       'of2j_lowmjj_gghlike_pth120_200' : ' multiJet && (mjj<=60 || mjj>120) &&  (mjj<200 || (mjj>200 && mjj<350 && mth<125 && gghlike_mjjlow) ) && pTWW > 120 && pTWW <= 200 ',

       'of2j_lowmjj_vbflike' : 'Sum$(CleanJet_pt>30)==2 && mjj>200 && mjj<350 && vbflike_mjjlow',

       'of2j_vhlike_mjj60_120' : ' multiJet && mjj>60 && mjj<=120 && drll < 2. && detajj < 3.5',
       
       'of2j_gghlike_mjj350_700_pthjj0_25' : ' multiJet && mjj > 350 && mjj <= 700 && pTHjj <=25 && pTWW<200 && gghlike_mjjhigh',
       'of2j_vbflike_mjj350_700_pthjj0_25' : ' Sum$(CleanJet_pt>30)==2 && mjj > 350 && mjj <= 700 && pTHjj <=25 && pTWW<200 && vbflike_mjjhigh',
       
       'of2j_gghlike_mjj350_700_pthjjGT25' : ' multiJet && mjj > 350 && mjj <= 700 && pTHjj  >25 && pTWW<200 && gghlike_mjjhigh',
       'of2j_vbflike_mjj350_700_pthjjGT25' : ' Sum$(CleanJet_pt>30)==2 && mjj > 350 && mjj <= 700 && pTHjj > 25 && pTWW<200 && vbflike_mjjhigh',
       
       'of2j_gghlike_mjjGT700_pthjj0_25' : ' multiJet && mjj > 700 && pTHjj <=25 && pTWW<200 && gghlike_mjjhigh',
       'of2j_vbflike_mjjGT700_pthjj0_25' : ' Sum$(CleanJet_pt>30)==2 && mjj > 700 && pTHjj <=25 && pTWW<200 && vbflike_mjjhigh',
       
       'of2j_gghlike_mjjGT700_pthjjGT25' : ' multiJet && mjj > 700 && pTHjj > 25 && pTWW<200 && gghlike_mjjhigh', 
       'of2j_vbflike_mjjGT700_pthjjGT25' : 'Sum$(CleanJet_pt>30)==2 && mjj > 700 && pTHjj >25 && pTWW<200 && vbflike_mjjhigh',

       'of2j_vbflike_mjjGT350_pthGT200' : ' Sum$(CleanJet_pt>30)==2  && mjj > 350 && pTWW > 200 && vbflike_mjjhigh',
       #
       'of_gghlike_pth200_300' : ' pTWW > 200 && pTWW <= 300 && ((mjj>350 && gghlike_mjjhigh) || (mjj>200 && mjj<350 && gghlike_mjjlow) || (mjj<200))',
       'of_gghlike_pth300_450' : ' pTWW > 300 && pTWW <= 450 && ((mjj>350 && gghlike_mjjhigh) || (mjj>200 && mjj<350 && gghlike_mjjlow) || (mjj<200))',
       'of_gghlike_pth450_650' : ' pTWW > 450 && pTWW <= 650 && ((mjj>350 && gghlike_mjjhigh) || (mjj>200 && mjj<350 && gghlike_mjjlow) || (mjj<200))',
       'of_gghlike_pthGT650' : ' pTWW > 650 && ((mjj>350 && gghlike_mjjhigh) || (mjj>200 && mjj<350 && gghlike_mjjlow) || (mjj<200))',
   }
}

'''
## Top control regions
cuts['hww2l2v_13TeV_top']  = { 
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'multiJet && mjj<200 && (mjj<=60 || mjj>120)',
      '2j_vbf' : 'multiJet && mjj>200',
      '2j_vh' : 'multiJet && mjj>60 && mjj<120'
   }
}

## DYtt control regions
cuts['hww2l2v_13TeV_dytt']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'multiJet && mjj<200 && (mjj<=60 || mjj>120)',
      '2j_vbf' : 'multiJet && mjj>200',
      '2j_vh' : 'multiJet && mjj>60 && mjj<120'
   }
}
'''
