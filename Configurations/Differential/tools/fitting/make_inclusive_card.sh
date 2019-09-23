#!/bin/bash

dataset=$1
config=$2 # ptH, njet, ggH

basedir=$(cd $(dirname $(readlink -f $0))/../..; pwd)

if [ $config = ptH ] || [ $config = njet ]
then

  if [ $dataset = combination ]
  then
    carddir=$basedir/combination/${config}_fullmodel
  else
    carddir=$basedir/ggH${dataset}/merged_cards/${config}_fullmodel
  fi

  card=fullmodel_unreg.txt

elif [ $config = ggH ]
then

  if [ $dataset = combination ]
  then
    carddir=$basedir/combination/inclusive_$config
    years="2016 2017 2018"
  else
    carddir=$basedir/ggH${dataset}/merged_cards/inclusive_$config
    years=$dataset
  fi

  mkdir -p $carddir
    
  cards=
  for year in $years
  do
    for card in $(find $basedir/ggH${year}/unmerged_cards/inclusive_$config -name datacard.txt)
    do
      cards="$cards "$(basename $(dirname $(dirname $card)))"=$card"
    done
  done

  card=fullmodel.txt
  
  combineCards.py $cards > $carddir/$card
  
  for nj in 0 1 2
  do
    echo "CMS_hww_WWnorm_NJ_${nj} rateParam *NJ_${nj}* WW 1.00 [0.,10.]" >> $carddir/$card
    echo "CMS_hww_topnorm_NJ_${nj} rateParam *NJ_${nj}* top 1.00 [0.,10.]" >> $carddir/$card
    echo "CMS_hww_DYnorm_NJ_${nj} rateParam *NJ_${nj}* DY 1.00 [0.,10.]" >> $carddir/$card
  done
fi

text2workspace.py $carddir/$card -o $carddir/fullmodel_inclusive.root
