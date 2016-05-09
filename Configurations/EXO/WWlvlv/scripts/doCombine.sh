workdir=${CMSSW_BASE}/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv/combine

cd $workdir

cd ~/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
cd -

massmodel=750_NWA

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO 'map=.*/ggH_hww_*:0' --PO 'map=.*/ggH_hww_'${massmodel}':r[1,0,10]' Moriond2016.v1.txt.pruned.txt Moriond2016.workspace.root
