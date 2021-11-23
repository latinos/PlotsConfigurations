import json

variables = {
  'res': [
    # 'DNNoutput_res_v1'
   'fit_bins_res','w_lep_pt','deltaeta_vbs','mjj_vjet_res',
    'mjj_vbs','nJets_res','Zlep','vbs_0_pt','vbs_1_pt_res',
    'vjet_0_pt','vjet_1_pt','Zvjets_0','deltaphi_vbs',
    'vbs_0_qgl_res','vjet_0_qgl_res','vjet_1_qgl_res',
    'Lepton_eta','Lepton_pt','Centr_ww','deltaeta_vjet'
  ],
  'boost': [
    # 'DNNoutput_boost',
     'fit_bins_boost','w_lep_pt','deltaeta_vbs','mjj_vjet_boost',
    'mjj_vbs','nJets_boost','Zlep','vbs_0_pt','vbs_1_pt_boost',
    'vjet_0_pt','Zvjets_0','deltaphi_vbs',
    'vbs_0_qgl_boost',
    'Lepton_eta','Lepton_pt','Centr_ww',
  ]
}

output_split = []
output_joint = []

for cat, vars in variables.items():
  for var in vars:
    output_joint.append( {
      "datacard_name": "run2_{}_{}".format(cat, var),
      "folders": [
        {
          "basedir": "Full2016v7/datacards_fit_v4.4_2016_Pythia_v1", 
          "name": 2016
        },
        {
          "basedir": "Full2017v7/datacards_fit_v4.4_2017_Pythia_v1", 
          "name": 2017
        },
        {
          "basedir": "Full2018v7/datacards_fit_v4.4_2018_Pythia_v1", 
          "name": 2018
        }
      ], 
      "phase_spaces": [
        {
          "name": "sig_{}_mu".format(cat),
          "var": var, 
          "cut": "{}_sig_mu".format(cat)
        },
         {
          "name": "sig_{}_ele".format(cat),
          "var": var, 
          "cut": "{}_sig_ele".format(cat)
        },
      ]
    })
    for y,d in zip([2016,2017,2018],["Full2016v7/datacards_fit_v4.4_2016_Pythia_v1",
                                    "Full2017v7/datacards_fit_v4.4_2017_Pythia_v1", 
                                    "Full2018v7/datacards_fit_v4.4_2018_Pythia_v1"] ):
      for fl in ["ele","mu"]:
        output_split.append( {
        "datacard_name": "{}_{}_{}_{}".format(y, cat, fl, var),
        "folders": [
          {
            "basedir": d,
            "name": y
          }
        ], 
        "phase_spaces": [
          {
            "name": "sig_{}_{}".format(cat,fl),
            "var": var, 
            "cut": "{}_sig_{}".format(cat,fl)
          }
        ]
      })


 
json.dump(output_split, open("datacard_config_fullrun2_v4.4_allvars_split.json","w"), indent=2)
json.dump(output_joint, open("datacard_config_fullrun2_v4.4_allvars_joint.json","w"), indent=2)