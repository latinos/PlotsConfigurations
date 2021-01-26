import os
import copy
from collections import OrderedDict

log_plot = False
template = 'darkHiggs_template.tex'

out_file_tag = 'darkHiggs'
log_str = ''
if log_plot: log_str+= '_log'
out_file = out_file_tag+log_str+'.tex'


mom_dir = '/afs/cern.ch/user/s/svanputt/work/monoHiggs/PR/CMSSW_10_6_5/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/'
folders = OrderedDict()

folders['2016'] = mom_dir+'Full2016_v7/darkHiggs/'
folders['2017'] = mom_dir+'Full2017_v7/darkHiggs/'
folders['2018'] = mom_dir+'Full2018_v7/darkHiggs/'

# Select variables
all_var = {}
all_var_l = []
for year in folders:
    var_file = folders[year]+'variables.py'
    variables = OrderedDict() 
    execfile(var_file)
    all_var[year] = copy.deepcopy(variables)
    all_var_l.extend(list(all_var[year].keys()))

common_var = []
for var in all_var_l:
    #print(var)
    if var in common_var: continue
    keep = True
    for year in folders:
        if not var in all_var[year]: keep = False
    if keep: common_var.append(var)
print('common_var: '+str(common_var))

#def write_var_frame(var, name, path, o_file, log=True):
#    if log: log_str = 'log_'
#    else: log_str = ''
#    width = '4cm'
#     
#    o_file.write('%--'+var+'\n')
#    o_file.write('\\begin{frame}{ Variable: '+name+'}\n')
#    o_file.write('   \\begin{center}\n')
#    o_file.write('   \\includegraphics[width='+width+']{'+path+log_str+'cratio_ElCh_SR_'+var+'.png}\n')
#    o_file.write('   \\includegraphics[width='+width+']{'+path+log_str+'cratio_ElCh_SB_'+var+'.png}\n')
#    o_file.write('   \\includegraphics[width='+width+']{'+path+log_str+'cratio_ElCh_TCR_'+var+'.png} \\\n')
#    o_file.write('   \\includegraphics[width='+width+']{'+path+log_str+'cratio_MuCh_SR_'+var+'.png}\n')
#    o_file.write('   \\includegraphics[width='+width+']{'+path+log_str+'cratio_MuCh_SB_'+var+'.png}\n')
#    o_file.write('   \\includegraphics[width='+width+']{'+path+log_str+'cratio_MuCh_TCR_'+var+'.png}\n')
#    o_file.write('   \\end{center}\n')
#    o_file.write('\\end{frame}\n')
#    o_file.write('\n')


def write_var_table_frame(var, name, folders, o_file, log=True):
    if log: log_str = 'log_'
    else: log_str = ''
    width_b = '3.4cm'
    width_p = '3.3cm'

    def tab_fr(title, CR):
        cntr = ' | '.join(['c']*(len(folders)+1))
        o_file.write('\\begin{frame}{ '+title+' }\n')
        o_file.write('    \\begin{tabular}{ '+cntr+' }\n')
        tle_tab = ' & '.join([' ']+list(folders.keys()))
        o_file.write('        '+tle_tab+'\\\\ \n')
        o_file.write('        \\hline\n')
        el_l = []
        mu_l = []
        for year in folders:
            el_l.append('\\parbox[c]{'+width_b+'}{\\includegraphics[width='+width_p+']{'+folders[year]+'/darkHiggs_plots/'+log_str+'cratio_ElCh_'+CR+'_'+var+'.png}}')
            mu_l.append('\\parbox[c]{'+width_b+'}{\\includegraphics[width='+width_p+']{'+folders[year]+'/darkHiggs_plots/'+log_str+'cratio_MuCh_'+CR+'_'+var+'.png}}')
        el_str = ' & '.join(['\\rotatebox{90}{Electron}'] + el_l)
        mu_str = ' & '.join(['\\rotatebox{90}{Muon}'] + mu_l)
        o_file.write('        '+el_str+'\\\\ \n')
        o_file.write('        \\hline\n')
        o_file.write('        '+mu_str+'\\\\ \n')
        o_file.write('    \\end{tabular}\n')
        o_file.write('\\end{frame}\n')
        o_file.write('\n')
    
    tab_fr('Super Cut: '+name   , 'SC')   
    tab_fr('W+jets CR: '+name   , 'SB')    
    tab_fr('top CR: '+name      , 'TCR')    
    tab_fr('QCD Enriched: '+name, 'QER')
 



o_file = open(template, 'r')
lines = o_file.readlines()
o_file.close()

o_file = open(out_file, 'w')
for line in lines:
    if not '%%%HERE%%%' in line: o_file.write(line)
    else:
        for var in common_var:
            var_name = '$'+all_var['2018'][var]['xaxis'].replace('#', '\\').replace('[GeV]','').replace('DeltaR', 'Delta R')+'$'
            o_file.write('%---- '+var+'\n')
            o_file.write('\\section{'+var_name+'}\n')
            write_var_table_frame(var, var_name, folders, o_file, log_plot)
