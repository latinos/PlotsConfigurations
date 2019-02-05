
#workdir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/2015/combine2015_WWewk
#datacardDir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/2015/datacards_WWewk

workdir=/afs/cern.ch/user/l/lenzip/work/ww2018/MultiDraw/CMSSW_9_4_9/work/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/Full2016/combined_datacards_2016
datacardDir=/afs/cern.ch/user/l/lenzip/work/ww2018/MultiDraw/CMSSW_9_4_9/work/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/Full2016/datacards_OF

variable0j=mTi
variable1j=mTi
variable2j=mTi
variableVBF=mTi_VBF

#variable0j=mTi_VBF
#variable1j=mTi_VBF
#variable2j=mTi_VBF
#variableVBF=mTi_VBF


#variableINCL=mTi

cd $workdir

#cd /afs/cern.ch/user/l/lorusso/work/Higgs_highmass/Combine/CMSSW_7_4_7/src/

#MC stat
cd ~/work/Combine_autoMC_May232018/CMSSW_8_1_0/ 
#cd ~/work/Combine_autoMC/CMSSW_8_1_0/ 
eval `scramv1 runtime -sh`
cd -

#cat ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt | grep -v "_Vg_ibin_1" &> ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt
#cp ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.orig.txt
#mv ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt

#cat ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt | grep -v "_Vg_ibin_1" &> ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt
#cp ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.orig.txt
#mv ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt





#all
combineCards.py   of0j=${datacardDir}/hwwhm_13TeV_of0j/${variable0j}/datacard.txt \
                  of1j=${datacardDir}/hwwhm_13TeV_of1j/${variable1j}/datacard.txt \
                  of2j=${datacardDir}/hwwhm_13TeV_of2j/${variable2j}/datacard.txt \
                  ofVBF=${datacardDir}/hwwhm_13TeV_ofVBF/${variableVBF}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of2jTop=${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  ofVBFTop=${datacardDir}/hww2l2v_13TeV_top_ofVBF/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dy_of0j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dy_of1j/events/datacard.txt \
                  of2jDYtt=${datacardDir}/hww2l2v_13TeV_dy_of2j/events/datacard.txt \
                  ofVBFDYtt=${datacardDir}/hww2l2v_13TeV_dy_ofVBF/events/datacard.txt \
                  >   MORIOND2017.OF.txt

#0j
combineCards.py   of0j=${datacardDir}/hwwhm_13TeV_of0j/${variable0j}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dy_of0j/events/datacard.txt \
                  >   MORIOND2017.0jet.txt

#1j
combineCards.py   of1j=${datacardDir}/hwwhm_13TeV_of1j/${variable1j}/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dy_of1j/events/datacard.txt \
                  >   MORIOND2017.1jet.txt

#01j
combineCards.py   of1j=${datacardDir}/hwwhm_13TeV_of1j/${variable1j}/datacard.txt \
                  of0j=${datacardDir}/hwwhm_13TeV_of0j/${variable0j}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dy_of0j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dy_of1j/events/datacard.txt \
                  >   MORIOND2017.01jet.txt

#2j
combineCards.py   of2j=${datacardDir}/hwwhm_13TeV_of2j/${variable2j}/datacard.txt \
                  of2jTop=${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of2jDYtt=${datacardDir}/hww2l2v_13TeV_dy_of2j/events/datacard.txt \
                  >   MORIOND2017.2jet.txt


#VBF
combineCards.py   ofVBF=${datacardDir}/hwwhm_13TeV_ofVBF/${variableVBF}/datacard.txt \
                  ofVBFTop=${datacardDir}/hww2l2v_13TeV_top_ofVBF/events/datacard.txt \
                  ofVBFDYtt=${datacardDir}/hww2l2v_13TeV_dy_ofVBF/events/datacard.txt \
                  >   MORIOND2017.VBF.txt



#INCLUSIVO con VBF
#combineCards.py   ofINCL=${datacardDir}/hwwhm_13TeV_of_INCL/${variableINCL}/datacard.txt \
#                  ofVBF=${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt \
#                  ofINCLTop=${datacardDir}/hww2l2v_13TeV_top_of_2bjet/events/datacard.txt \
#                  ofINCLTop_VBF=${datacardDir}/hww2l2v_13TeV_top_of_2bjet_VBF/events/datacard.txt \
#                  ofINCLDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of_INCL/events/datacard.txt \
#                  >   MORIOND2017.INCL.txt
                 


##0 jet
#echo "nuisance edit drop qqH_hww_250_c10brn00 of0jDYtt CMS_scale_met
#nuisance edit drop qqH_hww_450_c10brn00 of0jDYtt CMS_scale_met
#nuisance edit drop VVV of0jDYtt CMS_scale_j" >>  MORIOND2017.0jet.txt
# 
##1 jet
#echo "nuisance edit drop qqH_hww_1500_c10brn00 of2jDYtt CMS_scale_e
#nuisance edit drop qqH_hww_1500_c10brn00 of2jDYtt CMS_scale_m
#nuisance edit drop qqH_hww_1500_c10brn00 of2jDYtt CMS_scale_j" >>  MORIOND2017.2jet.txt
# 
# 
#echo "
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_Full2016_btag_bc  
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_Full2016_btag_udsg
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_idiso_ele
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_idiso_mu
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_scale_e
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_scale_j
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_scale_m
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_trigger
# 
#nuisance edit drop Vg ofVBFTop CMS_scale_j
#nuisance edit drop VVV ofVBFDYtt CMS_hww2l2v_13TeV_dytt_of2j_vbf_VVV_ibin_1_stat
#nuisance edit drop VVV ofVBFDYtt CMS_scale_j
#nuisance edit drop VVV ofVBFDYtt CMS_scale_m
#nuisance edit drop Vg ofVBFDYtt CMS_hww2l2v_13TeV_dytt_of2j_vbf_Vg_ibin_1_stat
# 
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_Full2016_btag_bc  
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_Full2016_btag_udsg
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_idiso_ele
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_idiso_mu
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_scale_e
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_scale_j
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_scale_m
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_trigger
# 
# 
#"  >>  MORIOND2017.VBF.txt
# 
##ALL
#echo "nuisance edit drop qqH_hww_250_c10brn00 of0jDYtt CMS_scale_met
#nuisance edit drop qqH_hww_450_c10brn00 of0jDYtt CMS_scale_met
#nuisance edit drop VVV of0jDYtt CMS_scale_j
# 
#nuisance edit drop qqH_hww_1500_c10brn00 of2jDYtt CMS_scale_e
#nuisance edit drop qqH_hww_1500_c10brn00 of2jDYtt CMS_scale_m
#nuisance edit drop qqH_hww_1500_c10brn00 of2jDYtt CMS_scale_j
# 
# 
# 
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_Full2016_btag_bc  
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_Full2016_btag_udsg
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_idiso_ele
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_idiso_mu
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_scale_e
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_scale_j
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_scale_m
#nuisance edit drop ggH_hww_INT300_c10brn00 ofVBF CMS_trigger
# 
#nuisance edit drop Vg ofVBFTop CMS_scale_j
#nuisance edit drop VVV ofVBFDYtt CMS_hww2l2v_13TeV_dytt_of2j_vbf_VVV_ibin_1_stat
#nuisance edit drop VVV ofVBFDYtt CMS_scale_j
#nuisance edit drop VVV ofVBFDYtt CMS_scale_m
#nuisance edit drop Vg ofVBFDYtt CMS_hww2l2v_13TeV_dytt_of2j_vbf_Vg_ibin_1_stat
# 
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_Full2016_btag_bc  
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_Full2016_btag_udsg
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_idiso_ele
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_idiso_mu
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_scale_e
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_scale_j
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_scale_m
#nuisance edit drop ggH_hww_INT350_c10brn00 ofVBF CMS_trigger
# 
# 
#" >>   MORIOND2017.txt
