#!/bin/bash

DIR=$PWD
cd /afs/cern.ch/work/d/dittmer/private/hww2018/jobs/mkShapes__WHSS2018_final_ttHMVASF/
for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
cd $DIR
