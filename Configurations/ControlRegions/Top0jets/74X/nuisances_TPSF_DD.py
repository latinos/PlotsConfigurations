nuisances['btag']  = {
                'name'  : 'btag',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(bTPSFUp)/(bTPSF)', '(bTPSFDown)/(bTPSF)'],
                   'Wjets'   : ['(bTPSFUp)/(bTPSF)', '(bTPSFDown)/(bTPSF)'],
                   'VVV'     : ['(bTPSFUp)/(bTPSF)', '(bTPSFDown)/(bTPSF)'],
                   'VV'      : ['(bTPSFUp)/(bTPSF)', '(bTPSFDown)/(bTPSF)'],
                   'FakeQCD' : ['(bTPSFUp)/(bTPSF)', '(bTPSFDown)/(bTPSF)'],
                   'WW'      : ['(bTPSFUp)/(bTPSF)', '(bTPSFDown)/(bTPSF)'],
                   'ST'      : ['(bTPSFUp)/(bTPSF)', '(bTPSFDown)/(bTPSF)'],
                   'ttbar'   : ['(bTPSFUp)/(bTPSF)', '(bTPSFDown)/(bTPSF)'],
                }
}

nuisances['topDD'] = {
                'name'  : 'topDD',
                'type'  : 'lnN',
		'samples'  :  {
			'ttbar' :  '1.099',
			'ST'    :  '1.099',
		 }
}
