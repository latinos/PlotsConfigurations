
workdir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combineLSF
datacardDir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/datacards

variable=mllVSmti
variableVBF=mllVSmtiVBF

cd $workdir

cd ~/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
cd -


#
cat ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" &> ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt
cp ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.orig.txt
mv ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.pruned.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt

cat ${datacardDir}/hwwhm_13TeV_of_VBF/mllVSmtiVBF/datacard.txt | grep -v "_ZH_hww_ibin_1" &> ${datacardDir}/hwwhm_13TeV_of_VBF/mllVSmtiVBF/datacard.pruned.txt
cp ${datacardDir}/hwwhm_13TeV_of_VBF/mllVSmtiVBF/datacard.txt ${datacardDir}/hwwhm_13TeV_of_VBF/mllVSmtiVBF/datacard.orig.txt
mv ${datacardDir}/hwwhm_13TeV_of_VBF/mllVSmtiVBF/datacard.pruned.txt ${datacardDir}/hwwhm_13TeV_of_VBF/mllVSmtiVBF/datacard.txt


# combine datacards
 
combineCards.py   of1j=${datacardDir}/hwwhm_13TeV_of_1j/${variable}/datacard.txt \
                  of0j=${datacardDir}/hwwhm_13TeV_of_0j/${variable}/datacard.txt \
                  ofVBF=${datacardDir}/hwwhm_13TeV_of_VBF/${variableVBF}/datacard.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of2jTop=${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
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
                  >   ICHEP2016.2jet.txt

# results
#combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.1jet.txt             >   result.MaxLikelihoodFit.Moriond2016.1jet.txt
#combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.0jet.txt             >   result.MaxLikelihoodFit.Moriond2016.0jet.txt
#combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.0jet.em.txt          >   result.MaxLikelihoodFit.Moriond2016.0jet.em.txt
#combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.0jet.me.txt          >   result.MaxLikelihoodFit.Moriond2016.0jet.me.txt
#combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.1jet.em.txt          >   result.MaxLikelihoodFit.Moriond2016.1jet.em.txt
#combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.1jet.me.txt          >   result.MaxLikelihoodFit.Moriond2016.1jet.me.txt


#combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Moriond2016.1jet.txt             >   result.Significance.Moriond2016.1jet.txt
#combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Moriond2016.0jet.txt             >   result.Significance.Moriond2016.0jet.txt
#combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Moriond2016.0jet.em.txt          >   result.Significance.Moriond2016.0jet.em.txt
#combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Moriond2016.0jet.me.txt          >   result.Significance.Moriond2016.0jet.me.txt
#combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Moriond2016.1jet.em.txt          >   result.Significance.Moriond2016.1jet.em.txt
#combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Moriond2016.1jet.me.txt          >   result.Significance.Moriond2016.1jet.me.txt




#combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.v1.txt.pruned.txt             >   result.MaxLikelihoodFit.Moriond2016.v1.txt.pruned.txt
    
#combine -M ProfileLikelihood --significance Moriond2016.v1.txt.pruned.txt -t -1 --expectSignal=1       >   result.Significance.Moriond2016.v1.txt.pruned.txt

#combine -M MultiDimFit Moriond2016.v1.txt.pruned.txt -m 125 --algo=grid --points 50 --setPhysicsModelParameterRanges r=0.01,3 -n "LHScanH"   -t -1 --expectSignal=1        >   result.LikelihoodScan.Moriond2016.v1.txt.pruned.txt


     
