
workdir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/2015/combine2015_WWewk
datacardDir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/2015/datacards_WWewk
#workdir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combine2016
#datacardDir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/datacards


variable0j=mTi
variable1j=mTi
variableVBF=mTi_VBF

cd $workdir

cd ~/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
cd -


#
cat ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt | grep -v "_Vg_ibin_1" &> ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt
cp ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.orig.txt
mv ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt

cat ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt | grep -v "CMS_hww2l2v_13TeV_dytt_of1j_Vg_ibin_1_stat" &> ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.pruned.txt
cp ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.orig.txt
mv ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.pruned.txt ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt

cat ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt | grep -v "_ZH_hww_ibin_1_"  &> ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.pruned.txt
cp ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.orig.txt
mv ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.pruned.txt ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt

cat ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt | grep -v "CMS_hwwhm_13TeV_of_VBF_Vg_ibin_1_stat" &> ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.pruned.txt
cp ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.orig.txt
mv ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.pruned.txt ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt

#cat ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt | grep -v "CMS_hww2l2v_13TeV_dytt_of0j_VVV_ibin_1_stat" &> ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.pruned.txt
#cp ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.orig.txt
#mv ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.pruned.txt ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt

cat ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt | grep -v "CMS_hww2l2v_13TeV_dytt_of0j_VVV_ibin_1_stat" &> ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.pruned.txt
cp ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.orig.txt
mv ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.pruned.txt ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt


#cat ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt | grep -v "ggH_hww_INT" &> ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.pruned.txt
#cp ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.orig.txt
#mv ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.pruned.txt ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt


# combine datacards
 
combineCards.py   of1j=${datacardDir}/hwwhm_13TeV_of_1j/${variable1j}/datacard.txt \
                  of0j=${datacardDir}/hwwhm_13TeV_of_0j/${variable0j}/datacard.txt \
                  ofVBF=${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of2jTop=${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  of2jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  >   ICHEP2016.txt

combineCards.py   of1j=${datacardDir}/hwwhm_13TeV_of_1j/${variable1j}/datacard.txt \
                  of0j=${datacardDir}/hwwhm_13TeV_of_0j/${variable0j}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   ICHEP2016.01jet.txt


combineCards.py   of1j=${datacardDir}/hwwhm_13TeV_of_1j/${variable1j}/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   ICHEP2016.1jet.txt

combineCards.py   of0j=${datacardDir}/hwwhm_13TeV_of_0j/${variable0j}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  >   ICHEP2016.0jet.txt

combineCards.py   ofVBF=${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt \
                  of2jTop=${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of2jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  >   ICHEP2016.2jet.txt

