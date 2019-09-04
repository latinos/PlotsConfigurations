#!/bin/bash

ROOTFILE=$1
TAG=$2

if ! [ $TAG ]
then
  echo "Usage mklinks.sh ROOTFILE TAG"
  exit 1
fi

cd $ROOTFILE

for sname in {WH,ZH,ggH,ggZH,qqH,ttH}_hww
do
  for sub in NJ_{0,1,2,3,GE4} PTH_{0_10,10_15,15_20,20_30,30_45,45_60,60_80,80_100,100_120,120_155,155_200,200_260,260_350,GT350}
  do
    ln -s plots_${TAG}_ALL_${sname}.root plots_${TAG}_ALL_${sname}_${sub}.root
  done
done

sname=VgS
for sub in L H
do
  ln -s plots_${TAG}_ALL_${sname}.root plots_${TAG}_ALL_${sname}_${sub}.root
done

sname=Fake
for sub in em me
do
  ln -s plots_${TAG}_ALL_${sname}.root plots_${TAG}_ALL_${sname}_${sub}.root
done
