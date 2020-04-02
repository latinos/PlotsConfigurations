# cuts

supercut = '   mll>50 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>13 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '


## Signal regions

cuts['VBS_no_CentralVeto'] = {
    'expr': 'mjj > 500 && detajj > 3.5 && bVeto && mth > 60 && mtw2 > 30',
    'categories': {
        '2j'            : 'multiJet'
    }
}


cuts['VBS'] = {
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
      '2j'               : 'mjj>500 && detajj>3.5 && multiJet && Sum$(CleanJet_pt > 30 && CleanJet_eta > TMath::Min(CleanJet_eta[0], CleanJet_eta[1]) && CleanJet_eta < TMath::Max(CleanJet_eta[0], CleanJet_eta[1]) && abs(CleanJet_eta - CleanJet_eta[0]) > 1 && abs(CleanJet_eta - CleanJet_eta[1]) > 1) == 0', 
   }
}

cuts['VBS_low_Zeppll'] = {
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
      '2j'               : 'mjj>500 && detajj>3.5 && multiJet && Sum$(CleanJet_pt > 30 && CleanJet_eta > TMath::Min(CleanJet_eta[0], CleanJet_eta[1]) && CleanJet_eta < TMath::Max(CleanJet_eta[0], CleanJet_eta[1]) && abs(CleanJet_eta - CleanJet_eta[0]) > 1 && abs(CleanJet_eta - CleanJet_eta[1]) > 1) == 0 && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1])) < 1', 
   }
}

cuts['VBS_high_Zeppll'] = {
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
      '2j'               : 'mjj>500 && detajj>3.5 && multiJet && Sum$(CleanJet_pt > 30 && CleanJet_eta > TMath::Min(CleanJet_eta[0], CleanJet_eta[1]) && CleanJet_eta < TMath::Max(CleanJet_eta[0], CleanJet_eta[1]) && abs(CleanJet_eta - CleanJet_eta[0]) > 1 && abs(CleanJet_eta - CleanJet_eta[1]) > 1) == 0 && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1])) >= 1', 
   }
}


## Top control regions
cuts['top']  = { 
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
#      '0j' : 'zeroJet',
#      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj>500 && detajj>3.5 && multiJet',
   }
}

## DYtt control regions
cuts['DYtt']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
#      '0j' : 'zeroJet',
#      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj>500 && detajj>3.5 && multiJet',
   }
}

