import json

variables = {
}

for ib in range(1,7):
  variables['bin'+str(ib)] =  [
    'DNNoutput_res_v1', 'w_lep_pt','deltaeta_vbs',
    'vbs_1_pt_res','vbs_1_pt_res_lessbins',  'fit_bins_res'  
  ]

output_split = []
# output_joint = []

for cat, vars in variables.items():
  for var in vars:
    for fl in ["mu"]:
      output_split.append( {
      "datacard_name": "2018_{}_{}_{}".format(cat, fl, var),
      "folders": [
        {
          "basedir": "Full2018v7/datacards_fit_v4.4_2018_testwlepbins_v1",
          "name": 2018
        }
      ], 
      "phase_spaces": [
        {
          "name": "wjetcr_{}_{}".format(cat,fl),
          "var": var, 
          "cut": "res_wjetcr_{}_{}".format(fl,cat)
        }
      ]
    })


 
json.dump(output_split, open("datacard_config_fullrun2_v4.4_testwlepbins.json","w"), indent=2)
# json.dump(output_joint, open("datacard_config_fullrun2_v4.4_allvars_joint.json","w"), indent=2)