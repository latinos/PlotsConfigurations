#!/bin/bash

mkdir conf_res_wjet_DNN
cd conf_res_wjet_DNN 

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace \
   ../../../datacards/fullrun2_fit_v4.2.3/run2_res_wjetDNN/output_postfit.root  \
   --outputFile postfit_res_wjetDNN.root --kind P --cutName combined \
   --variables DNNoutput_res_bins2 --structureFile ../../../Full2018v7/conf_fit_v4.2/structure.py \
   --plotFile ../../../Full2018v7/conf_fit_v4.2/plot.py --lumiText "137/fb"

cd ..
 
mkdir conf_res_top_DNN
cd conf_res_top_DNN 

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace \
   ../../../datacards/fullrun2_fit_v4.2.3/run2_res_topDNN/output_postfit.root  \
   --outputFile postfit_res_topDNN.root --kind P --cutName combined \
   --variables DNNoutput_res_bins2 --structureFile ../../../Full2018v7/conf_fit_v4.2/structure.py \
   --plotFile ../../../Full2018v7/conf_fit_v4.2/plot.py --lumiText "137/fb"

cd ..


mkdir conf_boost_wjet_DNN
cd conf_boost_wjet_DNN 

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace \
   ../../../datacards/fullrun2_fit_v4.2.3/run2_boost_wjetDNN/output_postfit.root  \
   --outputFile postfit_boost_wjetDNN.root --kind P --cutName combined \
   --variables DNNoutput_boost_bins2 --structureFile ../../../Full2018v7/conf_fit_v4.2/structure.py \
   --plotFile ../../../Full2018v7/conf_fit_v4.2/plot.py --lumiText "137/fb"

cd ..
 
mkdir conf_boost_top_DNN
cd conf_boost_top_DNN 

mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace \
   ../../../datacards/fullrun2_fit_v4.2.3/run2_boost_topDNN/output_postfit.root  \
   --outputFile postfit_boost_topDNN.root --kind P --cutName combined \
   --variables DNNoutput_boost_bins2 --structureFile ../../../Full2018v7/conf_fit_v4.2/structure.py \
   --plotFile ../../../Full2018v7/conf_fit_v4.2/plot.py --lumiText "137/fb"

cd ..
