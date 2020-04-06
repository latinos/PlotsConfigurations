# structure configuration for datacard
from itertools import product, chain
#structure = {}

Wjets_bins = ["Wjets_jpt3","Wjets_deta2_jpt2", "Wjets_deta1_jpt2",
                "Wjets_deta2_jpt1","Wjets_deta1_jpt1",
                "Wjets_boost1", "Wjets_boost2"]

boost_cuts = list(chain(
                    *[ [t+"_ele", t+"_mu"] for t in 
                               ['boost_sig_mjjincl','boost_sig_mjjincl_dnnhigh',
                                'boost_topcr_mjjincl','boost_topcr_mjjincl_dnnhigh',
                                'boost_wjetcr_mjjincl','boost_wjetcr_mjjincl_dnnhigh']
                    ]))

res_cuts = list(chain(
                    *[ [t+"_ele", t+"_mu"] for t in 
                        ['res_sig_mjjincl', 'res_sig_mjjincl_dnnhigh',
                        'res_topcr_mjjincl','res_topcr_mjjincl_dnnhigh',
                        'res_wjetcr_mjjincl','res_wjetcr_mjjincl_dnnhigh']
                    ]))

for wbin in Wjets_bins:
    if 'boost' in wbin:
        structure[wbin] = {
                    'isSignal' : 0,
                    'isData'   : 0 ,
                    'removeFromCuts': res_cuts 
        }
    else:
        structure[wbin] = {
                    'isSignal' : 0,
                    'isData'   : 0 ,
                    'removeFromCuts': boost_cuts 
        }



structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['top']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['VV']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['VVV']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['VBF-V']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }


structure['VBS']  = { 
                  'isSignal' : 1,
                  'isData'   : 0 
              }

# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }




