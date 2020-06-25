#!/usr/bin/bash

JOBdir=/afs/cern.ch/user/s/svanputt/work/monoHiggs/CMSSW_10_6_4/src/job/mkShapes__MHlnjj_2017/
#JOB=mkShapes__MHlnjj_2017__ALL__Wjets.55

JOB=(
    mkShapes__MHlnjj_2017__ALL__Wjets.55 \
)

for job in "${JOB[@]}"
do
    echo $JOBdir${job}.jds
    #condor_submit ${JOBdir}${job}.jds > ${JOBdir}${job}.jid
done
