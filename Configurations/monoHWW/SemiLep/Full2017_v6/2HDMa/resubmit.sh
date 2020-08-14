#!/usr/bin/bash

#JOBdir=/afs/cern.ch/user/s/svanputt/work/monoHiggs/CMSSW_10_6_4/src/job/mkShapes__MHlnjj_2017__ALL/
JOBdir=/afs/cern.ch/user/s/svanputt/work/monoHiggs/CMSSW_10_6_4/src/job/mkShapes__MHlnjj_FCR_2017__ALL/

JOB=(
    FAKE.26/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.26 \
)
#    VBF-V/mkShapes__MHlnjj_2017__ALL__VBF-V \
#    WW.0/mkShapes__MHlnjj_2017__ALL__WW.0 \
#    WW.1/mkShapes__MHlnjj_2017__ALL__WW.1 \
#    WW.2/mkShapes__MHlnjj_2017__ALL__WW.2 \

for job in "${JOB[@]}"
do
    echo $JOBdir${job}.jds
    condor_submit ${JOBdir}${job}.jds > ${JOBdir}${job}.jid
done
