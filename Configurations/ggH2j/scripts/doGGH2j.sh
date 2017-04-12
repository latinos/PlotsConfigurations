
# cd ~/Framework/CMSSW_7_1_15/src/
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

# fix
# 
cat ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt
mv ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt
#
cat ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt
mv ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt
# 
cat ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt  | grep -v "Vg_ibin_1"   &> ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.test.txt.pruned.txt
mv ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt


# 
# cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt

# 
# cat ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt


# combine
 
combineCards.py   of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  >   Data2016.2j.pruned.txt

# results

combine -M MaxLikelihoodFit    --rMin=-9 --rMax=10   -t -1 --expectSignal 1   Data2016.2j.pruned.txt             >   result.MaxLikelihoodFit.Data2016.2j.pruned.txt

combine -M ProfileLikelihood --significance         -t -1 --expectSignal 1   Data2016.2j.pruned.txt             >   result.Significance.Data2016.2j.pruned.txt


combine -M MultiDimFit Data2016.2j.pruned.txt -m 125 -t -1 --expectSignal 1 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-9,10 -n "LHScanHggH2j"     >   result.LikelihoodScan.Data2016.2j.pruned.txt


# data

combine -M MaxLikelihoodFit    --rMin=-9 --rMax=10      Data2016.2j.pruned.txt             >   result.data.MaxLikelihoodFit.Data2016.2j.pruned.txt

combine -M ProfileLikelihood --significance            Data2016.2j.pruned.txt             >   result.data.Significance.Data2016.2j.pruned.txt

combine -M MultiDimFit Data2016.2j.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-9,10 -n "LHScanHdataggH2j"     >   result.data.LikelihoodScan.Data2016.2j.pruned.txt



     