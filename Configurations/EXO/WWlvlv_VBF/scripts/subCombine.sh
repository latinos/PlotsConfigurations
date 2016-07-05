#!/bin/bash

#for m in 750
for m in 200 250 300 350 400 450 500 550 600 650 700 750 800 900 1000
do
#for model in 'c01brn00'
for model in 'c01brn00' 'c03brn00' 'c05brn00' 'c07brn00' 'c10brn00'
do
massmodel=${m}_${model}

echo $massmodel

#source fitLSF.sh ${massmodel}
bsub -q 2nd "fitLSF.sh ${massmodel}" -n job${massmodel}.txt

done
done
