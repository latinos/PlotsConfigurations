# cuts

supercut = 'Lepton_pt[0]>25 \
&& Lepton_pt[1]>20 \
&& (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
&& abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
&& mll > 20.'

#supercut = '1'

## Inclusive control regions
cuts['inclusiveCR_ll']  = { 
   'expr' : 'inclusivecr',
    # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj<400 && multiJet',
   }
}

cuts['inclusiveCR_ee']  = { 
    'expr' : 'inclusivecr && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
    # Define the sub-categorization of topcr
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'mjj<400 && multiJet',
    }
}

cuts['inclusiveCR_mm']  = { 
    'expr' : 'inclusivecr && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
    # Define the sub-categorization of topcr
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'mjj<400 && multiJet',
    }
}

cuts['inclusiveCR_df']  = { 
    'expr' : 'inclusivecr && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
    # Define the sub-categorization of topcr
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'mjj<400 && multiJet',
    }
}

## DYtt control regions
cuts['dyCR_ll']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj<400 && multiJet',
   }
}

cuts['dyCR_ee']  = { 
    'expr' : 'dycr && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
   # Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj<400 && multiJet',
   }
}


cuts['dyCR_mm']  = { 
    'expr' : 'dycr && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
   # Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj<400 && multiJet',
   }
}


cuts['dyCR_df']  = { 
    'expr' : 'dycr && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
   # Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj<400 && multiJet',
   }
}

