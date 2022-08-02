import json

variables = {
  'res': [
    'DNNoutput_res_v1',
  #  'fit_bins_res','w_lep_pt','deltaeta_vbs','mjj_vjet_res',
  #   'mjj_vbs','nJets_res','Zlep','vbs_0_pt','vbs_1_pt_res',
  #   'vjet_0_pt','vjet_1_pt','Zvjets_0','deltaphi_vbs',
  #   'vbs_0_qgl_res','vjet_0_qgl_res','vjet_1_qgl_res',
  #   'Lepton_eta','Lepton_pt','Centr_ww','deltaeta_vjet'
  ],
  'boost': [
    'DNNoutput_boost',
    #  'fit_bins_boost','w_lep_pt','deltaeta_vbs','mjj_vjet_boost',
    # 'mjj_vbs','nJets_boost','Zlep','vbs_0_pt','vbs_1_pt_boost',
    # 'Zvjets_0','deltaphi_vbs',
    # 'vbs_0_qgl_boost', 'whad_pt_boost',
    # 'Lepton_eta','Lepton_pt','Centr_ww',
  ]
}

output_split = []
output_joint = []

for cat, vars in variables.items():
  for var in vars:
    if "DNN" in var: 
      output_joint.append( {
        "datacard_name": "run2_{}_{}".format(cat, var),
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
            "name": "{}_sig_mu".format(cat),
            "var": var, 
            "cut": "{}_sig_mu".format(cat)
          },
          {
            "name": "{}_sig_ele".format(cat),
            "var": var, 
            "cut": "{}_sig_ele".format(cat)
          },
        ]
      })
      for y,d in zip([2016,2017,2018],["Full2016v7/datacards_fit_v4.5_2016_Dipole_split_v6",
                                      "Full2017v7/datacards_fit_v4.5_2017_Dipole_split_v5", 
                                      "Full2018v7/datacards_fit_v4.5_2018_Dipole_split_v5"] ):
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
              "name": "{}_sig_{}".format(cat,fl),
              "var": var, 
              "cut": "{}_sig_{}".format(cat,fl)
            }
          ]
        })
    #################
    else:
      # If not DNN change the name of the channels to avoid problems with the MC stat parameters
      output_joint.append( {
        "datacard_name": "run2_{}_{}".format(cat, var),
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
            "name": "{}_sig_mu_var".format(cat),
            "var": var, 
            "cut": "{}_sig_mu".format(cat)
          },
          {
            "name": "{}_sig_ele_var".format(cat),
            "var": var, 
            "cut": "{}_sig_ele".format(cat)
          },
        ]
      })
      for y,d in zip([2016,2017,2018],["Full2016v7/datacards_fit_v4.5_2016_Dipole_split_v6",
                                      "Full2017v7/datacards_fit_v4.5_2017_Dipole_split_v5", 
                                      "Full2018v7/datacards_fit_v4.5_2018_Dipole_split_v5"] ):
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
              "name": "{}_sig_{}_var".format(cat,fl),
              "var": var, 
              "cut": "{}_sig_{}".format(cat,fl)
            }
          ]
        })


 
json.dump(output_split, open("datacard_config_fullrun2_v4.5.5_split.json","w"), indent=2)
json.dump(output_joint, open("datacard_config_fullrun2_v4.5.5_joint.json","w"), indent=2)
