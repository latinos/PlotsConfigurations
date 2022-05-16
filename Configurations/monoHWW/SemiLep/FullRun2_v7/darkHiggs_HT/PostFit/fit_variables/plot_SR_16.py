handle = open('plot.py', 'r')
exec(handle)
handle.close()

groupPlot['Wjets']['samples'] = ['Wjets']
del plot['VBF-V']
legend['lumi'] = '35.9 fb^{-1}'
