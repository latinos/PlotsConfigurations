#! /bin/sh

cd /afs/cern.ch/user/l/lorusso/work/Higgs_highmass/Full_2016/CMSSW_8_0_26_patch1/work/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/Full2016

eval `scram runtime -sh` 


for i in $(seq 0 18); do

gardener.py wwvarfiller /eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel__genericFormulas/latino_TTTo2L2Nu__part$i.root latino_TTTo2L2Nu__part$i.root

mv latino_TTTo2L2Nu__part$i.root  /eos/user/l/lorusso/TOP_mT2

done


