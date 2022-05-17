# cuts
supercut = '1'

### All events
cuts['luxe_all_BSM_detector_pos']  = 'detid == 9000'
cuts['luxe_all_physical_dump_pos'] = 'detid == 88000'


### Only events with non-zero x
cuts['luxe_x_non_0_BSM_detector_pos'] = 'x != 0 && detid == 9000'
cuts['luxe_x_non_0_physical_dump_pos'] = 'x != 0 && detid == 88000'
