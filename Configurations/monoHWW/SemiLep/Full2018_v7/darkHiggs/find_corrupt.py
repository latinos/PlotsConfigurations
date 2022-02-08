import os

job_dir = '../../../../../../job/'
cfg_dirs = [
    'mkShapes__darkHiggs_lim_2016v7__ALL/',
    'mkShapes__darkHiggs_lim_2017v7__ALL/',
    'mkShapes__darkHiggs_lim_2018v7__ALL/',
]

print('Looking for corrupt files: ')
corrupt_files = []
for cfg in cfg_dirs:
    work_dir = job_dir + cfg
    for diry in os.listdir(work_dir):
        curr_dir = work_dir + diry
        if not os.path.isdir(curr_dir): continue
        for fil in os.listdir(curr_dir):
            if not fil.endswith('.jid'): continue
            err_file = curr_dir + '/' + fil.replace('.jid', '.err')
            o_file = open(err_file, 'r')
            lines = o_file.readlines()
            o_file.close()
            for line in lines:
                if 'RuntimeError: File ' in line and '.root doesn\'t exist' in line:
                    corrupt_file = line.replace('RuntimeError: File ','').replace(' doesn\'t exist', '').replace('\n', '')
                    if not corrupt_file in corrupt_files:
                        corrupt_files.append(corrupt_file)
                        print(corrupt_file)
                    break


iihe_base   = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'
lxplus_base = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'


#print('Start copying: ')
#os.system('export `ssh-agent`')
#os.system('ssh-add ~/.ssh/id_rsa')
#for fil in corrupt_files:
#    print(' -- '+fil)
#    corr_file = fil
#    cure_file = fil.replace(lxplus_base, iihe_base)
#    os.system('scp svanputt@m7.iihe.ac.be:'+cure_file+' '+corr_file)
