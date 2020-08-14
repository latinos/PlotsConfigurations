# cuts
cuts = {}
# this should be checked in postprocessing, just to be sure
supercut = 'Lepton_pt[0]>38 \
         && Alt$(Lepton_pt[1],0)<=10 \
         && abs(Lepton_eta[0])<2.5 \
         && !Lep1WPCut[0] \
         '
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
IsoCats={}
# IsoCats['']='1'
IsoCats['Tight']='LepWPCut'
IsoCats['NotTight']='!LepWPCut'

MtCats={}
MtCats['High']='WlepMT>50'
MtCats['Low']='WlepMT<50'


LepCats={}
# LepCats['incl_']='1'
LepCats['ElCh_']='(abs(Lepton_pdgId[0])==11)'
LepCats['MuCh_']='(abs(Lepton_pdgId[0])==13)'



ResolveProcCats={}
ResolveProcCats['']='1'
# ResolveProcCats['Untagged_']='!IsVbfjj'
# ResolveProcCats['VBF_']='IsVbfjj'
# ResolveProcCats['DNNVBF_']='DNN_isVBF_OTF'

ResolveCats={}
# ResolveCats['Resolved']='resolved[0]'
ResolveCats['ResolvedSR_']='resolved[0] && resolvedSignalWMass[0] && bVeto[0]'
ResolveCats['ResolvedSB_']='resolved[0] \
                           && !resolvedSignalWMass[0] \
                           && resolvedSidebandWMass[0] \
                           && bVeto[0]'
# ResolveCats['ResolvedSB___low']='resolved[0] \
#                             && !resolvedSignalWMass[0] \
#                             && lowResolvedSidebandWMass[0] \
#                             && bVeto[0]'
# ResolveCats['ResolvedSB___high']='resolved[0] \
#                             && !resolvedSignalWMass[0] \
#                             && highResolvedSidebandWMass[0] \
#                             && bVeto[0]'
ResolveCats['ResolvedTopCR_']='resolved[0] && resolvedSignalWMass[0] && bReq[0]'

# ResolveCats['ResolvedTESTSR_']='resolvedTEST[0] && resolvedSignalWMass[0] && bVeto[0]'

QCDCats={}
# QCDCats['BoostedQCDcr'] = 'boostedQCDcr[0]'
# QCDCats['ResolvedQCDcr'] = 'resolvedQCDcr[0]'



##=== Define cuts ===###
for Iso in IsoCats:
    for Mt in MtCats:
        for Lep in LepCats:

            for RCat in ResolveCats:
                for RProcCat in ResolveProcCats:
                    cuts[Iso+Mt+Lep+RProcCat+RCat]=  ResolveCats[RCat]\
                                        +'&&'+ResolveProcCats[RProcCat]\
                                        +'&&'+LepCats[Lep]\
                                        +'&&'+MtCats[Mt]\
                                        +'&&'+IsoCats[Iso]

            for QCat in QCDCats:
                cuts[Lep+QCat] = QCDCats[QCat] + '&&' + LepCats[Lep]
# cuts = {}
# cuts['inclusive'] = '1'
