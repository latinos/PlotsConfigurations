handle = open('samples_fast.py', 'r')
exec(handle)
handle.close()

samples['total_postfit_s'] = samples['darkHiggs_mhs_160_mx_100_mZp_500']
samples['total_postfit_b'] = samples['darkHiggs_mhs_160_mx_100_mZp_500']
samples['total_prefit']    = samples['darkHiggs_mhs_160_mx_100_mZp_500']
