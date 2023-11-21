# plot configuration

nbins = 1

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['Vg']  = {
                  'nameHR' : "V#gamma",
                  'isSignal' : 0,
                  'color'    : 811,   # kOrange + 10
                  'samples'  : ['Vg']
              }

groupPlot['Higgs']  = {
                  'nameHR' : 'Higgs',
                  'isSignal' : 0,
                  'color': 632, # kRed 
                  'samples'  : ['Higgs' ]
              }

groupPlot['ZZ']  = {
                  'nameHR' : "ZZ",
                  'isSignal' : 0,
                  'color'    : 618,   # kViolet + 1  
                  'samples'  : ['ZZ']
              }

groupPlot['VVV']  = {
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }

groupPlot['DY']  = {
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY']
              }

groupPlot['WZ']  = {
                  'nameHR' : "WZ",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['WZ']
              }

groupPlot['VBFHToWWOnshell']  = {
                  'nameHR' : 'VBF Onshell',
                  'isSignal' : 0,
                  'color': 409, # kRed                                                                                                                                                                      
                  'samples'  : ['VBFHToWWOnshell' ]
              }

groupPlot['ggHToWWOnshell']  = {
                  'nameHR' : 'ggH Onshell',
                  'isSignal' : 0,
                  'color': 603, # kBlue+3                                                                                                                                                                  
                  'samples'  : ['ggHToWWOnshell' ]
              }

groupPlot['Fake']  = {
                  'nameHR' : 'nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake_me', 'Fake_em']
}

groupPlot['VBFHToWWOffshell']  = {
                  'nameHR' : 'VBF Offshell',
                  'isSignal' : 1,
                  'color': 632, # kRed                                                                                                                                                                    
                  'samples'  : ['VBFHToWWOffshell' ]
              }

groupPlot['ggHToWWOffshell']  = {
                  'nameHR' : 'ggH Offshell',
                  'isSignal' : 1,
                  'color': 432, # kCyan
                  'samples'  : ['ggHToWWOffshell' ]
              }

groupPlot['WW']  = {
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW', 'ggWW', 'WWewk']
              }

groupPlot['top']  = {
                  'nameHR' : 'tW and t#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top']
              }


#ops = ['cW', 'cHbox', 'cHWB', 'cHl1', 'cHl3', 'cHq1', 'cHq3', 'cll1']
#wts = ['5','10']

#for iop in range(len(ops)):
#    op = ops[iop]
#    slq_op = 'sm_lin_quad_{}'.format(op)
#
#    groupPlot[slq_op]   = {
#                'nameHR' : slq_op,
#                'isSignal' : 1,
#                'color' : 450,
#                'samples' : [slq_op]
#                }

#    for wt in wts:
#        slq_op = 'sm_lin_quad_{}_wt_{}'.format(op,wt)
#
#        groupPlot[slq_op]   = {
#                    'nameHR' : slq_op,
#                    'isSignal' : 1,
#                    'color' : 450,
#                    'samples' : [slq_op]
#                    }
#    for iop2 in range(iop,len(ops)):
#        op2 = ops[iop2]
#        if iop != len(ops)-1:
#            slq_mixd = 'sm_lin_quad_mixed_{}_{}'.format(op,op2)
#            groupPlot[slq_mixd]   = {
#                        'nameHR' : slq_mixd,
#                        'isSignal' : 1,
#                        'color' : 450,
#                        'samples' : [slq_mixd]
#                        }




#plot = {}

# keys here must match keys in samples.py    
#                    


#for iop in range(len(ops)):
#    op = ops[iop]
#    slq_op = 'sm_lin_quad_{}'.format(op)
#
##    plot[slq_op]   = {
#                    'color': 418,    # kGreen+2
#                    'isSignal' : 1,
#                    'isData'   : 0, 
#                    'scale'    : 1.0,
#                }
#
#    for wt in wts:
#        slq_op = 'sm_lin_quad_{}_wt_{}'.format(op,wt)
#
#        plot[slq_op]   = {
#                    'color': 418,    # kGreen+2
#                    'isSignal' : 1,
#                    'isData'   : 0, 
#                    'scale'    : 1.0,
#                    }
#
#    for iop2 in range(iop,len(ops)):
#        op2 = ops[iop2]
#        if iop != len(ops)-1:
#            slq_mixd = 'sm_lin_quad_mixed_{}_{}'.format(op,op2)
#            plot[slq_mixd]   = {
#                        'color': 418,    # kGreen+2
#                        'isSignal' : 1,
#                        'isData'   : 0, 
#                        'scale'    : 1.0,
#                    }



plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }


plot['Fake_me']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }


plot['Fake_em']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

              
plot['top'] = {   
                  'nameHR' : 'tW and t#bar{t}',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  }

plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['ggWW']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WWewk']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['Vg']  = {
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ZZ']  = {
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

# Higgs

plot['Higgs'] = {
                  'nameHR' : 'Higgs',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['VBFHToWWOnshell']  = {
                  'color': 409, # kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ggHToWWOnshell']  = {
                  'color': 603, # kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VBFHToWWOffshell']  = {
                  'color': 632, # kRed  
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ggHToWWOffshell']  = {
                  'color': 432, # kRed  
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }



# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 1
              }




# additional options

legend['lumi'] = 'L = 59.8/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
