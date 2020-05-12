import os
from collections import OrderedDict

template = 'OverView_template.tex'
out_file = 'OverView.tex'

#variables = {
#    #'Events' : 'Events',
#    'l1_pt' : '$p_{T}^{l1}$',
#}
#variables = [
#    ('Events', 'Events'),
#    ('l1_pt', '$p_{T}^{l1}$'),
#]
#varibales_o = OrderedDict(variables.items())
variables = OrderedDict() 
variables['Events'] = 'Events'
variables['Puppimet'] = 'Puppi${{E}_{T}}^{miss}$' 

variables['l1_pt'] = '${p_{T}}^{\ell_{1}}$'
variables['l2_pt'] = '${p_{T}}^{\ell_{2}}$'
variables['l1_eta'] = '${\\eta}^{\ell_{1}}$'

variables['j1_pt'] = '${p_{T}}^{j_{1}}$'
variables['j2_pt'] = '${p_{T}}^{j_{2}}$'
variables['j1_eta'] = '${\\eta}^{j_{1}}$'
variables['j2_eta'] = '${\\eta}^{j_{2}}$'

variables['nlep'] = 'nLepton'
variables['njet'] = 'nCleanJet'



def write_var_frame(var, name, path, o_file):
    width = '4cm'
     
    o_file.write('%--'+var+'\n')
    o_file.write('\\begin{frame}{ Variable: '+name+'}\n')
    o_file.write('   \\begin{center}\n')
    o_file.write('   \\includegraphics[width='+width+']{'+path+'log_cratio_ElCh_SR_'+var+'.png}\n')
    o_file.write('   \\includegraphics[width='+width+']{'+path+'log_cratio_ElCh_SB_'+var+'.png}\n')
    o_file.write('   \\includegraphics[width='+width+']{'+path+'log_cratio_ElCh_TCR_'+var+'.png} \\\n')
    o_file.write('   \\includegraphics[width='+width+']{'+path+'log_cratio_MuCh_SR_'+var+'.png}\n')
    o_file.write('   \\includegraphics[width='+width+']{'+path+'log_cratio_MuCh_SB_'+var+'.png}\n')
    o_file.write('   \\includegraphics[width='+width+']{'+path+'log_cratio_MuCh_TCR_'+var+'.png}\n')
    o_file.write('   \\end{center}\n')
    o_file.write('\\end{frame}\n')
    o_file.write('\n')


def write_var_table_frame(var, name, path, o_file):
    width_b = '3.4cm'
    width_p = '3.3cm'
     
    o_file.write('%--'+var+'\n')
    o_file.write('\\begin{frame}{ Variable: '+name+'}\n')
    o_file.write('    \\begin{tabular}{ c | c | c | c }\n')

    o_file.write('          & SR & SB & TCR \\\\ \n')
    o_file.write('        \\hline\n')

    o_file.write('        \\rotatebox{90}{Electron} \n')
    o_file.write('        & \n')
    o_file.write('        \\parbox[c]{'+width_b+'}{\\includegraphics[width='+width_p+']{'+path+'log_cratio_ElCh_SR_'+var+'.png}}\n')
    o_file.write('        & \n')
    o_file.write('        \\parbox[c]{'+width_b+'}{\\includegraphics[width='+width_p+']{'+path+'log_cratio_ElCh_SB_'+var+'.png}}\n')
    o_file.write('        & \n')
    o_file.write('        \\parbox[c]{'+width_b+'}{\\includegraphics[width='+width_p+']{'+path+'log_cratio_ElCh_TCR_'+var+'.png}}\n')
    o_file.write('        \\\\ \n')
    o_file.write('        \\hline\n')

    o_file.write('        \\rotatebox{90}{Muon} \n')
    o_file.write('        & \n')
    o_file.write('        \\parbox[c]{'+width_b+'}{\\includegraphics[width='+width_p+']{'+path+'log_cratio_MuCh_SR_'+var+'.png}}\n')
    o_file.write('        & \n')
    o_file.write('        \\parbox[c]{'+width_b+'}{\\includegraphics[width='+width_p+']{'+path+'log_cratio_MuCh_SB_'+var+'.png}}\n')
    o_file.write('        & \n')
    o_file.write('        \\parbox[c]{'+width_b+'}{\\includegraphics[width='+width_p+']{'+path+'log_cratio_MuCh_TCR_'+var+'.png}}\n')
    o_file.write('        \\\\ \n')

    o_file.write('    \\end{tabular}\n')
    o_file.write('\\end{frame}\n')
    o_file.write('\n')


o_file = open(template, 'r')
lines = o_file.readlines()
o_file.close()

o_file = open(out_file, 'w')
path = '/afs/cern.ch/user/s/svanputt/work/monoHiggs/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v6/2HDMa/2HDMa_plots/' 
for line in lines:
    if not '%%%HERE%%%' in line: o_file.write(line)
    else:
        for var in variables:
            write_var_table_frame(var, variables[var], path, o_file)
