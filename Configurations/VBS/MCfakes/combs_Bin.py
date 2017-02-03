
# Combinations to use

#comb = {}

optim={}
optim['Bin0']    = ''
optim['Bin1']    = ''
optim['Bin2']    = ''
optim['Bin3']    = ''


#
for iCut in optim:

  combs['vbsww_'+iCut] = {
                    'wwjj_13TeV_ee_mm' : 'mjj_'+iCut ,  
                    'wwjj_13TeV_ee_pp' : 'mjj_'+iCut ,  
                    'wwjj_13TeV_eu_mm' : 'mjj_'+iCut ,  
                    'wwjj_13TeV_eu_pp' : 'mjj_'+iCut ,  
                    'wwjj_13TeV_uu_mm' : 'mjj_'+iCut ,  
                    'wwjj_13TeV_uu_pp' : 'mjj_'+iCut ,
                  }
  
  combs['vbsww_ee_'+iCut] = {
                    'wwjj_13TeV_ee_mm' : 'mjj_'+iCut ,
                    'wwjj_13TeV_ee_pp' : 'mjj_'+iCut ,
                  }
  
  combs['vbsww_eu_'+iCut] = {
                    'wwjj_13TeV_eu_mm' : 'mjj_'+iCut ,
                    'wwjj_13TeV_eu_pp' : 'mjj_'+iCut ,
                  }
  
  combs['vbsww_uu_'+iCut] = {
                    'wwjj_13TeV_uu_mm' : 'mjj_'+iCut ,
                    'wwjj_13TeV_uu_pp' : 'mjj_'+iCut ,
                  }
  
  
