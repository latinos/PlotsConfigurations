ONLY_FINAL=True
print "ONLY_FINAL=",ONLY_FINAL
#-----Variable Deinition-----#
from WPandCut2017 import *
import sys
#cuts={}


scriptname=opt.cutsFile

LepWPCut='(Lepton_isTightElectron_'+eleWP+'[0]>0.5 || Lepton_isTightMuon_'+muWP+'[0]>0.5)'
LepCut="(  Lepton_pt[0]>30 \
&& ( fabs(Lepton_eta[0])  < 2.5*(abs(Lepton_pdgId[0])==11) \
||   fabs(Lepton_eta[0])  < 2.4*(abs(Lepton_pdgId[0])==13))\
&& ( ( Alt$( Lepton_isLoose[1]*Lepton_pt[1],-1) < 15*( abs( Alt$(Lepton_pdgId[1], 11)) ==11) )\
||   ( Alt$( Lepton_isLoose[1]*Lepton_pt[1],-1) < 10*( abs( Alt$(Lepton_pdgId[1], 13)) ==13) )\
)\
)"
LepPtCut='(Lepton_pt[0] > ('+elePtCut+'*(abs(Lepton_pdgId[0])==11) + '+muPtCut+'*(abs(Lepton_pdgId[0])==13)) )'



#------End of Variable Definition-----#
#supercut = LepWPCut+'&&'+LepPtCut+'&&'+LepCut+'&&isFatJetEvent[0]'
supercut = LepWPCut+'&&'+LepPtCut+'&&'+LepCut
#METtype="PuppiMET"
#>40

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
    'Boosted':'isBoost_'+WTAG+'_nom',
    'BoostedggF':'isBoost_'+WTAG+'_nom&&!isVBF_Boost_'+WTAG+'_nom',
    'BoostedVBF':'isBoost_'+WTAG+'_nom&&isVBF_Boost_'+WTAG+'_nom',


}
BoostedRegionCats={}
BoostedRegionCats['SR']='(nBJetBoost_'+WTAG+'_nom==0) && (isBoostSR_'+WTAG+'_nom)'
BoostedRegionCats['TOP'] ='(nBJetBoost_'+WTAG+'_nom > 0) && (isBoost_'+WTAG+'_nom)'
BoostedRegionCats['SB']='(nBJetBoost_'+WTAG+'_nom==0) && (isBoostSB_'+WTAG+'_nom)'


if 'CR' in scriptname : 
    del BoostedRegionCats['SR']
if 'SR' in scriptname :
    del BoostedRegionCats['TOP']
    del BoostedRegionCats['SB']

BoostedMETCat={}
if not ONLY_FINAL : BoostedMETCat['NoMET']='1'
BoostedMETCat['METOver40']='('+METtype+'_nom_pt >'+METcutBst+')'##PuppiMET_nom_pt


BoostedPtOverMlnJCat= {}
if not ONLY_FINAL: BoostedPtOverMlnJCat['NoPtOverMcut']='1'
BoostedPtOverMlnJCat['PtOverM04']='lnJ_'+WTAG+'_nom_minPtWOverM > 0.4'

BoostedMEKDCat={}
BoostedMEKDCat['_']='1'
BoostedMEKDCat['MEKDTAG']='(MEKD_Bst_C_'+MELA_C_BOOST_WP+'_M'+str(MELA_MASS_BOOST_WP)+"> 0.5)"
BoostedMEKDCat['UNTAGGED']='(MEKD_Bst_C_'+MELA_C_BOOST_WP+'_M'+str(MELA_MASS_BOOST_WP)+"< 0.5)"

##--BoostedProdCats, BoostedRegionCats, BoostedPtOverMlnJCat
for LepCut in LepCats:
    for ProdCut in BoostedProdCats:
        for RegionCut in BoostedRegionCats:
            for METCut in BoostedMETCat:
                for PtOvMCut in BoostedPtOverMlnJCat:
                    if 'VBF' in ProdCut : 
                        cuts[LepCut+'__'+ProdCut+'__'+RegionCut+'__'+METCut+'__'+PtOvMCut] = LepCats[LepCut]\
                                                                        +'&&'+BoostedProdCats[ProdCut]\
                                                                        +'&&'+BoostedRegionCats[RegionCut]\
                                                                        +'&&'+BoostedMETCat[METCut]\
                                                                        +'&&'+BoostedPtOverMlnJCat[PtOvMCut]
                    else:
                        for MEKDCut in BoostedMEKDCat:
                            cuts[LepCut+'__'+ProdCut+'__'+RegionCut+'__'+METCut+'__'+PtOvMCut+"__"+MEKDCut] = LepCats[LepCut]\
                                                                        +'&&'+BoostedProdCats[ProdCut]\
                                                                        +'&&'+BoostedRegionCats[RegionCut]\
                                                                        +'&&'+BoostedMETCat[METCut]\
                                                                        +'&&'+BoostedPtOverMlnJCat[PtOvMCut]\
                                                                        +'&&'+BoostedMEKDCat[MEKDCut]
##---End of Boosted


print "Ncuts=",len(cuts)

