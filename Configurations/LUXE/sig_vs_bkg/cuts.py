# cuts
supercut = '1'

# ### All events
# cuts['luxe_all_BSM_detector_pos']  = 'detid == 9000'
# cuts['luxe_all_physical_dump_pos'] = 'detid == 88000'


# ### Only events with non-zero x
# cuts['luxe_x_non_0_BSM_detector_pos']  = 'x != 0 && detid == 9000'
# cuts['luxe_x_non_0_physical_dump_pos'] = 'x != 0 && detid == 88000'


# ### All photons
# cuts['luxe_photons_BSM_detector_pos']  = 'detid == 9000  && abs(pdg) == 22'
# cuts['luxe_photons_physical_dump_pos'] = 'detid == 88000 && abs(pdg) == 22'


### Primary photons
# Using track ID
cuts['luxe_primary_photons_BSM_detector_pos']  = 'detid == 9000  && abs(pdg) == 22 && trackid = 1'
cuts['luxe_primary_photons_physical_dump_pos'] = 'detid == 88000 && abs(pdg) == 22 && trackid == 1'

# # Using ptrack ID
# cuts['luxe_ptrackprimary_photons_BSM_detector_pos']  = 'detid == 9000  && abs(pdg) == 22 && ptrackid = 1'
# cuts['luxe_ptrackprimary_photons_physical_dump_pos'] = 'detid == 88000 && abs(pdg) == 22 && ptrackid == 1'
