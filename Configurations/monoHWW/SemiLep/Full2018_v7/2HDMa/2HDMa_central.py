import collections
from LatinoAnalysis.Tools.commonTools import getModelDict

# All parameter combinations
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

# Split models, collect baseW's
# model example name: GenModel_monoH_2HDMaTochichihWWTojjlnu_bb_sinp_0p35_tanb_8p0_mXd_10_MH3_300_MH4_150_MH2_300_MHC_300
models = []
for pp in param_points: 
    mh3 = pp.split('_MH3_')[-1].split('_')[0]
    for prod in ['bb', 'gg']:
        model = 'monoH_2HDMaTochichihWWTojjlnu_'+prod+'_'+pp+'_MH2_'+mh3+'_MHC_'+mh3
        models.append(model)
print(models)
modelDict = getModelDict(mcDirectory, mcProduction, 'pseudoscalar2HDMa_ToWWToLNujj', models)

# Collect all pieces in signal dict for samples.py
signal = {}
col_idx = 0
for pp in param_points: 
    # Collect both bb and gg prod from models
    eff_mods = []
    for model in models:
        if pp in model: eff_mods.append(model)
    print(pp, eff_mods)
    
    # Sanity check
    if not len(eff_mods) == 2: 
        print('Unexpected amount of models for "'+pp+'": '+str(eff_mods))
        exit()

    # Combine bb and gg files
    files = modelDict[eff_mods[0]]['fileList']
    files+= modelDict[eff_mods[1]]['fileList'] 

    # Combine bb and gg weights
    print(pp, eff_mods, modelDict[eff_mods[0]]['baseW'], modelDict[eff_mods[1]]['baseW'])
    model1_w = 'GenModel_'+eff_mods[0]+'*'+modelDict[eff_mods[0]]['baseW']
    model2_w = 'GenModel_'+eff_mods[1]+'*'+modelDict[eff_mods[1]]['baseW']
    model_weight = '('+model1_w+' + '+model2_w+')' 
    print('Model weight: '+model_weight+', for param comb '+pp)

    signal['p2HDMa_'+pp] = {
        'name'  : files, 
        'weight': mcCommonWeightNoXS+'*genWeight*'+model_weight,
        'color' : 632+col_idx,
        'plot_name' : pp.split('_mXd_10_')[-1],
        #'FilesPerJob': 5,
        'FilesPerJob': 13,
    }
    col_idx += 1
