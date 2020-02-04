# cuts

supercut = 'Lepton_pt[0]>25 \
&& Lepton_pt[1]>20 \
&& (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
&& abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
&& mll > 20.'

#supercut = '1'

## Top control regions
cuts['topCR_ll']  = { 
    'expr' : 'topcr',
    # Define the sub-categorization of topcr
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'mjj<400 && multiJet',
    }
}

cuts['topCR_ee']  = { 
    'expr' : 'topcr && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
    # Define the sub-categorization of topcr
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'mjj<400 && multiJet',
    }
}

cuts['topCR_mm']  = { 
    'expr' : 'topcr && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
    # Define the sub-categorization of topcr
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'mjj<400 && multiJet',
    }
}

cuts['topCR_df']  = { 
    'expr' : 'topcr && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
    # Define the sub-categorization of topcr
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'mjj<400 && multiJet',
    }
}
