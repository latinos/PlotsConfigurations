
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
                   --PO 'map=.*/WW_pt1:r1[1,0.8,1.2]'  \
                   --PO 'map=.*/WW_pt2:r2[1,0.8,1.2]'  \
                   --PO 'map=.*/WW_pt3:r3[1,0.8,1.2]'  \
                   --PO 'map=.*/WW_pt4:r4[1,0.8,1.2]'  \
                   --PO 'map=.*/WW_pt5:r5[1,0.8,1.2]'  \
                   --PO 'map=.*/WW_pt6:r6[1,0.8,1.2]'  \
                    pt1.combined.txt  -o   workspace.pt1.combined.txt.root
     
     
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters  r1=1,r2=1,r3=1,r4=1,r5=1,r6=1 \
     --algo=grid --points=1000  \
      workspace.pt1.combined.txt.root           >   result.MultiDimFit.workspace.pt1.combined.txt.root.grid.txt

   
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters  r1=1,r2=1,r3=1,r4=1,r5=1,r6=1 \
     --algo=singles   \
     -n 'pt1.singles'  \
      workspace.pt1.combined.txt.root           >   result.MultiDimFit.workspace.pt1.combined.txt.root.singles.txt

combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters  r1=1,r2=1,r3=1,r4=1,r5=1,r6=1 \
     --algo=singles   \
     -n 'pt1.singles.floatPOI'  \
      --floatOtherPOIs=1 \
      workspace.pt1.combined.txt.root           >   result.MultiDimFit.workspace.pt1.combined.txt.root.singles.floatPOI.txt
      
      
      
      
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters  r1=1,r2=1,r3=1,r4=1,r5=1,r6=1 \
     --algo=cross   \
     -n 'pt1.cross'  \
      workspace.pt1.combined.txt.root           >   result.MultiDimFit.workspace.pt1.combined.txt.root.cross.txt
      

combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters  r1=1,r2=1,r3=1,r4=1,r5=1,r6=1 \
     -n 'pt1.noOption'  \
      workspace.pt1.combined.txt.root           >   result.MultiDimFit.workspace.pt1.combined.txt.root.noOption.txt


combine -M MaxLikelihoodFit -t -1 \
     --setPhysicsModelParameters  r1=1,r2=1,r3=1,r4=1,r5=1,r6=1 \
     --redefineSignalPOIs     r1,r2,r3,r4,r5,r6  \
     -n 'pt1.noOption.MaxLikelihoodFit'  \
      workspace.pt1.combined.txt.root           >   result.MaxLikelihoodFit.workspace.pt1.combined.txt.root.noOption.txt
 
 
 
      
      
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters  r1=1,r2=1 \
     --redefineSignalPOIs     r1,r2  \
     --freezeNuisances            r3,r4,r5,r6  \
     --algo=grid --points=200  \
     -n 'pt1.onlyr1r2'  \
      workspace.pt1.combined.txt.root           >   result.MultiDimFit.workspace.pt1.combined.txt.root.grid.onlyr1r2.txt
      
 

combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters  r1=1,r2=1,r3=1,r4=1 \
     --redefineSignalPOIs     r1,r2,r3,r4  \
     --freezeNuisances        r5,r6  \
     --algo=grid --points=1000  \
     -n 'pt1.onlyr1r2r3r4'  \
      workspace.pt1.combined.txt.root           >   result.MultiDimFit.workspace.pt1.combined.txt.root.grid.onlyr1r2r3r4.txt
      

               
               
 
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters  r1=1 \
     --redefineSignalPOIs     r1   \
     --freezeNuisances            r2,r3,r4,r5,r6  \
     --algo=grid --points=100  \
     -n 'pt1.onlyr1'  \
      workspace.pt1.combined.txt.root           >   result.MultiDimFit.workspace.pt1.combined.txt.root.grid.onlyr1.txt
      
       
       
       
      

combineTool.py -d    workspace.pt1.combined.txt.root  -M MultiDimFit    \
               --algo=grid     --X-rtd OPTIMIZE_BOUNDS=0   \
               -t -1   -n "LH6Dpt1MClxbatch"   \
               --points 4000    --job-mode lxbatch --task-name lxbatch-pt1-mc-y2016 --sub-opts='-q 1nd' --split-points 1 

ls -alrth lxbatch/higgsCombineLH6Dpt1MClxbatch.POINTS.*.MultiDimFit.mH120.root    | grep -v K  | awk '{print "rm "$9}' | /bin/sh
               
hadd higgsCombineLH6Dpt1MClxbatch.root   lxbatch/higgsCombineLH6Dpt1MClxbatch.POINTS.*.MultiDimFit.mH120.root



r99t   higgsCombineLH6Dpt1MClxbatch.root ../../ggH/scripts/Draw1DImproved.cxx\(\"r2\",\"r2\",2,\"1\"\)

r99t   higgsCombineLH6Dpt1MClxbatch.root ../../ggH/scripts/Draw2DImproved.cxx\(\"r2\",\"r3\",\"r2\",\"r3\",2,\"r1\>0.9\&\&r1\<1.1\"\)
r99t   higgsCombineLH6Dpt1MClxbatch.root ../../ggH/scripts/Draw2DImproved.cxx\(\"r2\",\"r3\",\"r2\",\"r3\",2,\"1\"\)



r99t   higgsCombineTest.MultiDimFit.mH120.root ../../ggH/scripts/Draw2DImproved.cxx\(\"r2\",\"r3\",\"r2\",\"r3\",2,\"r1\>0.9\&\&r1\<1.1\"\)
r99t   higgsCombineTest.MultiDimFit.mH120.root ../../ggH/scripts/Draw2DImproved.cxx\(\"r2\",\"r3\",\"r2\",\"r3\",2,\"1\"\)

r99t   higgsCombineTest.MultiDimFit.mH120.root ../../ggH/scripts/Draw2DImproved.cxx\(\"r2\",\"r1\",\"r2\",\"r1\",2,\"1\"\)

r99t   higgsCombineTest.MultiDimFit.mH120.root ../../ggH/scripts/Draw1DImproved.cxx\(\"r2\",\"r2\",2,\"1\"\)
               
r99t   higgsCombinept1.onlyr1r2.MultiDimFit.mH120.root ../../ggH/scripts/Draw2DImproved.cxx\(\"r2\",\"r1\",\"r2\",\"r1\",2,\"1\"\)
r99t   higgsCombinept1.onlyr1r2r3r4.MultiDimFit.mH120.root ../../ggH/scripts/Draw2DImproved.cxx\(\"r2\",\"r1\",\"r2\",\"r1\",2,\"r3\>0.9\&\&r3\<1.1\&\&r4\>0.9\&\&r4\<1.1\"\)
r99t   higgsCombinept1.onlyr1r2r3r4.MultiDimFit.mH120.root ../../ggH/scripts/Draw2DImproved.cxx\(\"r3\",\"r1\",\"r3\",\"r1\",2,\"r2\>0.9\&\&r2\<1.1\&\&r4\>0.9\&\&r4\<1.1\"\)
r99t   higgsCombinept1.onlyr1.MultiDimFit.mH120.root   ../../ggH/scripts/Draw1DImproved.cxx\(\"r1\",\"r1\",2,\"1\"\)
        
        
        
  
r99t  higgsCombinept1.singles.MultiDimFit.mH120.root


TTreeReader myReader("limit", _file0);
TTreeReaderValue<Float_t> myR1(myReader, "r1");
TTreeReaderValue<Float_t> myR2(myReader, "r2");
TTreeReaderValue<Float_t> myR3(myReader, "r3");
TTreeReaderValue<Float_t> myR4(myReader, "r4");
TTreeReaderValue<Float_t> myR5(myReader, "r5");
TTreeReaderValue<Float_t> myR6(myReader, "r6");

TGraphAsymmErrors* gr = new TGraphAsymmErrors();

float x;
float y;
float y_up;
float y_do;
float x_up;
float x_do;

myReader.SetEntry(1);
x = 20;
x_do = 20;
x_up = 20;

y = *myR1;
myReader.SetEntry(7);
y_do = y - *myR1;
myReader.SetEntry(8);
y_up = *myR1 - y;

gr->SetPoint (0, x, y);
gr->SetPointError (0, x_do, x_up, y_do, y_up);

gr->Draw("APL");





TTree* limit = (TTree*) _file0->Get("limit");




TGraphA
for (int 

limit->Scan("r1:r2:r3:r4:r5:r6")  







        
        