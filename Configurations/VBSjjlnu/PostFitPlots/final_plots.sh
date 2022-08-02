#!/bin/zsh

mkdir final_plots

cd fit_v4.5.5_signalregion_fitdata/run2_res_DNNoutput_res_v1/

mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showRelativeRatio --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 300  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary

cp plot_combined/log_cratio_combined_DNNoutput_res_v1.pdf ../../final_plots/dnn_sig_combined_res.pdf
cp plot_combined/log_cratio_combined_DNNoutput_res_v1.png ../../final_plots/dnn_sig_combined_res.png

mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showDataMinusBkgOnly --plotFancy  --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 300  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary

cp plot_combined/cdifference_combined_DNNoutput_res_v1_Fancy.pdf ../../final_plots/cdiff_res.pdf
cp plot_combined/cdifference_combined_DNNoutput_res_v1_Fancy.png ../../final_plots/cdiff_res.png

mkPlot.py --pycfg=configuration_combined_norm.py --inputFile=postfit_shapes.root  --plotNormalizedDistributions   --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 300  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary --RemoveAllMC 

cp plot_combined/log_cSigVsBkg_combined_DNNoutput_res_v1.pdf ../../final_plots/norm_combined_res.pdf
cp plot_combined/log_cSigVsBkg_combined_DNNoutput_res_v1.png ../../final_plots/norm_combined_res.png


cd ../run2_boost_DNNoutput_boost
mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showRelativeRatio --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 100  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary

cp plot_combined/log_cratio_combined_DNNoutput_boost.pdf ../../final_plots/dnn_sig_combined_boost.pdf
cp plot_combined/log_cratio_combined_DNNoutput_boost.png ../../final_plots/dnn_sig_combined_boost.png

mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showDataMinusBkgOnly --plotFancy  --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 300  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary

cp plot_combined/cdifference_combined_DNNoutput_boost_Fancy.pdf ../../final_plots/cdiff_boost.pdf
cp plot_combined/cdifference_combined_DNNoutput_boost_Fancy.png ../../final_plots/cdiff_boost.png

mkPlot.py --pycfg=configuration_combined_norm.py --inputFile=postfit_shapes.root  --plotNormalizedDistributions  --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 300  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary  --RemoveAllMC 

cp plot_combined/log_cSigVsBkg_combined_DNNoutput_boost.pdf ../../final_plots/norm_combined_boost.pdf
cp plot_combined/log_cSigVsBkg_combined_DNNoutput_boost.png ../../final_plots/norm_combined_boost.png


#-------------------------------------
cd ../../

cd fit_v4.5.5_controlregion_fitdata/run2_res_DNNoutput_res_v1_wjetcr

mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showRelativeRatio --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 300  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary
cp plot_combined/log_cratio_combined_DNNoutput_res_v1.pdf ../../final_plots/dnn_wjet_combined_res.pdf
cp plot_combined/log_cratio_combined_DNNoutput_res_v1.png ../../final_plots/dnn_wjet_combined_res.png

cd ../run2_res_DNNoutput_res_v1_topcr

mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showRelativeRatio --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 70  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary
cp plot_combined/log_cratio_combined_DNNoutput_res_v1.pdf ../../final_plots/dnn_top_combined_res.pdf
cp plot_combined/log_cratio_combined_DNNoutput_res_v1.png ../../final_plots/dnn_top_combined_res.png


cd ../run2_boost_DNNoutput_boost_wjetcr

mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showRelativeRatio --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 40  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary
cp plot_combined/log_cratio_combined_DNNoutput_boost.pdf ../../final_plots/dnn_wjet_combined_boost.pdf
cp plot_combined/log_cratio_combined_DNNoutput_boost.png ../../final_plots/dnn_wjet_combined_boost.png

cd ../run2_boost_DNNoutput_boost_topcr

mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showRelativeRatio --minLogC 8e-5  --maxLogC 5e2 --minLogCratio 20  --maxLogCratio  1e2 --fileFormat=png,pdf --NoPreliminary
cp plot_combined/log_cratio_combined_DNNoutput_boost.pdf ../../final_plots/dnn_top_combined_boost.pdf
cp plot_combined/log_cratio_combined_DNNoutput_boost.png ../../final_plots/dnn_top_combined_boost.png


#---------------------------
# cd ../../
# cd fit_v4.5.5_signalregion_fitdata_v2/run2_res_mjj_vbs 

# mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showRelativeRatio --minLogC 8e-5  --maxLogC 1e3 --minLogCratio 1  --maxLogCratio  5e2  --fileFormat=png,pdf --NoPreliminary
# cp plot_combined/log_cratio_combined_mjj_vbs.pdf ../../final_plots/mjj_run2_res.pdf
# cp plot_combined/log_cratio_combined_mjj_vbs.png ../../final_plots/mjj_run2_res.png

# cd ../run2_boost_mjj_vbs 

# mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showRelativeRatio --minLogC 8e-5  --maxLogC 1e3 --minLogCratio 1  --maxLogCratio  5e2  --fileFormat=png,pdf --NoPreliminary
# cp plot_combined/log_cratio_combined_mjj_vbs.pdf ../../final_plots/mjj_run2_boost.pdf
# cp plot_combined/log_cratio_combined_mjj_vbs.png ../../final_plots/mjj_run2_boost.png

