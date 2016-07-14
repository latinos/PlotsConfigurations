
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -



text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/ggH_hww,ggZH_hww,H_htt:muGGH[1,-3,3]' --PO 'map=.*/qqH_hww,WH_hww,ZH_hww:muVBF[1,-4,5]'  \
                   superCombination.v1.txt.pruned.txt  -o  workspace.superCombination.v1.txt.pruned.txt.root
                   
                   
combine -M MultiDimFit -t -1 \
     --setPhysicsModelParameters    muGGH=1,muVBF=1 \
     --algo=grid --points=300  \
     workspace.superCombination.v1.txt.pruned.txt.root            >   result.MultiDimFit.grid.workspace.superCombination.v1.txt.pruned.txt

     
# plot
# r00t ../higgsCombineTest.MultiDimFit.mH120.root  scripts/Draw2D.cxx
