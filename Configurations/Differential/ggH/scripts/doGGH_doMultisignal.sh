

# cd ~/Framework/CMSSW_7_1_15/src/
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

cat ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY0jet_ibin_1" | grep -v "_DY1jet_ibin_1"  | grep -v "CMS_DYptRew" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY0jet_ibin_1" | grep -v "_DY1jet_ibin_1" | grep -v "CMS_DYptRew" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt




# combine
 
combineCards.py   em01j13=ggH/datacards/hww2l2v_13TeV_em_01j/mllVSmth/datacard.txt.pruned.txt \
                  me01j13=ggH/datacards/hww2l2v_13TeV_me_01j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.v1.txt.pruned.txt


# results


# text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
#                    --PO 'map=.*/ggH_hww_pt1:r1[1,-9,10]' --PO 'map=.*/ggH_hww_pt2:r2[1,-9,10]' --PO 'map=.*/ggH_hww_pt3:r3[1,-9,10]' \
#                    ICHEP2016.v1.txt.pruned.txt  -o  workspace.ICHEP2016.v1.txt.pruned.root


text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/ggH_hww_pt1:r1[1,-4,5]' --PO 'map=.*/ggH_hww_pt2:r2[1,-4,5]' --PO 'map=.*/ggH_hww_pt3:r3[1,-4,5]' \
                   ICHEP2016.v1.txt.pruned.txt  -o  workspace.ICHEP2016.v1.txt.pruned.root

                   
                   
# 
# text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
#                    --PO 'map=.*/ggH_hww_pt1:r1[1,-20,20]' --PO 'map=.*/ggH_hww_pt2:r1[1,-20,20]' --PO 'map=.*/ggH_hww_pt3:r3[1,-20,20]' \
#                    ICHEP2016.v1.txt.pruned.txt  -o  workspace.ICHEP2016.v1.txt.pruned.root
#                    
#                    
# combine -M MultiDimFit -t -1 \
#      --setPhysicsModelParameters    r1=1,r3=1 \
#      --algo=grid --points=100  \
#      workspace.ICHEP2016.v1.txt.pruned.root            >   result.MultiDimFit.singles.ICHEP2016.v1.txt.pruned.grid.txt

     
     
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters    r1=1,r2=1,r3=1 \
     --algo=grid --points=1000  \
     workspace.ICHEP2016.v1.txt.pruned.root            >   result.MultiDimFit.singles.ICHEP2016.v1.txt.pruned.grid.txt


#      
# 
# combine -M MultiDimFit -t -1 \
#      --setPhysicsModelParameters    r1=1,r2=1,r3=1 \
#      --algo=singles   \
#      workspace.ICHEP2016.v1.txt.pruned.root            >   result.MultiDimFit.singles.ICHEP2016.v1.txt.pruned.txt


     
     
# combine -M MultiDimFit -t -1 \
#      --expectSignal 1  \
#      --algo=singles   \
#      workspace.ICHEP2016.v1.txt.pruned.root            >   result.MultiDimFit.singles.ICHEP2016.v1.txt.pruned.test.txt

     
# combine -M MultiDimFit -t 1 \
#      --expectSignal 1  \
#      --algo=singles   \
#      workspace.ICHEP2016.v1.txt.pruned.root            >   result.MultiDimFit.singles.ICHEP2016.v1.txt.pruned.test.toy.txt
# 
     
#      
# combine -M MultiDimFit -t -1 \
#      --setPhysicsModelParameters    r1=1,r2=1,r3=1 \
#      --algo=cross   \
#      workspace.ICHEP2016.v1.txt.pruned.root            >   result.MultiDimFit.cross.ICHEP2016.v1.txt.pruned.cross.txt

     
     
# combine -M MultiDimFit -t -1 \
#      --expectSignal 1 \
#      workspace.ICHEP2016.v1.txt.pruned.root            >   result.MultiDimFit.ICHEP2016.v1.txt.pruned.txt

     
     
#      
#    --expectSignal 1   
#      

