import collections
from LatinoAnalysis.Tools.commonTools import getModelDict

param_points = []
for tanb in ['0p5', '1p0', '1p5', '2p0', '4p0', '8p0']:
   param_points.append('sinp_0p35_tanb_'+tanb+'_mXd_10_MH3_300_MH4_150') 
   param_points.append('sinp_0p35_tanb_'+tanb+'_mXd_10_MH3_300_MH4_250') 
   param_points.append('sinp_0p7_tanb_'+tanb+'_mXd_10_MH3_300_MH4_150')  
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_200_MH4_150') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_400_MH4_150') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_400_MH4_250') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_400_MH4_350') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_500_MH4_150') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_500_MH4_250') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_500_MH4_350') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_600_MH4_150') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_600_MH4_250') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_600_MH4_350') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_700_MH4_250') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_700_MH4_350') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_800_MH4_250') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_800_MH4_350') 
param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_900_MH4_350') 

models = []
for pp in param_points:
    mh3 = pp.split('MH3_')[-1].split('_')[0]
    for prod in ['gg', 'bb']:
        model = 'monoH_2HDMaTochichihWWTojjlnu_'+prod+'_'+pp+'_MH2_'+mh3+'_MHC_'+mh3
        models.append(model)

modelDict = getModelDict(mcDirectory, mcProduction, 'pseudoscalar2HDMa_ToWWToLNujj', models) 

signal = {}
col_idx = 0
for pp in param_points: 
    #for prod in ['bb', 'gg']:
    mh3 = pp.split('MH3_')[-1].split('_')[0]
    model_gg = 'monoH_2HDMaTochichihWWTojjlnu_gg_'+pp+'_MH2_'+mh3+'_MHC_'+mh3
    model_bb = 'monoH_2HDMaTochichihWWTojjlnu_bb_'+pp+'_MH2_'+mh3+'_MHC_'+mh3

    gg_weight = 'GenModel_'+model_gg+'*'+modelDict[model_gg]['baseW']    
    bb_weight = 'GenModel_'+model_bb+'*'+modelDict[model_bb]['baseW']    

    files = modelDict[model_gg]['fileList'] 
    files+= modelDict[model_bb]['fileList']
    signal['p2HDMa_'+pp] = {
        'name'  : files, 
        'weight': mcCommonWeightNoXS + '*genWeight*('+gg_weight+' + '+bb_weight+')',
        'color' : 632+col_idx,
        'plot_name' : pp.split('_mXd_10_')[-1],
        #'FilesPerJob': 5,
        'FilesPerJob': 13,
    }
    col_idx += 1

