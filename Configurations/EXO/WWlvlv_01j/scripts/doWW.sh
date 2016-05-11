
workdir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_01j/combine
datacardDir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_01j/datacards
modDatacardDir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_01j/ModificationDatacards

variable=mllVSmti



## prune nuisances
cd $modDatacardDir
bash examples/doPruneNuisanceXWW.sh

cd $workdir

cd ~/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
cd -

## prune again
cat ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
mv ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt

cat ${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
mv ${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt

cat ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
mv ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt

cat ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
mv ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt


# combine datacards
 
combineCards.py   em01j=${datacardDir}/hwwhighmass_13TeV_em_01j/${variable}/datacard.txt.pruned.txt \
                  me01j=${datacardDir}/hwwhighmass_13TeV_me_01j/${variable}/datacard.txt.pruned.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.v1.txt.pruned.meem01j.txt

combineCards.py   of01j=${datacardDir}/hwwhighmass_13TeV_of01j/${variable}/datacard.txt.pruned.txt \
                  of0jTop=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1jTop=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1jDYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.v1.txt.pruned.of01j.txt



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


     
