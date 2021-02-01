
combineCards.py \
hww2l2v_13TeV_SRHJJ=../Test2016/datacards/hww2l2v_13TeV_SRHJJ/KD_H0M/datacard.txt \
> cards/H0M_HGG.txt

text2workspace.py cards/H0M_HGG.txt -o cards/H0M_HGG.root -P HiggsAnalysis.CombinedLimit.HWWCouplings:HWWCouplings --PO H0M > cards/scale.txt

combine -d cards/H0M_HGG.root -n H0M_HGG -M MultiDimFit -t -1 -m 125 --algo grid --points 1000 --setParameters muV=1.0,Fai=0.0 --redefineSignalPOIs=Fai

rm combine_logger.out
mv higgsCombineH0M_HGG.MultiDimFit.mH125*.root hists/higgsCombineH0M_HGG.MultiDimFit.mH125.root


