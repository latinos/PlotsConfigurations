import os
missing = [
    'darkHiggs_mhs_200_mx_100_mZp_300.4',
    'darkHiggs_mhs_160_mx_100_mZp_300.3',
    'darkHiggs_mhs_200_mx_100_mZp_400.3',
    'darkHiggs_mhs_160_mx_150_mZp_295.2',
    'darkHiggs_mhs_200_mx_200_mZp_800.2',
    'darkHiggs_mhs_180_mx_150_mZp_400.3',
    'darkHiggs_mhs_200_mx_150_mZp_800.4',
    'darkHiggs_mhs_200_mx_100_mZp_200.4',
    'darkHiggs_mhs_180_mx_200_mZp_500.3',
    'darkHiggs_mhs_160_mx_150_mZp_500.3',
    'darkHiggs_mhs_180_mx_200_mZp_800.2',
    'darkHiggs_mhs_180_mx_100_mZp_800.1',
    'Wjets.59',
    'darkHiggs_mhs_180_mx_200_mZp_300.3',
    'darkHiggs_mhs_200_mx_100_mZp_1500.1',
    'top.6',
    'darkHiggs_mhs_160_mx_150_mZp_400.2',
    'darkHiggs_mhs_200_mx_150_mZp_1200.4',
    'darkHiggs_mhs_200_mx_200_mZp_400.4',
    'darkHiggs_mhs_200_mx_150_mZp_295.2',
    'darkHiggs_mhs_160_mx_150_mZp_400.1',
    'darkHiggs_mhs_200_mx_200_mZp_400.1',
    'darkHiggs_mhs_200_mx_150_mZp_500.2',
    'darkHiggs_mhs_180_mx_200_mZp_295.1',
    'darkHiggs_mhs_200_mx_150_mZp_1200.1',
    'darkHiggs_mhs_180_mx_150_mZp_200.1',
    'darkHiggs_mhs_180_mx_100_mZp_200.2',
    'darkHiggs_mhs_200_mx_100_mZp_1200.0',
    'Wjets.61',
    'darkHiggs_mhs_180_mx_200_mZp_400.3',
    'darkHiggs_mhs_200_mx_150_mZp_800.1',
    'darkHiggs_mhs_180_mx_150_mZp_300.0',
    'darkHiggs_mhs_160_mx_150_mZp_1000.0',
    'Higgs.19',
    'Wjets.41',
]

job_dir = '../../../../../../job/mkShapes__darkHiggs_inv_2017v7__ALL/'

prefix = 'mkShapes__darkHiggs_inv_2017v7__ALL__'

for mis in missing:
    diry = job_dir + mis + '/'
    jid  = prefix + mis + '.jid'
    os.system('touch '+diry+jid)
