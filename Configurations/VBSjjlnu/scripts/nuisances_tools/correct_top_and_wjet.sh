#!/bin/sh -e

FILE=$1

# Top in topcr refers to events
python ../../scripts/nuisances_tools/correct_nuisance_norm.py \
        -i $FILE -s top -c res_topcr_mu res_topcr_ele \
        --ref events -v DNNoutput_res_bins2 mjj_vbs_res \
        -n CMS_PS_FSR CMS_PS_ISR QCDscale_top

python ../../scripts/nuisances_tools/correct_nuisance_norm.py \
        -i $FILE -s top -c boost_topcr_mu boost_topcr_ele  \
        --ref events -v DNNoutput_boost_bins2 mjj_vbs_boost  \
        -n CMS_PS_FSR CMS_PS_ISR QCDscale_top

#Top in wjetcr refers to fitbins
python ../../scripts/nuisances_tools/correct_nuisance_norm.py \
        -i $FILE -s top -c res_wjetcr_mu res_wjetcr_ele \
        --ref fit_bins_res -v DNNoutput_res_bins2 mjj_vbs_res \
        -n CMS_PS_FSR CMS_PS_ISR QCDscale_top

python ../../scripts/nuisances_tools/correct_nuisance_norm.py \
        -i $FILE -s top -c boost_wjetcr_mu boost_wjetcr_ele  \
        --ref fit_bins_boost -v DNNoutput_boost_bins2 mjj_vbs_boost  \
        -n CMS_PS_FSR CMS_PS_ISR QCDscale_top

for i in 1 2 3 4 5 6;
    do

    # wjet in wjet cr refers to fit bins
    python ../../scripts/nuisances_tools/correct_nuisance_norm.py \
            -i $FILE -s Wjets_HT_res_$i -c res_wjetcr_mu res_wjetcr_ele \
            --ref fit_bins_res -v DNNoutput_res_bins2 mjj_vbs_res  \
            -n CMS_PS_FSR_Wjets_HT_res_$i CMS_PS_ISR_Wjets_HT_res_$i QCDscale_Wjets_HT;

    # wjet in top cr refers to events
    python ../../scripts/nuisances_tools/correct_nuisance_norm.py \
            -i $FILE -s Wjets_HT_res_$i -c res_topcr_mu res_topcr_ele \
            --ref events -v DNNoutput_res_bins2 mjj_vbs_res  \
            -n CMS_PS_FSR_Wjets_HT_res_$i CMS_PS_ISR_Wjets_HT_res_$i QCDscale_Wjets_HT;
    
 

done;

for i in 1 2 3 4 5;
    do
    python ../../scripts/nuisances_tools/correct_nuisance_norm.py \
        -i $FILE -s Wjets_HT_boost_$i -c boost_wjetcr_mu boost_wjetcr_ele \
        --ref fit_bins_boost -v DNNoutput_boost_bins2 mjj_vbs_boost   \
        -n CMS_PS_FSR_Wjets_HT_boost_$i CMS_PS_ISR_Wjets_HT_boost_$i QCDscale_Wjets_HT;

    python ../../scripts/nuisances_tools/correct_nuisance_norm.py \
        -i $FILE -s Wjets_HT_boost_$i -c boost_topcr_mu boost_topcr_ele \
        --ref events -v DNNoutput_boost_bins2 mjj_vbs_boost   \
        -n CMS_PS_FSR_Wjets_HT_boost_$i CMS_PS_ISR_Wjets_HT_boost_$i QCDscale_Wjets_HT;

done;