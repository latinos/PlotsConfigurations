# cuts
# FIXME: are these checked in postprocessing?
# TODO: some of these differe for different years
supercut = 'Lepton_pt[0]>30 \
         && Alt$(Lepton_pt[1],0)<=15 \
         && (Alt$(abs(Lepton_pdgId[1]), 11)==11 || Lepton_pt[1]<10) \
         && abs(Lepton_eta[0])<2.4 \
         && (abs(Lepton_pdgId[0])==13 || abs(Lepton_eta[0])<2.1) \
         '
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
LepCats={}
LepCats['']='(1)'
LepCats['ElectronCh']='(abs(Lepton_pdgId[0])==11)'
LepCats['MuonCh']='(abs(Lepton_pdgId[0])==13)'


BoostCats={}
BoostCats['BoostedSR']='IsBoostedSR'
BoostCats['BoostedSB']='IsBoostedSB'
BoostCats['BoostedTop']='IsBoostedTopCR'
    
BoostProcCats={}
BoostProcCats['']='1'
BoostProcCats['untagged']='!IsVbfFat'
BoostProcCats['vbf']='IsVbfFat'


ResolveCats={}
ResolveCats['ResolvedSR']='IsResolvedSR'
ResolveCats['ResolvedSB']='IsResolvedSB'
ResolveCats['ResolvedTop']='IsResolvedTopCR'
    
ResolveProcCats={}
ResolveProcCats['']='1'
ResolveProcCats['untagged']='!IsVbfjj'
ResolveProcCats['vbf']='IsVbfjj'



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
