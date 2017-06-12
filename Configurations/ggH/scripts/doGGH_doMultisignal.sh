
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -


# all 2015 data
# 
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/ggH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/ggZH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/H_htt:muGGH[1,-1,3]' \
                   --PO 'map=.*/qqH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_htt:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/ZH_hww:muVBF[1,-3,6]'  \
                   superCombination.2015.txt.pruned.txt  -o  workspace.superCombination.2015.txt.pruned.txt.root
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


                   
combine -M MultiDimFit \
     --setPhysicsModelParameters    muGGH=1,muVBF=1 \
     --algo=grid --points=200  \
     workspace.superCombination.2015.txt.pruned.txt.root    \
     -n "LH2DICHEP2015combinedKVKFDATA"     >   result.MultiDimFit.DATA.grid.workspace.superCombination.2015.txt.pruned.kvkf.txt


     

combineTool.py -d workspace.superCombination.2015.txt.pruned.txt.root -M MultiDimFit    \
               --algo=grid     --X-rtd OPTIMIZE_BOUNDS=0      -n "LH2DICHEP2015combinedKVKFDATAlxbatch"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-kvkf-data-y2015 --sub-opts='-q 1nd' --split-points 1 
            
          
          
ls -alrth higgsCombineLH2DICHEP2015combinedKVKFDATAlxbatch.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6K  | awk '{print "rm "$9}' | /bin/sh

hadd higgsCombineLH2DICHEP2015combinedKVKFDATAlxbatch14May2017.root         higgsCombineLH2DICHEP2015combinedKVKFDATAlxbatch.POINTS.*.MultiDimFit.mH120.root


     
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
            
                    

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid      -n "LH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch10kpoints"   \
               --points 10000    --job-mode lxbatch --task-name lxbatch-kvkf-data-new-inclusive --sub-opts='-q 1nd' --split-points 1 
            

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0   -n "LH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-kvkf-data-new-inclusive-fixed --sub-opts='-q 1nd' --split-points 1 
            
       

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0   -n "LH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED5Apr2017"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-kvkf-data-new-inclusive-fixed-5Apr2017 --sub-opts='-q 1nd' --split-points 1 
            
      
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0   -n "LH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED7Apr2017"   \
               --points 1000    --job-mode lxbatch --task-name lxbatch-kvkf-data-new-inclusive-fixed-7Apr2017 --sub-opts='-q 1nd' --split-points 1 
            
            
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0   -n "LH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch300pointsFIXED7Apr2017"   \
               --points 300    --job-mode lxbatch --task-name lxbatch-kvkf-data-new-inclusive-fixed-300-7Apr2017 --sub-opts='-q 1nd' --split-points 1 
            
      
  
  
#    ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED5Apr2017.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.8K | grep -v 6.7K   | grep -v 6.6K  | awk '{print "rm "$9}' | /bin/sh
hadd higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED5Apr2017.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED5Apr2017.POINTS.*.MultiDimFit.mH120.root


r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED5Apr2017.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 

#    ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED7Apr2017.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.8K | grep -v 6.7K   | grep -v 6.6K  | awk '{print "rm "$9}' | /bin/sh

hadd higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED7Apr2017.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED7Apr2017.POINTS.*.MultiDimFit.mH120.root


r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED7Apr2017.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 

 

 
                 
#    ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6K | grep -v 6.7K | awk '{print "rm "$9}' | /bin/sh
hadd higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED.POINTS.*.MultiDimFit.mH120.root


r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 
     
          
          
                    
                    
#    ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch10kpoints.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6K | grep -v 6.7K | awk '{print "rm "$9}' | /bin/sh
hadd higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch10kpoints.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch10kpoints.POINTS.*.MultiDimFit.mH120.root


r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch10kpoints.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 
    
    
    

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid      -n "LH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch1kpoints"   \
               --points 1000    --job-mode lxbatch --task-name lxbatch-kvkf-data-new-inclusive-1k --sub-opts='-q 1nd' --split-points 1 
    
    
 
## 2D scan with unique prefit 
     
combine -M MultiDimFit    \
     --setPhysicsModelParameters    muGGH=1,muVBF=1 \
     --algo none  \
      --saveWorkspace  \
     workspace.superCombination.Total.txt.pruned.txt.kvkf.root    \
     -n "LH2DICHEPTotalcombinedKVKFDATAprefit"     >   result.MultiDimFit.DATA.grid.workspace.superCombination.Total.txt.pruned.kvkf.prefit.txt


combineTool.py -d higgsCombineLH2DICHEPTotalcombinedKVKFDATAprefit.MultiDimFit.mH120.root -M MultiDimFit    \
               --algo=grid      -n "LH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit"   \
               --snapshotName=MultiDimFit --skipInitialFit   \
               --points 400    --job-mode lxbatch --task-name lxbatch-kvkf-data-new-inclusive-400 --sub-opts='-q 1nd' --split-points 1 
    
    
    


combineTool.py -d higgsCombineLH2DICHEPTotalcombinedKVKFDATAprefit.MultiDimFit.mH120.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0   -n "LH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefitFIXED"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-kvkf-data-new-inclusive-fixed-prefit --sub-opts='-q 1nd' --split-points 1 
            
            
                
  
  
  
ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6 | grep -v 6.7 | grep -v 6.8 | awk '{print "rm "$9}' | /bin/sh
hadd   higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit.POINTS.*.MultiDimFit.mH120.root

  
  
r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 
    

    
    
    
  
          
hadd higgsCombineLH2DICHEPTotalcombinedKVKFlxbatch.root             higgsCombineLH2DICHEPTotalcombinedKVKFlxbatch.POINTS.*.MultiDimFit.mH120.root
hadd higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch.POINTS.*.MultiDimFit.mH120.root
hadd higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch.POINTS.*.MultiDimFit.mH120.root

# ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6 | grep -v 6.7 | awk '{print "rm "$9}' | /bin/sh
        
#    ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWlxbatch.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6K | grep -v 6.7K | awk '{print "rm "$9}' | /bin/sh
   
#    ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6K | grep -v 6.7K | awk '{print "rm "$9}' | /bin/sh
        
     
     
 
 
 
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j*/(gg|qq|W|Z|tt)H_*:r_0jet[1,-5,5]' \
                   --PO 'map=.*1j*/(gg|qq|W|Z|tt)H_*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j*/(gg|qq|W|Z|tt)H_*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf*/(gg|qq|W|Z|tt)H_*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j*/(gg|qq|W|Z|tt)H_*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l*/(gg|qq|W|Z|tt)H_*:r_3l[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.root
                   

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j*/*H_*:r_0jet[1,-5,5]' \
                   --PO 'map=.*1j*/*H_*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j*/*H_*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf*/*H_*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j*/*H_*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l*/*H_*:r_3l[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.root
                   

                
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j.*/.*H_.*:r_0jet_em[1,-5,5]' \
                   --PO 'map=.*1j.*/.*H_.*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j.*/.*H_.*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf.*/.*H_.*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j.*/.*H_.*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l.*/.*H_.*:r_3l[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.manysplits.root
                   
                   
                   
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j.*/.*H_.*:r_0jet[1,-5,5]' \
                   --PO 'map=.*1j.*/.*H_.*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j.*/.*H_.*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf.*/.*H_.*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j.*/.*H_.*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l.*/.*H_.*:r_3l[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.bis.root
                   
                  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j.*/.*H_.*:r_0jet[1,-5,5]' \
                   --PO 'map=.*1j.*/.*H_.*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j.*/.*H_.*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf.*/.*H_.*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j.*/.*H_.*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l.*/.*H_.*:r_3l[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root
                   
  


                   
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j.*/.*H_.*:r_0jet[1,-5,5]' \
                   --PO 'map=.*1j.*/.*H_.*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j.*/.*H_.*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf.*/.*H_.*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j.*/.*H_.*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l.*/.*H_.*:r_3l[1,-9,9]' \
                   superCombination.2015.txt.pruned.txt  -o  workspace.superCombination.2015.txt.pruned.txt.categories.mu.bis.root
               
               


                   
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j.*/.*H_.*:r_0jet[1,-5,5]' \
                   --PO 'map=.*1j.*/.*H_.*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j.*/.*H_.*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf.*/.*H_.*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j.*/.*H_.*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l.*/.*H_.*:r_3l[1,-5,5]' \
                   superCombination.2016.txt.pruned.txt  -o  workspace.superCombination.2016.txt.pruned.txt.categories.mu.bis.root
                              
               
  
combine -M MultiDimFit  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.root    \
     -n "multidimfit.categories"     >   result.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.root.txt

     

combine -M MultiDimFit  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.bis.root    \
     -n "multidimfit.categories"     >   result.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.root.txt

     

combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.bis.root    \
     -n "multidimfit.categories.single.supermegacombo"     >   result.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.root.reallysingles.txt
     
     
 
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.2015.txt.pruned.txt.categories.mu.bis.root    \
     -n "multidimfit.categories.2015.single.supermegacombo"     >   result.MultiDimFit.singles.workspace.superCombination.2015.txt.pruned.txt.categories.mu.root.reallysingles.txt
     
 
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.2016.txt.pruned.txt.categories.mu.bis.root    \
     -n "multidimfit.categories.2016.single.supermegacombo"     >   result.MultiDimFit.singles.workspace.superCombination.2016.txt.pruned.txt.categories.mu.root.reallysingles.txt
     
   
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root    \
     -n "multidimfit.categories.all.tris.single.supermegacombo"     >   result.MultiDimFit.singles.workspace.superCombination.multidimfit.categories.all.tris.single.supermegacombo.mu.root.reallysingles.txt
     
     
     
#  THIS ONE     

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j.*/.*H_.*:r_0jet[1,-5,5]' \
                   --PO 'map=.*1j.*/.*H_.*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j.*/.*H_.*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf.*/.*H_.*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j.*/.*H_.*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l.*/.*H_.*:r_3l[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root
                   
  
  
## ok

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r0jetFINAL"   --redefineSignalPOIs  r_0jet    --setPhysicsModelParameterRanges r_0jet=-3,3     \
               --points 400    --job-mode lxbatch --task-name lxbatch-r0jetFINAL --sub-opts='-q 1nd' --split-points 1 
 
 
hadd higgsCombiner0jetFINAL.AFTERFIX.root                      higgsCombiner0jetFINAL.POINTS.*.MultiDimFit.mH120.root         
   
ls -alrth higgsCombiner0jetFINAL.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

root -l higgsCombiner0jetFINAL.AFTERFIX.root  \
        ggH/scripts/drawNLLvar.C\(\"r_0jet\"\)
 
   
   

## ok

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r1jetFINAL"  --X-rtd OPTIMIZE_BOUNDS=0     --redefineSignalPOIs  r_1jet    --setPhysicsModelParameterRanges r_1jet=-3,3     \
               --points 400    --job-mode lxbatch --task-name lxbatch-r1jetFINAL --sub-opts='-q 1nd' --split-points 1 
 
 

hadd higgsCombiner1jetFINAL.AFTERFIX.root                      higgsCombiner1jetFINAL.POINTS.*.MultiDimFit.mH120.root         
   
ls -alrth higgsCombiner1jetFINAL.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

root -l higgsCombiner1jetFINAL.AFTERFIX.root  \
        ggH/scripts/drawNLLvar.C\(\"r_1jet\"\)
 
   
## ok
   
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r2jetFINAL"   --X-rtd OPTIMIZE_BOUNDS=0   --redefineSignalPOIs  r_2jet    --setPhysicsModelParameterRanges r_2jet=-3,3     \
               --points 400    --job-mode lxbatch --task-name lxbatch-r2jetFINAL --sub-opts='-q 2nd' --split-points 1 
 

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r2jetFINALbis"   --X-rtd OPTIMIZE_BOUNDS=0   --redefineSignalPOIs  r_2jet    --setPhysicsModelParameterRanges r_2jet=-1,3     \
                --minimizerStrategy 1 --minimizerTolerance 0.2    \
               --points 200    --job-mode lxbatch --task-name lxbatch-r2jetFINAL --sub-opts='-q 2nd' --split-points 1 

               
               
hadd higgsCombiner2jetFINAL.AFTERFIX.root                      higgsCombiner2jetFINAL.POINTS.*.MultiDimFit.mH120.root         
hadd higgsCombiner2jetFINAL.AFTERFIX.root                      higgsCombiner2jetFINALbis.POINTS.*.MultiDimFit.mH120.root         
   
ls -alrth higgsCombiner2jetFINAL.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh
ls -alrth higgsCombiner2jetFINALbis.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

root -l higgsCombiner2jetFINAL.AFTERFIX.root  \
        ggH/scripts/drawNLLvar.C\(\"r_2jet\"\)
 
   
   
   
## ok

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r2jetvbfFINAL"  --X-rtd OPTIMIZE_BOUNDS=0    --redefineSignalPOIs  r_2jetvbf    --setPhysicsModelParameterRanges r_2jetvbf=-3,3     \
               --points 400    --job-mode lxbatch --task-name lxbatch-r2jetvbfFINAL --sub-opts='-q 1nd' --split-points 1 
  

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r2jetvbfFINALbis"  --X-rtd OPTIMIZE_BOUNDS=0  --verbose 0  --redefineSignalPOIs  r_2jetvbf    --setPhysicsModelParameterRanges r_2jetvbf=-1,3     \
                --minimizerStrategy 1 --minimizerTolerance 0.2    \
               --points 220    --job-mode lxbatch --task-name lxbatch-r2jetvbfFINAL --sub-opts='-q 1nd' --split-points 1 

               
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r2jetvbfFINALtris"  --X-rtd OPTIMIZE_BOUNDS=0  --verbose 0  --redefineSignalPOIs  r_2jetvbf    --setPhysicsModelParameterRanges r_2jetvbf=-1,3     \
                --minimizerStrategy 1 --minimizerTolerance 0.2    \
               --points 300    --job-mode lxbatch --task-name lxbatch-r2jetvbfFINAL --sub-opts='-q 1nd' --split-points 1 

 
hadd higgsCombiner2jetvbfFINAL.AFTERFIX.root                      higgsCombiner2jetvbfFINAL.POINTS.*.MultiDimFit.mH120.root         
hadd higgsCombiner2jetvbfFINAL.AFTERFIX.root                      higgsCombiner2jetvbfFINALbis.POINTS.*.MultiDimFit.mH120.root         
hadd higgsCombiner2jetvbfFINAL.AFTERFIX.root                      higgsCombiner2jetvbfFINALtris.POINTS.*.MultiDimFit.mH120.root         


ls -alrth higgsCombiner2jetvbfFINAL.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh
ls -alrth higgsCombiner2jetvbfFINALbis.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh
ls -alrth higgsCombiner2jetvbfFINALtris.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

root -l higgsCombiner2jetvbfFINAL.AFTERFIX.root  \
        ggH/scripts/drawNLLvar.C\(\"r_2jetvbf\"\)
 
   

   
## OK

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r2jetvhFINAL"   --X-rtd OPTIMIZE_BOUNDS=0   --redefineSignalPOIs  r_2jetvh    --setPhysicsModelParameterRanges r_2jetvh=-3,3     \
               --points 400    --job-mode lxbatch --task-name lxbatch-r2jetvhFINAL --sub-opts='-q 1nd' --split-points 1 

               
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r2jetvhFINALbis"   --X-rtd OPTIMIZE_BOUNDS=0   --redefineSignalPOIs  r_2jetvh    --setPhysicsModelParameterRanges r_2jetvh=-1,3     \
               --points 200    --job-mode lxbatch --task-name lxbatch-r2jetvhFINAL --sub-opts='-q 1nd' --split-points 1 
               
   
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r2jetvhFINALtris"   --X-rtd OPTIMIZE_BOUNDS=0   --redefineSignalPOIs  r_2jetvh    --setPhysicsModelParameterRanges r_2jetvh=-1,5     \
               --points 200    --job-mode lxbatch --task-name lxbatch-r2jetvhFINAL --sub-opts='-q 1nd' --split-points 1 
               
 
 
 
hadd higgsCombiner2jetvhFINAL.AFTERFIX.root                      higgsCombiner2jetvhFINAL.POINTS.*.MultiDimFit.mH120.root         
hadd higgsCombiner2jetvhFINAL.AFTERFIX.root                      higgsCombiner2jetvhFINALbis.POINTS.*.MultiDimFit.mH120.root         
hadd higgsCombiner2jetvhFINAL.AFTERFIX.root                      higgsCombiner2jetvhFINALtris.POINTS.*.MultiDimFit.mH120.root         
   
ls -alrth higgsCombiner2jetvhFINAL.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh
ls -alrth higgsCombiner2jetvhFINALbis.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh
ls -alrth higgsCombiner2jetvhFINALtris.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

root -l higgsCombiner2jetvhFINAL.AFTERFIX.root  \
        ggH/scripts/drawNLLvar.C\(\"r_2jetvh\"\)
 
   

   
## not so bad
 
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.tris.root -M MultiDimFit    \
               --algo=grid      -n "r3lFINAL"   --X-rtd OPTIMIZE_BOUNDS=0   --redefineSignalPOIs  r_3l    --setPhysicsModelParameterRanges r_3l=-3,3     \
               --points 400    --job-mode lxbatch --task-name lxbatch-r3lFINAL --sub-opts='-q 1nd' --split-points 1 
  
     

 
hadd higgsCombiner3lFINAL.AFTERFIX.root                      higgsCombiner3lFINAL.POINTS.*.MultiDimFit.mH120.root         
   
ls -alrth higgsCombiner3lFINAL.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

root -l higgsCombiner3lFINAL.AFTERFIX.root  \
        ggH/scripts/drawNLLvar.C\(\"r_3l\"\)
 
   

     
     
     
     
     
     
     
     
     
     
     
     
     
         
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=ICHEP_.*/.*H_.*:r_2016[1,-5,5]' \
                   --PO 'map=OLD_.*/.*H_.*:r_2015[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root
                  
  
combine -M MultiDimFit  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root    \
     -n "multidimfit.categories.2015vs2016"     >   result.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root.txt

     

combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root    \
     -n "multidimfit.categories.2015vs2016.algo.singles"     >   /tmp/amassiro/result.MultiDimFit.singles.perdavvero.workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root.txt
     

#     
# new tests     
#



                   
                   
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/.*H_.*:r[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root
                                    
                   
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/.*H_.*:r[1,-5,5]' \
                   superCombination.2015.with2016bkg.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.root

            
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/.*H_.*:r[1,0,2]' \
                   superCombination.2016.with2015bkg.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.root
                   

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/.*H_.*:r[1,-5,5]' \
                   superCombination.2015.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root

            
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/.*H_.*:r[1,-5,5]' \
                   superCombination.2016.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root
                   
                                                  



combine -M MultiDimFit  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root    \
     --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
     -n "multidimfit.categories.mu.unique.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.txt
                                                  

combine -M MultiDimFit  \
     workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.root    \
     --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
     -n "multidimfit.categories.mu.unique.2015.with2016bkg.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.txt
                                                                               

combine -M MultiDimFit  \
     workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.root    \
     --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
     -n "multidimfit.categories.mu.unique.2016.with2015bkg.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.txt
          
 
combine -M MultiDimFit  \
     workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root    \
     --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
     -n "multidimfit.categories.mu.unique.2015.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.txt
          

combine -M MultiDimFit  \
     workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root    \
     --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
     -n "multidimfit.categories.mu.unique.2016.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.txt
          

          
          
          
#          
# glorious likelihood scan
#

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1Dfit.multidimfit.categories.mu.unique.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1Dfit-multidimfit-categories-mu-unique-withbkg --sub-opts='-q 1nd' --split-points 1 

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=1,2 --saveSpecifiedNuis all   -n "1Dfit.multidimfit.categories.mu.unique.withbkg.second"   \
               --points 200    --job-mode lxbatch --task-name lxbatch-data-1Dfit-multidimfit-categories-mu-unique-withbkg-second --sub-opts='-q 1nd' --split-points 1 
               

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.5,2 --saveSpecifiedNuis all   -n "1Dfit.multidimfit.categories.mu.unique.withbkg.third"   \
               --points 300    --job-mode lxbatch --task-name lxbatch-data-1Dfit-multidimfit-categories-mu-unique-withbkg-third --sub-opts='-q 1nd' --split-points 1 
               
                   
combine -M MultiDimFit workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 100  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.5,1.5 -n "1Dfit.multidimfit.categories.mu.unique.withbkg.LOCAL"  


combine -M MultiDimFit workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 100  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.5,1.5 -n "1Dfit.multidimfit.categories.mu.unique.withbkg.bis.LOCAL"  



               
combineTool.py -d workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1Dfit.multidimfit.categories.mu.unique.2015.with2016bkg.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1Dfit-multidimfit-categories-mu-unique-2015-with2016bkg-withbkg --sub-opts='-q 1nd' --split-points 1 


               
combineTool.py -d workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1Dfit.multidimfit.categories.mu.unique.2016.with2015bkg.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1Dfit-multidimfit-categories-mu-unique-2016-with2015bkg-withbkg --sub-opts='-q 1nd' --split-points 1 


               
combineTool.py -d workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1Dfit.multidimfit.categories.mu.unique.2015.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1Dfit-multidimfit-categories-mu-unique-2015-withbkg --sub-opts='-q 1nd' --split-points 1 

         
combineTool.py -d workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1Dfit.multidimfit.categories.mu.unique.2015.withbkg.second"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1Dfit-multidimfit-categories-mu-unique-2015-withbkg-second --sub-opts='-q 1nd' --split-points 1 
               
               
combine -M MultiDimFit workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 100  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.5,1.5 -n "1Dfit.multidimfit.categories.mu.unique.2015.withbkg.LOCAL"  

               
               
               
combineTool.py -d workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1Dfit.multidimfit.categories.mu.unique.2016.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1Dfit-multidimfit-categories-mu-unique-2016-withbkg --sub-opts='-q 1nd' --split-points 1 


       
combine -M MultiDimFit workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 100  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.5,1.5 -n "1Dfit.multidimfit.categories.mu.unique.2016.withbkg.LOCAL"  

     
               
combineTool.py -d workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,1 --saveSpecifiedNuis all   -n "1Dfit.multidimfit.categories.mu.unique.2016.withbkg.second"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1Dfit-multidimfit-categories-mu-unique-2016-withbkg-second --sub-opts='-q 8nh' --split-points 1 

               
  
  
  
  
###  after the fix of nuisances ###


combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-withbkg --sub-opts='-q 1nd' --split-points 1 

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=1,2 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.withbkg.second"   \
               --points 200    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-withbkg-second --sub-opts='-q 1nd' --split-points 1 
               

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.5,2 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.withbkg.third"   \
               --points 300    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-withbkg-third --sub-opts='-q 1nd' --split-points 1 
               
               
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.0,2 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.withbkg.fourth"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-withbkg-fourth --sub-opts='-q 1nd' --split-points 1 
                   
combine -M MultiDimFit workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 100  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.5,1.5 -n "1DfitAfterFix.multidimfit.categories.mu.unique.withbkg.LOCAL"  


combine -M MultiDimFit workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 200  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.0,2.0 -n "1DfitAfterFix.larger.range.multidimfit.categories.mu.unique.withbkg.LOCAL"  


               
combineTool.py -d workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.2015.with2016bkg.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-2015-with2016bkg-withbkg --sub-opts='-q 1nd' --split-points 1 


combine -M MultiDimFit workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 200  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 -n "1DfitAfterFix.multidimfit.categories.mu.unique.2015.with2016bkg.withbkg.LOCAL"  

               
               
combineTool.py -d workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.2016.with2015bkg.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-2016-with2015bkg-withbkg --sub-opts='-q 1nd' --split-points 1 


               
combine -M MultiDimFit workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 200  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 -n "1DfitAfterFix.multidimfit.categories.mu.unique.2016.with2015bkg.withbkg.LOCAL"  

               
combineTool.py -d workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.2015.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-2015-withbkg --sub-opts='-q 1nd' --split-points 1 

         
combineTool.py -d workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.2015.withbkg.second"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-2015-withbkg-second --sub-opts='-q 1nd' --split-points 1 
               
               
combine -M MultiDimFit workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 100  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.5,1.5 -n "1DfitAfterFix.multidimfit.categories.mu.unique.2015.withbkg.LOCAL"  

               
               
               
combineTool.py -d workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,2 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.2016.withbkg"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-2016-withbkg --sub-opts='-q 1nd' --split-points 1 


       
combine -M MultiDimFit workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root -m 125 --algo=grid --points 100  --saveSpecifiedNuis all   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0.5,1.5 -n "1DfitAfterFix.multidimfit.categories.mu.unique.2016.withbkg.LOCAL"  

     
               
combineTool.py -d workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0 --setPhysicsModelParameterRanges r=0,1 --saveSpecifiedNuis all   -n "1DfitAfterFix.multidimfit.categories.mu.unique.2016.withbkg.second"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-1DfitAfterFix-multidimfit-categories-mu-unique-2016-withbkg-second --sub-opts='-q 8nh' --split-points 1 

               
  
  
  
hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.AFTERFIX.root                      higgsCombine1DfitAfterFix.multidimfit.categories.mu.unique.withbkg.fourth.POINTS.*.MultiDimFit.mH120.root         
   
ls -alrth higgsCombine1DfitAfterFix.multidimfit.categories.mu.unique.withbkg.fourth.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

   
#      
#      
# hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.root                      higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.POINTS.*.MultiDimFit.mH120.root         
# hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.with2016bkg.withbkg.root     higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.with2016bkg.withbkg.POINTS.*.MultiDimFit.mH120.root         
# hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.with2015bkg.withbkg.root     higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.with2015bkg.withbkg.POINTS.*.MultiDimFit.mH120.root         
# hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.root                 higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.POINTS.*.MultiDimFit.mH120.root         
# hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.root                 higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.POINTS.*.MultiDimFit.mH120.root         
# 
# hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.root                 higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.second.POINTS.*.MultiDimFit.mH120.root         
# hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.root                      higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.third.POINTS.*.MultiDimFit.mH120.root         
# hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.root                      higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.third.POINTS.*.MultiDimFit.mH120.root       higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.POINTS.*.MultiDimFit.mH120.root        

# hadd higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.root                 higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.second.POINTS.*.MultiDimFit.mH120.root     higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.POINTS.*.MultiDimFit.mH120.root      


# 
# 
# ls -alrth higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.POINTS.*.MultiDimFit.mH120.root                   | grep -v K |  awk '{print "rm "$9}' | /bin/sh
# ls -alrth higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.with2016bkg.withbkg.POINTS.*.MultiDimFit.mH120.root  | grep -v K |  awk '{print "rm "$9}' | /bin/sh
# ls -alrth higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.with2015bkg.withbkg.POINTS.*.MultiDimFit.mH120.root  | grep -v K |  awk '{print "rm "$9}' | /bin/sh
# ls -alrth higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh
# ls -alrth higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh
#   
# ls -alrth higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.second.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh


python  scripts/plot2Dscan.py -i ../higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.root   -n     plotLL.withbkg
python  scripts/plot2Dscan.py -i ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.with2016bkg.withbkg.root   -n     plotLL.2015.with2016bkg.withbkg
python  scripts/plot2Dscan.py -i ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.with2015bkg.withbkg.root   -n     plotLL.2016.with2015bkg.withbkg
python  scripts/plot2Dscan.py -i ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.root   -n     plotLL.2015.withbkg
python  scripts/plot2Dscan.py -i ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.root   -n     plotLL.2016.withbkg
          
python  scripts/plot2Dscan.py -i ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.LOCAL.MultiDimFit.mH125.root    -n     plotLL.2015.withbkg
python  scripts/plot2Dscan.py -i ../higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.bis.LOCAL.MultiDimFit.mH125.root     -n     plotLL.withbkg
python  scripts/plot2Dscan.py -i ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.LOCAL.MultiDimFit.mH125.root    -n     plotLL.2016.withbkg

               
ok

root -l ../higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.root  \
            scripts/drawNLLObs.C

            
root -l ../higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.bis.LOCAL.MultiDimFit.mH125.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.AFTERFIX.root  \
            scripts/drawNLLObs.C
            
            
            
            
root -l ../higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.bis.LOCAL.MultiDimFit.mH125.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.bis.LOCAL.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C


            
root -l ../higgsCombine1DfitAfterFix.multidimfit.categories.mu.unique.withbkg.LOCAL.MultiDimFit.mH125.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.bis.LOCAL.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C

            
root -l ../higgsCombine1DfitAfterFix.multidimfit.categories.mu.unique.withbkg.LOCAL.MultiDimFit.mH125.root  \
        ../higgsCombine1DfitAfterFix.larger.range.multidimfit.categories.mu.unique.withbkg.LOCAL.MultiDimFit.mH125.root \
            scripts/drawNLLObs.C


            

ok

root -l ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.with2016bkg.withbkg.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.with2016bkg.withbkg.root  \
            scripts/drawNLLObs.C

ok

root -l ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.with2015bkg.withbkg.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.with2015bkg.withbkg.root  \
            scripts/drawNLLObs.C

ok

root -l ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.root  \
            scripts/drawNLLObs.C

root -l ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.LOCAL.MultiDimFit.mH125.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2015.withbkg.LOCAL.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C

            
            
ok

root -l ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.root  \
            scripts/drawNLLObs.C



root -l ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.LOCAL.MultiDimFit.mH125.root  \
        ../higgsCombine1Dfit.multidimfit.categories.mu.unique.2016.withbkg.LOCAL.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C






# 
# test mu vs nuisances
# 




combineTool.py -d superCombination.Total.txt.pruned.txt.workspace.BIS.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0   -n "all.mu.vs.WWnorm0j"   \
               --redefineSignalPOIs r,WWnorm0j \
               --setPhysicsModelParameterRanges r=0,2:WWnorm0j=0,2  \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-scan-all-mu-vs-WWnorm0j --sub-opts='-q 1nd' --split-points 1 
            
            
combineTool.py -d superCombination.Total.txt.pruned.txt.workspace.BIS.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0   -n "all.mu.vs.Topnorm0j"   \
               --redefineSignalPOIs r,Topnorm0j \
               --setPhysicsModelParameterRanges r=0,Topnorm0j=0,2  \
               --points 400    --job-mode lxbatch --task-name lxbatch-data-scan-all-mu-vs-Topnorm0j --sub-opts='-q 1nd' --split-points 1 
            
            
                
  
  
  
ls -alrth higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6 | grep -v 6.7 | grep -v 6.8 | awk '{print "rm "$9}' | /bin/sh
hadd   higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit.root         higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit.POINTS.*.MultiDimFit.mH120.root

  
  
r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 

 
 
 

combine -M MultiDimFit  \
         \
     --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
     -n "multidimfit.categories.mu.allscan"     >   result.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.txt
                                                  

                                                  
                                                  
                                                  
                                                  
                                                  
                                                  




combineCards.py   OLD_em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  OLD_of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  OLD_of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  OLD_of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  OLD_of2j2j13=ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  OLD_of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  OLD_of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  OLD_of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  OLD_of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  OLD_wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  OLD_wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
                  OLD_wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  OLD_wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                 >   superCombination.2015.with2016bkg.txt.pruned.txt.NEWNAME.txt


combineCards.py   OLD_em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  OLD_of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  OLD_of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  OLD_of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  OLD_of2j2j13=ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  OLD_of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  OLD_of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  OLD_of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  OLD_of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  OLD_wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  OLD_wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
                  OLD_wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  OLD_wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  >   superCombination.2015.txt.pruned.txt.NEWNAME.txt





combineCards.py   OLD_of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  OLD_of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  OLD_of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  OLD_of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  OLD_of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  OLD_of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  OLD_of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  OLD_of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  OLD_wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  OLD_wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
                  OLD_wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  OLD_wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                 >   superCombination.2016.with2015bkg.txt.pruned.txt.NEWNAME.txt



combineCards.py   ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                 >   superCombination.2016.txt.pruned.txt.NEWNAME.txt











combineCards.py   OLD_em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  OLD_of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  OLD_of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  OLD_of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  OLD_of2j2j13=ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  OLD_of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  OLD_of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  OLD_of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  OLD_of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  OLD_of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  OLD_of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  OLD_wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  OLD_wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
                  OLD_wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  OLD_wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                 >   superCombination.Total.txt.pruned.txt.NEWNAME.txt












#  
# 
#   
# 
# combineCards.py   OLD_em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
#                   OLD_me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
#                   OLD_em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
#                   OLD_me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
#                   OLD_of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
#                   OLD_of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
#                   OLD_of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
#                   OLD_of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
#                   OLD_of2j2j13=ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
#                   OLD_of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
#                   OLD_of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
#                   OLD_of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
#                   OLD_of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
#                   OLD_of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
#                   OLD_of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
#                   OLD_of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   OLD_of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   OLD_wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
#                   OLD_wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
#                   OLD_wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
#                   OLD_wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
#                   ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
#                   ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
#                   ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
#                   ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
#                   ICHEP_of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
#                   ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
#                   ICHEP_of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
#                   ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
#                   ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
#                   ICHEP_of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
#                   ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
#                   ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
#                   ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
#                   ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
#                  >   superCombination.Total.txt.pruned.txt.NEWNAME.txt
# 
#                  
                 #   
# 
# combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
#                   me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
#                   em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
#                   me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
#                   of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
#                   of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
#                   of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
#                   of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
#                   of2j2j13=ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
#                   of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
#                   of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
#                   of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
#                   of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
#                   of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
#                   of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
#                   of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
#                   wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
#                   wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
#                   wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
#                   ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
#                   ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
#                   ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
#                   ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
#                   ICHEP_of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
#                   ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
#                   ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
#                   ICHEP_of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
#                   ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
#                   ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
#                   ICHEP_of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
#                   ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
#                   ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
#                   ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
#                   ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
#                  >   superCombination.Total.txt.pruned.txt
#  
#  
 
    
     
#      
#      
     