import json

variables = {
  'res': [
    'DNNoutput_res_v1',
   'fit_bins_res','w_lep_pt','deltaeta_vbs',
    'mjj_vbs','nJets_res','vbs_1_pt_res','vbs_1_pt_res_morebins',
    'nJets_res','Zlep','vbs_0_pt'
    
  ],
  'boost': [
     'DNNoutput_boost',
     'fit_bins_boost','w_lep_pt','deltaeta_vbs','vbs_1_pt_boost',
    'mjj_vbs','nJets_boost','Zlep','vbs_0_pt'
  ]
}

output_split = []
# output_joint = []

for cat, vars in variables.items():
  for var in vars:
    for y,d in zip([2016,2017,2018],["Full2016v7/datacards_fit_v4.5_2016_noDipole_v1",
                                    "Full2017v7/datacards_fit_v4.5_2017_noDipole_v1", 
                                    "Full2018v7/datacards_fit_v4.5_2018_noDipole_v1"] ):
      for fl in ["ele","mu"]:
        output_split.append( {
          "datacard_name": "{}_{}_{}_{}_wjetcr".format(y, cat, fl, var),
          "folders": [
            {
              "basedir": d,
              "name": y
            }
          ], 
          "phase_spaces": [
            {
              "name": "wjetcr_{}_{}".format(cat,fl),
              "var": var, 
              "cut": "{}_wjetcr_{}".format(cat,fl)
            }
            ]
        })
        output_split.append( {
          "datacard_name": "{}_{}_{}_{}_topcr".format(y, cat, fl, var),
          "folders": [
            {
              "basedir": d,
              "name": y
            }
          ], 
          "phase_spaces": [
            {
              "name": "topcr_{}_{}".format(cat,fl),
              "var": var, 
              "cut": "{}_topcr_{}".format(cat,fl)
            }
            ]
        })


 
json.dump(output_split, open("datacard_config_fullrun2_v4.5_allvars_controlregions.json","w"), indent=2)
# json.dump(output_joint, open("datacard_config_fullrun2_v4.4_allvars_joint.json","w"), indent=2)