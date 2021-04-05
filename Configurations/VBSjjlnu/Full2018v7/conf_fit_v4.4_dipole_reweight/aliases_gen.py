import os
import copy
import inspect

configurations = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/"
conf_folder = configurations +"/VBSjjlnu/Full2018v7"

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

####################

aliases['XSWeight_OTF'] ={
    'expr': 'baseW * genWeight',
}

aliases['gen_analysis'] = {
    'class': 'ReweightGenLevelFit',
    'args': ('/afs/cern.ch/work/d/dvalsecc/private/CMSSW_11_1_4/src/PlotsConfigurations/Configurations/VBSjjlnu/GenComparison/pythia_dipole_reweight/total_step2_mjjvbstotfit.root',
            False),
    'linesToAdd': [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
            '.L {}/VBSjjlnu/macros/reweight_genlevel_fit.cc+'.format(configurations)
    ],
    'samples': ["VBS","VBS_noZLL","VBS_dipoleRecoil","VBS_noZLL_dipoleRecoil"]
}

aliases['n_gen_lep'] = {
    'expr': 'Alt$(gen_analysis[0],0)',
    'samples': ["VBS","VBS_noZLL","VBS_dipoleRecoil","VBS_noZLL_dipoleRecoil"]
}

aliases['n_gen_jets'] = {
    'expr': 'Alt$(gen_analysis[1],-1)',
    'samples': ["VBS","VBS_noZLL","VBS_dipoleRecoil","VBS_noZLL_dipoleRecoil"]
}
aliases['gen_vbspttot'] = {
    'expr': 'Alt$(gen_analysis[2],-1)',
    'samples': ["VBS","VBS_noZLL","VBS_dipoleRecoil","VBS_noZLL_dipoleRecoil"]
}
aliases['gen_detajj'] = {
    'expr': 'Alt$(gen_analysis[3],-1)',
    'samples': ["VBS","VBS_noZLL","VBS_dipoleRecoil","VBS_noZLL_dipoleRecoil"]
}
aliases['gen_mjj'] = {
    'expr': 'Alt$(gen_analysis[4],-1)',
    'samples': ["VBS","VBS_noZLL","VBS_dipoleRecoil","VBS_noZLL_dipoleRecoil"]
}

aliases['gen_weight_dipole'] = {
    'expr': 'Alt$(gen_analysis[5],1.)',
    'samples': ["VBS","VBS_noZLL","VBS_dipoleRecoil","VBS_noZLL_dipoleRecoil"]
}

