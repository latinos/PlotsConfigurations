massesAndModelsFile = "massesAndModels.py"

if os.path.exists(massesAndModelsFile) :
  handle = open(massesAndModelsFile,'r')
  exec(handle)
  handle.close()
else:
  print "!!! ERROR file ", massesAndModelsFile, " does not exist."

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    structure['ggH_hww_'+m+'_'+model_name]  = {
                    'isSignal' : 1,
                    'isFromGluons' : 1, 
                    'isData'   : 0
                    }
    
    structure['ggH_hww_SBI'+m+'_'+model_name]  = {
                     'isSignal' : 1,
                     'isFromGluons' : 1, 
                     'isData'   : 0
                     }


    structure['qqH_hww_'+m+'_'+model_name]  = {
                    'isSignal' : 1,
                    'isFromGluons' : 0,
                    'isData'   : 0
                    }


    #structure['qqH_hww_SBI'+m+'_'+model_name]  = {
    #                'isSignal' : 1,
    #                'isFromGluons' : 0,
    #                'isData'   : 0
    #                }
