### This file specifies how the merging of salples and/or categories should be performed.
### It may contain one or both the lists "categories_to_merge" and "processes to merge".
### Each one is a list of dicts as in the examples below. "new_name" is the name that
### will be given to the merged procs/cats. "old_names" is a list of procs/cats to be
### merged toghether. Note that these have to exactly correspond to the ones found in the
### input workspace.

categories_to_merge = [{'new_name' : 'vbf-like',
                          'old_names' : ['vbf_cut1']},
                        {'new_name' : 'top-like',    
                          'old_names' : ['vbf_cut2']},
                        {'new_name' : 'ww-like',    
                          'old_names' : ['vbf_cut3']},
                        {'new_name' : 'ggh-like',    
                          'old_names' : ['vbf_cut4']} ]

processes_to_merge = [{'new_name' : 'DY',
                        'old_names' : ['DY', 'Dyemb']},

                      {'new_name' : 'VgS',
                        'old_names' : ['VgS_L', 'VgS_H']},

                      {'new_name' : 'ggH',
                        'old_names' : ['ggH_hww', 'ggH_htt']},

                      {'new_name' : 'VH',
                        'old_names' : ['ZH_hww','ZH_htt','ggZH_hww','WH_hww', 'WH_htt']},

                      {'new_name' : 'qqH',
                        'old_names' : ['qqH_hww', 'qqH_htt']},
                      
                      {'new_name' : 'WW',
                        'old_names' : ['WW', 'WWewk', 'ggWW']},

                      {'new_name' : 'Nonpropt',
                        'old_names' : ['Fake_em', 'Fake_me']} ]

