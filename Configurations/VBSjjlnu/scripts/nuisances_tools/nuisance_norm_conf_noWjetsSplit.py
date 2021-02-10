config = {
    "top" :
     { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_top"],
        "phase_spaces" : {
            "res_ele" :  ["res_sig_ele", "res_wjetcr_ele", "res_topcr_ele"],
            "res_mu" :    ["res_sig_mu", "res_wjetcr_mu", "res_topcr_mu"],
            "boost_ele" : ["boost_sig_ele", "boost_wjetcr_ele", "boost_topcr_ele"],
            "boost_mu" :  ["boost_sig_mu", "boost_wjetcr_mu", "boost_topcr_mu"]
        } 
    },
    "Wjets_HT" :
     { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_Wjets_HT"],
        "phase_spaces" : {
            "res_ele" :  ["res_sig_ele", "res_wjetcr_ele", "res_topcr_ele"],
            "res_mu" :    ["res_sig_mu", "res_wjetcr_mu", "res_topcr_mu"],
            "boost_ele" : ["boost_sig_ele", "boost_wjetcr_ele", "boost_topcr_ele"],
            "boost_mu" :  ["boost_sig_mu", "boost_wjetcr_mu", "boost_topcr_mu"]
        } 
    },
    # "VBS":{
    #     "nuisances" : ['VBS_PhytiaToHerwig'],
    #     "phase_spaces":{}
    # }
}
