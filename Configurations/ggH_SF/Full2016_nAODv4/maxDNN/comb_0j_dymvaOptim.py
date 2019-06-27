# Combinations to use

#comb = {}

optim={}

optim['dymva0p80']  = ' && dymva_dnn_0j > 0.80 '
optim['dymva0p805'] = ' && dymva_dnn_0j > 0.805 '
optim['dymva0p81']  = ' && dymva_dnn_0j > 0.81 '
optim['dymva0p815'] = ' && dymva_dnn_0j > 0.815 '
optim['dymva0p825'] = ' && dymva_dnn_0j > 0.825 '
optim['dymva0p83']  = ' && dymva_dnn_0j > 0.83 '
#optim['dymva0p835'] = ' && dymva_dnn_0j > 0.835 '
optim['dymva0p84']  = ' && dymva_dnn_0j > 0.84 '
#optim['dymva0p845'] = ' && dymva_dnn_0j > 0.845 '
#optim['dymva0p82']  = ' && dymva_dnn_0j > 0.82 '
#optim['dymva0p85']  = ' && dymva_dnn_0j > 0.85 '
#optim['dymva0p90']  = ' && dymva_dnn_0j > 0.90 '
#optim['dymva0p910'] = ' && dymva_dnn_0j > 0.91 '
#optim['dymva0p92']  = ' && dymva_dnn_0j > 0.92 '
#optim['dymva0p930'] = ' && dymva_dnn_0j > 0.93 '
#optim['dymva0p940'] = ' && dymva_dnn_0j > 0.94 '
#optim['dymva0p9450']= ' && dymva_dnn_0j > 0.945 '
#optim['dymva0p95']  = ' && dymva_dnn_0j > 0.95 '
#optim['dymva0p955'] = ' && dymva_dnn_0j > 0.955 '
#optim['dymva0p96']  = ' && dymva_dnn_0j > 0.96 '
#optim['dymva0p965'] = ' && dymva_dnn_0j > 0.965 '
#optim['dymva0p97']  = ' && dymva_dnn_0j > 0.97 '
#optim['dymva0p975'] = ' && dymva_dnn_0j > 0.975 '
#optim['dymva0p98']  = ' && dymva_dnn_0j > 0.98 '
#optim['dymva0p985'] = ' && dymva_dnn_0j > 0.985 '
#optim['dymva0p99']  = ' && dymva_dnn_0j > 0.99 '
#optim['dymva0p995'] = ' && dymva_dnn_0j > 0.995 '

for iCut in optim:

  combs['hww2l2v_13TeV_0jee_'+iCut] = {
                    'hww2l2v_13TeV_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_0jee_'+iCut : 'events' ,
                  }

  combs['hww2l2v_13TeV_0jmm_'+iCut] = {
                    'hww2l2v_13TeV_0jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_0jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_0jmm_'+iCut : 'events' ,
                  }


  combs['hww2l2v_13TeV_0jsf_'+iCut] = {
                    'hww2l2v_13TeV_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_0jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_0jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_0jmm_'+iCut : 'events' ,
                  }
