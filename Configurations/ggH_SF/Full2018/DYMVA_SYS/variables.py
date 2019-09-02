# variables

#variables = {}
 
#variables['mll']  = {   'name': 'mll',            #   variable name    
#                        'range' : (40, 0,200),    #   variable range
#                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
#
#variables['puppimet']  = {
#                        'name': 'PuppiMET_pt',
#                        'range' : (40,0,200),
#                        'xaxis' : 'pfmet [GeV]',
#                        'fold'  : 3
#                        }
   
variables['dymva_bdt']  = {  'name'  : '(dymva_bdt_0j*0j)+(dymva_bdt_1j*1j)+(dymva_bdt_2j*2jggH)+(dymva_bdt_VBF*2jVBF)',
                                'range' : ([-1,0,0.6,0.8,1.001],),
                                'xaxis' : 'DYMVA_{BDT}^{0j}',
                                'fold' : 3
                             }

variables['dymva_dnn']  = {  'name'  : '(dymva_dnn_0j*0j)+(dymva_dnn_1j*1j)+(dymva_dnn_2j*2jggH)+(dymva_dnn_VBF*2jVBF)',
                                'range' : ([0,0.5,0.8,0.9,1.001],),
                                'xaxis' : 'DYMVA_{DNN}^{0j}',
                                'fold' : 3
                             }
