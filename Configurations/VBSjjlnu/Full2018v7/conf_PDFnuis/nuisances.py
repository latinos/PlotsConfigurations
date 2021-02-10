# nuisances
# # # name of samples here must match keys in samples.py 

mc =["DY", "top",  "Wjets_HT", "VV", "VVV", "VBF-V", "Vg", "VgS", "VBS", "ggWW"]
# mc_norm = [m for m in mc if m not in ["VBS", "VV"]]
# mc_sep =  ["VBS", "VV"]

def getSamplesWithout(samples, samples_to_remove):
    return [m for m in samples if m not in samples_to_remove]

phase_spaces_boost = [ c for c in cuts if 'boost' in c]
phase_spaces_res = [ c for c in cuts if 'res' in c]

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


# # ################################ EXPERIMENTAL UNCERTAINTIES  #################################

# # #### Luminosity

# ######################
# # Theory nuisance
for i in range(0,103):
    nuisances['pdf_weight_'+str(i)] = {
        'name'  : 'pdf_weight_'+str(i),
        'kind'  : 'weight',
        'OneSided': True,
        'type'  : 'shape',
        'samples' :  dict(( skey, ['Alt$(LHEPdfWeight['+str(i)+'], 1.)']) for skey in mc )
    }

# #
# # PS and UE
# # #


# # ## Use the following if you want to apply the automatic combine MC stat nuisances.
# nuisances['stat']  = {
#               'type'  : 'auto',
#               'maxPoiss'  : '10',
#               'includeSignal'  : '1',
#               #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
#               #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
#               'samples' : {}
#              }



for n in nuisances.values():
    n['skipCMS'] = 1

   
print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))



# nuisances = { k:v for k,v in nuisances.items() if k in ['fake_syst','fake_ele','fake_ele_stat','fake_mu','fake_mu_stat',
#                                                     'eff_e','eff_m','electronpt_0','muonpt_0','electronpt_1','muonpt_1' ] }