
workdir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combineFrozen_r-10+10
datacardDir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/datacards_27-06-16

variable=mTi
variableVBF=mTi
#variableVBF=mllVSmtiVBF

cd $workdir

cd ~/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
cd -


#
cat ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt | grep -v "_Vg_ibin_1" &> ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt
cp ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.orig.txt
mv ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt

#cat ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt | grep -v "_ZH_hww_ibin_1" | grep -v "ZH_hww_ibin_7" &> ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.pruned.txt
cat ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt | grep -v "_ZH_hww_ibin_1_"  &> ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.pruned.txt
cp ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.orig.txt
mv ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.pruned.txt ${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt


# combine datacards
 
combineCards.py   of1j=${datacardDir}/hwwhm_13TeV_of_1j/${variable}/datacard.txt \
                  of0j=${datacardDir}/hwwhm_13TeV_of_0j/${variable}/datacard.txt \
                  ofVBF=${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of2jTop=${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  of2jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  >   ICHEP2016.txt

combineCards.py   of1j=${datacardDir}/hwwhm_13TeV_of_1j/${variable}/datacard.txt \
                  of0j=${datacardDir}/hwwhm_13TeV_of_0j/${variable}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   ICHEP2016.01jet.txt


combineCards.py   of1j=${datacardDir}/hwwhm_13TeV_of_1j/${variable}/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   ICHEP2016.1jet.txt

combineCards.py   of0j=${datacardDir}/hwwhm_13TeV_of_0j/${variable}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  >   ICHEP2016.0jet.txt

combineCards.py   ofVBF=${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt \
                  of2jTop=${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of2jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  >   ICHEP2016.2jet.txt

