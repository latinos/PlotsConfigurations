handle = open('samples.py', 'r')
exec(handle)
handle.close()


signal_file = 'darkHiggs_central.py'
signal_file_int = 'darkHiggs_interpolation.py'
if os.path.exists(signal_file) :
    handle = open(signal_file,'r')
    exec(handle)
    handle.close()
else:
    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

for mp in signal:
    mpo = mp.replace('darkHiggs_', '')
    #mhs = mpo.split('_')[1] 
    #mx  = mpo.split('_')[3] 
    #mZp = mpo.split('_')[5] 
    ##if not 'mA_400' in mp: continue
    ##if not mhs == '160' and not mx == '100' in mp: continue
    #if not mhs == '160': continue 
    #if not mx == '100' : continue
    #if not mZp in ['500']: continue
    if not mpo in ['mhs_160_mx_100_mZp_500', 'mhs_160_mx_100_mZp_1500', 'mhs_160_mx_100_mZp_2500']: continue
    samples[mp] = copy.deepcopy(signal[mp])
