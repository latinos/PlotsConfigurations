# Combinations to use

#comb = {}

optim={}

#optim['dymva0p82']  = ' && dymva_bdt_2j > 0.82 ' 
optim['dymva0p83']  = ' && dymva_bdt_2j > 0.83 '
optim['dymva0p84']  = ' && dymva_bdt_2j > 0.84 '
#optim['dymva0p845']  = ' && dymva_bdt_2j > 0.845 ' 
#optim['dymva0p85']  = ' && dymva_bdt_2j > 0.85 ' 
#optim['dymva0p85']  = ' && dymva_bdt_2j > 0.855 ' 
optim['dymva0p86']  = ' && dymva_bdt_2j > 0.86 '
optim['dymva0p87']  = ' && dymva_bdt_2j > 0.87 '
optim['dymva0p88']  = ' && dymva_bdt_2j > 0.88 '
optim['dymva0p89']  = ' && dymva_bdt_2j > 0.89 '
#optim['dymva0p90']  = ' && dymva_bdt_2j > 0.90 ' 
optim['dymva0p91']  = ' && dymva_bdt_2j > 0.91 '
#optim['dymva0p92']  = ' && dymva_bdt_2j > 0.92 ' 
#optim['dymva0p925']  = ' && dymva_bdt_2j > 0.925 ' 
#optim['dymva0p93']  = ' && dymva_bdt_2j > 0.93 ' 
#optim['dymva0p94']  = ' && dymva_bdt_2j > 0.94 ' 
#optim['dymva0p945'] = ' && dymva_bdt_2j > 0.945 ' 
#optim['dymva0p95']  = ' && dymva_bdt_2j > 0.95 ' 
#optim['dymva0p955'] = ' && dymva_bdt_2j > 0.955 ' 
#optim['dymva0p96']  = ' && dymva_bdt_2j > 0.96 ' 
#optim['dymva0p965'] = ' && dymva_bdt_2j > 0.965 ' 
#optim['dymva0p97']  = ' && dymva_bdt_2j > 0.97 ' 
#optim['dymva0p975'] = ' && dymva_bdt_2j > 0.975 ' 
#optim['dymva0p98']  = ' && dymva_bdt_2j > 0.98 ' 
#optim['dymva0p985']  = ' && dymva_bdt_2j > 0.985 ' 
#optim['dymva0p99']  = ' && dymva_bdt_2j > 0.99 ' 
#optim['dymva0p995']  = ' && dymva_bdt_2j > 0.995 '

for iCut in optim:

  combs['hww2l2v_13TeV_2jee_'+iCut] = {
                    'hww2l2v_13TeV_2jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jee_'+iCut : 'events' ,
                  }

  combs['hww2l2v_13TeV_2jmm_'+iCut] = {
                    'hww2l2v_13TeV_2jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jmm_'+iCut : 'events' ,
                  }


  combs['hww2l2v_13TeV_2jsf_'+iCut] = {
                    'hww2l2v_13TeV_2jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_2jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jmm_'+iCut : 'events' ,
                  }
