#!/bin/bash

directory=${1}

#for m in 1000
#for m in 200 210 230 250 300 350 400 450 500 550 600 650 700 750 800 900 1000
for m in 200 210 250 300 350 400 450 500 550 650 700 750 800 900 1000
do
#for model in 'c10brn00'
for model in 'c01brn00' 'c03brn00' 'c05brn00' 'c07brn00' 'c10brn00'
do
#for cat in '2jet'
for cat in '0jet' '1jet' '2jet' 'all'
do
#for what in 'limit'
for what in 'sig' 'limit'
do
massmodel=${m}_${model}

echo $massmodel

#source fitLSF.sh ${massmodel}
bsub -q 1nh "fitLSFv2.sh ${massmodel} ${what} ${cat} ${directory}" -n job${massmodel}.txt

done
done
done
done
