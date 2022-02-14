import collections
from LatinoAnalysis.Tools.commonTools import getModelDict

mhs_list = ['160']
mx_list = ['100']
mZp_list = ['500']

models = []
for mhs in mhs_list:
    for mx in mx_list:
        for mZp in mZp_list:
            mp = 'mhs_'+mhs+'_mx_'+mx+'_mZp_'+mZp
            model = 'DarkHiggs_MonoHs_HsToWWTojjlnu_'+mp
            models.append(model)

modelDict = getModelDict(mcDirectory, mcProduction, 'darkHiggs_ToWWToLNujj', models) 

signal = {}
col_idx = 0
nMP = 0
print('darkHiggs signal samples:')
for model in models:
    mp = model.replace('DarkHiggs_MonoHs_HsToWWTojjlnu_', '')
    mhs = mp.split('_')[1] 
    mx  = mp.split('_')[3] 
    mZp = mp.split('_')[5] 
    signal['darkHiggs_'+mp] = {
        'name'  : modelDict[model]['fileList'], 
        'weight': mcCommonWeightNoXS + '*GenModel_'+model+'*genWeight*'+modelDict[model]['baseW'],
        'color' : 632+col_idx,
        'plot_name' : 'mhs '+mhs+' mx '+mx+' mZ\' '+mZp,
        #'FilesPerJob': 5,
        'FilesPerJob': 13,
    }
    print('  - Mass point: '+mp+' ,\t baseW: '+modelDict[model]['baseW']+',\t genEventSumw: '+str(modelDict[model]['genEventSumw']))
    col_idx += 1

