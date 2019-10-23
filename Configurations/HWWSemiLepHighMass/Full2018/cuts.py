# cuts
supercut = 'Lepton_pt[0]>30 \
         && (nLepton>=1 && Alt$(Lepton_pt[1],0)<=15) \
         && (abs(Lepton_pdgId[0])==11 || Lepton_pt_[1]<10) \
         && abs(Lepton_eta[0])<2.4 \
         && (abs(Lepton_pdgId[0])==13 || abs(Lepton_eta[0])<2.1) \
         && PuppiMET_pt > 30 \
         && bVeto \
         '


## Signal regions
cuts['hwwlv2q_13TeV'] = {
   'expr': 'sr',
   # Define the sub-categorization of sr
   'categories' : {
      #
      'VBF_boosted'  : 'VBFtagged \
                     && 65 < FatJet_msoftdrop[0] && FatJet_msoftdrop[0] < 105 \
                     && boostedWtagged \
                     ',
      'VBF_resolved' : 'VBFtagged \
                     && not boostedWtagged \
                     && 65 < Wmjj < 105 \
                     && resolvedWtagged \
                     ',
      #
      'ggF_boosted'  : 'not VBFtagged \
                     && ggFKinematicDiscriminant>0.5 \
                     && 65 < FatJet_msoftdrop[0] && FatJet_msoftdrop[0] < 105 \
                     &&  boostedWtagged \
                     ',
      'ggF_resolved' : 'not VBFtagged \
                     && ggFKinematicDiscriminant>0.5 \
                     && not boostedWtagged \
                     && 65 < Wmjj && Wmjj < 105 \
                     && resolvedWtagged \
                     ',
      #
      'untagged_boosted' :'not VBFtagged \
                        && ggFKinematicDiscriminant<=0.5 \
                        && 65 < FatJet_msoftdrop[0] < 105 \
                        && boostedWtagged \
                        ',
      'untagged_resolved':'not VBFtagged \
                        && ggFKinematicDiscriminant<=0.5 \
                        && not boostedWtagged \
                        && 65 < Wmjj && Wmjj < 105 \
                        &&  resolvedWtagged \
                        '
   }
}

## Top control region --> FIXME: definition of region?
cuts['hwwlv2q_13TeV_top'] = {
   'expr' : 'topcr',
   'categories' : {
      # FIXME --> to be like above
   }
}

"""
## Top control regions
cuts['hww2l2v_13TeV_top']  = { 
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj<400 && multiJet',
   }
}

## DYtt control regions
cuts['hww2l2v_13TeV_dytt']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj<400 && multiJet',
   }
}
"""
