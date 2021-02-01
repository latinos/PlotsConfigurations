
# input 1 : H0M, H0PH, H0L1

combineCards.py \
hww2l2v_13TeV_SRVBF=../Test2016/datacards/hww2l2v_13TeV_SRVBF/KD_$1/datacard.txt \
> cards/$1_HVBF.txt

text2workspace.py cards/$1_HVBF.txt -o cards/$1_HVBF.root -P HiggsAnalysis.CombinedLimit.HWWCouplings:HWWCouplings --PO $1 > cards/scale.txt

combine -d cards/$1_HVBF.root -n $1_HVBF -M MultiDimFit -t -1 -m 125 --algo grid --points 1000 --setParameters muV=1.0,Fai=0.0 --redefineSignalPOIs=Fai
combine -d cards/$1_HVBF.root -n $1_HVBF_muV -M MultiDimFit -t -1 -m 125 --algo grid --points 1000 --setParameters muV=1.0,Fai=0.0 --redefineSignalPOIs=muV
combine -d cards/$1_HVBF.root -n $1_HVBF_FaimuV -M MultiDimFit -t -1 -m 125 --algo grid --points 1000 --setParameters muV=1.0,Fai=0.0 --redefineSignalPOIs=Fai,muV

#Verbosity : -v 7 
#Seed? : -s 1
#--X-rtd OPTIMIZE_BOUNDS=0 --X-rtd TMCSO_AdaptivePseudoAsimov=0 --alignEdges=1
#--setParameterRanges Fai=-0.02,0.02 
#--setParameterRanges muV=-2,2
#--freezeParameters muV 
#--robustFit=1

rm combine_logger.out
mv higgsCombine$1_HVBF.MultiDimFit.mH125*.root hists/higgsCombine$1_HVBF.MultiDimFit.mH125.root
mv higgsCombine$1_HVBF_muV.MultiDimFit.mH125*.root hists/higgsCombine$1_HVBF_muV.MultiDimFit.mH125.root
mv higgsCombine$1_HVBF_FaimuV.MultiDimFit.mH125*.root hists/higgsCombine$1_HVBF_FaimuV.MultiDimFit.mH125.root

# --redefineSignalPOIs=Fai,muV
# root -l hists/higgsCombine'$1'.MultiDimFit.mH125.root
# limit->Draw("2*deltaNLL:Fai")
# limit->Draw("2*deltaNLL:Fai:muV>>h(40,0,10,40,-1,1)","","prof colz")


