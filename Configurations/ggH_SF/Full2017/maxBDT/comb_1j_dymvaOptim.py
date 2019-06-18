# Combinations to use

#comb = {}

optim={}

#optim['dymva0p82']  = ' && dymva_bdt_1j > 0.82 ' 
#optim['dymva0p85']  = ' && dymva_bdt_1j > 0.85 ' 
#optim['dymva0p90']  = ' && dymva_bdt_1j > 0.90 ' 
#optim['dymva0p905']  = ' && dymva_bdt_1j > 0.905 ' 
#optim['dymva0p91']   = ' && dymva_bdt_1j > 0.91 ' 
#optim['dymva0p915']  = ' && dymva_bdt_1j > 0.915 ' 
#optim['dymva0p92']  = ' && dymva_bdt_1j > 0.92 ' 
#optim['dymva0p925']  = ' && dymva_bdt_1j > 0.925 ' 
#optim['dymva0p93']   = ' && dymva_bdt_1j > 0.93 ' 
#optim['dymva0p935']  = ' && dymva_bdt_1j > 0.935 ' 
#optim['dymva0p94']  = ' && dymva_bdt_1j > 0.94 ' 
#optim['dymva0p945'] = ' && dymva_bdt_1j > 0.945 ' 
#optim['dymva0p95']  = ' && dymva_bdt_1j > 0.95 ' 
optim['dymva0p955'] = ' && dymva_bdt_1j > 0.955 '
optim['dymva0p96']  = ' && dymva_bdt_1j > 0.96 '
optim['dymva0p965'] = ' && dymva_bdt_1j > 0.965 '
optim['dymva0p97']  = ' && dymva_bdt_1j > 0.97 '
#optim['dymva0p975'] = ' && dymva_bdt_1j > 0.975 ' 
optim['dymva0p98']  = ' && dymva_bdt_1j > 0.98 '
optim['dymva0p985']  = ' && dymva_bdt_1j > 0.985 '
optim['dymva0p99']  = ' && dymva_bdt_1j > 0.99 '
#optim['dymva0p995']  = ' && dymva_bdt_1j > 0.995 '

for iCut in optim:

  combs['hww2l2v_13TeV_1jee_'+iCut] = {
                    'hww2l2v_13TeV_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_1jee_'+iCut : 'events' ,
                  }

  combs['hww2l2v_13TeV_1jmm_'+iCut] = {
                    'hww2l2v_13TeV_1jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_1jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_1jmm_'+iCut : 'events' ,
                  }


  combs['hww2l2v_13TeV_1jsf_'+iCut] = {
                    'hww2l2v_13TeV_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_1jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_1jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_1jmm_'+iCut : 'events' ,
                  }
