# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#



groupPlot['gluon']  = {  
                  'nameHR' : 'gluon',
                  'isSignal' : 1,
                  'color': (153, 204, 255),
                  'samples'  : [ "DY_gluon", "top_gluon", "VVV_gluon", "WW_gluon","VZ_gluon","ggWW_gluon"],
                  'fill': 1001
              }

groupPlot['quark']  = {  
                  'nameHR' : 'quark',
                  'isSignal' : 0,
                  'color': (16,235,52),
                  'samples'  : [ "DY_quark", "top_quark", "VVV_quark", "WW_quark","VZ_quark","ggWW_quark"],
                  'fill': 1001
              }


groupPlot['others']  = {  
                  'nameHR' : 'others',
                  'isSignal' : 0,
                  'color': (72, 145, 234),  
                  'samples'  : [ "Fake"],
                  'fill': 1001
              }


for f in ["_quark", "_gluon"]:
#plot = {}

    # keys here must match keys in samples.py    
    #                    
    plot['DY'+f]  = {  
                    'color': 418,    # kGreen+2
                    'isSignal' : 0,
                    'isData'   : 0, 
                    'scale'    : 1.0,
                    #'cuts'  : {
                        #'hww2l2v_13TeV_of0j'      : 0.95 ,
                        #'hww2l2v_13TeV_top_of0j'  : 0.95 , 
                        #'hww2l2v_13TeV_dytt_of0j' : 0.95 ,
                        #'hww2l2v_13TeV_em_0j'     : 0.95 , 
                        #'hww2l2v_13TeV_me_0j'     : 0.95 , 
                        ##
                        #'hww2l2v_13TeV_of1j'      : 1.08 ,
                        #'hww2l2v_13TeV_top_of1j'  : 1.08 , 
                        #'hww2l2v_13TeV_dytt_of1j' : 1.08 ,
                        #'hww2l2v_13TeV_em_1j'     : 1.08 , 
                        #'hww2l2v_13TeV_me_1j'     : 1.08 , 
                            #},

                }


    plot['top'+f] = {   
                    'nameHR' : 'tW and t#bar{t}',
                    'color': 400,   # kYellow
                    'isSignal' : 0,
                    'isData'   : 0, 
                    'scale'    : 1.0,
                    #'cuts'  : {
                        #'hww2l2v_13TeV_of0j'      : 0.94 ,
                        #'hww2l2v_13TeV_top_of0j'  : 0.94 , 
                        #'hww2l2v_13TeV_dytt_of0j' : 0.94 ,
                        #'hww2l2v_13TeV_em_0j'     : 0.94 , 
                        #'hww2l2v_13TeV_me_0j'     : 0.94 , 
                        ##
                        #'hww2l2v_13TeV_of1j'      : 0.86 ,
                        #'hww2l2v_13TeV_top_of1j'  : 0.86 , 
                        #'hww2l2v_13TeV_dytt_of1j' : 0.86 ,
                        #'hww2l2v_13TeV_em_1j'     : 0.86 , 
                        #'hww2l2v_13TeV_me_1j'     : 0.86 , 
                            #},
                    }


    plot['WW'+f]  = {
                    'color': 851, # kAzure -9 
                    'isSignal' : 0,
                    'isData'   : 0,    
                    'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                    }

    plot['ggWW'+f]  = {
                    'color': 850, # kAzure -10
                    'isSignal' : 0,
                    'isData'   : 0,    
                    'scale'    : 1.0
                    }

    # plot['WWewk']  = {
    #                 'color': 851, # kAzure -9 
    #                 'isSignal' : 0,
    #                 'isData'   : 0,
    #                 'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
    #                 }


    # plot['Vg']  = { 
    #                 'color': 859, # kAzure -1  
    #                 'isSignal' : 0,
    #                 'isData'   : 0,
    #                 'scale'    : 1.0
    #                 }

    # plot['VgS_H'] = { 
    #                 'color'    : 617,   # kViolet + 1  
    #                 'isSignal' : 0,
    #                 'isData'   : 0,
    #                 'scale'    : 1.0
    #                 }

    # plot['VgS_L'] = {
    #                 'color'    : 617,   # kViolet + 1  
    #                 'isSignal' : 0,
    #                 'isData'   : 0,
    #                 'scale'    : 1.0
    #                 }


    plot['VZ'+f]  = { 
                    'color': 858, # kAzure -2  
                    'isSignal' : 0,
                    'isData'   : 0,
                    'scale'    : 1.0
                    }

    plot['VVV'+f]  = { 
                    'color': 857, # kAzure -3  
                    'isSignal' : 0,
                    'isData'   : 0,
                    'scale'    : 1.0
                    }

plot['Fake']  = { 
                    'color': 857, # kAzure -3  
                    'isSignal' : 0,
                    'isData'   : 0,
                    'scale'    : 1.0
                    }


# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }




# additional options

legend['lumi'] = 'L = 59.7/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




