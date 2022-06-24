# cuts
cuts = {}
# this should be checked in postprocessing, just to be sure
supercut = '\
    (Alt$(Lepton_pt[1],0)<=10 \
&&  abs(Lepton_eta[0])<2.5) \
'
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
LepCats={}
LepCats['incl_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>30 \
                 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'
#LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>30 )'
#LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'
# FIXME: maybe need to cut > 35 for ele due to fakeW calculation


BoostProcCats={}
BoostProcCats['']='1'
#BoostProcCats['2jets']='(nJetHigh2[0] > 0)'
#BoostProcCats['01jets']='(nJetHigh2[0] < 0)'


BoostCats={}
#BoostCats['fatjet'] = 'boosted_fat_jet[0] && bVeto[0]'
#BoostCats['fatjet_noboost']='two_jet_res[0] && bVeto[0] '
BoostCats['BoostedSR_']='(1 \
                       && boosted_fat_jet[0] \
                       && boostedSignalWMass[0] \
                       && bVeto[0])'
#BoostCats['ResolvedSR_']='(1 \
#                       && two_jet_res[0] \
#                       && resolvedSignalWMass[0] \
#                       && bVeto[0])'
#BoostCats['BoostedSB_']='(1 \
#                       && boosted_fat_jet[0] \
#                       && !boostedSignalWMass[0] \
#                       && boostedSidebandWMass[0] \
#                       && bVeto[0])'
#BoostCats['ResolvedSB_']='(1 \
#                       && two_jet_res[0] \
#                       && !resolvedSignalWMass[0] \
#                       && resolvedSidebandWMass[0] \
#                       && bVeto[0])'
#BoostCats['BoostedTopCR_']='(1 \
#                       && boosted_fat_jet[0] \
#                       && boostedSignalWMass[0] \
#                       && !bVeto[0])'
#BoostCats['ResolvedTopCR_']='(1 \
#                       && two_jet_res[0] \
#                       && resolvedSignalWMass[0] \
#                       && !bVeto[0])'
#
##=== Define cuts ===###
for Lep in LepCats:
    for BProcCat in BoostProcCats:
        for BCat in BoostCats:  
		cuts[Lep+BCat+BProcCat]=  BoostCats[BCat]\
                	            +'&&'+BoostProcCats[BProcCat]\
                	            +'&&'+LepCats[Lep]

 #           cuts[Lep+BProcCat+BCat]=  BoostCats[BCat]\
  #                              +'&&'+BoostProcCats[BProcCat]\
   #                             +'&&'+LepCats[Lep]
