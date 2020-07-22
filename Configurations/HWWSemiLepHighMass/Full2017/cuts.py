# cuts
cuts = {}
# this should be checked in postprocessing, just to be sure
supercut = 'LepWPCut[0] && Lepton_pt[0]>38 \
         && Alt$(Lepton_pt[1],0)<=10 \
         && abs(Lepton_eta[0])<2.5 \
         && !Lep1WPCut[0] \
         '
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
LepCats={}
# LepCats['incl_']='1'
LepCats['ElCh_']='(abs(Lepton_pdgId[0])==11)'
LepCats['MuCh_']='(abs(Lepton_pdgId[0])==13)'



BoostProcCats={}
BoostProcCats['']='1'
# BoostProcCats['Untagged_']='!IsVbfFat'
# BoostProcCats['VBF_']='IsVbfFat'
# BoostProcCats['DNNVBF_']='DNN_isVBF_OTF[0]'


BoostCats={}
# BoostCats['Boosted']='boosted[0]'
BoostCats['BoostedSR_']='tau21Cut \
                        && boostedNoTau21[0] \
                        && boostedSignalWMassNoTau21[0] \
                        && bVeto[0]'
BoostCats['BoostedSB_']='tau21Cut \
                       && boostedNoTau21[0] \
                       && !boostedSignalWMassNoTau21[0] \
                       && boostedSidebandWMassNoTau21[0] \
                       && bVeto[0]'
BoostCats['BoostedTopCR_']='tau21Cut \
                       && boostedNoTau21[0] \
                       && boostedSignalWMassNoTau21[0] \
                       && bReq[0]'



# High Mass category
# dPhiLNuCut ='&& abs(dPhi_LNu[0]) < 0.7'
dPhiWWCut  ='&& abs(dPhi_WW_boosted[0]) > 2.2'
# fatJetPtCut='&& Alt$(CleanFatJetPassMBoosted_pt[0], -999) > 400'
sumPtCut   ='&& Lepton_pt[0] + PuppiMET_pt + Alt$(CleanFatJetPassMBoosted_pt[0], -9999) > 850'

HMProcCats={}
# HMProcCats['050_'] = 'tau21DDT < 0.45'
# HMProcCats['050_'] = 'tau21DDT < 0.5'
# HMProcCats['055_'] = 'tau21DDT < 0.55'
# HMProcCats['060_'] = 'tau21DDT < 0.6'
# HMProcCats['all5_']= 'tau21DDT < 0.55' +dPhiLNuCut+dPhiWWCut+fatJetPtCut+sumPtCut
# HMProcCats['all6_']= 'tau21DDT < 0.6' +dPhiLNuCut+dPhiWWCut+fatJetPtCut+sumPtCut

# HMProcCats['LNu']='1'+dPhiLNuCut
# HMProcCats['notLNu']='tau21DDT<0.55'+dPhiWWCut+fatJetPtCut+sumPtCut
# HMProcCats['WW']='1'+dPhiWWCut
# HMProcCats['jetpt']='1'+fatJetPtCut
# HMProcCats['notjetpt']='tau21DDT<0.55'+dPhiWWCut+sumPtCut+dPhiLNuCut
# HMProcCats['sumpt']='1'+sumPtCut
# HMProcCats['notTauDDT']='1'+dPhiWWCut+fatJetPtCut+sumPtCut
# HMProcCats['notWW']='tau21DDT<0.55'+sumPtCut
# HMProcCats['notsumpt']='tau21DDT<0.55'+dPhiWWCut
HMProcCats['58']='tau21DDT<0.58'+dPhiWWCut+sumPtCut
HMProcCats['55']='tau21DDT<0.55'+dPhiWWCut+sumPtCut
HMProcCats['52']='tau21DDT<0.52'+dPhiWWCut+sumPtCut


HMCats={}
# HMCats['HMSR_']='boostedNoTau21[0] \
#                 && boostedSignalWMassNoTau21[0] \
#                 && bVeto[0]'
# HMCats['HMSB_']='boostedNoTau21[0] \
#                && !boostedSignalWMassNoTau21[0] \
#                && boostedSidebandWMassNoTau21[0] \
#                && bVeto[0]'
# HMCats['HMTopCR_']='boostedNoTau21[0] \
#                && boostedSignalWMassNoTau21[0] \
#                && bReq[0]'


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
for Lep in LepCats:

    for BCat in BoostCats:
        for BProcCat in BoostProcCats:
            cuts[Lep+BProcCat+BCat]=  BoostCats[BCat]\
                                +'&&'+BoostProcCats[BProcCat]\
                                +'&&'+LepCats[Lep]

    for HCat in HMCats:
        for HProcCat in HMProcCats:
            cuts[Lep+HProcCat+HCat]=  HMCats[HCat]\
                                +'&&'+HMProcCats[HProcCat]\
                                +'&&'+LepCats[Lep]

    for RCat in ResolveCats:
        for RProcCat in ResolveProcCats:
            cuts[Lep+RProcCat+RCat]=  ResolveCats[RCat]\
                                +'&&'+ResolveProcCats[RProcCat]\
                                +'&&'+LepCats[Lep]

    for QCat in QCDCats:
        cuts[Lep+QCat] = QCDCats[QCat] + '&&' + LepCats[Lep]
# cuts['inclusive'] = '1'
