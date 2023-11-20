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
LepCats['incl_']='( ((abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>33 \
                 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30))'
#LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>33)'
#LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30)'
# FIXME: maybe need to cut > 35 for ele due to fakeW calculation
LepCats_CR={}
LepCats_CR['incl_']='( ((abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>33 \
                 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30))'
LepCats_CR['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>33)'
LepCats_CR['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30)'

BoostProcCats_H={}
#BoostProcCats_H['']='1'
BoostProcCats_H['isVBF_H']='(vbflike_high[0] > 0)'
BoostProcCats_H['isGGH_H']='(gghlike_high[0] > 0)'
BoostProcCats_H['isBKG_H']='(bkglike_high[0] > 0)'

BoostProcCats={}
#BoostProcCats['']='1'
#BoostProcCats['isVBF_']='(vbflike_res[0] > 0)'
#BoostProcCats['isGGH_']='(gghlike_res[0] > 0)'
#BoostProcCats['isBKG_']='(bkglike_res[0] > 0)'
BoostProcCats['isVBF_']='(vbflike_odd[0] > 0)'
BoostProcCats['isGGH_']='(gghlike_odd[0] > 0)'
BoostProcCats['isBKG_']='(bkglike_odd[0] > 0)'
#BoostProcCats['2jets']='(nJetHigh2[0] > 0)'
#BoostProcCats['01jets']='(nJetHigh2[0] < 0)'

ResProcCats={}
#ResProcCats['']='1'
ResProcCats['isVBF_']='(vbflike_res[0] > 0)'
ResProcCats['isGGH_']='(gghlike_res[0] > 0)'
ResProcCats['isBKG_']='(bkglike_res[0] > 0)'


BoostCatsSR={}
BoostCatsSR['BoostedSR_']='(1 \
                       && boosted_nocut_res[0] \
                       && HvOverFat[0] > 0.4 \
                       && boostedSignalWMass[0] \
                       && bVeto_boo[0])'

ResCatsSR={}
ResCatsSR['ResolvedSR_']='(1 \
                       && two_jet_res[0] \
                       && resolvedSignalWMass[0] \
                       && bVeto[0])'

BoostCats={}
#BoostCats['BoostedSR_']='(1 \
#                       && boosted_nocut_res[0] \
#                       && HvOverFat[0] > 0.4 \
#                       && boostedSignalWMass[0] \
#                       && bVeto_boo[0])'
BoostCats['BoostedSB_']='(1 \
                       && boosted_nocut_res[0] \
                       && HvOverFat[0] < 0.35 \
                       && boostedSignalWMass[0] \
                       && bVeto_boo[0])'
#BoostCats['ResolvedSB_']='(1 \
#                       && two_jet_res[0] \
#                       && !resolvedSignalWMass[0] \
#                       && resolvedSidebandWMass[0] \
#                       && bVeto[0])'
BoostCats['BoostedTopCR_']='(1 \
                       && boosted_nocut_res[0] \
                       && HvOverFat[0] > 0.4 \
                       && boostedSignalWMass[0] \
                       && bReq_boo[0])'
#BoostCats['ResolvedTopCR_']='(1 \
#                       && two_jet_res[0] \
#                       && resolvedSignalWMass[0] \
#                       && bReq[0])'
#
ResCats={}
#ResCats['ResolvedSR_']='(1 \
#                       && two_jet_res[0] \
#                       && resolvedSignalWMass[0] \
#                       && bVeto[0])'
ResCats['ResolvedSB_']='(1 \
                       && two_jet_res[0] \
                       && !resolvedSignalWMass[0] \
                       && resolvedSidebandWMass[0] \
                       && bVeto[0])'
ResCats['ResolvedTopCR_']='(1 \
                       && two_jet_res[0] \
                       && resolvedSignalWMass[0] \
                       && bReq[0])'

#####=== Define cuts ===###
#for Lep in LepCats:
#    for BProcCat in ResProcCats:
#        for BCat in ResCatsSR:  
#		cuts[Lep+BCat+BProcCat]=  ResCatsSR[BCat]\
#                	            +'&&'+ResProcCats[BProcCat]\
#                	            +'&&'+LepCats[Lep]
#
#for Lep in LepCats:
#    for BProcCat in BoostProcCats_H:
#        for BCat in BoostCatsSR:  
#		cuts[Lep+BCat+BProcCat]=  BoostCatsSR[BCat]\
#                	            +'&&'+BoostProcCats_H[BProcCat]\
#                	            +'&&'+LepCats[Lep]
#
#
#for Lep in LepCats:
#    for BProcCat in BoostProcCats:
#        for BCat in BoostCatsSR:  
#		cuts[Lep+BCat+BProcCat]=  BoostCatsSR[BCat]\
#                	            +'&&'+BoostProcCats[BProcCat]\
#                	            +'&&'+LepCats[Lep]
##########
for Lep in LepCats_CR:
    for BCat in ResCats:
	cuts[Lep+BCat]=  ResCats[BCat]\
                           +'&&'+LepCats_CR[Lep]

for Lep in LepCats_CR:
    for BCat in BoostCats:
	cuts[Lep+BCat]=  BoostCats[BCat]\
                           +'&&'+LepCats_CR[Lep]
#           cuts[Lep+BProcCat+BCat]=  BoostCats[BCat]\
 #                              +'&&'+BoostProcCats[BProcCat]\
  #                             +'&&'+LepCats[Lep]
