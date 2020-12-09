# Source combine
cd $HOME/work/combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

# Create directory for combined datacard
mkdir -p datacards_CPV/hww2l2v_13TeV_of2j_comb/

# Now combine datacards - one for each signal!

SIGNALS="VBF_H0L1Zgf05_ToWWTo2L2Nu \
VBF_H0L1_ToWWTo2L2Nu      \
VBF_H0L1f05_ToWWTo2L2Nu   \
VBF_H0M_ToWWTo2L2Nu       \
VBF_H0Mf05_ToWWTo2L2Nu    \
VBF_H0PH_ToWWTo2L2Nu      \
VBF_H0PHf05_ToWWTo2L2Nu   \
VBF_H0PM_ToWWTo2L2Nu      \
qqH_hww"

echo Combining datacards...

for SIGNAL in $SIGNALS; do

    echo $SIGNAL

    combineCards.py datacards_CPV/hww2l2v_13TeV_of2j_mll_loose_high_purity/mll/datacard_${SIGNAL}.txt \
                    datacards_CPV/hww2l2v_13TeV_of2j_mll_loose_low_purity/mll/datacard_${SIGNAL}.txt  \
                    datacards_CPV/hww2l2v_13TeV_top_of2j/events/datacard_${SIGNAL}.txt                \
                    datacards_CPV/hww2l2v_13TeV_dytt_of2j/events/datacard_${SIGNAL}.txt >             \
                    datacards_CPV/hww2l2v_13TeV_of2j_comb/datacard_${SIGNAL}.txt
    done

# Prepare workspaces

echo Preparing workspaces...

for SIGNAL in $SIGNALS; do

    echo $SIGNAL

    text2workspace.py datacards_CPV/hww2l2v_13TeV_of2j_comb/datacard_${SIGNAL}.txt -o datacards_CPV/hww2l2v_13TeV_of2j_comb/datacard_${SIGNAL}.root \
	-P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
        --PO 'map=.*/ggH_hww:r_ggH_hww[1,-10,10]' \
        --PO 'map=.*/WH_hww:r_WH_hww[1,-10,10]' \
        --PO 'map=.*/ZH_hww:r_ZH_hww[1,-10,10]' \
        --PO 'map=.*/ggZH_hww:r_ggZH_hww[1,-10,10]' \
        --PO 'map=.*/ttH_hww:r_ttH_hww[1,-10,10]' \
        --PO 'map=.*/ggH_htt:r_ggH_htt[1,-10,10]' \
        --PO 'map=.*/qqH_htt:r_qqH_htt[1,-10,10]' \
        --PO 'map=.*/WH_htt:r_WH_htt[1,-10,10]' \
        --PO 'map=.*/ZH_htt:r_ZH_htt[1,-10,10]' \
        --PO 'map=.*/'${SIGNAL}':r_'${SIGNAL}'[1,-10,10]' \
	
    done

# Perform the fits

echo Fitting...

for SIGNAL in $SIGNALS; do

    echo $SIGNAL

    combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic datacards_CPV/hww2l2v_13TeV_of2j_comb/datacard_${SIGNAL}.root -t -1 --robustFit=1 -m 125 \
	--setParameters r_ggH_hww=1,r_WH_hww=1,r_ZH_hww=1,r_ggZH_hww=1,r_ttH_hww=1,r_ggH_htt=1,r_qqH_htt=1,r_WH_htt=1,r_ZH_htt=1,r_${SIGNAL}=1 --redefineSignalPOIs r_${SIGNAL} \
	> datacards_CPV/hww2l2v_13TeV_of2j_comb/best_fit_${SIGNAL}.txt

    done
