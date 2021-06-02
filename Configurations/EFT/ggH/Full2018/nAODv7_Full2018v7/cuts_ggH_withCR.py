# cuts
print("Cuts include 0jet/1jet SRs and top/DY CRs")
supercut = '   mll>12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && hm > 0 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '


## Signal regions
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
   }
}

## Top control regions
cuts['hww2l2v_13TeV_top']  = { 
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
   }
}

cuts['hww2l2v_13TeV_top_incl']  = {
   'expr' : 'topcr',
}


## DYtt control regions
cuts['hww2l2v_13TeV_dytt']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
   }
}


cuts['hww2l2v_13TeV_dytt_incl']  = {
   'expr' : 'dycr',
}

