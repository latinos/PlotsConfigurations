

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


    
    
    
