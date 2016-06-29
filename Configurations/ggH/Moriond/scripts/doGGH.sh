

# cd ~/Framework/CMSSW_7_1_15/src/
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

# fix
# 
# cat ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt
# 
# cat ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt


cat ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
mv ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt

cat ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
mv ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt

cat ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
mv ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt

cat ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
mv ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt


# combine
 
combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.v1.txt.pruned.txt

combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.1jet.txt

combineCards.py   em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.0jet.txt

combineCards.py   em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.0jet.em.txt

combineCards.py   me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.0jet.me.txt

                  
combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.1jet.em.txt

combineCards.py   me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.1jet.me.txt

# results

combine -M MaxLikelihoodFit    --rMin=-2 --rMax=4      Moriond2016.1jet.txt             >   result.data.MaxLikelihoodFit.Moriond2016.1jet.txt
combine -M MaxLikelihoodFit    --rMin=-2 --rMax=4      Moriond2016.0jet.txt             >   result.data.MaxLikelihoodFit.Moriond2016.0jet.txt
combine -M MaxLikelihoodFit    --rMin=-2 --rMax=4      Moriond2016.0jet.em.txt          >   result.data.MaxLikelihoodFit.Moriond2016.0jet.em.txt
combine -M MaxLikelihoodFit    --rMin=-2 --rMax=4      Moriond2016.0jet.me.txt          >   result.data.MaxLikelihoodFit.Moriond2016.0jet.me.txt
combine -M MaxLikelihoodFit    --rMin=-2 --rMax=4      Moriond2016.1jet.em.txt          >   result.data.MaxLikelihoodFit.Moriond2016.1jet.em.txt
combine -M MaxLikelihoodFit    --rMin=-2 --rMax=4      Moriond2016.1jet.me.txt          >   result.data.MaxLikelihoodFit.Moriond2016.1jet.me.txt


combine -M ProfileLikelihood --significance      Moriond2016.1jet.txt             >   result.data.Significance.Moriond2016.1jet.txt
combine -M ProfileLikelihood --significance      Moriond2016.0jet.txt             >   result.data.Significance.Moriond2016.0jet.txt
combine -M ProfileLikelihood --significance      Moriond2016.0jet.em.txt          >   result.data.Significance.Moriond2016.0jet.em.txt
combine -M ProfileLikelihood --significance      Moriond2016.0jet.me.txt          >   result.data.Significance.Moriond2016.0jet.me.txt
combine -M ProfileLikelihood --significance      Moriond2016.1jet.em.txt          >   result.data.Significance.Moriond2016.1jet.em.txt
combine -M ProfileLikelihood --significance      Moriond2016.1jet.me.txt          >   result.data.Significance.Moriond2016.1jet.me.txt




combine -M MaxLikelihoodFit      --rMin=-2 --rMax=4  Moriond2016.v1.txt.pruned.txt             >   result.data.MaxLikelihoodFit.Moriond2016.v1.txt.pruned.txt
    
combine -M ProfileLikelihood --significance Moriond2016.v1.txt.pruned.txt   >   result.data.Significance.Moriond2016.v1.txt.pruned.txt

combine -M MultiDimFit Moriond2016.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanHdata"     >   result.data.LikelihoodScan.Moriond2016.v1.txt.pruned.txt



     