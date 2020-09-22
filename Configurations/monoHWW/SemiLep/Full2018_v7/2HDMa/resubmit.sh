#!/usr/bin/bash

JOBdir=/afs/cern.ch/user/s/svanputt/work/monoHiggs/CMSSW_10_6_4/src/job/mkShapes__GenSemi_2017v7__ALL/
#JOBdir=/afs/cern.ch/user/s/svanputt/work/monoHiggs/CMSSW_10_6_4/src/job/mkShapes__MHlnjj_FCR_2017__ALL/

JOB=(
    Wjets.0/mkShapes__GenSemi_2017v7__ALL__Wjets.0 \
    Wjets.44/mkShapes__GenSemi_2017v7__ALL__Wjets.44 \
    Wjets.1/mkShapes__GenSemi_2017v7__ALL__Wjets.1 \
    Wjets.45/mkShapes__GenSemi_2017v7__ALL__Wjets.45 \
    Wjets.10/mkShapes__GenSemi_2017v7__ALL__Wjets.10 \
    Wjets.46/mkShapes__GenSemi_2017v7__ALL__Wjets.46 \
    Wjets.11/mkShapes__GenSemi_2017v7__ALL__Wjets.11 \
    Wjets.47/mkShapes__GenSemi_2017v7__ALL__Wjets.47 \
    Wjets.12/mkShapes__GenSemi_2017v7__ALL__Wjets.12 \
    Wjets.48/mkShapes__GenSemi_2017v7__ALL__Wjets.48 \
    Wjets.13/mkShapes__GenSemi_2017v7__ALL__Wjets.13 \
    Wjets.49/mkShapes__GenSemi_2017v7__ALL__Wjets.49 \
    Wjets.14/mkShapes__GenSemi_2017v7__ALL__Wjets.14 \
    Wjets.5/mkShapes__GenSemi_2017v7__ALL__Wjets.5 \
    Wjets.15/mkShapes__GenSemi_2017v7__ALL__Wjets.15 \
    Wjets.50/mkShapes__GenSemi_2017v7__ALL__Wjets.50 \
    Wjets.16/mkShapes__GenSemi_2017v7__ALL__Wjets.16 \
    Wjets.51/mkShapes__GenSemi_2017v7__ALL__Wjets.51 \
    Wjets.17/mkShapes__GenSemi_2017v7__ALL__Wjets.17 \
    Wjets.52/mkShapes__GenSemi_2017v7__ALL__Wjets.52 \
    Wjets.18/mkShapes__GenSemi_2017v7__ALL__Wjets.18 \
    Wjets.53/mkShapes__GenSemi_2017v7__ALL__Wjets.53 \
    Wjets.19/mkShapes__GenSemi_2017v7__ALL__Wjets.19 \
    Wjets.54/mkShapes__GenSemi_2017v7__ALL__Wjets.54 \
    Wjets.2/mkShapes__GenSemi_2017v7__ALL__Wjets.2 \
    Wjets.55/mkShapes__GenSemi_2017v7__ALL__Wjets.55 \
    Wjets.20/mkShapes__GenSemi_2017v7__ALL__Wjets.20 \
    Wjets.56/mkShapes__GenSemi_2017v7__ALL__Wjets.56 \
    Wjets.21/mkShapes__GenSemi_2017v7__ALL__Wjets.21 \
    Wjets.57/mkShapes__GenSemi_2017v7__ALL__Wjets.57 \
    Wjets.22/mkShapes__GenSemi_2017v7__ALL__Wjets.22 \
    Wjets.58/mkShapes__GenSemi_2017v7__ALL__Wjets.58 \
    Wjets.23/mkShapes__GenSemi_2017v7__ALL__Wjets.23 \
    Wjets.59/mkShapes__GenSemi_2017v7__ALL__Wjets.59 \
    Wjets.24/mkShapes__GenSemi_2017v7__ALL__Wjets.24 \
    Wjets.6/mkShapes__GenSemi_2017v7__ALL__Wjets.6 \
    Wjets.25/mkShapes__GenSemi_2017v7__ALL__Wjets.25 \
    Wjets.60/mkShapes__GenSemi_2017v7__ALL__Wjets.60 \
    Wjets.26/mkShapes__GenSemi_2017v7__ALL__Wjets.26 \
    Wjets.61/mkShapes__GenSemi_2017v7__ALL__Wjets.61 \
    Wjets.27/mkShapes__GenSemi_2017v7__ALL__Wjets.27 \
    Wjets.62/mkShapes__GenSemi_2017v7__ALL__Wjets.62 \
    Wjets.28/mkShapes__GenSemi_2017v7__ALL__Wjets.28 \
    Wjets.63/mkShapes__GenSemi_2017v7__ALL__Wjets.63 \
    Wjets.29/mkShapes__GenSemi_2017v7__ALL__Wjets.29 \
    Wjets.64/mkShapes__GenSemi_2017v7__ALL__Wjets.64 \
    Wjets.3/mkShapes__GenSemi_2017v7__ALL__Wjets.3 \
    Wjets.65/mkShapes__GenSemi_2017v7__ALL__Wjets.65 \
    Wjets.30/mkShapes__GenSemi_2017v7__ALL__Wjets.30 \
    Wjets.66/mkShapes__GenSemi_2017v7__ALL__Wjets.66 \
    Wjets.31/mkShapes__GenSemi_2017v7__ALL__Wjets.31 \
    Wjets.67/mkShapes__GenSemi_2017v7__ALL__Wjets.67 \
    Wjets.32/mkShapes__GenSemi_2017v7__ALL__Wjets.32 \
    Wjets.68/mkShapes__GenSemi_2017v7__ALL__Wjets.68 \
    Wjets.33/mkShapes__GenSemi_2017v7__ALL__Wjets.33 \
    Wjets.69/mkShapes__GenSemi_2017v7__ALL__Wjets.69 \
    Wjets.34/mkShapes__GenSemi_2017v7__ALL__Wjets.34 \
    Wjets.7/mkShapes__GenSemi_2017v7__ALL__Wjets.7 \
    Wjets.35/mkShapes__GenSemi_2017v7__ALL__Wjets.35 \
    Wjets.70/mkShapes__GenSemi_2017v7__ALL__Wjets.70 \
    Wjets.36/mkShapes__GenSemi_2017v7__ALL__Wjets.36 \
    Wjets.71/mkShapes__GenSemi_2017v7__ALL__Wjets.71 \
    Wjets.37/mkShapes__GenSemi_2017v7__ALL__Wjets.37 \
    Wjets.8/mkShapes__GenSemi_2017v7__ALL__Wjets.8 \
    Wjets.38/mkShapes__GenSemi_2017v7__ALL__Wjets.38 \
    Wjets.9/mkShapes__GenSemi_2017v7__ALL__Wjets.9 \
    Wjets.39/mkShapes__GenSemi_2017v7__ALL__Wjets.39 \
    ggWW.0/mkShapes__GenSemi_2017v7__ALL__ggWW.0 \
    Wjets.4/mkShapes__GenSemi_2017v7__ALL__Wjets.4 \
    ggWW.1/mkShapes__GenSemi_2017v7__ALL__ggWW.1 \
    Wjets.40/mkShapes__GenSemi_2017v7__ALL__Wjets.40 \
    ggWW.2/mkShapes__GenSemi_2017v7__ALL__ggWW.2 \
    Wjets.41/mkShapes__GenSemi_2017v7__ALL__Wjets.41 \
    ggWW.3/mkShapes__GenSemi_2017v7__ALL__ggWW.3 \
    Wjets.42/mkShapes__GenSemi_2017v7__ALL__Wjets.42 \
    top.61/mkShapes__GenSemi_2017v7__ALL__top.61 \
    Wjets.43/mkShapes__GenSemi_2017v7__ALL__Wjets.43 \
)

#    FAKE.0/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.0 \
#    FAKE.1/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.1 \
#    FAKE.2/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.2 \
#    FAKE.3/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.3 \
#    FAKE.4/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.4 \
#    FAKE.5/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.5 \
#    FAKE.6/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.6 \
#    FAKE.7/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.7 \
#    FAKE.8/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.8 \
#    FAKE.9/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.9 \
#    FAKE.10/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.10 \
#    FAKE.11/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.11 \
#    FAKE.12/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.12 \
#    FAKE.13/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.13 \
#    FAKE.14/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.14 \
#    FAKE.15/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.15 \
#    FAKE.16/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.16 \
#    FAKE.17/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.17 \
#    FAKE.18/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.18 \
#    FAKE.19/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.19 \
#    FAKE.20/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.20 \
#    FAKE.21/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.21 \
#    FAKE.22/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.22 \
#    FAKE.23/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.23 \
#    FAKE.24/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.24 \
#    FAKE.25/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.25 \
#    FAKE.26/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.26 \
#    FAKE.27/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.27 \
#    FAKE.28/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.28 \
#    FAKE.29/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.29 \
#    FAKE.30/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.30 \
#    FAKE.31/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.31 \
#    FAKE.32/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.32 \
#    FAKE.33/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.33 \
#    FAKE.34/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.34 \
#    FAKE.35/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.35 \
#    FAKE.36/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.36 \
#    FAKE.37/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.37 \
#    FAKE.38/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.38 \
#    FAKE.39/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.39 \
#    FAKE.40/mkShapes__MHlnjj_FCR_2017__ALL__FAKE.40 \

for job in "${JOB[@]}"
do
    echo $JOBdir${job}.jds
    if [ ! -f ${JOBdir}${job}.jid ]
    then
        condor_submit ${JOBdir}${job}.jds > ${JOBdir}${job}.jid
    else
        echo "-- jid file exists: ${JOBdir}${job}.jid"
    fi
done
