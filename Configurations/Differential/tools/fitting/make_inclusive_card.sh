#!/bin/bash

dataset=$1

basedir=$(cd $(dirname $(readlink -f $0))/../..; pwd)

if [ $dataset = combination ]
then
  carddir=$basedir/combination/inclusive
  years="2016 2017 2018"
else
  carddir=$basedir/ggH${dataset}/merged_cards/inclusive
  years=$dataset
fi

mkdir -p $carddir

cards=
for year in $years
do
  for cut in $(ls $basedir/ggH${year}/unmerged_cards/inclusive)
  do
    if [[ $cut =~ _CR_ ]]
    then
      cards="$cards ${cut}=$basedir/ggH${year}/unmerged_cards/inclusive/$cut/events/datacard.txt"
    else
      cards="$cards ${cut}=$basedir/ggH${year}/unmerged_cards/inclusive/$cut/mllVSmth_6x6/datacard.txt"
    fi
  done
done

combineCards.py $cards > $carddir/fullmodel.txt
for nj in 0 1 2
do
  echo "CMS_hww_WWnorm_NJ_${nj} rateParam *NJ_${nj}* WW 1.00 [0.,10.]" >> $carddir/fullmodel.txt
  echo "CMS_hww_topnorm_NJ_${nj} rateParam *NJ_${nj}* top 1.00 [0.,10.]" >> $carddir/fullmodel.txt
  echo "CMS_hww_DYnorm_NJ_${nj} rateParam *NJ_${nj}* DY 1.00 [0.,10.]" >> $carddir/fullmodel.txt
done

text2workspace.py $carddir/fullmodel.txt -o $carddir/fullmodel.root
