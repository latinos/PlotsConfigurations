# cuts
cuts = {}
# this should be checked in postprocessing, just to be sure
supercut = '\
    (Alt$(Lepton_pt[1],0)<=10 \
&&  abs(Lepton_eta[0])<2.5) \
'
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
#LepCats={}
#LepCats['incl_Wlep_']='(( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>38 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30) && minwlep[0] <= 1 )'
#LepCats['incl_Whad_']='(( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>38 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30) && minwlep[0] > 1  )'
#LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>38)'
#LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30)'
# FIXME: maybe need to cut > 35 for ele due to fakeW calculation

LepCats={}
LepCats['incl_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>38 \
               || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30 )'
#LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>38 )'
#LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30 )'

BoostProcCats={}
#BoostProcCats['all']='1'
BoostProcCats['isVBF_']='(vbflike_odd[0] > 0)'
BoostProcCats['isGGH_']='(gghlike_odd[0] > 0)'
BoostProcCats['isBKG_']='(bkglike_odd[0] > 0)'

ResProcCats={}
#ResProcCats['all']='1'
ResProcCats['isVBF_']='(vbflike_res[0] > 0)'
ResProcCats['isGGH_']='(gghlike_res[0] > 0)'
ResProcCats['isBKG_']='(bkglike_res[0] > 0)'
#
BoostCatsSR={}

#BoostCatsSR['BoostedSR_']='(1 \
#                       && boosted_nocut_res[0] \
#                       && HvOverFat[0] > 0.4 \
#                       && boostedSignalWMass[0] \
#                       && bVeto_boo[0])'
ResCatsSR={}
ResCatsSR['ResolvedSR_']='(1 \
                       && two_jet_res[0] \
                       && resolvedSignalWMass[0] \
                       && bVeto[0])'
ResCatsSR_cut={}
ResCatsSR_cut['ResolvedSR_massWindow']='(1 \
                       && two_jet_res[0] \
                       && resolvedSignalWMass[0] \
                       && bVeto[0])'
ResCatsSR_cut['ResolvedSR_massWindowWetaCut']='(1 \
                       && two_jet_res[0] \
                       && resolvedSignalWMass[0] \
                       && bVeto[0])'
#BoostCats={}
BoostCatsSR['BoostedSR_']='(1 \
                       && boosted_nocut_res[0] \
                       && HvOverFat[0] > 0.4 \
                       && boostedSignalWMass[0] \
                       && bVeto_boo[0])'
#ResCatsSR={}
#ResCatsSR['ResolvedSR_']='(1 \
#                       && two_jet_res[0] \
#                       && resolvedSignalWMass[0] \
#                       && mass_HIGGS_JJ[0] >  350 \
#                       && mass_HIGGS_JJ[0] <= 550 \
#                       && bVeto[0])'
BoostCats={}
#BoostCats['fatjet'] = 'boosted_fat_jet[0] && bVeto[0]'
#BoostCats['fatjet_noboost']='two_jet_res[0] && bVeto[0] '

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
#BoostCats['BoostedSB_2']='(1 \
#                       && boosted_nocut_res[0] \
#                       && HvOverFat[0] < 0.4 \
#                       && boostedSignalWMass[0] \
#                       && bVeto_boo[0])'
BoostCats['ResolvedSB_']='(1 \
                       && two_jet_res[0] \
                       && !resolvedSignalWMass[0] \
                       && resolvedSidebandWMass[0] \
                       && bVeto[0])'
BoostCats['ResolvedTopCR_']='(1 \
                       && two_jet_res[0] \
                       && resolvedSignalWMass[0] \
                       && bReq[0])'
##BoostCats['ResolvedSR_']='(1 \
##                       && two_jet_res[0] \
##                       && resolvedSignalWMass[0] \
##                       && bVeto[0])'
BoostCats['BoostedTopCR_']='(1 \
                       && boosted_nocut_res[0] \
                       && HvOverFat[0] > 0.4 \
                       && boostedSignalWMass[0] \
                       && bReq_boo[0])'
####BoostCats['BoostedCR_']='(1 \
###                       && boosted_nocut_res[0] \
###                       && HvOverFat[0] > 0.4 \
###                       && !boostedSignalWMass[0] \
###                       && boostedSidebandWMass[0] \
###                       && bVeto[0])'
#=== Define cuts ===###
for Lep in LepCats:
    for BProcCat in BoostProcCats:
        for BCat in BoostCatsSR:  
		cuts[Lep+BCat+BProcCat]=  BoostCatsSR[BCat]\
                	            +'&&'+BoostProcCats[BProcCat]\
                	            +'&&'+LepCats[Lep]
for Lep in LepCats:
    for BProcCat in ResProcCats:
        for BCat in ResCatsSR:  
		cuts[Lep+BCat+BProcCat]=  ResCatsSR[BCat]\
                	            +'&&'+ResProcCats[BProcCat]\
                	            +'&&'+LepCats[Lep]
#
#for Lep in LepCats:
#    for BProcCat in ResProcCats:
#        for BCat in ResCatsSR_nocut:  
#		cuts[Lep+BCat+BProcCat]=  ResCatsSR_nocut[BCat]\
#                	            +'&&'+ResProcCats[BProcCat]\
#                	            +'&&'+LepCats[Lep]
#
#for Lep in LepCats:
#    for BProcCat in BoostProcCats_H:
#        for BCat in BoostCatsSR:  
#		cuts[Lep+BCat+BProcCat]=  BoostCatsSR[BCat]\
#                	            +'&&'+BoostProcCats_H[BProcCat]\
#                	            +'&&'+LepCats[Lep]
for Lep in LepCats:
    for BCat in BoostCats:
	cuts[Lep+BCat]=  BoostCats[BCat]\
                           +'&&'+LepCats[Lep]

#

#BoostProcCats={}
##BoostProcCats['all']='1'
#BoostProcCats['isVBF_']='(vbflike_odd[0] > 0)'
#BoostProcCats['isGGH_']='(gghlike_odd[0] > 0)'
#BoostProcCats['isBKG_']='(bkglike_odd[0] > 0)'
#
#BoostProcCats_H={}
##BoostProcCats_H['all']='1'
#BoostProcCats_H['isVBF_H']='(vbflike_high[0] > 0)'
#BoostProcCats_H['isGGH_H']='(gghlike_high[0] > 0)'
#BoostProcCats_H['isBKG_H']='(bkglike_high[0] > 0)'
#
#ResProcCats={}
##ResProcCats['all']='1'
#ResProcCats['isVBF_']='(vbflike_res[0] > 0)'
#ResProcCats['isGGH_']='(gghlike_res[0] > 0)'
#ResProcCats['isBKG_']='(bkglike_res[0] > 0)'
#
##BoostProcCats['2jets']='(nJetHigh2[0] > 0)'
##BoostProcCats['01jets']='(nJetHigh2[0] < 0)'
#
#
#BoostCatsSR={}
#BoostCatsSR['BoostedSR_']='(1 \
#                       && boosted_nocut_res[0] \
#                       && HvOverFat[0] > 0.4 \
#                       && boostedSignalWMass[0] \
#                       && bVeto_boo[0])'
#ResCatsSR={}
#ResCatsSR['ResolvedSR_']='(1 \
#                       && two_jet_res[0] \
#                       && resolvedSignalWMass[0] \
#                       && bVeto[0])'
#BoostCats={}
##BoostCats['fatjet'] = 'boosted_fat_jet[0] && bVeto[0]'
##BoostCats['fatjet_noboost']='two_jet_res[0] && bVeto[0] '
#
##BoostCats['BoostedSR_']='(1 \
##                       && boosted_nocut_res[0] \
##                       && HvOverFat[0] > 0.4 \
##                       && boostedSignalWMass[0] \
##                       && bVeto_boo[0])'
##BoostCats['BoostedSB_']='(1 \
##                       && boosted_nocut_res[0] \
##                       && HvOverFat[0] < 0.35 \
##                       && boostedSignalWMass[0] \
##                       && bVeto_boo[0])'
#BoostCats['ResolvedSB_']='(1 \
#                       && two_jet_res[0] \
#                       && !resolvedSignalWMass[0] \
#                       && resolvedSidebandWMass[0] \
#                       && bVeto[0])'
#####BoostCats['ResolvedSR_']='(1 \
#####                       && two_jet_res[0] \
#####                       && resolvedSignalWMass[0] \
#####                       && bVeto[0])'
##BoostCats['BoostedTopCR_']='(1 \
##                       && boosted_nocut_res[0] \
##                       && HvOverFat[0] > 0.4 \
##                       && boostedSignalWMass[0] \
##                       && bReq_boo[0])'
#BoostCats['ResolvedTopCR_']='(1 \
#                       && two_jet_res[0] \
#                       && resolvedSignalWMass[0] \
#                       && bReq[0])'
#####BoostCats['BoostedCR_']='(1 \
####                       && boosted_nocut_res[0] \
####                       && HvOverFat[0] > 0.4 \
####                       && !boostedSignalWMass[0] \
####                       && boostedSidebandWMass[0] \
####                       && bVeto[0])'
#####=== Define cuts ===###
##for Lep in LepCats:
##    for BProcCat in BoostProcCats:
##        for BCat in BoostCatsSR:  
##		cuts[Lep+BCat+BProcCat]=  BoostCatsSR[BCat]\
##                	            +'&&'+BoostProcCats[BProcCat]\
##                	            +'&&'+LepCats[Lep]
##for Lep in LepCats:
##    for BProcCat in BoostProcCats_H:
##        for BCat in BoostCatsSR:  
##		cuts[Lep+BCat+BProcCat]=  BoostCatsSR[BCat]\
##                	            +'&&'+BoostProcCats_H[BProcCat]\
##               	           	    +'&&'+LepCats[Lep]
########
#for Lep in LepCats:
#    for BProcCat in ResProcCats:
#        for BCat in ResCatsSR:  
#		cuts[Lep+BCat+BProcCat]=  ResCatsSR[BCat]\
#                	            +'&&'+ResProcCats[BProcCat]\
#                	            +'&&'+LepCats[Lep]
#for Lep in LepCats:
#     for BCat in BoostCats:
# 	cuts[Lep+BCat]=  BoostCats[BCat]\
#                            +'&&'+LepCats[Lep]
##           cuts[Lep+BProcCat+BCat]=  BoostCats[BCat]\
#  #                              +'&&'+BoostProcCats[BProcCat]\
#   #                             +'&&'+LepCats[Lep]
