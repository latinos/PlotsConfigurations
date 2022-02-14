handle = open('nuisances_full_fast.py', 'r')
exec(handle)
handle.close()

nuisances['stat'] = {
    'type'   : 'shape',
    'samples': {},
}
#samps_to_do = mc + ['FAKE']
samps_to_do = ['Wjets', 'top', 'FAKE']
for skey in samps_to_do:
    nuisances['stat']['samples'][skey] = {
        'typeStat' : 'bbb',
    }

