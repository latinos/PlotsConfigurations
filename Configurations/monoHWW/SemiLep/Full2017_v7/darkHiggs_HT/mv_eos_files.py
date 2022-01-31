import sys
import os

base = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017'
nuis_list = ['ElepT', 'MupT', 'MET', 'JER', 'JES']
var_list = ['up', 'do']


for nuis in nuis_list:
    print('nuisance: '+nuis)
    for var in var_list:
        print('- var: '+var)
        org_dir = base+'_'+nuis+var
        test_dir = org_dir + '_TEST'
        
        if not os.path.isdir(test_dir): 
            print('no TEST dir for '+nuis+', '+var+' -> skipping')
            continue
        if not os.path.isdir(org_dir): raise ValueError('"'+org_dir+'" does not exist')
        #if not os.path.isdir(new_dir): os.mkdir(new_dir)

        all_files = os.listdir(test_dir)
        for fil in all_files:
            #print(fil)
            #if not sample in fil: continue
            if not fil.endswith('.root'): continue
            if not fil.startswith('nanoLatino_'): continue

            sample = fil.replace('nanoLatino_', '').split('__')[0]
            #print(sample)
            new_dir = org_dir + '/old_'+sample
            if not os.path.isdir(new_dir): os.mkdir(new_dir)

            print('-- '+fil)
            
            # mv orginal to new dir
            #os.system('mv '+org_dir+'/'+fil+' '+new_dir+'/.')

            # mv new file to org dir
            os.system('mv '+test_dir+'/'+fil+' '+org_dir+'/.')
