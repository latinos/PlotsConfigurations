config = {
    "top" :
     { 
        "nuisances" : [ "QCDscale_top","CMS_PU_2017"],#"CMS_PS_FSR","CMS_PS_ISR",
        "phase_spaces" : {
            "res_ele" :  ["res_sig_ele", "res_wjetcr_ele", "res_topcr_ele"],
            "res_mu" :    ["res_sig_mu", "res_wjetcr_mu", "res_topcr_mu"],
            "boost_ele" : ["boost_sig_ele", "boost_wjetcr_ele", "boost_topcr_ele"],
            "boost_mu" :  ["boost_sig_mu", "boost_wjetcr_mu", "boost_topcr_mu"]
        } 
    },
    # "Wjets" :
    #  { 
    #     "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_Wjets","CMS_PU_2017"],#
    #     "phase_spaces" : {
    #         "res_ele" :  ["res_sig_ele", "res_wjetcr_ele", "res_topcr_ele"],
    #         "res_mu" :    ["res_sig_mu", "res_wjetcr_mu", "res_topcr_mu"],
    #         "boost_ele" : ["boost_sig_ele", "boost_wjetcr_ele", "boost_topcr_ele"],
    #         "boost_mu" :  ["boost_sig_mu", "boost_wjetcr_mu", "boost_topcr_mu"]
    #     } 
    # },
}

wjets_bins = {'res':[], 'boost':[]}
for ir in range(1,22):
    wjets_bins['res'].append("Wjets_res_"+str(ir))
for ir in range(1,8):
    wjets_bins['boost'].append("Wjets_boost_"+str(ir))

for wj_res in wjets_bins['res']:
    config[wj_res] = { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_Wjets","CMS_PU_2018"],
        "phase_spaces" : {
            "res_ele" :  ["res_sig_ele", "res_wjetcr_ele", "res_topcr_ele"],
            "res_mu" : ["res_sig_mu", "res_wjetcr_mu", "res_topcr_mu"]
        }
    }


for wj_boost in wjets_bins['boost']:
    config[wj_boost] = { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_Wjets","CMS_PU_2018"],
        "phase_spaces" : {
            "boost_ele" : ["boost_sig_ele", "boost_wjetcr_ele", "boost_topcr_ele"],
            "boost_mu" :["boost_sig_mu", "boost_wjetcr_mu", "boost_topcr_mu"]
        }
    }

