ONLY_FINAL=True
print "ONLY_FINAL=",ONLY_FINAL
#-----Variable Deinition-----#
from WPandCut2017 import *
_ALGO="_"+ALGO
_ALGO_="_"+ALGO+"_"

import sys
#cuts={}
#scriptname=''

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
METtype="PuppiMET"
#met>30
#supercut +='&&!isBoost_'+WTAG+'_nom'

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

ResolvedProdCats={
    'Resolved'   :'isResol'+_ALGO_+'nom',
    'ResolvedggF':'isResol'+_ALGO_+'nom && !isVBF_Resol'+_ALGO_+'nom',
    'ResolvedVBF':'isResol'+_ALGO_+'nom && isVBF_Resol'+_ALGO_+'nom',
    
}
ResolvedRegionCats={}
##--type in kin var module'_
ResolvedRegionCats['SR'] = '(nBJetResol'+_ALGO_+'nom == 0) && isResolSR'+_ALGO_+'nom'
ResolvedRegionCats['SB'] = '(nBJetResol'+_ALGO_+'nom == 0) && isResolSB'+_ALGO_+'nom'
ResolvedRegionCats['Top'] = '(nBJetResol'+_ALGO_+'nom > 0) && isResol'+_ALGO_+'nom'




if 'SR' in scriptname :
    del ResolvedRegionCats['SB']
    del ResolvedRegionCats['Top']
elif 'CR' in scriptname:
    del ResolvedRegionCats['SR']


ResolvedMETCat={}
if not ONLY_FINAL : ResolvedMETCat['NoMET']='1'
ResolvedMETCat['METOver30']='('+METtype+'_nom_pt >'+METcutRes+')' ##PuppiMET_nom_pt




ResolvedPtOverMCats = {}
if not ONLY_FINAL:ResolvedPtOverMCats['NoPtOverMcut'] = '1'
ResolvedPtOverMCats['PtOverM035'] = 'lnjj'+_ALGO_+'nom_minPtWOverM>0.35'

ResolvedWlepMtCats = {}
if not ONLY_FINAL:ResolvedWlepMtCats['NoWlepMtcut'] = '1'
ResolvedWlepMtCats['WlepMtOver50'] = 'Wlep_nom_Mt > 50'

ResolvedWWMtCats={}
if not ONLY_FINAL:ResolvedWWMtCats['NoWWMtOvercut']='1'
ResolvedWWMtCats['WWMtOver60']='lnjj'+_ALGO_+'nom_Mt > 60'

ScoreCats={}
if not ONLY_FINAL : ScoreCats['ScoreALL']='(1)'
ScoreCats['Score0To30']='(Whad'+_ALGO_+'nom_ScoreToLeast<30)'
if not ONLY_FINAL : ScoreCats['Score30ToInf']='(Whad'+_ALGO_+'nom_ScoreToLeast>30)'

ResolvedMEKDCat={}
ResolvedMEKDCat['_']='1'
ResolvedMEKDCat['MEKDTAG']='(MEKD_Bst_C_'+MELA_C_RESOL_WP+'_M'+str(MELA_MASS_RESOL_WP)+"> 0.5)"
ResolvedMEKDCat['UNTAGGED']='(MEKD_Bst_C_'+MELA_C_RESOL_WP+'_M'+str(MELA_MASS_RESOL_WP)+"< 0.5)"


for LepCut in LepCats:
    for ProdCut in ResolvedProdCats:
        for RegionCut in ResolvedRegionCats:
            for METCut in ResolvedMETCat:
                for PtOvMCut in ResolvedPtOverMCats:
                    for WlepMtCut in ResolvedWlepMtCats:
                        for WWMtCut in ResolvedWWMtCats:
                            for ScoreCut in ScoreCats:
                                if 'VBF' in ProdCut:
                                    cuts[LepCut+'__'+ProdCut+'__'+RegionCut+'__'+METCut+'__'+PtOvMCut+'__'+WlepMtCut+'__'+WWMtCut+'__'+ScoreCut] = LepCats[LepCut]\
                                                         +'&&'+ResolvedProdCats[ProdCut]\
                                                         +'&&'+ResolvedRegionCats[RegionCut]\
                                                         +'&&'+ResolvedMETCat[METCut]\
                                                         +'&&'+ResolvedPtOverMCats[PtOvMCut]\
                                                         +'&&'+ResolvedWlepMtCats[WlepMtCut]\
                                                         +'&&'+ResolvedWWMtCats[WWMtCut]\
                                                         +'&&'+ScoreCats[ScoreCut]
                                else:
                                    for MEKDCut in ResolvedMEKDCat:
                                        cuts[LepCut+'__'+ProdCut+'__'+RegionCut+'__'+METCut+'__'+PtOvMCut+'__'+WlepMtCut+'__'+WWMtCut+'__'+ScoreCut+'__'+MEKDCut] = LepCats[LepCut]\
                                                         +'&&'+ResolvedProdCats[ProdCut]\
                                                         +'&&'+ResolvedRegionCats[RegionCut]\
                                                         +'&&'+ResolvedMETCat[METCut]\
                                                         +'&&'+ResolvedPtOverMCats[PtOvMCut]\
                                                         +'&&'+ResolvedWlepMtCats[WlepMtCut]\
                                                         +'&&'+ResolvedWWMtCats[WWMtCut]\
                                                         +'&&'+ScoreCats[ScoreCut]\
                                                         +'&&'+ResolvedMEKDCat[MEKDCut]
                                        

#cuts['isVBF']='isVBF'
print "Ncuts=",len(cuts)

