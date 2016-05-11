workdir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combine

cd $workdir

cd ~/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
cd -

massmodel=750_NWA

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' Moriond2016.v1.txt.pruned.txt Moriond2016.workspace.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r' Moriond2016.0jet.txt Moriond2016.workspace.0jet.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  Moriond2016.1jet.txt Moriond2016.workspace.1jet.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/ggH_hww*:1' --PO 'map=.*/qqH_hww*:1' --PO 'map=.*/ggH_hww_:0' --PO 'map=.*/qqH_hww_:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' --PO 'map=.*/qqH_hww_'${massmodel}':r'  Moriond2016.2jet.of.txt Moriond2016.workspace.2jet.root

#text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO 'map=.*/ggH_hww:r[1,0,10]' --PO 'map=.*/ggH_hww_:0' Moriond2016.v1.txt.pruned.txt Moriond2016.workspace.root


combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 Moriond2016.workspace.root > Results.Moriond2016.v1.txt.pruned.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 Moriond2016.workspace.0jet.root > Results.Moriond2016.0jet.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 Moriond2016.workspace.1jet.root > Results.Moriond2016.1jet.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 Moriond2016.workspace.2jet.root > Results.Moriond2016.2jet.txt

