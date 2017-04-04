

cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -



                   
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
                   
                                                  

                                                  
                                                  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.vbf.pruned.txt     -o  workspace.forLLscan.Combined.vbf.pruned.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.vh2j.pruned.txt    -o  workspace.forLLscan.Combined.vh2j.pruned.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.2j.pruned.txt      -o  workspace.forLLscan.Combined.2j.pruned.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.wh3l.pruned.txt    -o  workspace.forLLscan.Combined.wh3l.pruned.txt.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.1jet.txt           -o  workspace.forLLscan.Combined.1jet.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.0jet.txt           -o  workspace.forLLscan.Combined.0jet.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.0jet.em.txt        -o  workspace.forLLscan.Combined.0jet.em.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.0jet.me.txt        -o  workspace.forLLscan.Combined.0jet.me.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.1jet.em.txt        -o  workspace.forLLscan.Combined.1jet.em.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.1jet.me.txt        -o  workspace.forLLscan.Combined.1jet.me.txt.root




  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/ggH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/ggZH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/H_htt:muGGH[1,-1,3]' \
                   --PO 'map=.*/qqH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_htt:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/ZH_hww:muVBF[1,-3,6]'  \
                   superCombination.Total.txt.pruned.txt  -o  workspace.superCombination.Total.txt.pruned.txt.kvkf.root
                   
                   
  

text2workspace.py superCombination.Total.txt.pruned.txt   -o    superCombination.Total.txt.pruned.txt.workspace.root
text2workspace.py superCombination.2016.txt.pruned.txt   -o    superCombination.2016.txt.pruned.txt.workspace.root


text2workspace.py superCombination.2015.txt.pruned.txt   -o  superCombination.2015.txt.pruned.txt.root  



