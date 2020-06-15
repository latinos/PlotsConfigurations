#!/bin/bash


# 2016
mkdir -p /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2016/VH_2j_emu
mkdir -p /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2016/VH_2j_topemu
mkdir -p /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2016/VH_2j_DYtautau

cp -r ../Full2016_v6/datacards/VH_2j_emu/mll         /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2016/VH_2j_emu/.
cp -r ../Full2016_v6/datacards/VH_2j_topemu/events   /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2016/VH_2j_topemu/.
cp -r ../Full2016_v6/datacards/VH_2j_DYtautau/events /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2016/VH_2j_DYtautau/.


# 2017
mkdir -p /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2017/VH_2j_emu
mkdir -p /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2017/VH_2j_topemu
mkdir -p /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2017/VH_2j_DYtautau

cp -r ../Full2017_v6/datacards/VH_2j_emu/mll         /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2017/VH_2j_emu/.
cp -r ../Full2017_v6/datacards/VH_2j_topemu/events   /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2017/VH_2j_topemu/.
cp -r ../Full2017_v6/datacards/VH_2j_DYtautau/events /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2017/VH_2j_DYtautau/.


# 2018

mkdir -p /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2018/VH_2j_emu
mkdir -p /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2018/VH_2j_topemu
mkdir -p /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2018/VH_2j_DYtautau

cp -r ../Full2018_v6/datacards/VH_2j_emu/mll         /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2018/VH_2j_emu/.
cp -r ../Full2018_v6/datacards/VH_2j_topemu/events   /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2018/VH_2j_topemu/.
cp -r ../Full2018_v6/datacards/VH_2j_DYtautau/events /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets/2018/VH_2j_DYtautau/.


# Copy to eos latino

rm -rf /eos/user/l/lviliani/HWWRun2LegacyCombination/VH2jets
cp -r /afs/cern.ch/user/p/piedra/public/forLatinos/VH2jets /eos/user/l/lviliani/HWWRun2LegacyCombination/.

