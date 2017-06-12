

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
                   
                   
  
  
  
  
     
         
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=ICHEP_.*/.*H_.*:r_2016[1,-5,5]' \
                   --PO 'map=OLD_.*/.*H_.*:r_2015[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root
                  
  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=ICHEP_.*/.*H_.*:r_2016[1,-5,5]' \
                   --PO 'map=OLD_.*/.*H_.*:r_2015[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.bis.root
  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=ICHEP_.*/.*H_.*:r_2016[1,-5,5]' \
                   --PO 'map=OLD_.*/.*H_.*:r_2015[1,-5,5]' \
                   --PO 'map=ICHEP_.*/.H_.*:r_2016[1,-5,5]' \
                   --PO 'map=OLD_.*/.H_.*:r_2015[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt.NEWNAME.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.bis.root  \
                   > workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.bis.root.dumpcreation.txt
                  
  
  
        
        
        ---- test decorrelating ----
        
         
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=ICHEP_.*/.*H_.*:r_2016[1,-5,5]' \
                   --PO 'map=OLD_.*/.*H_.*:r_2015[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt.NEWNAME.Topdecorr.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.Topdecorr.root
                  
  
         
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=ICHEP_.*/.*H_.*:r_2016[1,-5,5]' \
                   --PO 'map=OLD_.*/.*H_.*:r_2015[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt.NEWNAME.WWdecorr.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.WWdecorr.root
                  
  
                  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=ICHEP_.*/.*H_.*:r_2016[1,-5,5]' \
                   --PO 'map=OLD_.*/.*H_.*:r_2015[1,-5,5]' \
                   superCombination.Total.txt.pruned.txt.NEWNAME.WWandTopdecorr.txt  -o  workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.WWandTopdecorr.root
                  
  
                  
  
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.WWandTopdecorr.root    \
     -n "multidimfit.categories.2015vs2016.algo.singles.WWandTop"     >  result.MultiDimFit.singles.perdavvero.workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.WWandTopdecorr.root.txt
     

     
              
  
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.WWdecorr.root    \
     -n "multidimfit.categories.2015vs2016.algo.singles.WW"     >  result.MultiDimFit.singles.perdavvero.workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.WWdecorr.root.txt
     

     
              
  
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.Topdecorr.root    \
     -n "multidimfit.categories.2015vs2016.algo.singles.Top"     >  result.MultiDimFit.singles.perdavvero.workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.Topdecorr.root.txt
     

     
     
        ---- (end) test decorrelating ----
     
     
     
     
     
  
  
combine -M MultiDimFit  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root    \
     -n "multidimfit.categories.2015vs2016"     >   result.MultiDimFit.singles.workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root.txt

     

combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root    \
     -n "multidimfit.categories.2015vs2016.algo.singles"     >  result.MultiDimFit.singles.perdavvero.workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root.txt
     

     
     
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root    \
     --redefineSignalPOIs fake_syst,r_2015,r_2016   \
     -n "multidimfit.categories.2015vs2016.algo.singles"     >  result.MultiDimFit.singles.perdavvero.workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root.fake_syst.txt
     

combine -M MultiDimFit  \
     --algo=singles  \
     superCombination.Total.txt.pruned.txt.workspace.root    \
     --redefineSignalPOIs fake_syst,r   \
     -n "multidimfit.categories.2015vs2016.algo.singles"     >  result.MultiDimFit.singles.perdavvero.superCombination.Total.txt.pruned.txt.workspace.root.fake_syst.txt

     
     
     
      
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root    \
     --redefineSignalPOIs CMS_scale_met,r_2015,r_2016   \
     -n "multidimfit.categories.2015vs2016.algo.singles"     >  result.MultiDimFit.singles.perdavvero.workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root.met.txt
     

combine -M MultiDimFit  \
     --algo=singles  \
     superCombination.Total.txt.pruned.txt.workspace.root    \
     --redefineSignalPOIs CMS_scale_met,r   \
     -n "multidimfit.categories.2015vs2016.algo.singles"     >  result.MultiDimFit.singles.perdavvero.superCombination.Total.txt.pruned.txt.workspace.root.met.txt

    
    
    
 
     
     
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root -M MultiDimFit    \
               --algo=grid    -n "LHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.2D.restrict"   --X-rtd OPTIMIZE_BOUNDS=0  --saveSpecifiedNuis all  --setPhysicsModelParameterRanges  r_2015=1.15,1.17:r_2016=1.00,1.01  \
               --points 50    --job-mode lxbatch --task-name lxbatch-superCombination-total-2015vs2016-2drestrict --sub-opts='-q 1nd' --split-points 1 

               
      r_2015 :    +1.162   -6.162/+0.046 (68%)
      r_2016 :    +1.006   -6.006/+0.024 (68%)
               
     
hadd higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.2dRestrict.root                      higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.2D.restrict.POINTS*.MultiDimFit.mH120.root    
   
ls -alrth higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.2D.restrict.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

r99t higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.bis.root \
        ggH/scripts/Draw2DImproved.cxx\(\"#mu_{2015}\",\"#mu_{2016}\",\"r_2015\",\"r_2016\"\)

python  scripts/plot2Dscan.py -i ../higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.2dRestrict.root   -n     plotLL.2mu2015vs2016

        
     

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root -M MultiDimFit    \
               --algo=grid    -n "LHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016"   --X-rtd OPTIMIZE_BOUNDS=0  --saveSpecifiedNuis all  --setPhysicsModelParameterRanges  r_2015=-0.1,2.5:r_2016=-0.1,2.5  \
               --points 200    --job-mode lxbatch --task-name lxbatch-superCombination-total-2015vs2016 --sub-opts='-q 1nd' --split-points 1 

               
combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.categories.mu.2015vs2016.root -M MultiDimFit    \
               --algo=grid    -n "LHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.bis"   --X-rtd OPTIMIZE_BOUNDS=0  --setPhysicsModelParameterRanges  r_2015=-0.1,2.5:r_2016=-0.1,2.5  \
               --points 200    --job-mode lxbatch --task-name lxbatch-superCombination-total-2015vs2016-bis --sub-opts='-q 1nd' --split-points 1 

            
   
hadd higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.bis.root                      higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.bis.POINTS.*.MultiDimFit.mH120.root    
   
ls -alrth higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal2015vs2016.bis.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh


    
           
               
          
          
          
          

text2workspace.py superCombination.Total.txt.pruned.txt   -o    superCombination.Total.txt.pruned.txt.workspace.root
text2workspace.py superCombination.2016.txt.pruned.txt   -o    superCombination.2016.txt.pruned.txt.workspace.root


text2workspace.py superCombination.2015.txt.pruned.txt   -o  superCombination.2015.txt.pruned.txt.root  




text2workspace.py superCombination.Total.txt.pruned.fakestatremoved.txt   -o    superCombination.Total.txt.pruned.fakestatremoved.txt.workspace.root


combineTool.py -d superCombination.Total.txt.pruned.fakestatremoved.txt.workspace.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=-0.1,2.5    -n "LHScanDATAHICHEPcombinedLXBATCHtotalfakestatremoved"   \
               --points 200    --job-mode lxbatch --task-name lxbatch-superCombination-total-fakestatremoved --sub-opts='-q 1nd' --split-points 1 


        
                              
   
hadd higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalfakestatremoved.root                      higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalfakestatremoved.POINTS.*.MultiDimFit.mH120.root    
   
ls -alrth higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalfakestatremoved.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

root -l higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalfakestatremoved.root  \
        ggH/scripts/drawNLLvar.C\(\"r\"\)
 
        





text2workspace.py superCombination.Total.txt.pruned.fakestatchanged.txt   -o    superCombination.Total.txt.pruned.fakestatchanged.txt.workspace.root


combineTool.py -d superCombination.Total.txt.pruned.fakestatchanged.txt.workspace.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=-0.1,2.5    -n "LHScanDATAHICHEPcombinedLXBATCHtotalfakestatchanged"   \
               --points 200    --job-mode lxbatch --task-name lxbatch-superCombination-total-fakestatchanged --sub-opts='-q 1nd' --split-points 1 


        
                              
   
hadd higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalfakestatchanged.root                      higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalfakestatchanged.POINTS.*.MultiDimFit.mH120.root    
   
ls -alrth higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalfakestatchanged.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

root -l higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalfakestatchanged.root  \
        ggH/scripts/drawNLLvar.C\(\"r\"\)
 
        

        
        
        
        
        


text2workspace.py superCombination.Total.txt.pruned.variedFake.txt   -o    superCombination.Total.txt.pruned.variedFake.txt.workspace.root


combineTool.py -d superCombination.Total.txt.pruned.variedFake.txt.workspace.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=-0.1,2.5    -n "LHScanDATAHICHEPcombinedLXBATCHtotalvariedFake"   \
               --points 200    --job-mode lxbatch --task-name lxbatch-superCombination-total-variedFake --sub-opts='-q 1nd' --split-points 1 


        
                              
   
hadd higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalvariedFake.root                      higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalvariedFake.POINTS.*.MultiDimFit.mH120.root    
   
ls -alrth higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalvariedFake.POINTS.*.MultiDimFit.mH120.root              | grep -v K |  awk '{print "rm "$9}' | /bin/sh

root -l higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalvariedFake.root  \
        ggH/scripts/drawNLLvar.C\(\"r\"\)
 
      
      
      
      

      (histo_Fake_CMS_fake_ele_hwwUp->Integral() - histo_Fake_CMS_fake_ele_hwwDown->Integral()) /2. /  histo_Fake->Integral()
      (histo_Fake_CMS_fake_mu_hwwUp->Integral() - histo_Fake_CMS_fake_mu_hwwDown->Integral()) /2. /  histo_Fake->Integral()

      
      
      1.01   1.03
      
      10%   10%
      
        
        


                 
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j.*/.*H_.*:r_0jet[1,-5,5]' \
                   --PO 'map=.*1j.*/.*H_.*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j.*/.*H_.*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf.*/.*H_.*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j.*/.*H_.*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l.*/.*H_.*:r_3l[1,-9,9]' \
                   superCombination.2015.txt.pruned.txt  -o  workspace.superCombination.2015.txt.pruned.txt.categories.mu.bis.root
    
 
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.2015.txt.pruned.txt.categories.mu.bis.root    \
     -n "multidimfit.categories.2015.single.supermegacombo"     >   result.MultiDimFit.singles.workspace.superCombination.2015.txt.pruned.txt.categories.mu.root.reallysingles.27Apr.txt







text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*0j.*/.*H_.*:r_0jet[1,-5,5]' \
                   --PO 'map=.*1j.*/.*H_.*:r_1jet[1,-5,5]' \
                   --PO 'map=.*2j2j.*/.*H_.*:r_2jet[1,-5,5]' \
                   --PO 'map=.*2jvbf.*/.*H_.*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*2jvh2j.*/.*H_.*:r_2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3l.*/.*H_.*:r_3l[1,-5,5]' \
                   superCombination.2016.txt.pruned.txt  -o  workspace.superCombination.2016.txt.pruned.txt.categories.mu.bis.root
                              
               
combine -M MultiDimFit  \
     --algo=singles  \
     workspace.superCombination.2016.txt.pruned.txt.categories.mu.bis.root    \
     -n "multidimfit.categories.2016.single.supermegacombo"     >   result.MultiDimFit.singles.workspace.superCombination.2016.txt.pruned.txt.categories.mu.root.reallysingles.27Apr.txt
     
   










combine -M MaxLikelihoodFit   superCombination.Total.txt.pruned.txt.workspace.root   --saveShapes --saveNormalizations   -n "saveall.TOTAL" \
     --robustFit 1  --minimizerStrategy 1 --minimizerTolerance 0.2  --cminFallback "Minuit2,Migrad,0:0.2"     >   result.MaxLikelihoodFit.Combined.FINAL.txt

     
combine -M MaxLikelihoodFit   superCombination.Total.txt.pruned.txt.workspace.root   --saveNormalizations   -n "saveall.TOTAL" \
     --robustFit 1  --minimizerStrategy 1 --minimizerTolerance 0.2  --cminFallback "Minuit2,Migrad,0:0.2"     >   result.MaxLikelihoodFit.Combined.FINAL.txt

combine -M MaxLikelihoodFit   superCombination.Total.txt.pruned.txt.workspace.root   --saveNormalizations   -n "saveall.TOTAL.nominos" \
     --robustFit 1  --minimizerStrategy 1 --minimizerTolerance 0.2  --cminFallback "Minuit2,Migrad,0:0.2"   --minos none    >   result.MaxLikelihoodFit.Combined.FINAL.nominos.txt

     
combine -M MaxLikelihoodFit   superCombination.Total.txt.pruned.txt.workspace.root   --saveNormalizations   -n "saveall.TOTAL.nominos" \
     --robustFit 1   --minimizerAlgoForMinos Minuit2,Migrad  --minimizerStrategy 0      >   result.MaxLikelihoodFit.Combined.FINAL.test2.txt

      
combine -M MaxLikelihoodFit   superCombination.Total.txt.pruned.txt.workspace.root   --saveNormalizations   -n "saveall.TOTAL.nominos.MCasimov" \
     --robustFit 1   --minimizerAlgoForMinos Minuit2,Migrad  --minimizerStrategy 0    -t -1
     

     
     
     
mv mlfit.root higgsCombineTest.MaxLikelihoodFit.mH120.saveall.TOTAL.mlfit.root


RooArgSet*       norm_fit_s = (RooArgSet*) _file0->Get("norm_fit_s")
RooRealVar wjet_0jet = (RooRealVar ) norm_fit_s->find("ICHEP_em_mp_0j_13/Fake");
wjet_0jet->getVal();


r99t mlfit2015.root    ggH/scripts/normalization.C





combine -M MaxLikelihoodFit   workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root           >   result.MaxLikelihoodFit.Combined.2015.txt

combine   -M MultiDimFit workspace.superCombination.2015.txt.pruned.txt.categories.mu.unique.withbkg.root    -n "r2015total"    --algo=grid --points 30  --setPhysicsModelParameterRanges r=0.5,1.0




root -l higgsCombiner2015total.MultiDimFit.mH120.root  \
        ggH/scripts/drawNLLvar.C\(\"r\"\)
 














combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-4 --rMax=6      Combined.vbf.pruned.txt             >   result.MaxLikelihoodFit.Combined.vbf.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-6 --rMax=8      Combined.vh2j.pruned.txt            >   result.MaxLikelihoodFit.Combined.vh2j.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-4 --rMax=6      Combined.2j.pruned.txt              >   result.MaxLikelihoodFit.Combined.2j.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=6      Combined.wh3l.pruned.txt            >   result.MaxLikelihoodFit.Combined.wh3l.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      Combined.1jet.txt                   >   result.MaxLikelihoodFit.Combined.1jet.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      Combined.0jet.txt                   >   result.MaxLikelihoodFit.Combined.0jet.txt


combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.vbf.pruned.txt             >   result.Significance.Combined.vbf.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.vh2j.pruned.txt            >   result.Significance.Combined.vh2j.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.2j.pruned.txt              >   result.Significance.Combined.2j.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.wh3l.pruned.txt            >   result.Significance.Combined.wh3l.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.1jet.txt                   >   result.Significance.Combined.1jet.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.0jet.txt                   >   result.Significance.Combined.0jet.txt





                                               
                                                       
                   

combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      Combined.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.Combined.vbf.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=8      Combined.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.Combined.vh2j.txt
combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      Combined.2j.pruned.txt              >   result.data.MaxLikelihoodFit.Combined.2j.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=6      Combined.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.Combined.wh3l.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.txt                   >   result.data.MaxLikelihoodFit.Combined.1jet.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.txt                   >   result.data.MaxLikelihoodFit.Combined.0jet.txt



combine -M ProfileLikelihood --significance         Combined.vbf.pruned.txt             >   result.data.Significance.Combined.vbf.txt
combine -M ProfileLikelihood --significance         Combined.vh2j.pruned.txt            >   result.data.Significance.Combined.vh2j.txt
combine -M ProfileLikelihood --significance         Combined.2j.pruned.txt              >   result.data.Significance.Combined.2j.txt
combine -M ProfileLikelihood --significance         Combined.wh3l.pruned.txt            >   result.data.Significance.Combined.wh3l.txt
combine -M ProfileLikelihood --significance         Combined.1jet.txt                   >   result.data.Significance.Combined.1jet.txt
combine -M ProfileLikelihood --significance         Combined.0jet.txt                   >   result.data.Significance.Combined.0jet.txt





    cat  ../result.Significance.Combined.0jet.txt
    cat  ../result.Significance.Combined.1jet.txt
    cat  ../result.Significance.Combined.2j.txt
    cat  ../result.Significance.Combined.vbf.txt
    cat  ../result.Significance.Combined.vh2j.txt
    cat  ../result.Significance.Combined.wh3l.txt

    cat  ../result.data.Significance.Combined.0jet.txt
    cat  ../result.data.Significance.Combined.1jet.txt
    cat  ../result.data.Significance.Combined.2j.txt
    cat  ../result.data.Significance.Combined.vbf.txt
    cat  ../result.data.Significance.Combined.vh2j.txt
    cat  ../result.data.Significance.Combined.wh3l.txt


    
    
    
