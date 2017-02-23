# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

#### DY estimation (just create dummy histograms to be scaled by the DY Rin/out method)

nuisances['DYeenorm0j'] = {
                'name'  : 'DYeenorm0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 'hww2l2v_13TeV_0jee', ] ,

                }

nuisances['DYeenorm1j'] = {
                'name'  : 'DYeenorm1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 'hww2l2v_13TeV_1jee', ] ,

                }

nuisances['DYmmnorm0j'] = {
                'name'  : 'DYmmnorm0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 'hww2l2v_13TeV_0jmm', ] ,

                }

nuisances['DYmmnorm1j'] = {
                'name'  : 'DYmmnorm1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 'hww2l2v_13TeV_1jmm', ] ,

                }


#for iNP in nuisances:
  #if 'cuts' in nuisances[iNP] :
    #newCuts = []
    #for iCut in nuisances[iNP]['cuts']:
      #for iOptim in optim:
         ##newCuts.append(iCut+'_'+iOptim)
    #nuisances[iNP]['cuts'] = newCuts
  
