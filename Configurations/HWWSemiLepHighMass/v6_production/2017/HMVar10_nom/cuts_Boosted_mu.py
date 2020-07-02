ONLY_FINAL=True
#-----Variable Deinition-----#
from WPandCut2017 import *
import sys
#cuts={}


scriptname=opt.cutsFile

LepWPCut='(Lepton_isTightElectron_'+eleWP+'[0]>0.5 || Lepton_isTightMuon_'+muWP+'[0]>0.5)'
LepCut="(  Lepton_pt[0]>30 \
&& ( fabs(Lepton_eta[0])  < 2.1*(abs(Lepton_pdgId[0])==11) \
||   fabs(Lepton_eta[0])  < 2.4*(abs(Lepton_pdgId[0])==13))\
&& ( ( Alt$( Lepton_pt[1],-1) < 15*( abs( Alt$(Lepton_pdgId[1], 11)) ==11) )\
||   ( Alt$( Lepton_pt[1],-1) < 10*( abs( Alt$(Lepton_pdgId[1], 13)) ==13) )\
)\
)"
LepPtCut='(Lepton_pt[0] > ('+elePtCut+'*(abs(Lepton_pdgId[0])==11) + '+muPtCut+'*(abs(Lepton_pdgId[0])==13)) )'



#------End of Variable Definition-----#
#supercut = LepWPCut+'&&'+LepPtCut+'&&'+LepCut+'&&isFatJetEvent[0]'
supercut = LepWPCut+'&&'+LepPtCut+'&&'+LepCut
METtype="PuppiMET"


##---Lepton Categorization---##



LepCats={}
if 'ele' in scriptname:
    LepCats['eleCH']='(Lepton_isTightElectron_'+eleWP+'[0]>0.5)'
elif 'mu' in scriptname:
    LepCats['muCH']='(Lepton_isTightMuon_'+muWP+'[0]>0.5)'
else:
    LepCats={
        '_':'1',
        'eleCH':'(Lepton_isTightElectron_'+eleWP+'[0]>0.5)',
        'muCH':'(Lepton_isTightMuon_'+muWP+'[0]>0.5)',
    }

##-----Basic categorization-----##



##---Boosted---##
##---common categorization -> ggF/VBF
BoostedProdCats={
    'Boosted':'isBoosted',
    'BoostedggF':'isBoosted&&!isVBF_Boosted',
    'BoostedVBF':'isBoosted&&isVBF_Boosted',

}
BoostedRegionCats={}
#for sel in FatSel:

#    BoostedRegionCats['SR'+sel]='(nBJetBoosted==0) && (CleanFatJet_mass[FinalFatJet_'+sel+'_cfjidx] > 65 ) && (CleanFatJet_mass[FinalFatJet_'+sel+'_cfjidx] < 105)'
#    BoostedRegionCats['SB'+sel]='(nBJetBoosted==0) && ((CleanFatJet_mass[FinalFatJet_'+sel+'_cfjidx] < 65 ) || (CleanFatJet_mass[FinalFatJet_'+sel+'_cfjidx] > 105))'


BoostedRegionCats['TOP'] ='(nBJetBoosted > 0)'
BoostedRegionCats['SR']='(nBJetBoosted==0) && (WtaggerFatjet_mass[0] > 65 ) && ( WtaggerFatjet_mass[0] < 105) && nWtaggerFatjet==1'
BoostedRegionCats['SB']='(nBJetBoosted==0) && ((WtaggerFatjet_mass[0] < 65 ) || ( WtaggerFatjet_mass[0] > 105)) && nWtaggerFatjet==1'
#BoostedRegionCats['SR1FJ']='(nBJetBoosted==0) && (WtaggerFatjet_mass[0] > 65 ) && ( WtaggerFatjet_mass[0] < 105) && nWtaggerFatjet==1'
#BoostedRegionCats['SB1FJ']='(nBJetBoosted==0) && ((WtaggerFatjet_mass[0] < 65 ) || ( WtaggerFatjet_mass[0] > 105)) && nWtaggerFatjet==1'



BoostedPtOverMlnJCat= {}
if not ONLY_FINAL: BoostedPtOverMlnJCat['NoPtOverMcut']='1'
BoostedPtOverMlnJCat['PtOverM04']='minPtWOverMlnJ_MW > 0.4'
#for sel in FatSel:
#    BoostedPtOverMlnJCat['PtOverM04'+sel]='minPtWOverMlnJ_'+sel+' > 0.4'

##--BoostedProdCats, BoostedRegionCats, BoostedPtOverMlnJCat
for LepCut in LepCats:
    for ProdCut in BoostedProdCats:
        for RegionCut in BoostedRegionCats:
            for PtOvMCut in BoostedPtOverMlnJCat:
                cuts[LepCut+'__'+ProdCut+'__'+RegionCut+'__'+PtOvMCut] = LepCats[LepCut]\
                                                                         +'&&'+BoostedProdCats[ProdCut]\
                                                                         +'&&'+BoostedRegionCats[RegionCut]\
                                                                         +'&&'+BoostedPtOverMlnJCat[PtOvMCut]

##---End of Boosted


print "Ncuts=",len(cuts)

