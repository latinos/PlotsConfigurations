#!/bin/bash

cd ~/work/Combine_autoMC/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -


combine -M MultiDimFit ../combine/Full2016_vh_HTXS_mll_more.root -m 125 -t -1 --setPhysicsModelParameters=r_ttH=1,r_ttH_fwd=1,r_bbH=1,r_bbH_fwd=1,r_qqH=1,r_qqH_fwd=1,r_ggH=1,r_ggH_fwd=1,r_WH_lep=1,r_WH_lep_fwd=1,r_ZH_lep=1,r_ZH_lep_fwd=1,r_ggZH_lep=1,r_ggZH_lep_fwd=1,r_VH_had=1,r_VH_had_fwd=1 --algo=singles
