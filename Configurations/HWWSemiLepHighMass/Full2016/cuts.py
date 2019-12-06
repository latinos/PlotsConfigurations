# cuts
# this should be checked in postprocessing, just to be sure
# TODO: some of these may differ for different years
# supercut = LepWPCut+' && Lepton_pt[0]>27 \
#          && Alt$(Lepton_pt[1],0)<=15 \
#          && (abs(Alt$(Lepton_pdgId[1], 11))==11 || Alt$(Lepton_pt[1],0)<10) \
#          && abs(Lepton_eta[0])<2.5 \
#          '
supercut = 'LepWPCut && Lepton_pt[0]>27 \
         && Alt$(Lepton_pt[1],0)<=10 \
         && abs(Lepton_eta[0])<2.5 \
         '
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
LepCats={}
LepCats['']='1'
LepCats['ElectronCh']='(abs(Lepton_pdgId[0])==11)'
LepCats['MuonCh']='(abs(Lepton_pdgId[0])==13)'


BoostCats={}
# BoostCats['Boosted']='IsBoosted'
BoostCats['BoostedSR']='IsBoosted && signalregion'
BoostCats['BoostedSB']='IsBoosted && sideband'
BoostCats['BoostedTopCR']='IsBoosted && topcr'

BoostProcCats={}
BoostProcCats['']='1'
# BoostProcCats['Untagged']='!IsVbfFat'
# BoostProcCats['VBF']='IsVbfFat'


ResolveCats={}
# ResolveCats['Resolved']='IsResolved'
ResolveCats['ResolvedSR']='IsResolved && signalregion'
ResolveCats['ResolvedSB']='IsResolved && sideband'
ResolveCats['ResolvedTopCR']='IsResolved && topcr'

ResolveProcCats={}
ResolveProcCats['']='1'
# ResolveProcCats['Untagged']='!IsVbfjj'
# ResolveProcCats['VBF']='IsVbfjj'



##=== Define cuts ===###
for Lep in LepCats:

    for BCat in BoostCats:
        for BProcCat in BoostProcCats:
            cuts[Lep+BProcCat+BCat]=BoostCats[BCat]\
                +'&&'+BoostProcCats[BProcCat]\
                +'&&'+LepCats[Lep]

    for RCat in ResolveCats:
        for RProcCat in ResolveProcCats:
            cuts[Lep+RProcCat+RCat]=ResolveCats[RCat]\
                +'&&'+ResolveProcCats[RProcCat]\
                +'&&'+LepCats[Lep]

cuts['inclusive'] = '1'
