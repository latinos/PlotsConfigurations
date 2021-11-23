import json

variables = [
  'vbs_0_eta',"vbs_1_eta","vjet_0_eta","vjet_1_eta"
]

cuts = ["res_sig_ele","res_sig_mu","res_wjetcr_ele","res_wjetcr_mu","res_topcr_ele","res_topcr_mu"]

output_split = []

for var in variables:
  for cut in cuts:
    output_split.append( {
      "datacard_name": "2017_{}_{}".format(cut, var),
      "folders": [
        {
          "basedir": "Full2017v7/datacards_fit_v4.5_2017_etajets_Dipole_v2.2", 
          "name": 2017
        }
      ], 
      "phase_spaces": [
        {
          "name": cut + "_etajets",
          "var": var, 
          "cut": cut
        },
      ]
    })
      

json.dump(output_split, open("datacard_config_2017_v4.5.2_checketa.json","w"), indent=2)
