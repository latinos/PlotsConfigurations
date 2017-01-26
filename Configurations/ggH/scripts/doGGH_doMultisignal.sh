
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -


# all 2015 data
# 
# text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
#                    --PO 'map=.*/ggH_hww:muGGH[1,-1,3]' \
#                    --PO 'map=.*/ggZH_hww:muGGH[1,-1,3]' \
#                    --PO 'map=.*/H_htt:muGGH[1,-1,3]' \
#                    --PO 'map=.*/qqH_hww:muVBF[1,-3,6]'  \
#                    --PO 'map=.*/WH_htt:muVBF[1,-3,6]'  \
#                    --PO 'map=.*/WH_hww:muVBF[1,-3,6]'  \
#                    --PO 'map=.*/ZH_hww:muVBF[1,-3,6]'  \
#                    superCombination.2015.txt.pruned.txt  -o  workspace.superCombination.2015.txt.pruned.txt.root
#                    
#                    
# combine -M MultiDimFit -t -1 \
#      --setPhysicsModelParameters    muGGH=1,muVBF=1 \
#      --algo=grid --points=200  \
#      workspace.superCombination.2015.txt.pruned.txt.root    \
#      -n "LH2DICHEP2015combined"     >   result.MultiDimFit.grid.workspace.superCombination.2015.txt.pruned.txt
# 
#                   
#                    
# combine -M MultiDimFit \
#      --algo=grid --points=200  \
#      workspace.superCombination.2015.txt.pruned.txt.root    \
#      -n "DataLH2DICHEP2015combined"     >   result.Data.MultiDimFit.grid.workspace.superCombination.2015.txt.pruned.txt
# 
#      
#      
# plot
# r00t ../higgsCombineTest.MultiDimFit.mH120.root  scripts/Draw2D.cxx



# all 2016 data
# 
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/ggH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/ggZH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/H_htt:muGGH[1,-1,3]' \
                   --PO 'map=.*/qqH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_htt:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/ZH_hww:muVBF[1,-3,6]'  \
                   superCombination.2016.txt.pruned.txt  -o  workspace.superCombination.2016.txt.pruned.txt.kvkf.root
                   
                   
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters    muGGH=1,muVBF=1 \
     --algo=grid --points=200  \
     workspace.superCombination.2016.txt.pruned.txt.kvkf.root    \
     -n "LH2DICHEP2016combinedKVKF"     >   result.MultiDimFit.grid.workspace.superCombination.2016.txt.pruned.kvkf.txt


            
                   
combine -M MultiDimFit \
     --setPhysicsModelParameters    muGGH=1,muVBF=1 \
     --algo=grid --points=200  \
     workspace.superCombination.2016.txt.pruned.txt.kvkf.root    \
     -n "LH2DICHEP2016combinedKVKFDATA"     >   result.MultiDimFit.DATA.grid.workspace.superCombination.2016.txt.pruned.kvkf.txt


   

combineTool.py -d workspace.superCombination.2016.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid   -t -1 --expectSignal 1        -n "LH2DICHEP2016combinedKVKFlxbatch"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-kvkf-mc-y2016 --sub-opts='-q 1nd' --split-points 1 
            


combineTool.py -d workspace.superCombination.2016.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid        -n "LH2DICHEP2016combinedKVKFDATAlxbatch"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-kvkf-data-y2016 --sub-opts='-q 1nd' --split-points 1 
            
          
     
          
hadd higgsCombineLH2DICHEP2016combinedKVKFlxbatch.root             higgsCombineLH2DICHEP2016combinedKVKFlxbatch.POINTS.*.MultiDimFit.mH120.root
hadd higgsCombineLH2DICHEP2016combinedKVKFDATAlxbatch.root         higgsCombineLH2DICHEP2016combinedKVKFDATAlxbatch.POINTS.*.MultiDimFit.mH120.root


     

# all 2015+2016 data
# 
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/ggH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/ggZH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/H_htt:muGGH[1,-1,3]' \
                   --PO 'map=.*/qqH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_htt:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/ZH_hww:muVBF[1,-3,6]'  \
                   superCombination.Total.txt.pruned.txt  -o  workspace.superCombination.Total.txt.pruned.txt.kvkf.root
                   
                   
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters    muGGH=1,muVBF=1 \
     --algo=grid --points=200  \
     workspace.superCombination.Total.txt.pruned.txt.kvkf.root    \
     -n "LH2DICHEPTotalcombinedKVKF"     >   result.MultiDimFit.grid.workspace.superCombination.Total.txt.pruned.kvkf.txt

        
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters    muGGH=1,muVBF=1 \
     --algo=grid --points=200  \
     workspace.superCombination.Total.txt.pruned.txt.kvkf.root    \
     -n "LH2DICHEPTotalcombinedKVKFDATA"     >   result.MultiDimFit.DATA.grid.workspace.superCombination.Total.txt.pruned.kvkf.txt

        


combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid   -t -1 --expectSignal 1   -n "LH2DICHEPTotalcombinedKVKFlxbatch"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-kvkf-mc-inclusive --sub-opts='-q 1nd' --split-points 1 
            


combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid      -n "LH2DICHEPTotalcombinedKVKFDATAlxbatch"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-kvkf-data-inclusive --sub-opts='-q 1nd' --split-points 1 
            
          

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid      -n "LH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch"   \
               --points 1000    --job-mode lxbatch --task-name lxbatch-kvkf-data-new-inclusive --sub-opts='-q 1nd' --split-points 1 
            
                    
          
          
  
          
hadd higgsCombineLH2DICHEPTotalcombinedKVKFlxbatch.root             higgsCombineLH2DICHEPTotalcombinedKVKFlxbatch.POINTS.*.MultiDimFit.mH120.root
hadd higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch.POINTS.*.MultiDimFit.mH120.root
hadd higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWlxbatch.POINTS.*.MultiDimFit.mH120.root

# ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6 | grep -v 6.7 | awk '{print "rm "$9}' | /bin/sh
        
#    ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWlxbatch.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6K | grep -v 6.7K | awk '{print "rm "$9}' | /bin/sh
        
     
     
     
     
     
     
#      
#      
     