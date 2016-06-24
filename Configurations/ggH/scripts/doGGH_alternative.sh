

# cd ~/Framework/CMSSW_7_1_15/src/
cd ~/Framework/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
cd -

# fix
# 

cat ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt


# combine
 
combineCards.py   empm1j13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  mepm1j13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  empm0j13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  mepm0j13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  emmp1j13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  memp1j13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  emmp0j13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  memp0j13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.charge.pruned.txt

                  
combineCards.py   of0j13=ggH/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13=ggH/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.preapproval.pruned.txt

                  

# results

combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.charge.pruned.txt             >   result.MaxLikelihoodFit.Moriond2016.charge.pruned.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.preapproval.pruned.txt        >   result.MaxLikelihoodFit.Moriond2016.preapproval.pruned.txt

combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Moriond2016.charge.pruned.txt         >   result.Significance.Moriond2016.charge.pruned.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Moriond2016.preapproval.pruned.txt    >   result.Significance.Moriond2016.preapproval.pruned.txt







     