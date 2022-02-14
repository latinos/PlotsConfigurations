handle = open('aliases.py', 'r')
exec(handle)
handle.close()

alias_keys = aliases.keys()
for key in alias_keys:
    if key.startswith('FW_mu'):
        new_key = key.replace('FW_mu', 'FW_HT_mu')
        aliases[new_key] = copy.deepcopy(aliases[key])

        # Change FR path
        if 'args' in aliases[new_key]:
            for idx,arg in enumerate(aliases[new_key]['args']):
                if isinstance(arg, str) and '2HDMa/FR_NLOWjet' in arg:
                     
                    #aliases[new_key]['args'][idx] = arg.replace('2HDMa/FR_NLOWjet', 'FR_HT/FR_HT') # does not work for tuples
                    tmp_list = list(aliases[new_key]['args'])
                    tmp_list[idx] = arg.replace('2HDMa/FR_NLOWjet', 'FR_HT/FR_HT')
                    aliases[new_key]['args'] = tuple(tmp_list)

        # Change expr
        if 'expr' in aliases[new_key]:
            aliases[new_key]['expr'] = aliases[key]['expr'].replace('FW_mu', 'FW_HT_mu')

        # Change sample
        if 'samples' in aliases[new_key]:
            aliases[new_key]['samples'] = ['FAKE_HT']

        ## Show diff
        #print(aliases[key])
        #print(aliases[new_key])

