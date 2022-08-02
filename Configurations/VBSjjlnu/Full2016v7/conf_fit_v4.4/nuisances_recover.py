# # nuisances
from pprint import pprint
# # name of samples here must match keys in samples.py 
mc =["DY", "top",  "Wjets_HT", "VV", "VVV", "Vg", "VgS", "VBS", "VBF-V", "ggWW"]
#mc_norm = [m for m in mc if m not in ["VBS", "VV"]]
#mc_sep =  ["VBS", "VV"]
phasespaces = ["res_wjetcr_ele","res_wjetcr_mu" ,"boost_wjetcr_ele" ,"boost_wjetcr_mu",
        "res_topcr_ele","res_topcr_mu" ,"boost_topcr_ele" ,"boost_topcr_mu",
        "res_sig_ele","res_sig_mu" ,"boost_sig_ele" ,"boost_sig_mu" ]


def getSamplesWithout(samples, samples_to_remove):
    return [m for m in samples if m not in samples_to_remove]

phase_spaces_boost = [ c for c in phasespaces if 'boost' in c]
phase_spaces_res = [ c for c in phasespaces if 'res' in c]

phase_spaces_res_ele = [ c for c in phase_spaces_res if 'ele' in c]
phase_spaces_res_mu = [ c for c in phase_spaces_res if 'mu' in c]
phase_spaces_boost_ele = [ c for c in phase_spaces_boost if 'ele' in c]
phase_spaces_boost_mu =  [ c for c in phase_spaces_boost if 'mu' in c]

phase_spaces_tot_ele = phase_spaces_res_ele + phase_spaces_boost_ele
phase_spaces_tot_mu = phase_spaces_res_mu + phase_spaces_boost_mu
phase_spaces_tot_res = phase_spaces_res_ele + phase_spaces_res_mu
phase_spaces_tot_boost = phase_spaces_boost_ele + phase_spaces_boost_mu

phase_spaces_dict = {"boost": phase_spaces_boost, "res": phase_spaces_res}
phase_spaces_tot = phase_spaces_tot_ele + phase_spaces_tot_mu


# ##########################
# ######################
# # Theory nuisance

import json, os
VBS_pdf_factors = json.load(open(os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2016v7/conf_fit_v4.3/pdf_normcorr_VBS.json"))
nuis_factors = json.load(open(os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2016v7/conf_fit_v4.3/nuisance_incl_norm_factors_2016.json"))

for sample in mc :
    if sample == 'VBS':
        nuisances['QCD_scale_VBS'] = {
            'name'  : 'QCDscale_VBS_accept',
            'kind'  : 'weight',
            'type'  : 'shape',
            # Normalization effect removed from 1l inclusive phase space
            'samples'  :  { "VBS": [
                                "LHEScaleWeight[0] * {}".format(nuis_factors["VBS"]["QCDscale_VBS"][0]),
                                "LHEScaleWeight[8] * {}".format(nuis_factors["VBS"]["QCDscale_VBS"][1])
                            ] }
        }
    else:
        nuisances['QCD_scale_'+sample] = {
            'name'  : 'QCDscale_'+sample,
            'kind'  : 'weight',
            'type'  : 'shape',
            'samples'  :  { sample: ["LHEScaleWeight[0]", "LHEScaleWeight[8]"] }
        }
        


nuisances['PU']  = {
                'name'  : 'CMS_PU_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    s : ['(puWeightUp/puWeight) * {}'.format(nuis_factors[s]["CMS_PU_2016"][0]),
                         '(puWeightDown/puWeight) * {}'.format(nuis_factors[s]["CMS_PU_2016"][1])] for s in mc },
                'AsLnN'      : '1',
}


######## PDF uncertainty
for s in mc:        
    if s in ["VBS", "top","Wjets_HT"]: continue 
    nuisances['pdf_weight_'+s] = {
        'name'  : 'pdf_weight_'+s,
        'kind'  : 'weight_envelope',
        'type'  : 'shape',
        'samples' :  { s: [' Alt$(LHEPdfWeight['+str(i)+'], 1.)' for i in range(0,103)]},
        'AsLnN':  '1'
    }

nuisances['pdf_weight_VBS'] = {
    'name'  : 'pdf_weight_VBS_accept',
    'kind'  : 'weight_envelope',
    'type'  : 'shape',
    'samples' :  { "VBS": [' Alt$(LHEPdfWeight['+str(i)+'], 1.) * '+ str(VBS_pdf_factors["VBS"]['pdf_weight_'+str(i)])  for i in range(0,103) ]}
}

   
print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
