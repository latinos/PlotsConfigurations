

# cd ~/Framework/CMSSW_7_1_15/src/
cd ~/Framework/Combine/CMSSW_7_4_7/src/
# cd ~/Framework/Combine/New/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

# fix
# 
# cat ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt


cat ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt


# combine
 
combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.v1.txt.pruned.txt

combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.1jet.txt

combineCards.py   em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.0jet.txt

combineCards.py   em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.0jet.em.txt

combineCards.py   me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.0jet.me.txt


combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.1jet.em.txt

combineCards.py   me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.1jet.me.txt

         
# results

combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.1jet.txt             >   result.MaxLikelihoodFit.ICHEP2016.1jet.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.0jet.txt             >   result.MaxLikelihoodFit.ICHEP2016.0jet.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.0jet.em.txt          >   result.MaxLikelihoodFit.ICHEP2016.0jet.em.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.0jet.me.txt          >   result.MaxLikelihoodFit.ICHEP2016.0jet.me.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.1jet.em.txt          >   result.MaxLikelihoodFit.ICHEP2016.1jet.em.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.1jet.me.txt          >   result.MaxLikelihoodFit.ICHEP2016.1jet.me.txt


combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.1jet.txt             >   result.Significance.ICHEP2016.1jet.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.0jet.txt             >   result.Significance.ICHEP2016.0jet.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.0jet.em.txt          >   result.Significance.ICHEP2016.0jet.em.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.0jet.me.txt          >   result.Significance.ICHEP2016.0jet.me.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.1jet.em.txt          >   result.Significance.ICHEP2016.1jet.em.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.1jet.me.txt          >   result.Significance.ICHEP2016.1jet.me.txt




combine -M MaxLikelihoodFit -t -1 --expectSignal 1    --rMin=-2 --rMax=4     ICHEP2016.v1.txt.pruned.txt             >   result.MaxLikelihoodFit.ICHEP2016.v1.txt.pruned.txt
    
combine -M ProfileLikelihood --significance ICHEP2016.v1.txt.pruned.txt -t -1 --expectSignal=1       >   result.Significance.ICHEP2016.v1.txt.pruned.txt

combine -M MultiDimFit ICHEP2016.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanHICHEP"   -t -1 --expectSignal=1        >   result.LikelihoodScan.ICHEP2016.v1.txt.pruned.txt



     