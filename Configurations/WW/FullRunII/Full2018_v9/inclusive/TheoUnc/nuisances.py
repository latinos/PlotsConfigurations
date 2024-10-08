# nuisances
# name of samples here must match keys in samples.py 

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

##### PS
nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in samples),
}

nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in samples),
}

##### Renormalization & factorization scales

# LHE scale variation weights (w_var / w_nominal)
nuisances['QCDscale_WW']  = {
    'name'  : 'QCDscale_WW',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
       'WW' : ['Alt$(LHEScaleWeight[0],1)','Alt$(LHEScaleWeight[8],1)'],
       'ggWW' : ['Alt$(LHEScaleWeight[0],1)','Alt$(LHEScaleWeight[8],1)']
    }
}

# PDF
pdf_variations = ["LHEPdfWeight[%d]" %i for i in range(1,101)] # Float_t LHE pdf variation weights (w_var / w_nominal) for LHA IDs 320901 - 321000

nuisances['pdf_WW']  = {
  'name'  : 'pdf_WW',
  'kind'  : 'weight_rms',
  'type'  : 'shape',
  'samples'  : {
     'WW'     : pdf_variations,
   },
}

for n in nuisances.values():
    n['skipCMS'] = 1
