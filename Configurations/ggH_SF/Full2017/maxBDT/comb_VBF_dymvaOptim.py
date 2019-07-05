# Combinations to use

#comb = {}

optim={}

##optim['dymva0p82']  = ' && dymva_bdt_VBF > 0.82 ' 
##optim['dymva0p85']  = ' && dymva_bdt_VBF > 0.85 ' 
optim['dymva0p885']  = ' && dymva_bdt_VBF > 0.885 '
optim['dymva0p89']  = ' && dymva_bdt_VBF > 0.89 '
optim['dymva0p895']  = ' && dymva_bdt_VBF > 0.895 '
##optim['dymva0p90']  = ' && dymva_bdt_VBF > 0.90 ' 
optim['dymva0p905']  = ' && dymva_bdt_VBF > 0.905 '
optim['dymva0p91']  = ' && dymva_bdt_VBF > 0.91 '
optim['dymva0p915']  = ' && dymva_bdt_VBF > 0.915 '
optim['dymva0p92']  = ' && dymva_bdt_VBF > 0.92 '
##optim['dymva0p925']  = ' && dymva_bdt_VBF > 0.925 ' 
#optim['dymva0p93']  = ' && dymva_bdt_VBF > 0.93 ' 
#optim['dymva0p94']  = ' && dymva_bdt_VBF > 0.94 ' 
#optim['dymva0p945'] = ' && dymva_bdt_VBF > 0.945 ' 
##optim['dymva0p95']  = ' && dymva_bdt_VBF > 0.95 ' 
#optim['dymva0p955'] = ' && dymva_bdt_VBF > 0.955 ' 
#optim['dymva0p96']  = ' && dymva_bdt_VBF > 0.96 ' 
#optim['dymva0p965'] = ' && dymva_bdt_VBF > 0.965 ' 
#optim['dymva0p97']  = ' && dymva_bdt_VBF > 0.97 ' 
##optim['dymva0p975'] = ' && dymva_bdt_VBF > 0.975 ' 
#optim['dymva0p98']  = ' && dymva_bdt_VBF > 0.98 ' 
#optim['dymva0p985']  = ' && dymva_bdt_VBF > 0.985 ' 
#optim['dymva0p99']  = ' && dymva_bdt_VBF > 0.99 ' 
##optim['dymva0p995']  = ' && dymva_bdt_VBF > 0.995 ' 

for iCut in optim:

  combs['hww2l2v_13TeV_2jee_vbf_'+iCut] = {
                    'hww2l2v_13TeV_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jee_vbf_'+iCut : 'events' ,
                  }

  combs['hww2l2v_13TeV_2jmm_vbf_'+iCut] = {
                    'hww2l2v_13TeV_2jmm_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jmm_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jmm_vbf_'+iCut : 'events' ,
                  }


  combs['hww2l2v_13TeV_2jsf_vbf_'+iCut] = {
                    'hww2l2v_13TeV_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_2jmm_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jmm_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jmm_vbf_'+iCut : 'events' ,
                  }
