import collections
from LatinoAnalysis.Tools.commonTools import getModelDict
 
#def getModelDict(inputDir, production, sample, models, absPath=True, rooFilePrefix='nanoLatino_',FromPostProc=False, prodCfg='LatinoAnalysis/NanoGardener/python/framework/Productions_cfg.py'):
#     
#    FileList = getSampleFiles(inputDir,sample,absPath,rooFilePrefix,FromPostProc)
#    ModelDict = collections.OrderedDict() 
#    for iFile in FileList:
#        f = ROOT.TFile.Open(iFile.replace('###',''),'READ')
#        Runs = f.Get("Runs")
#        for model in models:
#            if not model in ModelDict:
#                ModelDict[model] = {}
#                ModelDict[model]['genEventSumw'] = 0.
#                ModelDict[model]['fileList'] = []
#            for iRun in Runs :
#                trailer = ""
#                if hasattr(iRun, "genEventSumw_"+model+"_"): trailer = "_" 
#                if not hasattr(iRun, "genEventSumw_"+model+trailer): continue 
#                ModelDict[model]['genEventSumw'] += getattr(iRun, "genEventSumw_"+model+trailer)
#                ModelDict[model]['fileList'].append(iFile)
#        f.Close()
#      
#    # Load Producton Cfg + check
#    CMSSW=os.environ["CMSSW_BASE"]
#    if os.path.exists(CMSSW+'/src/'+prodCfg) :
#        handle = open(CMSSW+'/src/'+prodCfg)
#        exec(handle)
#        handle.close()
#        prodList =  Productions.keys()   
#    else:
#        print 'ERROR: Please specify the input data config'
#        exit(1)
#    if not production in prodList:
#        print 'ERROR: "'+production+'" not in prodList: ',prodList 
#    
#    # Load X-section
#    xsDB = xsectionDB()
#    xsDB.readPython(CMSSW+'/src/'+Productions[production]['xsFile'])
#    xsDB.readYR(Productions[production]['YRver'][0],Productions[production]['YRver'][1])
#                
#    for model in models:
#        if len(ModelDict[model]['fileList']) == 0: 
#            print('getModelDict: Warning, model "'+model+'" not found in any of the files from sample"'+sample+'"')
#
#        if   '_ext' in sample: sampleXS = sample.split('_ext')[0]
#        elif '-ext' in sample: sampleXS = sample.split('-ext')[0]
#        else:                  sampleXS = sample
#        ModelDict[model]['Xsec'] = xsDB.get(sampleXS+'_'+model)       
#        nEvt  = ModelDict[model]['genEventSumw']
#        Xsec  = ModelDict[model]['Xsec']
#        baseW = float(Xsec)*1000./nEvt
#        ModelDict[model]['baseW'] = str(baseW)
#    return ModelDict
 

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
        'FilesPerJob': 13,
        #'FilesPerJob': 18,
    }
    print('  - Mass point: '+mp+' ,\t baseW: '+modelDict[model]['baseW']+',\t genEventSumw: '+str(modelDict[model]['genEventSumw']))
    col_idx += 1
    
