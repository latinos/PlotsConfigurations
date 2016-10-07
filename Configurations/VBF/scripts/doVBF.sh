
# cd ~/Framework/CMSSW_7_1_15/src/
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

# fix
# 
cat VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt
mv VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt
#
cat VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1" | grep -v "Vg_ibin_1"   &> VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
mv VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt




# 
cat VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt
mv VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt
#
cat VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
mv VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt
#
cat VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt
mv VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt







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
 
combineCards.py   of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  >   Data2016.vbf.pruned.txt

                  
combineCards.py   of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  >   Data2016.vbf.mllfine.pruned.txt

                  
#                   
# combineCards.py   of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
#                   of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
#                   of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
#                   >   Data2015.vbf.pruned.txt

                  

combineCards.py   of2jvbf13mediummass=VBF/datacards/hww2l2v_13TeV_of2j_vbf_mediummjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13mediummassTop=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf_mediummjj/events/datacard.txt.pruned.txt.filtered.txt \
                  of2jvbf13mediummassDYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf_mediummjj/events/datacard.txt.pruned.txt.filtered.txt \
                  of2jvbf13highmass=VBF/datacards/hww2l2v_13TeV_of2j_vbf_highmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13highmassTop=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf_highmjj/events/datacard.txt.pruned.txt.filtered.txt \
                  of2jvbf13highmassDYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf_highmjj/events/datacard.txt.pruned.txt.filtered.txt \
                  >   Data2016.vbf.improved.pruned.txt


                  
                  
# results

combine -M MaxLikelihoodFit    --rMin=-4 --rMax=6   -t -1 --expectSignal 1   Data2016.vbf.pruned.txt             >   result.MaxLikelihoodFit.Data2016.vbf.pruned.txt

combine -M ProfileLikelihood --significance         -t -1 --expectSignal 1   Data2016.vbf.pruned.txt             >   result.Significance.Data2016.vbf.pruned.txt


combine -M MultiDimFit Data2016.vbf.pruned.txt -m 125 -t -1 --expectSignal 1 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanHVBF"     >   result.LikelihoodScan.Data2016.vbf.pruned.txt


# data

combine -M MaxLikelihoodFit    --rMin=-4 --rMax=6      Data2016.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.Data2016.vbf.pruned.txt

combine -M ProfileLikelihood --significance            Data2016.vbf.pruned.txt             >   result.data.Significance.Data2016.vbf.pruned.txt

combine -M MultiDimFit Data2016.vbf.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanHdataVBF"     >   result.data.LikelihoodScan.Data2016.vbf.pruned.txt






# results

combine -M MaxLikelihoodFit    --rMin=-4 --rMax=6   -t -1 --expectSignal 1   Data2016.vbf.mllfine.pruned.txt             >   result.MaxLikelihoodFit.Data2016.vbf.mllfine.pruned.txt

combine -M ProfileLikelihood --significance         -t -1 --expectSignal 1   Data2016.vbf.mllfine.pruned.txt             >   result.Significance.Data2016.vbf.mllfine.pruned.txt


combine -M MultiDimFit Data2016.vbf.mllfine.pruned.txt -m 125 -t -1 --expectSignal 1 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanHVBF"     >   result.LikelihoodScan.Data2016.vbf.mllfine.pruned.txt


# data

combine -M MaxLikelihoodFit    --rMin=-4 --rMax=6      Data2016.vbf.mllfine.pruned.txt             >   result.data.MaxLikelihoodFit.Data2016.vbf.mllfine.pruned.txt

combine -M ProfileLikelihood --significance            Data2016.vbf.mllfine.pruned.txt             >   result.data.Significance.Data2016.vbf.mllfine.pruned.txt

combine -M MultiDimFit Data2016.vbf.mllfine.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanHdataVBF"     >   result.data.LikelihoodScan.Data2016.vbf.mllfine.pruned.txt




# results


combine -M MaxLikelihoodFit    --rMin=-4 --rMax=6   -t -1 --expectSignal 1   Data2016.vbf.improved.pruned.txt             >   result.MaxLikelihoodFit.Data2016.vbf.improved.pruned.txt

combine -M ProfileLikelihood --significance         -t -1 --expectSignal 1   Data2016.vbf.improved.pruned.txt             >   result.Significance.Data2016.vbf.improved.pruned.txt


combine -M MultiDimFit Data2016.vbf.improved.pruned.txt -m 125 -t -1 --expectSignal 1 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanHVBF"     >   result.LikelihoodScan.Data2016.vbf.improved.pruned.txt


# data

combine -M MaxLikelihoodFit    --rMin=-4 --rMax=6      Data2016.vbf.improved.pruned.txt             >   result.data.MaxLikelihoodFit.Data2016.vbf.improved.pruned.txt

combine -M ProfileLikelihood --significance            Data2016.vbf.improved.pruned.txt             >   result.data.Significance.Data2016.vbf.improved.pruned.txt

combine -M MultiDimFit Data2016.vbf.improved.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanHdataVBF"     >   result.data.LikelihoodScan.Data2016.vbf.improved.pruned.txt



     