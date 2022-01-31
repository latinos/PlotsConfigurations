handle = open('samples.py', 'r')
exec(handle)
handle.close()

samples['WjetsMjj'] = copy.deepcopy(samples['Wjets'])
samples['WjetsMjj']['weight'] = mcCommonWeight + '*EWKnloW[0]*kfact[0]*kfactMjj[0]'
