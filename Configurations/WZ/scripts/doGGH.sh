

cd ~/Framework/CMSSW_7_1_15/src/
eval `scramv1 runtime -sh`
cd -

# fix

cat ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt
mv ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt

cat ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt
mv ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt

cat ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt
mv ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt

cat ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt
mv ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt

 
# combine
 
combineCards.py   of0j13=ggHMoriond/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt \
                      of1j13=ggHMoriond/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt \
                      of0j13Top=ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                      of1j13Top=ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                      of0j13DYtt=ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                      of1j13DYtt=ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                      >   Moriond2016.txt
                      
# results

combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.txt
    
combine -M ProfileLikelihood --significance Moriond2016.txt -t -1 --expectSignal=1

combine -M MultiDimFit Moriond2016.txt -m 125 --algo=grid --points 50 --setPhysicsModelParameterRanges r=0.01,3 -n "LHScanH"   -t -1 --expectSignal=1



     