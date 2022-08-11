#!/bin/bash

DIR=$PWD

cd /afs/cern.ch/user/d/dittmer/private/Combine/CMSSW_8_1_0/src/
eval `scramv1 runtime -sh`
cd /afs/cern.ch/user/d/dittmer/private/Combine/ModificationDatacards

find -L /afs/cern.ch/user/d/dittmer/private/hww2018/CMSSW_9_4_12/src/PlotsConfigurations/Configurations/ZH3l/Full2016_v6/datacards_ZH3l_2016_v6_newWP -name 'datacard.txt' | egrep 'SR....mtw|CR....events' | while read line; do
    python PruneDatacard.py -d $line -o $line.pruned.txt -i $DIR/inputs_to_prune_VHlep.py --suppressFluctuationError=1 -t 0.00001
done

cd $DIR
