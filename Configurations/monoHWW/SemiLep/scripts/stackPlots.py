import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--path1' , action = 'store', type = str,  help = 'Path to input file 1 (dir only)')
parser.add_argument('--var1'  , action = 'store', type = str,  help = 'Variable 1')
parser.add_argument('--cut1'  , action = 'store', type = str,  help = 'Cut 1')
parser.add_argument('--path2' , action = 'store', type = str, default = None,  help = 'Path to input file 2')
parser.add_argument('--var2'  , action = 'store', type = str, default = None,  help = 'Variable 2')
parser.add_argument('--cut2'  , action = 'store', type = str, default = None,  help = 'Cut 2')
parser.add_argument('--norm'  , help='normalise', action='store_true')
parser.add_argument('--divide', help='devide in pads', action='store_true')
args = parser.parse_args()

v1 = args.var1
c1 = args.cut1
f1 = args.path1 +'/c_'+c1+'_'+v1+'.root'

if args.var2 is None: v2 = v1
else: v2 = args.var2
if args.cut2 is None: c2 = c1
else: c2 = args.cut2
if args.path2 is None: f2 = args.path1 +'/c_'+c2+'_'+v2+'.root'
else: f2 = args.path2 +'/c_'+c2+'_'+v2+'.root'

def get_THStack(file_name, cut, var):
    canvas_name = 'cc'+cut+'_'+var
    stack_name = 'thsBackground_grouped_'+cut+'_'+var
    print('Looking for "'+stack_name+'" in canvas "'+canvas_name+'" in file "'+file_name+'"')
    r_file = ROOT.TFile(file_name, 'read')
    canvas = r_file.Get('cc'+cut+'_'+var)
    #stack = canvas.Get('thsBackground_grouped_'+cut+'_'+var)
    stack = None
    prim_iter = canvas.GetListOfPrimitives()
    for obj in prim_iter:
        if stack_name in obj.GetName(): 
            stack = obj.Clone()
            break
    return stack

def set_THStack_color(stack, color):
    stack_iter = stack.begin()
    for hist in stack_iter:
        hist.SetLineColor(color)

def stack_2_histo(stack):
    histo = None
    stack_iter = stack.begin()
    for hist in stack_iter:
        if histo is None: 
            #print('histo was none')
            histo = hist.Clone()
        else: histo.Add(hist)
        #hist.SetLineColor(color)
    return histo
    

stack1 = get_THStack(f1, c1, v1)
stack2 = get_THStack(f2, c2, v2)

histo1 = stack_2_histo(stack1)
histo2 = stack_2_histo(stack2)

histo1.SetLineColor(1)
histo2.SetLineColor(2)

print(v1+' mean: '+str(histo1.GetMean()))
print(v2+' mean: '+str(histo2.GetMean()))

n1 = histo1.Integral()
n2 = histo2.Integral()

print('#'+v2+'/#'+v1+' = '+str((n2+0.)/(n1+0.)))

if args.norm:
    histo1.Scale(1./(n1 + 0.))
    histo2.Scale(1./(n2 + 0.))

ROOT.gStyle.SetOptStat(0)

canvas = ROOT.TCanvas()

if not args.divide:
    histo1.SetTitle(' ')
    histo1.Draw()
    histo2.Draw('same')
    
    legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.9)
    legend.AddEntry(histo1, v1, 'l')
    legend.AddEntry(histo2, v2, 'l')
    legend.Draw()
else:
    pad1 = ROOT.TPad('pad1', 'pad1',0,0.3,1,1)
    pad1.SetBottomMargin(0)
    pad1.Draw()
    pad2 = ROOT.TPad('pad2', 'pad2',0,0,1,0.3)
    pad2.SetTopMargin(0)
    pad2.Draw()

    canvas.cd()
    pad1.cd()
    histo1.SetTitle(' ')
    histo1.Draw()
    histo2.Draw('same')
    
    legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.9)
    legend.AddEntry(histo1, v1, 'l')
    legend.AddEntry(histo2, v2, 'l')
    legend.Draw()

    histo_r = histo1.Clone()
    histo_r.Divide(histo2)
    histo_r.SetTitle(' ')
    histo_r1 = histo1.Clone()
    histo_r1.Divide(histo1)
    histo_r1.SetLineColor(1)
    histo_r1.SetFillColor(0)

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
