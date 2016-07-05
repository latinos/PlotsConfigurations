#!/bin/bash
## text2workspace: --PO verbose


massmodel=${1}

workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combineLSF
combinedir=/afs/cern.ch/user/l/lviliani/Combine/CMSSW_7_4_7/src

cd $combinedir
eval `scramv1 runtime -sh`
cd -

if [ "${massmodel}" = "750_NWA" ]; then

        cp ${workdir}/ICHEP2016.*txt .

        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' ICHEP2016.txt -o ICHEP2016.workspace.mH750_NWA.root -m 750
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' ICHEP2016.0jet.txt -o ICHEP2016.workspace.0jet.mH750_NWA.root -m 750
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' ICHEP2016.1jet.txt -o ICHEP2016.workspace.1jet.mH750_NWA.root -m 750
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' ICHEP2016.01jet.txt -o ICHEP2016.workspace.01jet.mH750_NWA.root -m 750
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' ICHEP2016.2jet.txt -o ICHEP2016.workspace.2jet.mH750_NWA.root -m 750

        cp ICHEP2016.workspace* ${workdir}

else

        cp ${workdir}/ICHEP2016.*txt .

        m=${massmodel%_*}
        echo $m

        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' ICHEP2016.txt -o ICHEP2016.workspace.mH${massmodel}.root -m ${m} -v 1
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' ICHEP2016.0jet.txt -o ICHEP2016.workspace.0jet.mH${massmodel}.root -m ${m} -v 1
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' ICHEP2016.1jet.txt -o ICHEP2016.workspace.1jet.mH${massmodel}.root -m ${m} -v 1
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' ICHEP2016.01jet.txt -o ICHEP2016.workspace.01jet.mH${massmodel}.root -m ${m} -v 1
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' ICHEP2016.2jet.txt -o ICHEP2016.workspace.2jet.mH${massmodel}.root -m ${m} -v 1

        cp ICHEP2016.workspace* ${workdir}

fi


combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 ICHEP2016.workspace.mH${massmodel}.root       > Significance.ICHEP2016.mH${massmodel}.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 ICHEP2016.workspace.0jet.mH${massmodel}.root  > Significance.ICHEP2016.0jet.mH${massmodel}.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 ICHEP2016.workspace.1jet.mH${massmodel}.root  > Significance.ICHEP2016.1jet.mH${massmodel}.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 ICHEP2016.workspace.01jet.mH${massmodel}.root > Significance.ICHEP2016.01jet.mH${massmodel}.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 ICHEP2016.workspace.2jet.mH${massmodel}.root  > Significance.ICHEP2016.2jet.mH${massmodel}.txt

#combine -M Asymptotic -t -1 --expectSignal 1 --run expected ICHEP2016.workspace.mH${massmodel}.root      > Limit.ICHEP2016.mH${massmodel}.txt
#combine -M Asymptotic -t -1 --expectSignal 1 --run expected ICHEP2016.workspace.0jet.mH${massmodel}.root > Limit.ICHEP2016.0jet.mH${massmodel}.txt
#combine -M Asymptotic -t -1 --expectSignal 1 --run expected ICHEP2016.workspace.1jet.mH${massmodel}.root > Limit.ICHEP2016.1jet.mH${massmodel}.txt
#combine -M Asymptotic -t -1 --expectSignal 1 --run expected ICHEP2016.workspace.1jet.mH${massmodel}.root > Limit.ICHEP2016.01jet.mH${massmodel}.txt
#combine -M Asymptotic -t -1 --expectSignal 1 --run expected ICHEP2016.workspace.2jet.mH${massmodel}.root > Limit.ICHEP2016.2jet.mH${massmodel}.txt

cp Significance* ${workdir}
#cp Limit* ${workdir}
