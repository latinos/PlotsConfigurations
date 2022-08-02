import json
import collections
from LatinoAnalysis.Tools.commonTools import getModelDict

mhs_list = ['160', '180', '200']
mx_list = ['100', '150', '200']
mZp_list = ['195', '200', '295', '300', '400', '500', '800', '1000', '1200', '1500']

models = []
for mhs in mhs_list:
    for mx in mx_list:
        for mZp in mZp_list:
            mp = 'mhs_'+mhs+'_mx_'+mx+'_mZp_'+mZp
            model = 'DarkHiggs_MonoHs_HsToWWTojjlnu_'+mp
            models.append(model)

# Cache loading stuff
def unpack_unicode(input):
    if isinstance(input, dict):
        return {unpack_unicode(key): unpack_unicode(value)
                for key, value in input.iteritems()}
    elif isinstance(input, list):
        return [unpack_unicode(element) for element in input]
    elif isinstance(input, unicode):
        return input.encode('utf-8')
    else:
        return input

model_cache_file = 'cache_model.py'
if not os.path.exists(model_cache_file):
    modelDict = getModelDict(mcDirectory, mcProduction, 'darkHiggs_ToWWToLNujj', models) 
    model_cache_file_o = open(model_cache_file, 'w')
    model_cache_file_o.write(json.dumps(modelDict, indent=2))
    model_cache_file_o.close()
    baseW_cache = {}
else: 
    model_cache_file_o = open(model_cache_file, 'r')
    modelDict_u = json.load(model_cache_file_o)
    model_cache_file_o.close()
    modelDict = unpack_unicode(modelDict_u)

signal = {}
col_idx = 0
nMP = 0
#print('darkHiggs signal samples:')
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
        'FilesPerJob': 5,
        #'FilesPerJob': 13,
    }
    #print('  - Mass point: '+mp+' ,\t baseW: '+modelDict[model]['baseW']+',\t genEventSumw: '+str(modelDict[model]['genEventSumw']))
    col_idx += 1

# Additional mass points
mass_points = [
    'mhs_160_mx_100_mZp_2000', 'mhs_160_mx_100_mZp_2500', 
    'mhs_160_mx_150_mZp_2000', 'mhs_160_mx_150_mZp_2500',
    'mhs_160_mx_200_mZp_2000', 'mhs_160_mx_200_mZp_2500',
    'mhs_160_mx_300_mZp_1000', 'mhs_160_mx_300_mZp_1200', 'mhs_160_mx_300_mZp_1500', 'mhs_160_mx_300_mZp_2000', 'mhs_160_mx_300_mZp_2500', 'mhs_160_mx_300_mZp_800',
    'mhs_180_mx_100_mZp_2000', 'mhs_180_mx_100_mZp_2500',
    'mhs_180_mx_150_mZp_2000', 'mhs_180_mx_150_mZp_2500',
    'mhs_180_mx_200_mZp_2000', 'mhs_180_mx_200_mZp_2500',
    'mhs_180_mx_300_mZp_1000', 'mhs_180_mx_300_mZp_1200', 'mhs_180_mx_300_mZp_1500', 'mhs_180_mx_300_mZp_2000', 'mhs_180_mx_300_mZp_2500', 'mhs_180_mx_300_mZp_800',
    'mhs_200_mx_100_mZp_2000', 'mhs_200_mx_100_mZp_2500',
    'mhs_200_mx_150_mZp_2000', 'mhs_200_mx_150_mZp_2500',
    'mhs_200_mx_200_mZp_2000', 'mhs_200_mx_200_mZp_2500',
    'mhs_200_mx_300_mZp_1000', 'mhs_200_mx_300_mZp_1200', 'mhs_200_mx_300_mZp_1500', 'mhs_200_mx_300_mZp_2000', 'mhs_200_mx_300_mZp_2500', 'mhs_200_mx_300_mZp_800',
    'mhs_300_mx_150_mZp_1000', 'mhs_300_mx_150_mZp_1200', 'mhs_300_mx_150_mZp_1500', 'mhs_300_mx_150_mZp_400', 'mhs_300_mx_150_mZp_500', 'mhs_300_mx_150_mZp_800',
    'mhs_300_mx_200_mZp_1000', 'mhs_300_mx_200_mZp_1200', 'mhs_300_mx_200_mZp_1500', 'mhs_300_mx_200_mZp_500', 'mhs_300_mx_200_mZp_800',
    'mhs_300_mx_300_mZp_1000', 'mhs_300_mx_300_mZp_1200', 'mhs_300_mx_300_mZp_800',
    'mhs_400_mx_200_mZp_1000', 'mhs_400_mx_200_mZp_500', 'mhs_400_mx_200_mZp_800',
    # Additional private sample
    'mhs_250_mx_150_mZp_1200',
    'mhs_350_mx_200_mZp_1200',
]
for mp in mass_points:
    if mp == 'mhs_350_mx_200_mZp_1200': files = nanoGetSampleFiles(myMcDirectory, 'darkHiggs_ToWWToLNujj_'+mp)
    else: files = nanoGetSampleFiles(mcDirectory, 'darkHiggs_ToWWToLNujj_'+mp)
    mhs = mp.split('_')[1] 
    mx  = mp.split('_')[3] 
    mZp = mp.split('_')[5] 
    signal['darkHiggs_'+mp] = {
        'name'   : files,
        'weight' : mcCommonWeight, 
        'color'  : 632+col_idx,
        'plot_name'  : 'mhs '+mhs+' mx '+mx+' mZ\' '+mZp,
        #'FilesPerJob': 5,
        'FilesPerJob': 13,
    }
    col_idx += 1
    if mp == 'mhs_250_mx_150_mZp_1200': signal['darkHiggs_'+mp]['FilesPerJob'] = 50
    if mp == 'mhs_350_mx_200_mZp_1200': signal['darkHiggs_'+mp]['FilesPerJob'] = 50
