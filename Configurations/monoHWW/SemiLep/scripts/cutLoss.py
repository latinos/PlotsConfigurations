import math
import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str, dest = 'cfg', help = 'Input configuration file')
parser.add_argument('--original-config', action = 'store', type = str, dest = 'org_cfg', default=None, help = 'Input configuration file original selection')
parser.add_argument('-o', '--original-cut'   , action = 'store', type = str, dest = 'org', default='InCh_SR' , help = 'Original cut to compare to')
parser.add_argument('-f', '--filtered-cut'   , action = 'store', type = str, dest = 'fil'                    , help = 'Filtered cut under study')
parser.add_argument(      '--var'            , action = 'store', type = str, dest = 'var', default='Puppimet', help = 'Variable to extract histo\'s (should be arbitrary)')

args = parser.parse_args()

f_cfg = {}
execfile(args.cfg, f_cfg)

o_cfg = {}
if args.org_cfg is None: execfile(args.cfg, o_cfg)
else: execfile(args.org_cfg, o_cfg)

cut_o = args.org
#cut_f = 'InCh_TKcut_SR'
cut_f = args.fil
#cut_f = 'InCh_EEcut3_SR'
var = args.var

#original_file = 'darkHiggs_root/plots_darkHiggs_2017v7.root'
#filtered_file = 'darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root'
original_file = o_cfg['outputDir'] + '/plots_'+o_cfg['tag']+'.root' 
filtered_file = f_cfg['outputDir'] + '/plots_'+f_cfg['tag']+'.root'

o_r_file = ROOT.TFile(original_file)
f_r_file = ROOT.TFile(filtered_file)

if not o_r_file: print('none')

mhs_list = ['160', '180', '200']
mx_list = ['100', '150', '200']
mZp_list = ['195', '200', '295', '300', '400', '500', '800', '1000', '1200', '1500']

o_h_base = cut_o + '/' + var + '/' 
f_h_base = cut_f + '/' + var + '/' 

print('-----DATA-----')
for sample in ['DATA']:
    o_hist = o_r_file.Get(o_h_base + 'histo_'+sample)
    f_hist = f_r_file.Get(f_h_base + 'histo_'+sample)

    if not o_hist: print('o_hist none')
    if not f_hist: print('f_hist none')

    o_bins = o_hist.GetNbinsX()
    f_bins = f_hist.GetNbinsX()

    o_tot = o_hist.Integral(1, o_bins+1) 
    f_tot = f_hist.Integral(1, f_bins+1) 

    loss = f_tot - o_tot
    loss_frac = (loss+0.)/(o_tot+0.)

    print('event loss: '+str(loss)+'\t('+str(loss_frac*100)+' %) \t '+sample)
    #loss_fracs.append(loss_frac)

o_tot_bkg = 0.
f_tot_bkg = 0.
print('-----BACKGROUND-----')
#for sample in ['Wjets', 'top', 'FAKE', 'DY', 'DYlow', 'WW', 'WWewk', 'ggWW', 'Vg', 'VgS_L', 'VgS_H', 'VBF-V', 'WZqcd', 'WZewk', 'ZZ', 'VVV', 'Higgs']:
for sample in ['Wjets', 'top', 'FAKE', 'DY', 'DYlow', 'WW', 'WWewk', 'ggWW', 'Vg', 'VgS_L', 'VgS_H', 'WZqcd', 'WZewk', 'ZZ', 'VVV', 'Higgs']:
    o_hist = o_r_file.Get(o_h_base + 'histo_'+sample)
    f_hist = f_r_file.Get(f_h_base + 'histo_'+sample)

    o_bins = o_hist.GetNbinsX()
    f_bins = f_hist.GetNbinsX()

    o_tot = o_hist.Integral(1, o_bins+1) 
    f_tot = f_hist.Integral(1, f_bins+1) 

    o_tot_bkg += o_tot 
    f_tot_bkg += f_tot 

    loss = f_tot - o_tot
    loss_frac = (loss+0.)/(o_tot+0.)

    print('event loss: '+str(loss)+'\t('+str(loss_frac*100)+' %) \t '+sample)
    #loss_fracs.append(loss_frac)
tot_loss = f_tot_bkg - o_tot_bkg
tot_loss_frac = (tot_loss+0.)/(o_tot_bkg+0.) 
print('--TOTAL:')
print('event loss: '+str(tot_loss)+'\t('+str(tot_loss_frac*100)+' %) \t ALL BACKGROUND')

print('-----SIGNAL-----')
loss_fracs = []
sig_losses = []
sig_fracs  = []
for mhs in mhs_list:
    for mx in mx_list:
        for mZp in mZp_list:
            mp = 'mhs_'+mhs+'_mx_'+mx+'_mZp_'+mZp
            sample = 'darkHiggs_'+mp
            o_hist = o_r_file.Get(o_h_base + 'histo_'+sample)
            f_hist = f_r_file.Get(f_h_base + 'histo_'+sample)

            o_bins = o_hist.GetNbinsX()
            f_bins = f_hist.GetNbinsX()

            o_tot = o_hist.Integral(1, o_bins+1) 
            f_tot = f_hist.Integral(1, f_bins+1) 

            o_sig = (max(o_tot, 0.) + 0.)/math.sqrt(max(o_tot, 0.) + max(o_tot_bkg, 0.) + 0.)
            f_sig = (max(f_tot, 0.) + 0.)/math.sqrt(max(f_tot, 0.) + max(f_tot_bkg, 0.) + 0.)

            sig_loss = f_sig - o_sig
            sig_frac = (sig_loss+0.)/(o_sig+0.)
            sig_losses.append(sig_loss)
            sig_fracs.append(sig_frac)

            loss = f_tot - o_tot
            loss_frac = (loss+0.)/(o_tot+0.)

            print('event loss: '+str(loss)+'\t('+str(loss_frac*100)+' %) \t sig gain: '+str(sig_loss)+ '\t('+str(sig_frac*100)+' %)'+' \t '+mp)
            loss_fracs.append(loss_frac)

print('Biggest  loss: '+ str(min(loss_fracs)*100)+' %')
print('Smallest loss: '+ str(max(loss_fracs)*100)+' %')
print('Smallest significance gain: '+ str(min(sig_losses))+' ')
print('Biggest  significance gain: '+ str(max(sig_losses))+' ')
print('Biggest  relative significance gain: '+ str(max(sig_fracs)*100)+' %')
print('Smallest relative significance gain: '+ str(min(sig_fracs)*100)+' %')
