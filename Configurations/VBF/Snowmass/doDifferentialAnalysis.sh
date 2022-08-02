# Source combine
cd $HOME/work/combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

# Create directory for combined datacard
mkdir -p datacards/hww2l2v_13TeV_of2j_comb/

# Now combine datacards

echo Combining datacards...

combineCards.py datacards/hww2l2v_13TeV_of2j_dphijj_0/classvbf_merged/datacard.txt \
                datacards/hww2l2v_13TeV_of2j_dphijj_1/classvbf_merged/datacard.txt \
                datacards/hww2l2v_13TeV_of2j_dphijj_2/classvbf_merged/datacard.txt \
                datacards/hww2l2v_13TeV_of2j_dphijj_3/classvbf_merged/datacard.txt \
                datacards/hww2l2v_13TeV_of2j_dphijj_4/classvbf_merged/datacard.txt \
                datacards/hww2l2v_13TeV_of2j_dphijj_5/classvbf_merged/datacard.txt \
                datacards/hww2l2v_13TeV_of2j_dphijj_6/classvbf_merged/datacard.txt \
                datacards/hww2l2v_13TeV_of2j_dphijj_7/classvbf_merged/datacard.txt \
                datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt               \
                datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt >            \
                datacards/hww2l2v_13TeV_of2j_comb/datacard.txt

# Remove nuisances leading to negative yields

echo Removing nuisances leading to negative yields... 

echo "nuisance edit drop DY ch3 QCDscale_V"  >> datacards/hww2l2v_13TeV_of2j_comb/datacard.txt
echo "nuisance edit drop DY ch7 QCDscale_V"  >> datacards/hww2l2v_13TeV_of2j_comb/datacard.txt
echo "nuisance edit drop Vg ch7 QCDscale_VV" >> datacards/hww2l2v_13TeV_of2j_comb/datacard.txt

# Prepare workspace

echo Preparing workspace...

text2workspace.py datacards/hww2l2v_13TeV_of2j_comb/datacard.txt -o datacards/hww2l2v_13TeV_of2j_comb/datacard.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
    --PO 'map=.*/qqH_hww_0:r_qqH_hww_0[1,-10,10]' \
    --PO 'map=.*/qqH_hww_1:r_qqH_hww_1[1,-10,10]' \
    --PO 'map=.*/qqH_hww_2:r_qqH_hww_2[1,-10,10]' \
    --PO 'map=.*/qqH_hww_3:r_qqH_hww_3[1,-10,10]' \
    --PO 'map=.*/qqH_hww_4:r_qqH_hww_4[1,-10,10]' \
    --PO 'map=.*/qqH_hww_5:r_qqH_hww_5[1,-10,10]' \
    --PO 'map=.*/qqH_hww_6:r_qqH_hww_6[1,-10,10]' \
    --PO 'map=.*/qqH_hww_7:r_qqH_hww_7[1,-10,10]' \
    --PO 'map=.*/qqH_hww_nonFid:r_qqH_hww_nonFid[1,-10,10]' \

# Perform the fit

echo Fitting...

combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic datacards/hww2l2v_13TeV_of2j_comb/datacard.root -t -1 \
        --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 > datacards/hww2l2v_13TeV_of2j_comb/best_fit.txt

# Get significances

echo Extracting significances...

combine -M Significance --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 -t -1 datacards/hww2l2v_13TeV_of2j_comb/datacard.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs r_qqH_hww_0 > datacards/hww2l2v_13TeV_of2j_comb/significance_qqH_hww_0.txt

combine -M Significance --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 -t -1 datacards/hww2l2v_13TeV_of2j_comb/datacard.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs r_qqH_hww_1 > datacards/hww2l2v_13TeV_of2j_comb/significance_qqH_hww_1.txt

combine -M Significance --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 -t -1 datacards/hww2l2v_13TeV_of2j_comb/datacard.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs r_qqH_hww_2 > datacards/hww2l2v_13TeV_of2j_comb/significance_qqH_hww_2.txt

combine -M Significance --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 -t -1 datacards/hww2l2v_13TeV_of2j_comb/datacard.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs r_qqH_hww_3 > datacards/hww2l2v_13TeV_of2j_comb/significance_qqH_hww_3.txt

combine -M Significance --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 -t -1 datacards/hww2l2v_13TeV_of2j_comb/datacard.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs r_qqH_hww_4 > datacards/hww2l2v_13TeV_of2j_comb/significance_qqH_hww_4.txt

combine -M Significance --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 -t -1 datacards/hww2l2v_13TeV_of2j_comb/datacard.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs r_qqH_hww_5 > datacards/hww2l2v_13TeV_of2j_comb/significance_qqH_hww_5.txt

combine -M Significance --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 -t -1 datacards/hww2l2v_13TeV_of2j_comb/datacard.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs r_qqH_hww_6 > datacards/hww2l2v_13TeV_of2j_comb/significance_qqH_hww_6.txt

combine -M Significance --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 -t -1 datacards/hww2l2v_13TeV_of2j_comb/datacard.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs r_qqH_hww_7 > datacards/hww2l2v_13TeV_of2j_comb/significance_qqH_hww_7.txt

combine -M Significance --setParameters r_qqH_hww_0=1,r_qqH_hww_1=1,r_qqH_hww_2=1,r_qqH_hww_3=1,r_qqH_hww_4=1,r_qqH_hww_5=1,r_qqH_hww_6=1,r_qqH_hww_7=1,r_qqH_hww_nonFid=1 -t -1 datacards/hww2l2v_13TeV_of2j_comb/datacard.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs r_qqH_hww_nonFid > datacards/hww2l2v_13TeV_of2j_comb/significance_qqH_hww_nonFid.txt
