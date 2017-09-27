
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -



# combine
 
combineCards.py   inclpt1=../datacards/ww_Incl_em/pt1/datacard.txt  \
                                    >   pt1.combined.txt

#                   me01j13=ggH/datacards/hww2l2v_13TeV_me_01j/mllVSmth/datacard.txt.pruned.txt \
#                   of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
#                   of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
#                   of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
#                   of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \

                  
                  
# results


text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/WW_pt1:r1[1,0.5,1.5]'  \
                   --PO 'map=.*/WW_pt2:r2[1,0.5,1.5]'  \
                   --PO 'map=.*/WW_pt3:r3[1,0.5,1.5]'  \
                   --PO 'map=.*/WW_pt4:r4[1,0.5,1.5]'  \
                   --PO 'map=.*/WW_pt5:r5[1,0.5,1.5]'  \
                   --PO 'map=.*/WW_pt6:r6[1,0.5,1.5]'  \
                    pt1.combined.txt  -o   workspace.pt1.combined.txt.root
     
     
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters  r1=1,r2=1,r3=1,r4=1,r5=1,r6=1 \
     --algo=grid --points=1000  \
      workspace.pt1.combined.txt.root           >   result.MultiDimFit.workspace.pt1.combined.txt.root.grid.txt



combineTool.py -d    workspace.pt1.combined.txt.root  -M MultiDimFit    \
               --algo=grid     --X-rtd OPTIMIZE_BOUNDS=0   \
               -t -1   -n "LH6Dpt1MClxbatch"   \
               --points 1000    --job-mode lxbatch --task-name lxbatch-pt1-mc-y2016 --sub-opts='-q 1nd' --split-points 1 

               
               
               
               