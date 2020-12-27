config = {
    "top" :
     { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_top"],
        "phase_spaces" : {
            "res_ele" : {
                "vars": ["DNNoutput_res_bins2", "fit_bins_res", "events"],
                "cuts": ["res_sig_ele", "res_wjetcr_ele", "res_topcr_ele"]
            },
            "res_mu" : {
                "vars": ["DNNoutput_res_bins2", "fit_bins_res", "events"],
                "cuts": ["res_sig_mu", "res_wjetcr_mu", "res_topcr_mu"]
            },
            "boost_ele" : {
                "vars": ["DNNoutput_boost_bins2", "fit_bins_boost", "events"],
                "cuts": ["boost_sig_ele", "boost_wjetcr_ele", "boost_topcr_ele"]
            },
            "boost_mu" : {
                "vars": ["DNNoutput_boost_bins2", "fit_bins_boost", "events"],
                "cuts": ["boost_sig_mu", "boost_wjetcr_mu", "boost_topcr_mu"]
            }
        } 
    }
}

wjets_bins = {'res':[], 'boost':[]}
for ir in range(1,7):
    wjets_bins['res'].append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins['boost'].append("Wjets_HT_boost_"+str(ir))

for wj_res in wjets_bins['res']:
    config[wj_res] = { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_Wjets_HT"],
        "phase_spaces" : {
            "res_ele" : {
                "vars": ["DNNoutput_res_bins2", "fit_bins_res", "events"],
                "cuts": ["res_sig_ele", "res_wjetcr_ele", "res_topcr_ele"]
            },
            "res_mu" : {
                "vars": ["DNNoutput_res_bins2", "fit_bins_res", "events"],
                "cuts": ["res_sig_mu", "res_wjetcr_mu", "res_topcr_mu"]
            }
        }
    }


for wj_boost in wjets_bins['boost']:
    config[wj_boost] = { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_Wjets_HT"],
        "phase_spaces" : {
            "boost_ele" : {
                "vars": ["DNNoutput_boost_bins2", "fit_bins_boost", "events"],
                "cuts": ["boost_sig_ele", "boost_wjetcr_ele", "boost_topcr_ele"]
            },
            "boost_mu" : {
                "vars": ["DNNoutput_boost_bins2", "fit_bins_boost", "events"],
                "cuts": ["boost_sig_mu", "boost_wjetcr_mu", "boost_topcr_mu"]
            }
        }
    }