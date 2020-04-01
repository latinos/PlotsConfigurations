# This is needed to add DNN variables on the fly: https://github.com/UniMiBAnalyses/NNEvaluation
# Put it in the "src" directory of your CMSSW and compile.
# (Additional one would also need https://github.com/UniMiBAnalyses/ML_classification/blob/master/export_tensorflow_model.py , to convert a Keras model into a Tensorflow one. But this is already done by me. The output is this script is what is needed as input for these modules, and is located in the "DNNs" directory here.)
# Thanks to Davide Valsecchi for setting this up!

aliases['DNN_isVBF_OTF'] = {
    'class': 'DNNprod',
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_prod_semi.cc+' % os.getenv('CMSSW_BASE'), 
    ],
}

aliases['DNN_mth_OTF'] = {
    'class': 'DNNneut',
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_neut_semi.cc+' % os.getenv('CMSSW_BASE'), 
    ],
}

