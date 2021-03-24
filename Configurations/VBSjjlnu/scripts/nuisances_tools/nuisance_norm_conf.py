config = {
    "top" :
     { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_top","CMS_PU_2016"],
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

wjets_bins = {'res':[], 'boost':[]}
for ir in range(1,11):
    wjets_bins['res'].append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins['boost'].append("Wjets_HT_boost_"+str(ir))

for wj_res in wjets_bins['res']:
    config[wj_res] = { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_Wjets_HT","CMS_PU_2016"],
        "phase_spaces" : {
            "res_ele" :  ["res_sig_ele", "res_wjetcr_ele", "res_topcr_ele"],
            "res_mu" : ["res_sig_mu", "res_wjetcr_mu", "res_topcr_mu"]
        }
    }


for wj_boost in wjets_bins['boost']:
    config[wj_boost] = { 
        "nuisances" : [ "CMS_PS_FSR","CMS_PS_ISR","QCDscale_Wjets_HT","CMS_PU_2016"],
        "phase_spaces" : {
            "boost_ele" : ["boost_sig_ele", "boost_wjetcr_ele", "boost_topcr_ele"],
            "boost_mu" :["boost_sig_mu", "boost_wjetcr_mu", "boost_topcr_mu"]
        }
    }


# For VBSpythia2Herwig
# for cut in ["res_sig_ele", "res_wjetcr_ele", "res_topcr_ele","res_sig_mu", "res_wjetcr_mu", "res_topcr_mu",
#             "boost_sig_ele", "boost_wjetcr_ele", "boost_topcr_ele","boost_sig_mu", "boost_wjetcr_mu", "boost_topcr_mu"]:
#     if 'res' in cut:
#         config["VBS"]["phase_spaces"][cut] = {
#             "vars": ["DNNoutput_res_bins2", "fit_bins_res", "events","w_lep_pt","deltaeta_vbs","mjj_vjet",'mjj_vbs_res','nJets','vjet_0_qgl_res'],
#             'cuts':[cut]
#         }
#     if 'boost' in cut:
#         config["VBS"]["phase_spaces"][cut] = {
#             "vars": ["DNNoutput_boost_bins2", "fit_bins_boost", "events","w_lep_pt","whad_pt_boost","deltaeta_vbs","mjj_vjet",'mjj_vbs_boost','nJets','vbs_0_qgl_boost'],
#             'cuts':[cut]
#         }