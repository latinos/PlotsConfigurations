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



signal = {}
col_idx = 0
for pp in param_points: 
    #for prod in ['bb', 'gg']:
    files = nanoGetSampleFiles(mcDirectory, 'pseudoscalar2HDMa_ToWWToLNujj_bb_'+pp)
    files+= nanoGetSampleFiles(mcDirectory, 'pseudoscalar2HDMa_ToWWToLNujj_gg_'+pp)
    signal['p2HDMa_'+pp] = {
        'name'  : files, 
        'weight': mcCommonWeight,
        'color' : 632+col_idx,
        'plot_name' : pp.split('_mXd_10_')[-1],
        #'FilesPerJob': 5,
        'FilesPerJob': 13,
    }
    col_idx += 1
