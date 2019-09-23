# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '

## Signal regions
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
       'hww2l2v_13TeV_of0j_pth0_10' : ' zeroJet && pTWW <= 10 ',
       'hww2l2v_13TeV_of0j_pth10_200' : ' zeroJet && pTWW > 10 && pTWW <= 200 ',
       'hww2l2v_13TeV_of1j_pth0_60' : ' oneJet && Alt$(CleanJet_pt[1],0)<30 && pTWW <= 60 ',
       'hww2l2v_13TeV_of1j_pth60_120' : ' oneJet && Alt$(CleanJet_pt[1],0)<30 && pTWW > 60 && pTWW <= 120 ',
       'hww2l2v_13TeV_of1j_pth120_200' : ' oneJet && Alt$(CleanJet_pt[1],0)<30 && pTWW > 120 && pTWW <= 200 ',
       'hww2l2v_13TeV_of2j_lowmjj_pth0_60' : ' multiJet && mjj<350 && pTWW <= 60 ',
       'hww2l2v_13TeV_of2j_lowmjj_pth60_120' : ' multiJet && mjj<=350 && pTWW > 60 && pTWW <= 120 ',
       'hww2l2v_13TeV_of2j_lowmjj_pth120_200' : ' multiJet && mjj<=350 && pTWW > 120 && pTWW <= 200 ',
       'hww2l2v_13TeV_of2j_mjj350_700_pthjj0_25' : ' multiJet && mjj > 350 && mjj <= 700 && pTHjj <=25',
       'hww2l2v_13TeV_of2j_mjj350_700_pthjjGT25' : ' multiJet && mjj > 350 && mjj <= 700 && pTHjj  >25',
       'hww2l2v_13TeV_of2j_mjjGT700_pthjj0_25' : ' multiJet && mjj > 700 && pTHjj <=25',
       'hww2l2v_13TeV_of2j_mjjGT700_pthjjGT25' : ' multiJet && mjj > 700 && pTHjj > 25', 
       'hww2l2v_13TeV_of_pthGT200' : ' pTWW > 200 ',
   }
}


## Top control regions
cuts['hww2l2v_13TeV_top']  = { 
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'multiJet',
   }
}

## DYtt control regions
cuts['hww2l2v_13TeV_dytt']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'multiJet',
   }
}

