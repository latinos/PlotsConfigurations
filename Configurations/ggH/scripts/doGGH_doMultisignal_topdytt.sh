
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -




# 2015 + 2016


combineCards.py   of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   Combined.top.dytt.0j.pruned.txt

combineCards.py   of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Combined.top.dytt.1j.pruned.txt
                  
                  

                  
combineCards.py   of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   Combined.top.dytt.vh2j.pruned.txt

                  
                  
combineCards.py   of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  >   Combined.top.dytt.vbf.pruned.txt
                  
                  
                  
combineCards.py   of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  >   Combined.top.dytt.2j.pruned.txt


                  

combine -M    MultiDimFit    Combined.top.dytt.0j.pruned.txt   --redefineSignalPOIs DYttnorm0j,Topnorm0j       --freezeNuisances=r,WWnorm0j       -n "dytop0j"    -m 125  --algo=grid --points 1000      --setPhysicsModelParameterRanges  DYttnorm0j=0.01,2:Topnorm0j=0.01,2      
combine -M    MultiDimFit    Combined.top.dytt.1j.pruned.txt   --redefineSignalPOIs DYttnorm1j,Topnorm1j       --freezeNuisances=r,WWnorm1j       -n "dytop1j"    -m 125  --algo=grid --points 1000      --setPhysicsModelParameterRanges  DYttnorm1j=0.01,2:Topnorm1j=0.01,2      
combine -M    MultiDimFit    Combined.top.dytt.2j.pruned.txt   --redefineSignalPOIs DYttnorm2j,Topnorm2j       --freezeNuisances=r,WWnorm2j       -n "dytop2j"    -m 125  --algo=grid --points 1000      --setPhysicsModelParameterRanges  DYttnorm2j=0.01,2:Topnorm2j=0.01,2      
combine -M    MultiDimFit    Combined.top.dytt.vh2j.pruned.txt --redefineSignalPOIs DYttnorm2jvh,Topnorm2jvh   --freezeNuisances=r,WWnorm2jvh     -n "dytop2jvh"  -m 125  --algo=grid --points 1000      --setPhysicsModelParameterRanges  DYttnorm2jvh=0.01,2:Topnorm2jvh=0.01,2  
combine -M    MultiDimFit    Combined.top.dytt.vbf.pruned.txt  --redefineSignalPOIs DYttnorm2jvbf,Topnorm2jvbf --freezeNuisances=r,WWnorm2jvbf    -n "dytop2jvbf" -m 125  --algo=grid --points 1000      --setPhysicsModelParameterRanges  DYttnorm2jvbf=0.01,2:Topnorm2jvbf=0.01,2




