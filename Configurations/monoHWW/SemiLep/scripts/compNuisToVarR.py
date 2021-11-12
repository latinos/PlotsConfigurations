import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--path1' , action = 'store', type = str,  help = 'Path to input file 1')
parser.add_argument('--var1'  , action = 'store', type = str,  help = 'Variable 1')
parser.add_argument('--cut1'  , action = 'store', type = str,  help = 'Cut 1')
parser.add_argument('--sample'  , action = 'store', type = str,  help = 'Samples, comma seperated')
parser.add_argument('--path2' , action = 'store', type = str, default = None,  help = 'Path to input file 2')
parser.add_argument('--var2'  , action = 'store', type = str, default = None,  help = 'Variable 2')
parser.add_argument('--cut2'  , action = 'store', type = str, default = None,  help = 'Cut 2')
parser.add_argument('--frac-only', help='no plotting, just spit fractions', action='store_true')
parser.add_argument('--nuis'  , action = 'store', type = str,  help = 'Nuisance to compare to (assuming)')
parser.add_argument('--do-signal', help='also do all signal samples', action='store_true')
args = parser.parse_args()

v1 = args.var1
c1 = args.cut1
f1 = ROOT.TFile(args.path1, 'read')

if 'ALL' in args.sample:
    samples = []
    keys = f1.Get(c1).Get(v1).GetListOfKeys()
    for skey in keys:
        name = skey.GetName()
        if not name.startswith('histo_'): continue
        if not name.endswith('Up') and not name.endswith('Down'):
            samp = name.replace('histo_', '')
            if 'darkHiggs' in samp and not args.do_signal: 
                if not 'mhs_160_mx_100_mZp_500' in samp: continue
            print(name, samp)
            
            if samp not in samples: samples.append(samp)
else: samples = args.sample.split(',')

if args.var2 is None: v2 = v1
else: v2 = args.var2
if args.cut2 is None: c2 = c1
else: c2 = args.cut2
#if args.sample2 is None: s2 = s1
#else: s2 = args.sample2
if args.path2 is None: f2 = f1 
else: f2 = ROOT.TFile(args.path2, 'read')

def get_histo_var(r_file, cut, var, sample):
    hiso_name = cut+'/'+var+'/histo_'+sample
    #r_file = ROOT.TFile(file_name, 'read')
    histo = r_file.Get(hiso_name).Clone()
    #r_file.Close()
    if not histo: raise IOError('Histo "'+hiso_name+'" not found in '+file_name)
    return histo

def get_histo_nuis(r_file, cut, var, sample, nuis):
    hiso_name = cut+'/'+var+'/histo_'+sample+'_'+nuis+'Up'
    #r_file = ROOT.TFile(file_name, 'read')
    histo = r_file.Get(hiso_name).Clone()
    #r_file.Close()
    if not histo: raise IOError('Histo "'+hiso_name+'" not found in '+file_name)
    return histo

for s1 in samples:
    print('__'+s1+'__')
    histo1 = get_histo_var(f1, c1, v1, s1)
    histo2 = get_histo_var(f2, c2, v2, s1)
    
    histo1.SetLineColor(1)
    histo2.SetLineColor(2)
    
    n1 = histo1.Integral()
    n2 = histo2.Integral()
   
    print('#'+v2+'/#'+v1+' = '+str(1. - (n2+0.)/(n1+0.)))
    if args.frac_only: continue
    histon = get_histo_nuis(f1, c1, v1, s1, args.nuis)
    histon.SetLineColor(3)
    
    print(v1+' mean: '+str(histo1.GetMean()))
    print(v2+' mean: '+str(histo2.GetMean()))
    
    #if args.norm:
    #    histo1.Scale(1./(n1 + 0.))
    #    histo2.Scale(1./(n2 + 0.))
    
    ROOT.gStyle.SetOptStat(0)
    
    canvas = ROOT.TCanvas()
    
    pad1 = ROOT.TPad('pad1', 'pad1',0,0.3,1,1)
    pad1.SetBottomMargin(0)
    pad1.Draw()
    pad2 = ROOT.TPad('pad2', 'pad2',0,0,1,0.3)
    pad2.SetTopMargin(0)
    pad2.Draw()
    
    canvas.cd()
    pad1.cd()
    histo1.Draw()
    histo2.Draw('same')
    
    legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.9)
    legend.AddEntry(histo1, v1, 'l')
    legend.AddEntry(histo2, v2, 'l')
    legend.Draw()
    
    histo_r = histo1.Clone()
    histo_r.Divide(histo2)
    histo_r1 = histo1.Clone()
    histo_r1.Divide(histo1)
    histo_r1.SetLineColor(1)
    histo_r1.SetFillColor(0)
    
    histo_rn = histon.Clone()
    histo_rn.Divide(histo1)
    
    histo_r3 = histo_r1.Clone()
    histo_r3.Scale(1.05)
    histo_r3.SetLineColor(2)
    histo_r3.SetFillColor(0)
    
    max_list = [histo_r.GetBinContent(histo_r.GetMaximumBin()), 1.] 
    min_list = [histo_r.GetBinContent(histo_r.GetMinimumBin()), 1.] 
    max_dev = 0.2
    y_max = min(max(max_list)+0.005, 1.+max_dev)
    y_min = max(min(min_list)-0.005, 1.-max_dev)
    print('Extrema', y_max, y_min)
    histo_r.GetYaxis().SetRangeUser(y_min, y_max)
    
    canvas.cd()
    pad2.cd()
    histo_r.Draw()
    histo_r1.Draw('hist same')
    histo_r3.Draw('hist same')
    histo_rn.Draw('hist same')
         
    
    canvas.Update()
    
    
    raw_input('done')


#void scan_macro() { 
#    TFile lefile("darkHiggs_JER_plots/c_InCh_SR_JER_impact.root", "read");
#    TCanvas *c1 = (TCanvas*)lefile.Get("ccInCh_SR_JER_impact");
#    TObject *obj; 
#    THStack *hFra40;
#    c1->GetListOfPrimitives()->Print();
#    TIter next(c1->GetListOfPrimitives());
#    while ((obj=next())) {
#         cout << "Reading: " << obj->GetName() << ", " << obj->ClassName() << endl;
#         //cout << "Reading: " << obj->GetName() << ", " << endl;
#         if (obj->InheritsFrom("TH1")) {
#             cout << "histo: " << obj->GetName() << endl;
#             //hFra40 = (TH1F*)obj->Clone();
#             //obj->Draw();
#             //string answer;
#             //cin >> answer;
#         }
#         if (obj->InheritsFrom("THStack")) {
#             cout << "THStack: " << obj->GetName() << endl;
#             hFra40 = (THStack*)obj->Clone();
#         }
#    }
#    TCanvas c = TCanvas();
#    hFra40->Draw(); 
#    c.Update();
#    cout << "Reached" << endl;
#    string answer;
#    cin >> answer;
#} 
