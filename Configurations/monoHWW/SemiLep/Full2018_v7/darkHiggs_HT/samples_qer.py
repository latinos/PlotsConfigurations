handle = open('samples.py', 'r')
exec(handle)
handle.close()


########### FAKE ###########

Mu_jetEt = 35
El_jetEt = 35
fakeWht = 'FW_HT_mu'+str(Mu_jetEt)+ '_el'+str(El_jetEt)+'[0]'
samples['FAKE_HT'] = {
  'name': [],
  'weight': 'METFilter_DATA*'+fakeWht,
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 20,
  #'suppressNegative':['all'],
  #'suppressNegativeNuisances' :['all'],
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
    samples['FAKE_HT']['name'].extend(files)
    samples['FAKE_HT']['weights'].extend([DataTrig[pd]] * len(files))
