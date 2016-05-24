workdir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combine

cd $workdir

cd ~/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
cd -

massmodel=${1}

if [ "${massmodel}" = "750_NWA" ]; then

	text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' Moriond2016.v1.txt.pruned.txt -o Moriond2016.workspace.mH750_NWA.root -m 750
	text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' Moriond2016.0jet.txt -o Moriond2016.workspace.0jet.mH750_NWA.root -m 750
	text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  Moriond2016.1jet.txt -o Moriond2016.workspace.1jet.mH750_NWA.root -m 750
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  Moriond2016.01jet.txt -o Moriond2016.workspace.01jet.mH750_NWA.root -m 750
	text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  Moriond2016.2jet.of.txt -o Moriond2016.workspace.2jet.mH750_NWA.root -m 750


else

        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' Moriond2016.v1.txt.pruned.txt -o Moriond2016.workspace.mH${massmodel}.root -m ${massmodel}
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' Moriond2016.0jet.txt -o Moriond2016.workspace.0jet.mH${massmodel}.root -m ${massmodel}
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' Moriond2016.1jet.txt -o Moriond2016.workspace.1jet.mH${massmodel}.root -m ${massmodel}
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' Moriond2016.1jet.txt -o Moriond2016.workspace.01jet.mH${massmodel}.root -m ${massmodel}
        text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  --PO 'map=.*/ggH_hww_750_NWA:0' --PO 'map=.*/qqH_hww_750_NWA:0' Moriond2016.2jet.of.txt -o Moriond2016.workspace.2jet.mH${massmodel}.root -m ${massmodel}

fi


combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 Moriond2016.workspace.mH${massmodel}.root > Significance.Moriond2016.v1.txt.pruned.mH${massmodel}.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 Moriond2016.workspace.0jet.mH${massmodel}.root > Significance.Moriond2016.0jet.mH${massmodel}.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 Moriond2016.workspace.1jet.mH${massmodel}.root > Significance.Moriond2016.1jet.mH${massmodel}.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 Moriond2016.workspace.01jet.mH${massmodel}.root > Significance.Moriond2016.01jet.mH${massmodel}.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 Moriond2016.workspace.2jet.mH${massmodel}.root > Significance.Moriond2016.2jet.mH${massmodel}.txt

combine -M Asymptotic -t -1 --expectSignal 1 --run expected Moriond2016.workspace.mH${massmodel}.root > Limit.Moriond2016.v1.txt.pruned.mH${massmodel}.txt
combine -M Asymptotic -t -1 --expectSignal 1 --run expected Moriond2016.workspace.0jet.mH${massmodel}.root > Limit.Moriond2016.0jet.mH${massmodel}.txt
combine -M Asymptotic -t -1 --expectSignal 1 --run expected Moriond2016.workspace.1jet.mH${massmodel}.root > Limit.Moriond2016.1jet.mH${massmodel}.txt
combine -M Asymptotic -t -1 --expectSignal 1 --run expected Moriond2016.workspace.1jet.mH${massmodel}.root > Limit.Moriond2016.01jet.mH${massmodel}.txt
combine -M Asymptotic -t -1 --expectSignal 1 --run expected Moriond2016.workspace.2jet.mH${massmodel}.root > Limit.Moriond2016.2jet.mH${massmodel}.txt


