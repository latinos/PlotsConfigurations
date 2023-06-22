#!/bin/bash

for i in 1 2 3 4 5 6 7 8 9 10; do
    x=0.04
    v=$(awk "BEGIN { printf(\"%.2f\", 0.8 + $x * $i) }")
    echo $v
    combine -M GenerateOnly --saveToys -t 10 --setParameters CMS_ttZ_norm2017=$v,r=0.05 -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n toy_1000_600_$i
    combine -M MultiDimFit --algo singles -t 10 --toysFile=higgsCombinetoy_1000_600_$i.GenerateOnly.mH120.123456.root -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n result_1000_600_$i --setParameters r=0.05
done
