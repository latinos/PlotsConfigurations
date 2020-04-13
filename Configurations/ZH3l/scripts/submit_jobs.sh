#!/bin/bash

DIR=$PWD
cd /afs/cern.ch/work/d/dittmer/private/hww2018/jobs/mkShapes__ZH3l_2018_v6/
for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
cd $DIR
