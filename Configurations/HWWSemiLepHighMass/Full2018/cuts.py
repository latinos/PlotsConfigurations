# cuts
supercut = 'LepWPCut \
         && Lepton_pt[0]>30 \
         && (nLepton>=1 && Alt$(Lepton_pt[1],0)<=15) \
         && (Alt$(abs(Lepton_pdgId[1]), 11)==11 || Lepton_pt_[1]<10) \
         && abs(Lepton_eta[0])<2.4 \
         && (abs(Lepton_pdgId[0])==13 || abs(Lepton_eta[0])<2.1) \
         && PuppiMET_pt > 30 \
         '


# ## Signal regions -> bVeto
# cuts['hwwlv2q_13TeV'] = {
#    'expr': 'bVeto',
#    # Define the sub-categorization of sr
#    'categories' : {
#       #
#       'VBF_boosted'  : 'VBFtagged \
#                      && 65 < FatJet_msoftdrop[0] && FatJet_msoftdrop[0] < 105 \
#                      && boostedWtagged \
#                      ',
#       'VBF_resolved' : 'VBFtagged \
#                      && !boostedWtagged \
#                      && 65 < GenW_Ak4_mass && GenW_Ak4_mass < 105 \
#                      && resolvedWtagged \
#                      ',
#       #
#       'ggF_boosted'  : '!VBFtagged \
#                      && ggFtagged \
#                      && 65 < FatJet_msoftdrop[0] && FatJet_msoftdrop[0] < 105 \
#                      &&  boostedWtagged \
#                      ',
#       'ggF_resolved' : '!VBFtagged \
#                      && ggFtagged \
#                      && ! boostedWtagged \
#                      && 65 < GenW_Ak4_mass && GenW_Ak4_mass < 105 \
#                      && resolvedWtagged \
#                      ',
#       #
#       'untagged_boosted' :'!VBFtagged \
#                         && !ggFtagged \
#                         && 65 < FatJet_msoftdrop[0] && FatJet_msoftdrop[0] < 105 \
#                         && boostedWtagged \
#                         ',
#       'untagged_resolved':'!VBFtagged \
#                         && !ggFtagged \
#                         && !boostedWtagged \
#                         && 65 < GenW_Ak4_mass && GenW_Ak4_mass < 105 \
#                         &&  resolvedWtagged \
#                         '
#    }
# }

## Top control region --> FIXME: definition of region?
cuts['hwwlv2q_13TeV_top'] = {
   'expr' : 'topcr',
   'categories' : {
      'any' : '1'
   }
}

# ## W+jets control region
# cuts['hwwlv2q_13TeV_wjets'] = {
#    'expr' : 'wjetscr',
#    'categories' : {
#       # FIXME --> to be like above
#    }
# }