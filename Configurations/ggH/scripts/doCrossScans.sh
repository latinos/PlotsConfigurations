# 
# load combine
# 

cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
# cd -


cd /afs/cern.ch/work/a/amassiro/Latinos/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations


#     
# new tests     
#



                   
                   
# text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
#                    --PO 'map=.*/.*H_.*:r[1,-5,5]' \
#                    superCombination.Total.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root
                                    
#                    
# text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
#                    --PO 'map=.*/.*H_.*:r[1,-5,5]' \
#                    superCombination.2015.with2016bkg.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.root
# 
#             
# text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
#                    --PO 'map=.*/.*H_.*:r[1,-5,5]' \
#                    superCombination.2016.with2015bkg.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.root
#                    
# 
# text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
#                    --PO 'map=.*/.*H_.*:r[1,-5,5]' \
#                    superCombination.2015.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root
# 
#             
# text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
#                    --PO 'map=.*/.*H_.*:r[1,-5,5]' \
#                    superCombination.2016.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root
#                    
#                                                   

# 
# 
# combine -M MultiDimFit  \
#      workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.2015.with2016bkg.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.txt
#                                                                                
# 
# combine -M MultiDimFit  \
#      workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.2016.with2015bkg.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.txt
#           
#  
# combine -M MultiDimFit  \
#      workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.2015.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.txt
#           
# 
# combine -M MultiDimFit  \
#      workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.2016.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.txt
#           
#      
#  
# combine -M MultiDimFit  \
#      workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.withbkg"     >   result.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.txt
                                                  
      
      


# combine -M MultiDimFit  \
#       --algo=singles   \
#       workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.2015.with2016bkg.withbkg.singles"     >   result.singles.MultiDimFit.singles.workspace.superCombination.2015.with2016bkg.txt.pruned.txt.categories.mu.unique.withbkg.txt
#                                                                                

# combine -M MultiDimFit  \
#       --algo=singles   \
#      workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.2016.with2015bkg.withbkg.singles"     >   result.singles.MultiDimFit.singles.workspace.superCombination.2016.with2015bkg.txt.pruned.txt.categories.mu.unique.withbkg.txt
          
#  
# combine -M MultiDimFit  \
#       --algo=singles   \
#      workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.2015.withbkg.singles"     >   result.singles.MultiDimFit.singles.workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.txt
          
# 
# combine -M MultiDimFit  \
#       --algo=singles   \
#      workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.2016.withbkg.singles"     >   result.singles.MultiDimFit.singles.workspace.superCombination.2016.txt.pruned.txt.categories.mu.unique.withbkg.txt
#           
#      
#  
# combine -M MultiDimFit  \
#       --algo=singles   \
#      workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root    \
#      --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j,DYttnorm2j,Topnorm2j,WWnorm2j,DYttnorm2jvbf,Topnorm2jvbf,WWnorm2jvbf,DYttnorm2jvh,Topnorm2jvh,WWnorm2jvh   \
#      -n "multidimfit.categories.mu.unique.withbkg.singles"     >   result.singles.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.txt
      
      

combine -M MultiDimFit  \
      --algo=singles   \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.root    \
     --redefineSignalPOIs r,DYttnorm0j,Topnorm0j,WWnorm0j,DYttnorm1j,Topnorm1j,WWnorm1j   \
     -n "multidimfit.categories.mu.unique.withbkg.singles"     >   result.singles.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.unique.withbkg.lesspoi.txt
      
      

      
      
      
      