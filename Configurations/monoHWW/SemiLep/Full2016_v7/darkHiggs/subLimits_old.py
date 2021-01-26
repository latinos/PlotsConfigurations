import os
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str, dest = 'cfg', help = 'Input configuration file')
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', default='newBDT_Ada13Var', help = 'Variable to combine with CR\'s')
parser.add_argument('--combine-dir', action = 'store', type = str, dest = 'cmbDir', default='/afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src', help = 'Combine dir for the job')
parser.add_argument('-q',  '--queue', help='Job queue', default='longlunch', type=str)
parser.add_argument('-n',  '--dry-run', action = 'store_true', help='Do not submit')

args = parser.parse_args()

execfile(args.cfg)

comb_dir_name = 'InCh_Combi'
combi_path = outputDirDatacard+'/'+comb_dir_name
combi_var_path = combi_path + '/' + args.var
if not os.path.isdir(combi_path): os.system('mkdir '+combi_path)
if not os.path.isdir(combi_var_path): os.system('mkdir '+combi_var_path)
if not os.path.isdir(combi_var_path+'/shapes'): os.system('mkdir '+combi_var_path+'/shapes')

#os.system('cp '+outputDirDatacard+'/InCh_TCR/Events/shapes/* '+combi_var_path+'/shapes/.')
#os.system('cp '+outputDirDatacard+'/InCh_SB/Events/shapes/* '+combi_var_path+'/shapes/.')
#os.system('cp '+outputDirDatacard+'/InCh_SR/'+args.var+'/shapes/* '+combi_var_path+'/shapes/.')


print('Collect combine commands')
comb_card_cmd = ''
run_limit_cmd = ''
for fil in os.listdir(outputDirDatacard+'/InCh_SR/'+args.var):
    if not fil.startswith('datacard') : continue
    if not fil.endswith('.txt'): continue
    if not '_' in fil: continue
    print(' - Combining '+fil.replace('.txt', ''))
    #SR_path = outputDirDatacard+'/InCh_SR/'+args.var+'/'+fil
    #TCR_path = outputDirDatacard+'/InCh_TCR/Events/'+fil
    #SB_path = outputDirDatacard+'/InCh_TCR/Events/'+fil
    #comb_path = combi_var_path+'/'+fil.replace('.txt', '_comb.txt')
    SR_path  = 'InCh_SR/'+args.var+'/'+fil
    TCR_path = 'InCh_TCR/Events/'+fil
    SB_path  = 'InCh_TCR/Events/'+fil
    mass_point = fil.replace('.txt', '').replace('datacard_', '')
    comb_file = fil.replace('.txt', '_comb.txt')
    comb_path = comb_dir_name+'/'+ args.var+'/'+comb_file

    if not os.path.isfile(outputDirDatacard +'/'+ SR_path): 
        print('Warning: "'+SR_path+'" does not exist, skipped!')
        continue
    if not os.path.isfile(outputDirDatacard +'/'+SB_path): 
        print('Warning: "'+SB_path+'" does not exist, skipped!')
        continue
    if not os.path.isfile(outputDirDatacard +'/'+TCR_path): 
        print('Warning: "'+TCR_path+'" does not exist, skipped!')
        continue

    #comb_card_cmd += 'combineCards.py ../../'+SR_path+' ../../'+TCR_path+' ../../'+SB_path+' > '+comb_path + '\n'
    comb_card_cmd += 'combineCards.py ../../'+SR_path+' ../../'+TCR_path+' ../../'+SB_path+' > '+comb_file + '\n'
    run_limit_cmd += '\necho "####----------------- Starting mass point: '+mass_point+' -----------------####"\n'
    run_limit_cmd += 'combine -M AsymptoticLimits --run blind '+comb_file+' -n '+mass_point+'\n' 



print('Write run commands')
exec_file = outputDirDatacard+'/runCombi.sh'
o_file = open(exec_file, 'w')

o_file.write('#!/bin/bash\n')
o_file.write('cd '+args.cmbDir+'\n')
o_file.write('eval `scramv1 runtime -sh`\n')
o_file.write('cd '+os.getcwd()+'/'+outputDirDatacard+'\n')
o_file.write('echo "Changing dir to '+combi_var_path+'"\n')
o_file.write('cd '+comb_dir_name+'/'+args.var+'\n')
o_file.write('\n')

o_file.write('echo "Running combineCards"\n')
o_file.write(comb_card_cmd)
o_file.write('\n')
o_file.write('ls -l\n')
o_file.write('\n')
o_file.write('echo "Running combine"\n')
o_file.write(run_limit_cmd)
o_file.close()

os.system('chmod +x '+exec_file)

print('Write jds')
jds_file = outputDirDatacard+'/run.jds'
o_file = open(jds_file, 'w')

o_file.write('universe              = vanilla\n')
o_file.write('executable            = '+os.getcwd()+'/'+exec_file+'\n')
o_file.write('output                = '+os.getcwd()+'/'+jds_file.replace('.jds','.out')+'\n')
o_file.write('error                 = '+os.getcwd()+'/'+jds_file.replace('.jds','.err')+'\n')
o_file.write('log                   = '+os.getcwd()+'/'+jds_file.replace('.jds','.log')+'\n')
o_file.write('RequestCpus           = 1\n')
o_file.write('+JobFlavour           = "'+args.queue+'"\n')
o_file.write('queue\n')
o_file.close()

if not args.dry_run:
    print('Submit job')
    os.system('condor_submit '+jds_file)
