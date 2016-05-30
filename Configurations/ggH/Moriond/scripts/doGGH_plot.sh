


cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

cd /afs/cern.ch/user/a/amassiro/Limit/PlayWithDatacards

python pieFromCards.py  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Moriond2016.v1.txt.pruned.txt  \
                 --plotFile /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/plot.py
     
   
  