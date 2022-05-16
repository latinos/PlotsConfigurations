import os
import re
import sys
import ROOT
import argparse
import threading
import subprocess
from threading import Thread

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--combine-dir', action = 'store', type = str, dest = 'cmbDir', default='/afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src', help = 'Combine dir for the job')
parser.add_argument('--masspoint'   , action = 'store', type = str, dest = 'masspoint', default='ALL', help = 'Do only this mass point, example: "mhs_160_mx_100_mZp_500"')
parser.add_argument('-q',  '--queue', help='Job queue', default='microcentury', type=str)
#parser.add_argument('--tag', action = 'store', type = str, dest = 'tag', default='', help = 'tag in datacard path: darkHiggs_lim_datacards<TAG>')
parser.add_argument('--skip-semi', action = 'store_true', help='Skip writing semi-lep cards')
parser.add_argument('--skip-full', action = 'store_true', help='Skip writing full-lep cards')
parser.add_argument('--no-cp', action = 'store_true', help='Do not cp shapes')
parser.add_argument('--un-blind', action = 'store_true', help='Unblind limits')
parser.add_argument('--skip-semi-sub', action = 'store_true', help='Skip submission of semi-lep cards')
parser.add_argument('--skip-full-sub', action = 'store_true', help='Skip submission of full-lep cards')
parser.add_argument('--skip-sub', action = 'store_true', help='Skip submission of all')
parser.add_argument('--skip-nominal', action = 'store_true', help='Skip nominal data cards')
parser.add_argument('--fix-lnN', action = 'store_true', help='Convert nessesary nuisances to lnN')
parser.add_argument('--resub', action = 'store_true', help='Resubmit missing jobs')
#parser.add_argument('-n',  '--dry-run', action = 'store_true', help='Do not submit')

args = parser.parse_args()

pwd = os.getcwd()
run2 = ['2016', '2017', '2018']

semi_lep_dirs = {
    '2016': os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2016_v7/darkHiggs_HT/darkHiggs_HT_datacards_ALL/', 
    '2017': os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/darkHiggs_HT/darkHiggs_HT_datacards_ALL/', 
    '2018': os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2018_v7/darkHiggs_HT/darkHiggs_HT_datacards_ALL/', 
}
semi_lep_regions = ['SR', 'SB', 'TCR']
semi_lep_var = 'BDT_YEARbin'
semi_lep_var_dict = {
    '2016' : {
        'SR' : 'BDT_CFineEnd10',
        'SB' : 'BDT_CFineEnd10',
        'TCR': 'BDT_CFineEnd10',
    },
    '2017' : {
        'SR' : 'BDT_CFineEnd20',
        'SB' : 'BDT_CFineEnd10',
        'TCR': 'BDT_CFineEnd10',
    },
    '2018' : {
        'SR' : 'BDT_CFineEnd20',
        'SB' : 'BDT_CFineEnd10',
        'TCR': 'BDT_CFineEnd10',
    },
}


#/eos/user/f/fernanpe/datacards_dilep_v3_added_ms_400/
#/eos/user/f/fernanpe/datacards_dilep_v2_new_ms_350/
#/eos/user/f/fernanpe/datacards_dilep
full_lep_dirs = {
    '2016': '/eos/user/f/fernanpe/datacards_dilep_v3_added_ms_400/datacards_2016/', 
    '2017': '/eos/user/f/fernanpe/datacards_dilep_v3_added_ms_400/datacards_2017/', 
    '2018': '/eos/user/f/fernanpe/datacards_dilep_v3_added_ms_400/datacards_2018/', 
}
full_lep_regions = ['SR_drll1', 'SR_drll2', 'SR_drll3', 'DYttCR', 'WWCR', 'TopCR']
#full_lep_regions = ['SR_drll1', 'SR_drll2', 'DYttCR', 'WWCR', 'TopCR']
full_lep_var = 'mllVSmtw2_YEAR'
full_lep_var_dic = {
    '2016': '0',
    '2017': '1',
    '2018': '2',
}

mhs = ['160','180','200','250','300','350','400']
mDM = ['100','150','200','300']
mZp = ['200','300','400','500','600','700','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']
#mZp = ['200']
all_mp = []
for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            mp = 'mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp
            all_mp.append(mp)

eff_mp = []
miss_mp = []
redo_mp = []
if 'ALL' in args.masspoint: eff_mp = all_mp
else: eff_mp.append(args.masspoint)


if not args.resub:
    # Check source dirs for missing points
    missing_s_input_mp = []
    missing_f_input_mp = []
    if 'ALL' in args.masspoint:
        for year in semi_lep_dirs:
            for region in semi_lep_regions:
                #var = 'Events'
                #if 'SR' in region: var = semi_lep_var.replace('YEAR', year)
                var = semi_lep_var_dict[year][region]
                region_sd = semi_lep_dirs[year] + 'InCh_'+region+'/'+var
        
                for mp in eff_mp:
                    in_card = None
                    for fil in os.listdir(region_sd):
                        if 'darkHiggs_'+mp+'.' in fil and fil.endswith('.txt'): in_card = region_sd+'/'+fil
                    if in_card is None: 
                        missing_s_input_mp.append(mp)
                        if not mp in miss_mp: miss_mp.append(mp)
        print('Semi-lep missing input cards: '+str(missing_s_input_mp))
    
        for year in full_lep_dirs:
            for region in full_lep_regions:
                var = 'events'
                region_sd = full_lep_dirs[year] + region+'_Incl/'+var
                if 'SR' in region: 
                    var = full_lep_var.replace('YEAR', full_lep_var_dic[year])
                    region_sd = full_lep_dirs[year] + 'SR_Incl_'+region.split('_')[-1]+'/'+var
                
                for mp in eff_mp:
                    in_card = None
                    for fil in os.listdir(region_sd):
                        if 'DH_'+mp+'.' in fil and fil.endswith('.txt'): in_card = region_sd+'/'+fil
                    if in_card is None: 
                        missing_f_input_mp.append(mp)
                        if not mp in miss_mp: miss_mp.append(mp)
        print('Full-lep missing input cards: '+str(missing_f_input_mp))



def corr_shapes_path(data_card, path):
    o_file = open(data_card, 'r')
    lines = o_file.readlines()
    o_file.close()

    o_file = open(data_card, 'w')
    for line in lines:
        if line.startswith('shapes') and '.root' in line:
            splt_line = line.split(' ')
            splt_line_new = []
            for bit in splt_line:
                if '.root' in bit:
                    print('## OLD BIT: '+bit)
                    new_path = path + 'shapes/'+bit.split('/')[-1]
                    print('## NEW BIT: '+new_path)
                    splt_line_new.append(new_path)
                else: splt_line_new.append(bit)
            o_file.write(' '.join(splt_line_new))
        else: o_file.write(line)
    o_file.close()

def add_ranges_bkgnorm(data_card):
    o_file = open(data_card, 'r')
    lines = o_file.readlines()
    o_file.close()

    ranges = '[0.1,10]'
    o_file = open(data_card, 'w')
    for line in lines:
        if 'rateParam' in line and not ranges in line:
            o_file.write(line.replace('1.0000', '1.0000  '+ranges))
        else: o_file.write(line)
    o_file.close()

def delete_line(data_card, match_strings):
    o_file = open(data_card, 'r')
    lines = o_file.readlines()
    o_file.close()

    o_file = open(data_card, 'w')
    for line in lines:
        delete = True
        for string in match_strings:
            if not string in line:
                delete = False
                break
        if delete: continue
        else: o_file.write(line)
    o_file.close()

def rename_nuisance(data_card, old_name, new_name, channel, process='*'):

    edit_cmd = 'nuisance edit rename '+process+' '+channel+' '+old_name+' '+new_name +' ifexists'

    o_file = open(data_card, 'a')
    o_file.write(edit_cmd+'\n')
    o_file.close()

def exec_combine_cmd(cmd, target_dir):
    #print('Executing command: '+cmd)
    cd_comb = 'cd '+args.cmbDir
    scram_ev= 'eval `scramv1 runtime -sh`'
    cd_bk = 'cd '+target_dir
    cmd_str = ';'.join([cd_comb, scram_ev, cd_bk, cmd])
    #os.system(';'.join([cd_comb, scram_ev, cd_bk, cmd]))
    proc = subprocess.Popen(cmd_str, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
    stdout, stderr = proc.communicate()
    if 'Traceback' in stderr: raise RuntimeError(stderr)
    #print('STDOUT: '+stdout)
    #print('STDERR: '+stderr)

def get_shape_file(data_card):
    path = '/'.join(data_card.split('/')[:-1])
    o_file = open(data_card, 'r')
    lines = o_file.readlines()
    o_file.close()
    
    shape_line = None
    for line in lines: 
        if 'shapes' in line and '.root' in line: shape_line = line
    if shape_line is None: print('Shapes line not found in "'+data_card+'"')

    root_path = None
    for bit in shape_line.split(' '):
        if '.root' in bit: root_path = path + '/'+bit

    return root_path

def change_shape_2_lnN(r_file, data_card, nuisances):
    path = '/'.join(data_card.split('/')[:-1])
    o_file = open(data_card, 'r')
    lines = o_file.readlines()
    o_file.close()

    proc_line  = None
    shape_line = None
    for line in lines: 
        if 'shapes' in line and '.root' in line: shape_line = line
        if 'process' in line and proc_line is None: proc_line = line

    root_path = None
    for bit in shape_line.split(' '):
        if '.root' in bit: root_path = path + '/'+bit
    
    procs = []
    for bit in proc_line.split(' '):
        if bit == '': continue
        if 'process' in bit: continue
        procs.append(bit)

    #r_file = ROOT.TFile(root_path, 'read')

    for nuis in nuisances:
        nuis_line  = None
        for line in lines: 
            #if 'shapes' in line and '.root' in line: shape_line = line
            #if 'process' in line and proc_line is None: proc_line = line
            if nuis in line: 
                if 'lnN' in line:
                    #print(nuis+' already lnN -> skipped')
                    continue
                nuis_line = line
        if nuis_line is None:
            #print(nuis+' not found -> skipped')
            continue


        new_nuis_line = ''
        proc_idx = 0
        for bit in nuis_line.split(' '):
            #print(bit)
            if bit == '': new_nuis_line += ' '
            elif 'shape' in bit: new_nuis_line += 'lnN '
            elif '-' in bit: 
                new_nuis_line += bit
                proc_idx +=1 
            elif '1.0' in bit:
                name_base = 'histo_'+procs[proc_idx]
                #histos = [name_base, name_base+'_'+nuis+'Up', name_base+'_'+nuis+'Down']
                #n = get_n_root(root_path, histos)
                n_n = r_file.Get(name_base).Integral()
                n_u = r_file.Get(name_base+'_'+nuis+'Up').Integral()
                n_d = r_file.Get(name_base+'_'+nuis+'Down').Integral()
                if not n_n == 0.: new_bit = str(round((n_u+0.)/(n_n+0.), 4))+'/'+str(round((n_d+0.)/(n_n+0.), 4))
                else: new_bit = '1./1.'
                proc_idx +=1 
                new_nuis_line += new_bit
            else: new_nuis_line += bit
            #print(new_nuis_line)

        o_file = open(data_card, 'r')
        curr_lines = o_file.readlines()
        o_file.close()

        o_file = open(data_card, 'w')
        for line in curr_lines:       
            if line == nuis_line:
                #print('Line to replace: '+line) 
                #print('New line: '+new_nuis_line) 
                o_file.write(new_nuis_line)
            else: o_file.write(line)
        o_file.close()
    #r_file.Close()
    print('Fixed lnN for card '+data_card)

def fix_lnN(shape_file, card_list, nuisances):
    r_file = ROOT.TFile(shape_file, 'read')
    for card in card_list:
        change_shape_2_lnN(r_file, card, nuisances)
    r_file.Close()

def get_n_root(file_path, histo_names):
    r_file = ROOT.TFile(file_path, 'read')
    n = []
    for histo_name in histo_names:
      histo = r_file.Get(histo_name)
      if not histo: print(histo_name+' not found in '+file_path)
      n.append(histo.Integral())
    r_file.Close()
    return n

class MyThread(Thread):
    def run(self):
        try:
            Thread.run(self)
        except Exception as err:
            self.err = err
            pass # or raise err
        else:
            self.err = None

# Output dir
pwd = os.getcwd()
base_dir = 'datacards_FullCombi'
#base_dir = 'datacards_FullCombi_test'
if not os.path.isdir(base_dir): os.system('mkdir '+base_dir)
semi_dir = base_dir+'/semi_lep'
if not os.path.isdir(semi_dir): os.system('mkdir '+semi_dir)
full_dir = base_dir+'/full_lep'
if not os.path.isdir(full_dir): os.system('mkdir '+full_dir)

def fix_corr(data_card):

    # Fix full lep
    if full_dir in data_card:
        # Separate years
        for year in run2: 
            if 'datacard_'+year+'_' in data_card:
                # Trigger
                rename_nuisance(data_card, 'CMS_eff_hwwtrigger_'+year, 'CMS_eff_2l2nu_trigger_'+year, '*') 
                # Fake nuisances
                rename_nuisance(data_card, 'CMS_fake_syst', 'CMS_fake_2l2nu_syst_'+year, '*', 'Fake') 
                rename_nuisance(data_card, 'CMS_fake_m_'+year, 'CMS_fake_2l2nu_m_recoil_'+year, '*', 'Fake') 
                rename_nuisance(data_card, 'CMS_fake_e_'+year, 'CMS_fake_2l2nu_e_recoil_'+year, '*', 'Fake') 
                rename_nuisance(data_card, 'CMS_fake_stat_m_'+year, 'CMS_fake_2l2nu_m_stat_'+year, '*', 'Fake') 
                rename_nuisance(data_card, 'CMS_fake_stat_e_'+year, 'CMS_fake_2l2nu_e_stat_'+year, '*', 'Fake') 

        # Run2 comb
        if 'datacard_Run2_' in data_card:
            delete_line(data_card, ['nuisance', 'edit', 'rename', 'CMS_eff_hwwtrigger'])
            for year in run2:
                rename_nuisance(data_card, 'CMS_eff_hwwtrigger_'+year, 'CMS_eff_2l2nu_trigger_'+year, '*')
    
    # Fix semi lep
    if semi_dir in data_card:
        # Separate years
        for year in run2: 
            if 'datacard_'+year+'_' in data_card:
                # Trigger
                rename_nuisance(data_card, 'CMS_eff_hwwtrigger_'+year, 'CMS_eff_lnujj_trigger_'+year, '*') 
                # Fake nuisances
                rename_nuisance(data_card, 'CMS_fake_m_stat_'+year    , 'CMS_fake_lnujj_m_stat_'+year, '*', 'FAKE') 
                rename_nuisance(data_card, 'CMS_fake_e_stat_'+year    , 'CMS_fake_lnujj_e_stat_'+year, '*', 'FAKE')
                if year == '2016': 
                    rename_nuisance(data_card, 'CMS_fake_syst_'+year    , 'CMS_fake_lnujj_syst_'+year, '*', 'FAKE') 
                    rename_nuisance(data_card, 'CMS_fake_m_recoil_'+year, 'CMS_fake_lnujj_m_recoil_'+year, '*', 'FAKE') 
                    rename_nuisance(data_card, 'CMS_fake_e_recoil_'+year, 'CMS_fake_lnujj_e_recoil_'+year, '*', 'FAKE') 
                else:
                    rename_nuisance(data_card, 'CMS_fake_syst_2017_18'    , 'CMS_fake_lnujj_syst_'+year, '*', 'FAKE') 
                    rename_nuisance(data_card, 'CMS_fake_m_recoil_2017_18', 'CMS_fake_lnujj_m_recoil_'+year, '*', 'FAKE') 
                    rename_nuisance(data_card, 'CMS_fake_e_recoil_2017_18', 'CMS_fake_lnujj_e_recoil_'+year, '*', 'FAKE')

        # Run2 comb
        if 'datacard_Run2_' in data_card:
            delete_line(data_card, ['nuisance', 'edit', 'rename', 'CMS_eff_hwwtrigger'])
            for year in run2:
                rename_nuisance(data_card, 'CMS_eff_hwwtrigger_'+year, 'CMS_eff_lnujj_trigger_'+year, '*')

    # Full combination
    if 'datacard_FullCombi_' in data_card: 
        delete_line(data_card, ['nuisance', 'edit', 'rename', 'CMS_eff_hwwtrigger'])
        for year in run2:
            rename_nuisance(data_card, 'CMS_eff_hwwtrigger_'+year, 'CMS_eff_lnujj_trigger_'+year, 'Semi_*')
            rename_nuisance(data_card, 'CMS_eff_hwwtrigger_'+year, 'CMS_eff_2l2nu_trigger_'+year, 'Full_*')

def prep_card_thread(card_name, cmd_str, target_dir):
    exec_combine_cmd(cmd_str, target_dir)
    add_ranges_bkgnorm(target_dir+'/'+card_name)
    fix_corr(target_dir+'/'+card_name)
    
### Collect separate process cards
if not args.resub:
    
    procs = ['Semi', 'Full']
    if args.skip_full: procs.remove('Full')
    if args.skip_semi: procs.remove('Semi')
    
    for proc in procs:
    
        # Set proc specifics
        if proc == 'Semi':
            proc_dir = semi_dir
            regions  = semi_lep_regions
            missing_input_mp = missing_s_input_mp
            datacard_str = 'darkHiggs_'
            do_ln_fix = False
            #do_ln_fix = True
        else:
            proc_dir = full_dir
            regions  = full_lep_regions
            missing_input_mp = missing_f_input_mp
            datacard_str = 'DH_'
            do_ln_fix = True
    
        threads = {}
        print(proc+'-lep:')
        for year in semi_lep_dirs:
            print(' -- '+year)
            # Collect nominals
            year_wd = proc_dir+'/'+year
            if not args.skip_nominal:
                all_year_cards = []
                print(' ---- Collect nominals: ')
                if not os.path.isdir(year_wd): os.system('mkdir '+year_wd)
                for region in regions:
                    region_wd = year_wd+'/'+region
                    if not os.path.isdir(region_wd): os.system('mkdir '+region_wd)
                    if proc == 'Semi':
                        #var = 'Events'
                        #if 'SR' in region: var = semi_lep_var.replace('YEAR', year)
                        var = semi_lep_var_dict[year][region]
                        region_sd = semi_lep_dirs[year] + 'InCh_'+region+'/'+var
                    else:
                        var = 'events'
                        region_sd = full_lep_dirs[year] + region+'_Incl/'+var
                        if 'SR' in region: 
                            var = full_lep_var.replace('YEAR', full_lep_var_dic[year])
                            region_sd = full_lep_dirs[year] + 'SR_Incl_'+region.split('_')[-1]+'/'+var
                    
                    if not args.no_cp: os.system('cp -r '+region_sd+'/shapes '+region_wd+'/.')
                    for mp in eff_mp:
                        if mp in missing_input_mp: continue 
                        data_card = region_wd+'/datacard_'+mp+'.txt'
                        in_card = None
                        for fil in os.listdir(region_sd):
                            if datacard_str in fil and mp+'.' in fil and fil.endswith('.txt'): in_card = region_sd+'/'+fil
    
                        if os.path.isfile(data_card): os.system('rm '+data_card)
                        os.system('cp '+in_card+' '+data_card)
    
                        all_year_cards.append(data_card)
    
                # Fix lnN
                if args.fix_lnN and do_ln_fix:
                    print(' ---- Fixing lnN ')
                    shape_dict = {}
                    for card in all_year_cards:
                        #print(card)
                        shape_file = get_shape_file(card)
                        if not shape_file in shape_dict: shape_dict[shape_file] = [card]
                        else: shape_dict[shape_file].append(card)
                   
                    #print(shape_dict)
     
                    shape_threads = {}
                    nuisances = ['CMS_PU_'+year, 'CMS_scale_e_'+year, 'CMS_scale_m_'+year]
                    for shape_file in shape_dict:
                        #r_file = ROOT.TFile(shape_file, 'read')
                        th_key = shape_file
                        shape_threads[th_key] = MyThread(target=fix_lnN, args=(shape_file, shape_dict[shape_file], nuisances,))
                        shape_threads[th_key].daemon = True
                        shape_threads[th_key].start()
                        #fix_lnN(shape_file, card_list, nuisances)
                        #for 
    
                    # Join threads
                    print('    Waiting for threads ...')
                    for th_key in shape_threads:
                        shape_threads[th_key].join()   
                        if not shape_threads[th_key].err is None:
                            print(shape_threads[th_key].err)
                            raise RuntimeError('Thread "'+th_key+'" failed')
        
            # Combine regions
            print(' ---- Combine regions')
            for mp in eff_mp:
                do_mp = True
                if mp in miss_mp: continue
                cmd_str = 'combineCards.py '
                for region in regions:
                    region_path = region+'/datacard_'+mp+'.txt'
                    region_path_abs = pwd+'/'+year_wd+'/'+region_path
                    if not os.path.isfile(region_path_abs):
                        print('       Missing card: '+region_path_abs)
                        do_mp = False
                    cmd_str+= region+'='+region_path+' '
                if not do_mp:
                    redo_mp.append(mp)
                    miss_mp.append(mp) 
                    continue
                target_dir = pwd+'/'+year_wd
                out_card = 'datacard_'+year+'_'+mp+'.txt'
                cmd_str+= '> '+out_card
    
                th_key = year+'_'+mp
                threads[th_key] = MyThread(target=prep_card_thread, args=(out_card, cmd_str, target_dir,))
                threads[th_key].daemon = True
                threads[th_key].start()
    
                #exec_combine_cmd(cmd_str, target_dir)
                #add_ranges_bkgnorm(target_dir+'/'+out_card)
    
        # Join threads
        print('    Waiting for threads ...')
        for th_key in threads:
            threads[th_key].join()   
            if not threads[th_key].err is None:
                print('Caugth error in thread "'+th_key+'": ')
                print(threads[th_key].err)
                #raise RuntimeError('Thread "'+th_key+'" failed')
                
        # Combine years
        threads = {}
        print(' -- Combine years')
        for mp in eff_mp:
            do_mp = True
            if mp in miss_mp: continue
            cmd_str = 'combineCards.py '
            for year in semi_lep_dirs:
                year_path = year+'/datacard_'+year+'_'+mp+'.txt'
                year_path_abs = pwd+'/'+proc_dir+'/'+year_path
                if not os.path.isfile(year_path_abs): 
                    print('     Missing card: '+year_path_abs)
                    do_mp = False
                cmd_str+= 'Year'+year+'='+year_path+' '
            if not do_mp:
                redo_mp.append(mp)
                miss_mp.append(mp)
                continue
            target_dir = pwd+'/'+proc_dir
            out_card = 'datacard_Run2_'+mp+'.txt'
            cmd_str+= '> '+out_card
            #exec_combine_cmd(cmd_str, target_dir)
            #add_ranges_bkgnorm(target_dir+'/'+out_card)
            th_key = 'Run2_'+mp
            threads[th_key] = MyThread(target=prep_card_thread, args=(out_card, cmd_str, target_dir,))
            threads[th_key].daemon = True
            threads[th_key].start()
    
        # Join threads
        print('    Waiting for threads ...')
        for th_key in threads:
            threads[th_key].join()   
            if not threads[th_key].err is None:
                print('Caugth error in thread "'+th_key+'": ')
                print(threads[th_key].err)
                #raise RuntimeError('Thread "'+th_key+'" failed')
            
    ### Combine process cards
    
    threads = {}
    print('Combine ALL')
    for mp in eff_mp:
        if mp in miss_mp: continue
        in_card = 'datacard_Run2_'+mp+'.txt'
        semi_card = pwd+'/'+semi_dir+'/'+in_card
        if not os.path.isfile(semi_card): 
            print('   Missing card: '+semi_card)
            redo_mp.append(mp)
            continue
        full_card = pwd+'/'+full_dir+'/'+in_card
        if not os.path.isfile(full_card): 
            print('   Missing card: '+full_card)
            redo_mp.append(mp)
            continue
    
        cmd_str = 'combineCards.py Semi='+semi_card+' Full='+full_card
        out_card = 'datacard_FullCombi_'+mp+'.txt'
        cmd_str += ' > '+out_card
        target_dir = pwd+'/'+base_dir
        #exec_combine_cmd(cmd_str, target_dir)
        #add_ranges_bkgnorm(target_dir+'/'+out_card)
        th_key = 'FullComb_'+mp
        threads[th_key] = MyThread(target=prep_card_thread, args=(out_card, cmd_str, target_dir,))
        threads[th_key].daemon = True
        threads[th_key].start()
    
    # Join threads
    print('    Waiting for threads ...')
    for th_key in threads:
        threads[th_key].join()   
        if not threads[th_key].err is None:
            print('Caugth error in thread "'+th_key+'": ')
            print(threads[th_key].err)
    
    print('Masspoints that need a redo: '+str(redo_mp).replace(' ', ''))

### submission

def write_sh(file_path, data_card_name, exec_dir, un_blind=False):
    o_file = open(file_path, 'w')
    
    o_file.write('#!/bin/bash\n')
    o_file.write('cd '+args.cmbDir+'\n')
    o_file.write('eval `scramv1 runtime -sh`\n')
    o_file.write('\n')

    # Change to path with dirs, copy structure to TMPDIR, copy shapes and card
    o_file.write('cd '+exec_dir+'\n')
    o_file.write('find . -type d -links 2 -exec mkdir -p "$TMPDIR/{}" \\;\n')
    o_file.write('find . -type d -links 2 -name shapes -exec rm -rf "$TMPDIR/{}" \\;\n')
    o_file.write('find . -type d -links 2 -name shapes -exec cp -r "{}" "$TMPDIR/{}" \\;\n')
    #o_file.write('cp -r '+exec_dir+'/*\n')
    o_file.write('cp '+data_card_name+' $TMPDIR/.\n')
    o_file.write('cd $TMPDIR\n')
    o_file.write('ls -larth\n')
    o_file.write('\n')

    name_tag = data_card_name.replace('datacard', '').replace('.txt', '')
    if not un_blind:
        o_file.write('combine -M AsymptoticLimits --run blind '+data_card_name+' -n '+name_tag+'\n')
    else:
        o_file.write('combine -M AsymptoticLimits '+data_card_name+' -n '+name_tag+'\n')
    o_file.write('\n')

    o_file.write('ls -larth\n')
    o_file.write('mv *'+name_tag+'*.root '+exec_dir+'/.\n')
    o_file.write('\n')
    
    jid_file = file_path.replace('.sh', '.jid')
    o_file.write('mv '+jid_file+' '+jid_file.replace('.jid', '.done')+'\n')

    o_file.close()

def write_jds(file_path):
    o_file = open(file_path, 'w')
    job_id = file_path.replace('.jds', '')
 
    o_file.write('universe    = vanilla\n')
    o_file.write('executable  = '+job_id+'.sh\n')
    o_file.write('output      = '+job_id+'.out\n')
    o_file.write('error       = '+job_id+'.err\n')
    o_file.write('log         = '+job_id+'.log\n')
    o_file.write('RequestCpus = 1\n')
    o_file.write('+JobFlavour = "'+args.queue+'"\n')
    o_file.write('queue\n')

    o_file.close()
    
    # Write also jid
    o_file = open(file_path.replace('.jds', '.jid'), 'w')
    o_file.write('hello\n')
    o_file.close()

def submit_jobs(jobs):
    if len(jobs) < 1:
        print('No jobs to submit')
        return
    print('Submit job')
    job_f = open(jobs[0]+'.jds', 'r')
    jds_lines = job_f.readlines()
    job_f.close()
    
    jds = ''
    for line in jds_lines:
        if 'JobFlavour' in line: jds += '+JobFlavour = "'+args.queue+'"\n'
        elif 'queue' in line: continue
        else: jds += line.replace(jobs[0], '$(JName)')
    jds += 'queue JName in (\n'
    for job in jobs:
        #print(job)
        jds += job + '\n'
    jds += ')\n'
    #print(jds)

    proc = subprocess.Popen(['condor_submit'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
    out, err = proc.communicate(jds)
    if proc.returncode != 0:
        sys.stderr.write(err)
        raise RuntimeError('Job submission failed.')
    print(out.strip())

def submit_dir(in_dir, job_dir, mass_points):
    jobs = []
    data_cards = []
    for fil in os.listdir(in_dir):
        if not fil.endswith('.txt'): continue
        if not 'datacard' in fil: continue
        for mp in mass_points:
            if mp+'.' in fil:
                if not fil in data_cards: 
                    data_cards.append(fil)
                    job_id = job_dir+'/'+mp
                    if not job_id in jobs: jobs.append(job_id)
                    write_sh(job_id+'.sh', fil, in_dir, un_blind=args.un_blind)
                    write_jds(job_id+'.jds')
                break

    submit_jobs(jobs)
   
def resub_dir(job_dir):
    jobs = []
    for fil in os.listdir(job_dir):
        #print(fil)
        if not fil.endswith('.jid'): continue
        #print('->!!!!!!')
        job_id = job_dir+'/'+fil.replace('.jid', '')
        jobs.append(job_id)
    #print(job_dir, jobs)
    submit_jobs(jobs)
 
#job_dir = pwd +'/'+base_dir + '/job'
job_dir = pwd + '/job'
if not os.path.isdir(job_dir): os.system('mkdir '+job_dir)
job_dir_c = job_dir + '/Comb'
if not os.path.isdir(job_dir_c): os.system('mkdir '+job_dir_c)
job_dir_s = job_dir + '/Semi'
if not os.path.isdir(job_dir_s): os.system('mkdir '+job_dir_s)
job_dir_f = job_dir + '/Full'
if not os.path.isdir(job_dir_f): os.system('mkdir '+job_dir_f)

if not args.resub:
    if not args.skip_sub:
        print('Submitting Full Combination: ')
        submit_dir(pwd +'/'+base_dir, job_dir_c, eff_mp) 
        
        if not args.skip_semi_sub:
            print('Submitting Semi-Lep: ')
            submit_dir(pwd +'/'+semi_dir, job_dir_s, eff_mp) 
        
        if not args.skip_full_sub:
            print('Submitting Full-Lep: ')
            submit_dir(pwd +'/'+full_dir, job_dir_f, eff_mp) 

if args.resub:
   print('Re-submitting Full Combination: ')
   resub_dir(job_dir_c) 
   if not args.skip_semi_sub: 
       print('Re-submitting Semi-Lep: ')
       resub_dir(job_dir_s) 
   if not args.skip_full_sub:
       print('Re-submitting Full-Lep: ')
       resub_dir(job_dir_f) 

