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
       'WW' : ['Alt$(LHEScaleWeight[0],1)','Alt$(LHEScaleWeight[8],1)']
    }
}

# PDF
for i in range(1,33):
  # LHEPdfWeight are PDF4LHC variations, while nominal is NNPDF.
  # LHEPdfWeight[i] reweights from NNPDF nominal to PDF4LHC member i
  # LHEPdfWeight[0] in particular reweights from NNPDF nominal to PDF4LHC nominal
  pdf_variations = ["LHEPdfWeight[%d]/LHEPdfWeight[0]*(abs(LHEPdfWeight[%d]/LHEPdfWeight[0])<=100)+1.0*(abs(LHEPdfWeight[%d]/LHEPdfWeight[0])>100)"%(i,i,i), "(2.0-(LHEPdfWeight[%d]/LHEPdfWeight[0]))*(abs(LHEPdfWeight[%d]/LHEPdfWeight[0])<=100)+1.0*(abs(LHEPdfWeight[%d]/LHEPdfWeight[0])>100)"%(i,i,i)] # Float_t LHE pdf variation weights (w_var / w_nominal) for LHA IDs 91400 - 91432*

  nuisances['pdf_WW_'+str(i)]  = {
    'name'  : 'pdf_WW_'+str(i)+'_2018',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
      'WW'   : pdf_variations,
    },
  }

for n in nuisances.values():
    n['skipCMS'] = 1
