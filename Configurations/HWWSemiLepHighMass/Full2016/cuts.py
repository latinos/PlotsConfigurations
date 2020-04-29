# cuts
# this should be checked in postprocessing, just to be sure
supercut = 'LepWPCut[0] && Lepton_pt[0]>27 \
         && Alt$(Lepton_pt[1],0)<=10 \
         && abs(Lepton_eta[0])<2.5 \
         && !Lep1WPCut[0] \
         '
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
LepCats={}
LepCats['']='1'
LepCats['ElCh_']='(abs(Lepton_pdgId[0])==11)'
LepCats['MuCh_']='(abs(Lepton_pdgId[0])==13)'



BoostProcCats={}
BoostProcCats['incl_']='1'
BoostProcCats['Untagged_']='!IsVbfFat'
BoostProcCats['VBF_']='IsVbfFat'

BoostCats={}
# BoostCats['Boosted']='boosted[0]'
BoostCats['BoostedSR_']='boosted[0] && boostedSignalWMass[0] && bVeto[0]'
BoostCats['BoostedSB_']='boosted[0] \
                        && !boostedSignalWMass[0] \
                        && boostedSidebandWMass[0] \
                        && bVeto[0]'
# BoostCats['BoostedSB__low']='boosted[0] \
#                         && !boostedSignalWMass[0] \
#                         && lowBoostedSidebandWMass[0] \
#                         && bVeto[0]'
# BoostCats['BoostedSB__high']='boosted[0] \
#                         && !boostedSignalWMass[0] \
#                         && highBoostedSidebandWMass[0] \
#                         && bVeto[0]'

BoostCats['BoostedTopCR_']='boosted[0] && boostedSignalWMass[0] && bReq[0]'



ResolveProcCats={}
ResolveProcCats['incl_']='1'
ResolveProcCats['Untagged_']='!IsVbfjj'
ResolveProcCats['VBF_']='IsVbfjj'

ResolveCats={}
# ResolveCats['Resolved']='resolved[0]'
ResolveCats['ResolvedSR_']='resolved[0] && resolvedSignalWMass[0] && bVeto[0]'
ResolveCats['ResolvedSB_']='resolved[0] \
                            && !resolvedSignalWMass[0] \
                            && resolvedSidebandWMass[0] \
                            && bVeto[0]'
# ResolveCats['ResolvedSB__low']='resolved[0] \
#                             && !resolvedSignalWMass[0] \
#                             && lowResolvedSidebandWMass[0] \
#                             && bVeto[0]'
# ResolveCats['ResolvedSB__high']='resolved[0] \
#                             && !resolvedSignalWMass[0] \
#                             && highResolvedSidebandWMass[0] \
#                             && bVeto[0]'

ResolveCats['ResolvedTopCR_']='resolved[0] && resolvedSignalWMass[0] && bReq[0]'


# cuts['BoostedQCDcr'] = 'boostedQCDcr[0]'
# cuts['ResolvedQCDcr'] = 'resolvedQCDcr[0]'



##=== Define cuts ===###
for Lep in LepCats:

    for BCat in BoostCats:
        for BProcCat in BoostProcCats:
            cuts[Lep+BProcCat+BCat]=  BoostCats[BCat]\
                                +'&&'+BoostProcCats[BProcCat]\
                                +'&&'+LepCats[Lep]

    for RCat in ResolveCats:
        for RProcCat in ResolveProcCats:
            cuts[Lep+RProcCat+RCat]=  ResolveCats[RCat]\
                                +'&&'+ResolveProcCats[RProcCat]\
                                +'&&'+LepCats[Lep]

# cuts['inclusive'] = '1'
