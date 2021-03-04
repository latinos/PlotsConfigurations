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
LepCats['incl_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>38 \
                 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30 )'
# LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>38 )'
# LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>30 )'


BoostProcCats={}
BoostProcCats['']='1'
# BoostProcCats['VBF_']='DNN_isVBF_OTF[0] > 0.7'
# BoostProcCats['GGF_']='DNN_isVBF_OTF[0] <= 0.7'

# High Mass category
dPhiWWCut  ='&& abs(dPhi_WW_boosted[0]) > 2.2'
sumPtCut   ='&& (Lepton_pt[0] + PuppiMET_pt + Alt$(HM_CleanFatJetPassMBoosted_pt[0], -9999)) > 850'

HMProcCats={}
# HMProcCats['55']='(tau21DDT<0.55)'+dPhiWWCut+sumPtCut
HMProcCats['notau']='1 '+dPhiWWCut+sumPtCut
HMProcCats['nosum']='(tau21DDT<0.55)'+dPhiWWCut
HMProcCats['noWW']='(tau21DDT<0.55)'+sumPtCut


HMCats={}
# HMCats['HMSR_']='boosted[0] \
#                 && boostedSignalWMass[0] \
#                 && bVeto[0]'
# HMCats['HMSB_']='boosted[0] \
#                && !boostedSignalWMass[0] \
#                && boostedSidebandWMass[0] \
#                && bVeto[0]'
# HMCats['HMTopCR_']='boosted[0] \
#                && boostedSignalWMass[0] \
#                && !bVeto[0]'


QCDCats={}
QCDCats['ResolvedQCDcr'] = 'resolvedQCDcr[0]'


##=== Define cuts ===###
for Lep in LepCats:
    for HCat in HMCats:
        for BProcCat in BoostProcCats:
            for HProcCat in HMProcCats:
                cuts[Lep+BProcCat+HProcCat+HCat]=  HMCats[HCat]\
                                +'&&'+BoostProcCats[BProcCat]\
                                +'&&'+HMProcCats[HProcCat]\
                                +'&&'+LepCats[Lep]

    for QCat in QCDCats:
        cuts[Lep+QCat] = QCDCats[QCat] + '&&' + LepCats[Lep]