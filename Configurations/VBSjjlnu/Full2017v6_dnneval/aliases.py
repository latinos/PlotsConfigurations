import os
import copy
import inspect

# configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
# configurations = os.path.dirname(configurations) # ggH2016

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

mva_reader_path = os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017v6_dnneval/mva/'

aliases['DNNoutput'] = {
    'class': 'MVAReader',
    'args': '/eos/home-d/dmapelli/public/latino/Full2017v6_200121_v1/lowen_looseVBS/models/'
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L ' + mva_reader_path + 'mva_reader.cc+', 
    ],
    'samples': mc ,
}
