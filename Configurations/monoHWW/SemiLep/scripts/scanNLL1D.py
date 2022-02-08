import os
import ROOT
import threading
import argparse
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument('-d', '--datacard', help='Path to datacard', default=None, type=str)
parser.add_argument('--poi', help='Parameter of interest', default='r', type=str)
parser.add_argument('--options', help='Additional combine options (e.g. "--robustHesse 1")', default=None, type=str)
parser.add_argument('-o', '--output', help='output dir', default='.', type=str)
parser.add_argument('--show-output', help='Show combine output', action='store_true')
parser.add_argument('--no-latex', help='Do not produce tex file', action='store_true')
parser.add_argument('--no-combine', help='Do not run combine', action='store_true')
parser.add_argument('-b', '--batch', help='Run in batch mode', action='store_true')
args = parser.parse_args()

# Figure out pois
pois = args.poi.split(',')
if 'ALL' in args.poi:
    #pois = []
    #card = args.datacard
    #if card.endswith('.root'): card = card.replace('.root', '.txt')
    #
    #o_file = open(card, 'r')
    #lines = o_file.readlines()
    #o_file.close()
 
    #dash_line_count = 0
    #for line in lines:
    #    if '-----------' in line: dash_line_count += 1
    #    elif dash_line_count > 3:
    #        splt_line = line.split(' ')
    #        if len(splt_line[0]) > 3 and splt_line[0] not in pois: pois.append(splt_line[0])
    #print(pois)

    pois = []
    card = args.datacard
    if not card.endswith('.root'):
        print('If "poi" is "ALL", datacard needs to be the root file')
        exit(1) 
    print('Extracting nuisances from workspace')
    r_file = ROOT.TFile(card)
    workspace = r_file.Get('w')
    if not workspace: print('Workspace not found')
    
    all_vars = workspace.allVars()
    iter = all_vars.createIterator()
    var = iter.Next()
    #for var in all_vars:
    while var:
        var_name = var.GetName()
        if not var_name.endswith('_In') and not var_name.startswith('mask_'):
            if not var_name in ['CMS_th1x', 'ONE', 'ZERO']:
                if not var_name in pois: pois.append(var_name)
    
        var = iter.Next()
    print('Found nuisances: '+str(pois))
    
if not os.path.exists(args.output): os.mkdir(args.output)

def scan_poi(poi):
    # Run grid command
    name_tag = '_scanNLL1D_'+poi
    #name_tag = '_scanNLL1D'
    #combine -M MultiDimFit -n _paramFit__asimov_s_QCDscale_Wjets --algo impact --redefineSignalPOIs r -P QCDscale_Wjets --floatOtherPOIs 1 --saveInactivePOI 1 -t -1 --expectSignal 1 --rMin -10 --robustFit 1 --setParameterRanges rgx{.*norm_.*}=0.1,10 -m 125 -d datacard_darkHiggs_mhs_160_mx_100_mZp_500_comb_u.root
    options = [
        #'--fastScan',
        '--robustFit 1',
        #'--robustHesse 1',
        '--cminDefaultMinimizerStrategy 0',
        #'--cminFallbackAlgo Minuit2,0:1',
        #'--X-rtd MINIMIZER_MaxCalls=999999999',
        #'--X-rtd FITTER_NEW_CROSSING_ALGO',
        #'--X-rtd FITTER_NEVER_GIVE_UP',
        #'--X-rtd FITTER_BOUND',
        '--redefineSignalPOIs r',
        '-P '+poi,
        '--floatOtherPOIs 1',
        '--saveInactivePOI 1',
        #'-t -1 --expectSignal 1',
        #'--autoRange 2',
        '--rMin -10',
        #'--rMax 1',
        #'--setParameterRanges \'rgx{.*norm_.*}\'=0.1,10',
        '--setParameterRanges \'rgx{.*norm_.*}\'=0.5,1.5',
        #'--saveSpecifiedNuis all',
    ]
    extra_options = ''
    if not args.options is None: extra_options = ' '+args.options+' '
    cmd = 'combine '+args.datacard+' -M MultiDimFit --algo grid --points 100 -m 125 '+' '.join(options)+extra_options+' -n '+name_tag
    #print(cmd)
    log_name = args.output+'/scanNLL1D_'+poi+'.log'
    if not args.no_combine:
        stream = ' &> '
        if args.show_output: stream = ' 2>&1 | tee '
        os.system(cmd+stream+log_name)
        print( '  -- combine output saved in '+log_name)
    file_name = 'higgsCombine'+name_tag+'.MultiDimFit.mH125.root'
    file_path = args.output+'/'+file_name
    os.system('mv '+file_name+' '+file_path)

    # Extract TGraph   
    r_file = ROOT.TFile(file_path)
    tree = r_file.Get('limit')
    tg = ROOT.TGraph()
    tg_idx = 0
    for event in tree:
        x = getattr(event, poi)
        y = 2*getattr(event, 'deltaNLL')
        tg.SetPoint(tg_idx,x,y)
        tg_idx += 1
 
    # Plot
    canvas = ROOT.TCanvas('canvas', 'canvas', 800, 600)
    tg.SetMarkerStyle(20)
    tg.GetXaxis().SetTitle(poi)
    tg.GetYaxis().SetTitle('-2 #Delta ln(L)')
    tg.Draw('Ap')
    tg_name = args.output+'/plot_scan_2NLL_'+poi+'.png'
    canvas.SaveAs(tg_name)
    #raw_input('exit')

# Launch threads
thread_dict = {}
n_pois = len(pois)
for idx,poi in enumerate(pois):
    print('Launching '+str(idx+1)+'/'+str(n_pois)+' : '+poi)
    thread_dict[poi] = threading.Thread(target=scan_poi, args=(poi,))
    #scan_poi(poi)
    thread_dict[poi].setDaemon(True)
    thread_dict[poi].start()

# Collect threads
for poi in pois:
    thread_dict[poi].join()

if not args.no_latex:
    # Make latex
    tex_file = args.output+'/scanNLL.tex'
    print('Creating TEX file: '+tex_file)
    o_file = open(tex_file, 'w')
    
    
    o_file.write('\\documentclass{beamer}\n')
    o_file.write('\n')
    o_file.write('\\mode<presentation> {\n')
    o_file.write('\\usetheme{Madrid}\n')
    o_file.write('}\n')
    o_file.write('\\usepackage{graphicx} % Allows including images\n')
    o_file.write('\\usepackage{booktabs} % Allows the use of \\toprule, \\midrule and \\bottomrule in tables\n')
    o_file.write('\\usepackage{tikz}\n')
    o_file.write('\n')
    o_file.write('\\begin{document}\n')
    o_file.write('\n')
    
    for poi in pois:
        png_name = 'plot_scan_2NLL_'+poi+'.png'
        o_file.write('%'+poi+'\n')
        o_file.write('\\begin{frame}{\\texttt{'+poi.replace('_','\\char`_')+'}}\n')
        o_file.write('        \\includegraphics[width=11cm]{'+png_name+'}\n')
        o_file.write('\\end{frame}\n')
        o_file.write('\n')
    o_file.write('\\end{document}\n')
    o_file.close()
