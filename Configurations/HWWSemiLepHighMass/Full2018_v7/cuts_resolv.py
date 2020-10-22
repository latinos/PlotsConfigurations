# cuts
cuts = {}
# this should be checked in postprocessing, just to be sure
supercut = '\
    Alt$(Lepton_pt[1],0)<=10 \
&&  abs(Lepton_eta[0])<2.5 \
'
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
LepCats={}
LepCats['incl_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>35 \
                 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'
LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>35 )'
LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'


ResolveProcCats={}
ResolveProcCats['']='1'
ResolveProcCats['VBF_']='DNN_isVBF_OTF[0] > 0.75'
ResolveProcCats['GGF_']='DNN_isVBF_OTF[0] <= 0.75'

ResolveCats={}
# ResolveCats['Resolved']='resolved[0]'
ResolveCats['ResolvedSR_']='resolved[0] && resolvedSignalWMass[0] && bVeto[0]'
ResolveCats['ResolvedSB_']='resolved[0] \
                           && !resolvedSignalWMass[0] \
                           && resolvedSidebandWMass[0] \
                           && bVeto[0]'
ResolveCats['ResolvedTopCR_']='resolved[0] && resolvedSignalWMass[0] && !bVeto[0]'


##=== Define cuts ===###
for Lep in LepCats:
    for RCat in ResolveCats:
        for RProcCat in ResolveProcCats:
            cuts[Lep+RProcCat+RCat]=  ResolveCats[RCat]\
                                +'&&'+ResolveProcCats[RProcCat]\
                                +'&&'+LepCats[Lep]
