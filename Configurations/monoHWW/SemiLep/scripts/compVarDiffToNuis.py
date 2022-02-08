import math
import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--path1' , action = 'store', type = str,  help = 'Path to input file 1')
parser.add_argument('--var1'  , action = 'store', type = str,  help = 'Variable 1')
parser.add_argument('--cut1'  , action = 'store', type = str,  help = 'Cut 1')
parser.add_argument('--sample'  , action = 'store', type = str,  help = 'Samples, comma seperated (to add)')
parser.add_argument('--path2' , action = 'store', type = str, default = None,  help = 'Path to input file 2')
parser.add_argument('--var2'  , action = 'store', type = str, default = None,  help = 'Variable 2')
parser.add_argument('--cut2'  , action = 'store', type = str, default = None,  help = 'Cut 2')
#parser.add_argument('--frac-only', help='no plotting, just spit fractions', action='store_true')
parser.add_argument('--nuis'  , action = 'store', type = str,  help = 'Nuisance to compare to (assuming)')
parser.add_argument('--do-signal', help='also do all signal samples', action='store_true')
parser.add_argument('--save-as', action = 'store', type = str, default = None,  help='save plot and store under given name')
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
    if not histo: raise IOError('Histo "'+hiso_name+'" not found')
    return histo

def get_histo_nuis(r_file, cut, var, sample, nuis):
    hiso_name = cut+'/'+var+'/histo_'+sample+'_'+nuis+'Up'
    #r_file = ROOT.TFile(file_name, 'read')
    histoNSX = r_file.Get(hiso_name) #.Clone()
    #r_file.Close()
    #if not histo: raise IOError('Histo "'+hiso_name+'" not found in '+file_name)
    if not histoNSX: 
        print('Histo "'+hiso_name+'" not found')
        return histoNSX
    else: return histoNSX.Clone()

def abs_histo(histo):
    nb = histo.GetNbinsX()
    for ibin in range(1, nb+1):
        cont = histo.GetBinContent(ibin)
        histo.SetBinContent(ibin, abs(cont))
    
def add_histo2_to_array(arr, histo):
    nb = histo.GetNbinsX()
    if len(arr) == 0: arr = [0]*nb
    for ibin in range(1, nb+1):
        idx = ibin - 1
        cont = histo.GetBinContent(ibin)
        arr[idx] += cont**2

def sqrt_arr(arr):
    for idx,val in enumerate(arr):
        arr[idx] = math.sqrt(val)

def arr_to_histo(arr, histo):
    for idx,val in enumerate(arr):
        ibin = idx + 1
        histo.SetBinContent(ibin, val)

histo1 = None
histo2 = None
nuis = None
nuis2_arr = []

for s1 in samples:
    if 'DATA' in s1: continue
    print('__'+s1+'__')


    histo1_tmp = get_histo_var(f1, c1, v1, s1)
    histo2_tmp = get_histo_var(f2, c2, v2, s1)

    nuis_tmp = get_histo_nuis(f1, c1, v1, s1, args.nuis)

    n1 = histo1_tmp.Integral()
    n2 = histo2_tmp.Integral()
    
    print('#'+v2+'/#'+v1+' = '+str(1. - (n2+0.)/(n1+0.)))

     

    if histo1_tmp: 
        if histo1 is None: histo1 = histo1_tmp
        else: histo1.Add(histo1_tmp)
    else: print('hist 1 not found')

    if histo2_tmp: 
        if histo2 is None: histo2 = histo2_tmp
        else: histo2.Add(histo2_tmp)
    else: print('hist 2 not found')

    if not nuis_tmp: nuis_tmp = histo1_tmp
    if nuis_tmp: 
        ndiff_tmp = nuis_tmp.Clone()
        ndiff_tmp.Add(histo1_tmp, -1.)
        ndiff_tmp.Divide(histo1_tmp)

        add_histo2_to_array(nuis2_arr, ndiff_tmp)
        #print('max: '+str(ndiff_tmp.GetMaximum()))
        
        #print('max: '+str(nuis_tmp.GetMaximum()-histo1_tmp.GetMaximum()/histo1_tmp.GetMaximum()))
        if nuis is None: nuis = nuis_tmp
        else: nuis.Add(nuis_tmp)
    #else: print('nuis not found')

    #nuis_tmp = None
    #nuis.SetLineColor(2)
    #canvas = ROOT.TCanvas()
    #histo1.Draw()
    #nuis.Draw('same')
    #raw_input('done')
    

hdiff = histo2.Clone()
hdiff.Add(histo1, -1.)
hdiff.Divide(histo1)
hdiff.SetLineColor(4)
hdiff.SetTitle('')
abs_histo(hdiff)

ndiff = nuis.Clone()
ndiff.Add(histo1, -1.)
ndiff.Divide(histo1)
#sqrt_arr(nuis2_arr)
#arr_to_histo(nuis2_arr, ndiff)

ndiff.SetLineColor(2)
abs_histo(ndiff)

print('max: '+str(ndiff.GetMaximum()))


zero = histo1.Clone()
zero.Add(histo1, -1.)
zero.Divide(histo1)
zero.SetLineColor(1)

ROOT.gStyle.SetOptStat(0)

canvas = ROOT.TCanvas()
hdiff.Draw()
ndiff.Draw('same')
zero.Draw('hist same')

legend = ROOT.TLegend(0.4, 0.8, 0.9, 0.9)
legend.AddEntry(hdiff, v2+' - '+v1+' (relative)', 'l')
legend.AddEntry(ndiff, args.nuis +'Up - nominal (relative)', 'l')
legend.Draw()


canvas.Update()       

if not args.save_as is None: canvas.SaveAs(args.save_as)

##histo1.SetLineColor(1)
##histo2.SetLineColor(2)
#
##n1 = histo1.Integral()
##n2 = histo2.Integral()

##print('#'+v2+'/#'+v1+' = '+str(1. - (n2+0.)/(n1+0.)))
##if args.frac_only: continue
#histon = get_histo_nuis(f1, c1, v1, s1, args.nuis)
#histon.SetLineColor(3)
#
#print(v1+' mean: '+str(histo1.GetMean()))
#print(v2+' mean: '+str(histo2.GetMean()))
#
##if args.norm:
##    histo1.Scale(1./(n1 + 0.))
##    histo2.Scale(1./(n2 + 0.))
#
#ROOT.gStyle.SetOptStat(0)
#
#canvas = ROOT.TCanvas()
#
#pad1 = ROOT.TPad('pad1', 'pad1',0,0.3,1,1)
#pad1.SetBottomMargin(0)
#pad1.Draw()
#pad2 = ROOT.TPad('pad2', 'pad2',0,0,1,0.3)
#pad2.SetTopMargin(0)
#pad2.Draw()
#
#canvas.cd()
#pad1.cd()
#histo1.Draw()
#histo2.Draw('same')
#
#legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.9)
#legend.AddEntry(histo1, v1, 'l')
#legend.AddEntry(histo2, v2, 'l')
#legend.Draw()
#
#histo_r = histo1.Clone()
#histo_r.Divide(histo2)
#histo_r1 = histo1.Clone()
#histo_r1.Divide(histo1)
#histo_r1.SetLineColor(1)
#histo_r1.SetFillColor(0)
#
#histo_rn = histon.Clone()
#histo_rn.Divide(histo1)
#
#histo_r3 = histo_r1.Clone()
#histo_r3.Scale(1.05)
#histo_r3.SetLineColor(2)
#histo_r3.SetFillColor(0)
#
#max_list = [histo_r.GetBinContent(histo_r.GetMaximumBin()), 1.] 
#min_list = [histo_r.GetBinContent(histo_r.GetMinimumBin()), 1.] 
#max_dev = 0.2
#y_max = min(max(max_list)+0.005, 1.+max_dev)
#y_min = max(min(min_list)-0.005, 1.-max_dev)
#print('Extrema', y_max, y_min)
#histo_r.GetYaxis().SetRangeUser(y_min, y_max)
#
#canvas.cd()
#pad2.cd()
#histo_r.Draw()
#histo_r1.Draw('hist same')
#histo_r3.Draw('hist same')
#histo_rn.Draw('hist same')
#     
#
#canvas.Update()


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
