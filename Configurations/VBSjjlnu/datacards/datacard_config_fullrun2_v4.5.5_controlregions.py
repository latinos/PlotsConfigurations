import json

variables = {
  'res': [
    'DNNoutput_res_v1',
  #  'fit_bins_res','w_lep_pt','deltaeta_vbs',
  #   'mjj_vbs','nJets_res','vbs_1_pt_res','vbs_1_pt_res_morebins',
  #   'nJets_res','Zlep','vbs_0_pt'
    
  ],
  'boost': [
     'DNNoutput_boost',
    #  'fit_bins_boost','w_lep_pt','deltaeta_vbs','vbs_1_pt_boost',
    # 'mjj_vbs','nJets_boost','Zlep','vbs_0_pt'
  ]
}

output_split = []
output_joint = []

for cat, vars in variables.items():
  for var in vars:
    output_joint.append( {
      "datacard_name": "run2_{}_{}_wjetcr".format(cat, var),
      "folders": [
        {
          "basedir": "Full2016v7/datacards_fit_v4.5_2016_Dipole_split_v6", 
          "name": 2016
        },
        {
          "basedir": "Full2017v7/datacards_fit_v4.5_2017_Dipole_split_v5", 
          "name": 2017
        },
        {
          "basedir": "Full2018v7/datacards_fit_v4.5_2018_Dipole_split_v5", 
          "name": 2018
        }
      ], 
      "phase_spaces": [
        {
          "name": "wjetcr_{}_mu".format(cat),
          "var": var, 
          "cut": "{}_wjetcr_mu".format(cat)
        },
         {
          "name": "wjetcr_{}_ele".format(cat),
          "var": var, 
          "cut": "{}_wjetcr_ele".format(cat)
        },
      ]
    })
    output_joint.append( {
      "datacard_name": "run2_{}_{}_topcr".format(cat, var),
      "folders": [
        {
          "basedir": "Full2016v7/datacards_fit_v4.5_2016_Dipole_split_v6", 
          "name": 2016
        },
        {
          "basedir": "Full2017v7/datacards_fit_v4.5_2017_Dipole_split_v5", 
          "name": 2017
        },
        {
          "basedir": "Full2018v7/datacards_fit_v4.5_2018_Dipole_split_v5", 
          "name": 2018
        }
      ], 
      "phase_spaces": [
        {
          "name": "topcr_{}_mu".format(cat),
          "var": var, 
          "cut": "{}_topcr_mu".format(cat)
        },
         {
          "name": "topcr_{}_ele".format(cat),
          "var": var, 
          "cut": "{}_topcr_ele".format(cat)
        },
      ]
    })
    for y,d in zip([2016,2017,2018],["Full2016v7/datacards_fit_v4.5_2016_Dipole_split_v6",
                                     "Full2017v7/datacards_fit_v4.5_2017_Dipole_split_v5", 
                                     "Full2018v7/datacards_fit_v4.5_2018_Dipole_split_v5"] ):
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

output_split += output_joint
 
json.dump(output_split, open("datacard_config_fullrun2_v4.5.5_controlregions.json","w"), indent=2)
# json.dump(output_joint, open("datacard_config_fullrun2_v4.5.5_5_controlregions.json","w"), indent=2)