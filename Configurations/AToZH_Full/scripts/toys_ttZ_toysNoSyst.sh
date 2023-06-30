#!/bin/bash
for i in {1..100}
do
#    x=0.04
#    v=$(awk "BEGIN { printf(\"%.2f\", 0.8 + $x * $i) }")
#    echo $v
#    combine -M GenerateOnly --saveToys -t 1 --setParameters CMS_ttZ_norm2017=$v,r=0 -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n toy_1000_600_NoSyst0signal$i --toysNoSystematics
#    combine -M MultiDimFit --algo singles -t 1 --toysFile=higgsCombinetoy_1000_600_NoSyst$i.GenerateOnly.mH120.123456.root -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n result_1000_600_NoSyst0signal0signal$i --setParameters r=0.05 --saveFitResult
#    echo "$i"
    combine -M GenerateOnly --saveToys -t 1 --setParameters CMS_ttZ_norm2017=0.5,r=0 -s "$i" -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n toy_1000_600_NoSyst0signal0.5ttZ --toysNoSystematics 
    combine -M MultiDimFit --algo singles -t 1 --toysFile=higgsCombinetoy_1000_600_NoSyst0signal0.5ttZ.GenerateOnly.mH120."$i".root -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n result_1000_600_NoSyst0signal0.5ttZ"$i" --setParameters r=0 --saveFitResult > result_0sig_0.5ttZ_s"$i".txt
    combine -M GenerateOnly --saveToys -t 1 --setParameters CMS_ttZ_norm2017=1,r=0 -s "$i" -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n toy_1000_600_NoSyst0signal1ttZ --toysNoSystematics 
    combine -M MultiDimFit --algo singles -t 1 --toysFile=higgsCombinetoy_1000_600_NoSyst0signal1ttZ.GenerateOnly.mH120."$i".root -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n result_1000_600_NoSyst0signal1ttZ"$i" --setParameters r=0 --saveFitResult > result_0sig_0.5ttZ_s"$i".txt
    combine -M GenerateOnly --saveToys -t 1 --setParameters CMS_ttZ_norm2017=1.5,r=0 -s "$i" -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n toy_1000_600_NoSyst0signal1.5ttZ --toysNoSystematics 
    combine -M MultiDimFit --algo singles -t 1 --toysFile=higgsCombinetoy_1000_600_NoSyst0signal1.5ttZ.GenerateOnly.mH120."$i".root -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n result_1000_600_NoSyst0signal1.5ttZ"$i" --setParameters r=0 --saveFitResult

    
    combine -M GenerateOnly --saveToys -t 1 --setParameters CMS_ttZ_norm2017=0.5,r=0.01 -s "$i" -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n toy_1000_600_NoSyst0.01signal0.5ttZ --toysNoSystematics
    combine -M MultiDimFit --algo singles -t 1 --toysFile=higgsCombinetoy_1000_600_NoSyst0.01signal0.5ttZ.GenerateOnly.mH120."$i".root -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n result_1000_600_NoSyst0.01signal0.5ttZ"$i" --setParameters r=0 --saveFitResult
    combine -M GenerateOnly --saveToys -t 1 --setParameters CMS_ttZ_norm2017=1,r=0.01 -s "$i" -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n toy_1000_600_NoSyst0.01signal1ttZ --toysNoSystematics
    combine -M MultiDimFit --algo singles -t 1 --toysFile=higgsCombinetoy_1000_600_NoSyst0.01signal1ttZ.GenerateOnly.mH120."$i".root -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n result_1000_600_NoSyst0.01signal1ttZ"$i" --setParameters r=0 --saveFitResult
    combine -M GenerateOnly --saveToys -t 1 --setParameters CMS_ttZ_norm2017=1.5,r=0.01 -s "$i" -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n toy_1000_600_NoSyst0.01signal1.5ttZ --toysNoSystematics
    combine -M MultiDimFit --algo singles -t 1 --toysFile=higgsCombinetoy_1000_600_NoSyst0.01signal1.5ttZ.GenerateOnly.mH120."$i".root -d ../2017_v9/AZH_1000_600_2DEllipses_ttZ.root -n result_1000_600_NoSyst0.01signal1.5ttZ"$i" --setParameters r=0 --saveFitResult
done
