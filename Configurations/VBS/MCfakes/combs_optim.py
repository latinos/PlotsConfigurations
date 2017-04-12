
# Combinations to use

#comb = {}

#
for iCut in optim:

  combs['vbsww_'+iCut] = {
                    'wwjj_13TeV_ee_mm_'+iCut : 'mjj' ,  
                    'wwjj_13TeV_ee_pp_'+iCut : 'mjj' ,  
                    'wwjj_13TeV_eu_mm_'+iCut : 'mjj' ,  
                    'wwjj_13TeV_eu_pp_'+iCut : 'mjj' ,  
                    'wwjj_13TeV_uu_mm_'+iCut : 'mjj' ,  
                    'wwjj_13TeV_uu_pp_'+iCut : 'mjj' ,
                  }
  
  combs['vbsww_ee_'+iCut] = {
                    'wwjj_13TeV_ee_mm_'+iCut : 'mjj' ,
                    'wwjj_13TeV_ee_pp_'+iCut : 'mjj' ,
                  }
  
  combs['vbsww_eu_'+iCut] = {
                    'wwjj_13TeV_eu_mm_'+iCut : 'mjj' ,
                    'wwjj_13TeV_eu_pp_'+iCut : 'mjj' ,
                  }
  
  combs['vbsww_uu_'+iCut] = {
                    'wwjj_13TeV_uu_mm_'+iCut : 'mjj' ,
                    'wwjj_13TeV_uu_pp_'+iCut : 'mjj' ,
                  }
  
  
