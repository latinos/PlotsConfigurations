# cuts
# this should be checked in postprocessing, just to be sure
# TODO: some of these may differ for different years
# supercut = LepWPCut+' && Lepton_pt[0]>27 \
#          && Alt$(Lepton_pt[1],0)<=15 \
#          && (abs(Alt$(Lepton_pdgId[1], 11))==11 || Alt$(Lepton_pt[1],0)<10) \
#          && abs(Lepton_eta[0])<2.5 \
#          '
supercut = 'LepWPCut[0] && Lepton_pt[0]>27 \
         && Alt$(Lepton_pt[1],0)<=10 \
         && abs(Lepton_eta[0])<2.5 \
         '
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
LepCats={}
LepCats['']='1'
# LepCats['ElectronCh']='(abs(Lepton_pdgId[0])==11)'
# LepCats['MuonCh']='(abs(Lepton_pdgId[0])==13)'


BoostCats={}
# BoostCats['Boosted']='boosted[0]'
BoostCats['BoostedSR']='boosted[0] && boostedSignalWMass[0] && !IsBTopTagged'
BoostCats['BoostedSB']='boosted[0] \
                        && !boostedSignalWMass[0] \
                        && boostedSidebandWMass[0] \
                        && !IsBTopTagged'
BoostCats['BoostedTopCR']='boosted[0] && boostedSignalWMass[0] && IsBTopTagged'

BoostProcCats={}
BoostProcCats['']='1'
# BoostProcCats['Untagged']='!IsVbfFat'
# BoostProcCats['VBF']='IsVbfFat'


ResolveCats={}
# ResolveCats['Resolved']='resolved[0]'
ResolveCats['ResolvedSR']='resolved[0] && resolvedSignalWMass[0] && !IsBTopTagged'
ResolveCats['ResolvedSB']='resolved[0] \
                        && !resolvedSignalWMass[0] \
                        && resolvedSidebandWMass[0] \
                        && !IsBTopTagged'
ResolveCats['ResolvedTopCR']='resolved[0] && resolvedSignalWMass[0] && IsBTopTagged'

ResolveProcCats={}
ResolveProcCats['']='1'
# ResolveProcCats['Untagged']='!IsVbfjj'
# ResolveProcCats['VBF']='IsVbfjj'


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
