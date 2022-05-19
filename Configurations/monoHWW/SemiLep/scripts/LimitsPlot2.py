import os
import copy
import ROOT
from array import array
import optparse 

cms_base = os.getenv('CMSSW_BASE')

exec(open(cms_base+'/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/modelPtxt.py'))

usage = 'usage: %prog [options]'
parser = optparse.OptionParser(usage)

parser.add_option("-m", "--model"  ,  dest="model"  , help="Model we are looking at, examples: 2HDMa, darkHiggs" , default='2HDMa' , type='string')
parser.add_option("-l", "--lumi"   ,  dest="lumi"   , help="Luminosity of the limit (35.9 in 2016, 41.5 in 2017, 59.7 in 2018, 137.1 in run2)" , type=str)
parser.add_option(      "--ww"     ,  dest="ww"     , action="store_true", help="Full combination (2l2n + lnjj)" , default=False)
parser.add_option(      "--full"   ,  dest="full"   , action="store_true", help="Full leptonic (2l2n)" , default=False)
parser.add_option(      "--kin-lim",  dest="kin_lim", action="store_true", help="Draw kinematic boarders" , default=False)
parser.add_option(      "--x-sec"  ,  dest="x_sec"  , action="store_true", help="True x-sec on y-axis" , default=False)
parser.add_option("-b", "--batch"  ,  dest="batch"  , action="store_true", help="Run in batch mode" , default=False)

(options, args) = parser.parse_args()


models = {
    '2HDMa': {
        'model_str': '2HDM+a, A #rightarrow a + h (WW #rightarrow l#nuqq\')',
        'spec_str' : 'sin#theta = 0.35, tan#beta = 1.0, m_{a} = 150 GeV, m_{#chi} = 10 GeV',
        'm_str'    : 'A',
    },
    'darkHiggs': {
        'model_str': 'darkHiggs, Z\' #rightarrow #chi #bar{#chi} + s (WW #rightarrow l#nuqq\')',
        'spec_str' : '#theta = 0.01, g_{q} = 0.25, g_{#chi} = 1, m_{s} = MHS GeV, m_{#chi} = MDM GeV',
        'm_str'     : 'Z\'',
    },
}

if options.ww:
    mdl_str = models['2HDMa']['model_str'].replace('(WW #rightarrow l#nuqq\')', '(WW)')
    models['2HDMa']['model_str']     = mdl_str 
    mdl_str = models['darkHiggs']['model_str'].replace('(WW #rightarrow l#nuqq\')', '(WW)')
    models['darkHiggs']['model_str'] = mdl_str
elif options.full:
    mdl_str = models['2HDMa']['model_str'].replace('(WW #rightarrow l#nuqq\')', '(WW #rightarrow 2l2#nu)')
    models['2HDMa']['model_str']     = mdl_str 
    mdl_str = models['darkHiggs']['model_str'].replace('(WW #rightarrow l#nuqq\')', '(WW #rightarrow 2l2#nu)')
    models['darkHiggs']['model_str'] = mdl_str

# X-sec reading

xsec_file = '/afs/cern.ch/user/f/fernanpe/public/for_MonoH_analysis/xsecs.csv'

def extract_xsec_dict(file_name):
    o_file = open(file_name, 'r')
    lines = o_file.readlines()
    o_file.close()

    xsec_dict = {}
    for line in lines:
        splt_line = line.replace('\n', '').split('\t')
        if len(splt_line) != 4: continue
        mhs = int(splt_line[0])
        mx = int(splt_line[1])
        mZp = int(splt_line[2])
        xsec = float(splt_line[3])

        if not mhs in xsec_dict: xsec_dict[mhs] = {}
        if not mx in xsec_dict[mhs]: 
            xsec_dict[mhs][mx] = {}
            #xsec_dict[mhs][mx]['mZp_list'] = []
            #xsec_dict[mhs][mx]['Xsec_list'] = []
        xsec_dict[mhs][mx][mZp] = xsec
        #xsec_dict[mhs][mx]['Xsec_list'].append(xsec)
    return xsec_dict

#def sort_xsec_dict(xsec_dict):
#    for mhs in xsec_dict:
#        for mx in xsec_dict[mhs]:
#            list1 = xsec_dict[mhs][mx]['mZp_list']
#            list2 = xsec_dict[mhs][mx]['Xsec_list']
#            list1_tmp, list2_tmp = (list(t) for t in zip(*sorted(zip(list1, list2))))
#            xsec_dict[mhs][mx]['mZp_list'] = list1_tmp
#            xsec_dict[mhs][mx]['Xsec_list'] = list2_tmp

if options.x_sec:
    xsec_dict = extract_xsec_dict(xsec_file)
    #sort_xsec_dict(xsec_dict)

#channel = {'ele' : 'e', 'mu' : '#mu', 'elemu': 'l'}

# 2016
LUMI = options.lumi

#_theta_0p01_gq_0p25_gx_1p0_mhs_160_mx_150_mZp_1000
def get_limits(mhs, mx):
    mass   = array( 'd', [])
    lim_50 = array( 'd', [])
    lim_2  = array( 'd', [])
    lim_16 = array( 'd', [])
    lim_84 = array( 'd', [])
    lim_97 = array( 'd', [])
    lim_ob = array( 'd', [])
    dirs = os.listdir('.')
    for fil in dirs:
       if not '.root' in fil: continue
       if not 'mhs_'+str(mhs) in fil: continue
       if not 'mx_'+str(mx) in fil: continue
       if not 'higgsCombine' in fil: continue
       if 'darkHiggsVal' in fil: continue
       if '95' in fil: continue
       #mass.append(float(fil.split('.')[-2].replace('mH', '')))
       #mZp = float(fil.split('.')[0].split('_')[-1])
       mZp = float(fil.split('.')[0].split('mZp_')[-1].split('_')[0])
       r_file = ROOT.TFile.Open(fil)
       #tree = r_file.limit
       tree = r_file.Get('limit')
       if not tree: 
           print(' --> Missing limit tree, skipping '+fil)
           continue
       print(fil)
       if tree.GetEntries() < 5:
           print(' --> Missing entries, skipping '+fil)
       else:
           mass.append(mZp)
           for event in tree:
               #print('new event')
               #print(event.quantileExpected, event.limit)
               if event.quantileExpected < 0.: lim_ob.append(event.limit)
               elif event.quantileExpected < 0.05: lim_2.append(event.limit)
               elif event.quantileExpected < 0.30: lim_16.append(event.limit)
               elif event.quantileExpected < 0.70: lim_50.append(event.limit)
               elif event.quantileExpected < 0.90: lim_84.append(event.limit)
               else: lim_97.append(event.limit)
               #print(event.quantileExpected, event.limit)
       #print(len(mass), len(lim_50))  
 
    lim_ob = sort_lim(mass, lim_ob)
    lim_50 = sort_lim(mass, lim_50)
    lim_2  = sort_lim(mass, lim_2)
    lim_16 = sort_lim(mass, lim_16)
    lim_84 = sort_lim(mass, lim_84)
    lim_97 = sort_lim(mass, lim_97)
    mass   = sort_lim(mass, mass)

    return mass, lim_50, lim_2, lim_16, lim_84, lim_97, lim_ob

def sort_lim(mass, lim):
    if len(lim) == 0: return lim
    list1, list2 = (list(t) for t in zip(*sorted(zip(mass, lim))))
    return array('d', list2)

def set_style():
   ROOT.gStyle.SetPadBorderMode(0)
   ROOT.gStyle.SetFrameBorderMode(0)
   ROOT.gStyle.SetPadBottomMargin(0.12)
   ROOT.gStyle.SetPadLeftMargin(0.12)
   ROOT.gStyle.SetCanvasColor(ROOT.kWhite)
   ROOT.gStyle.SetCanvasDefH(600) #Height of canvas
   ROOT.gStyle.SetCanvasDefW(600) #Width of canvas
   ROOT.gStyle.SetCanvasDefX(0)   #Position on screen
   ROOT.gStyle.SetCanvasDefY(0)

   ROOT.gStyle.SetPadTopMargin(0.05)
   ROOT.gStyle.SetPadBottomMargin(0.15)#0.13)
   ROOT.gStyle.SetPadLeftMargin(0.15)#0.16)
   ROOT.gStyle.SetPadRightMargin(0.05)#0.02)

   # For the Pad:
   ROOT.gStyle.SetPadBorderMode(0)
   # ROOT.gStyle.SetPadBorderSize(Width_t size = 1)
   ROOT.gStyle.SetPadColor(ROOT.kWhite)
   ROOT.gStyle.SetPadGridX(False)
   ROOT.gStyle.SetPadGridY(False)
   ROOT.gStyle.SetGridColor(0)
   ROOT.gStyle.SetGridStyle(3)
   ROOT.gStyle.SetGridWidth(1)

   # For the Frame:
   ROOT.gStyle.SetFrameBorderMode(0)
   ROOT.gStyle.SetFrameBorderSize(1)
   ROOT.gStyle.SetFrameFillColor(0)
   ROOT.gStyle.SetFrameFillStyle(0)
   ROOT.gStyle.SetFrameLineColor(1)
   ROOT.gStyle.SetFrameLineStyle(1)
   ROOT.gStyle.SetFrameLineWidth(1)

   ROOT.gStyle.SetAxisColor(1, "XYZ")
   ROOT.gStyle.SetStripDecimals(ROOT.kTRUE)
   ROOT.gStyle.SetTickLength(0.03, "XYZ")
   ROOT.gStyle.SetNdivisions(605, "XYZ")
   ROOT.gStyle.SetPadTickX(1)  # To get tick marks on the opposite side of the frame
   ROOT.gStyle.SetPadTickY(1)
   ROOT.gStyle.SetGridColor(0)
   ROOT.gStyle.SetGridStyle(3)
   ROOT.gStyle.SetGridWidth(1)


   ROOT.gStyle.SetTitleColor(1, "XYZ")
   ROOT.gStyle.SetTitleFont(42, "XYZ")
   ROOT.gStyle.SetTitleSize(0.05, "XYZ")
   ROOT.gStyle.SetTitleXOffset(1.15)#0.9)
   ROOT.gStyle.SetTitleYOffset(1.3) # => 1.15 if exponents
   ROOT.gStyle.SetLabelColor(1, "XYZ")
   ROOT.gStyle.SetLabelFont(42, "XYZ")
   ROOT.gStyle.SetLabelOffset(0.007, "XYZ")
   ROOT.gStyle.SetLabelSize(0.045, "XYZ")

   ROOT.gStyle.SetPadBorderMode(0)
   ROOT.gStyle.SetFrameBorderMode(0)
   ROOT.gStyle.SetTitleTextColor(1)
   ROOT.gStyle.SetTitleFillColor(10)
   ROOT.gStyle.SetTitleFontSize(0.05)

def plot(mass, lim_50, lim_2, lim_16, lim_84, lim_97, lim_ob, mhs, mx, model='2HDMa'):
   set_style()
   mdl_str = models[model]['model_str']
   msp_str = models[model]['spec_str'].replace('MHS', str(mhs)).replace('MDM', str(mx)) 
   cs_str = '#theta = 0.01, g_{q} = 0.25, g_{#chi} = 1'  
   mp_str = 'm_{s} = '+str(mhs)+', m_{#chi} = '+str(mx) + ' [GeV]'
   mp_str_f = 'mhs_'+str(mhs)+'_mx_'+str(mx)

   unblind = False
   if len(lim_ob) == len(lim_50): unblind = True

   lim_50_95up = array('d', [])
   lim_50_95dn = array('d', [])
   lim_50_68up = array('d', [])
   lim_50_68dn = array('d', [])
   theory = array('d', [1]*len(mass))
   for idx in range(len(lim_50)):
       if options.x_sec:
           xsec = xsec_dict[int(mhs)][int(mx)][int(mass[idx])]
           for obj in [lim_50, lim_2, lim_16, lim_84, lim_97, lim_ob, theory]:
               if len(obj) == len(mass): obj[idx] = obj[idx]*xsec
       lim_50_95up.append(abs(lim_97[idx] - lim_50[idx]))
       lim_50_95dn.append(abs(lim_2[idx] - lim_50[idx]))
       lim_50_68up.append(abs(lim_84[idx] - lim_50[idx]))
       lim_50_68dn.append(abs(lim_16[idx] - lim_50[idx]))

   TG50 = ROOT.TGraphAsymmErrors(len(mass), mass, lim_50)
   TG50.SetTitle('LimitExpectedCLs') 
   #TG95 = ROOT.TGraphAsymmErrors(len(mass), mass, lim_50, 0, 0, lim_2, lim_97) 
   TG95 = ROOT.TGraphAsymmErrors(len(mass), mass, lim_50, array('d', [0]*len(mass)), array('d', [0]*len(mass)), lim_50_95dn, lim_50_95up) 
   TG95.SetTitle('Limit95CLs') 
   #TG68 = ROOT.TGraphAsymmErrors(len(mass), mass, lim_50, 0, 0, lim_16, lim_84)
   TG68 = ROOT.TGraphAsymmErrors(len(mass), mass, lim_50, array('d', [0]*len(mass)), array('d', [0]*len(mass)), lim_50_68dn, lim_50_68up) 
   TG68.SetTitle('Limit68CLs')

   if unblind: 
       TGob = ROOT.TGraphAsymmErrors(len(mass), mass, lim_ob)
       TGob.SetTitle('Observed') 
    
   TGSM = ROOT.TGraph(len(mass) , mass, theory)
   TGSM.SetName("SMXSection")


   #// TGraphAsymmErrors *grthSM10=new TGraphAsymmErrors(nMassEff1,mass1,xs10,0,0,0,0);
   #TGraph *grthSM10=new TGraph(nMassEff,mass,xs10);
   #grthSM10->SetName("SMXSection_2nd");

   canvas = ROOT.TCanvas("c_lim_Asymptotic", "canvas with limits for Asymptotic CLs", 630, 600)
   canvas.cd()
   canvas.SetGridx(1)
   canvas.SetGridy(1)

   max_factor = 1000.
   #max_factor = 3.
   min_factor = 20.
   y_max = max(lim_97)*max_factor
   y_min = min(min(lim_2)/min_factor, 0.1)
   if options.x_sec: y_min = max(min(lim_2)/min_factor, 0.000001)
   x_max = max(mass)
   x_min = min(mass)

   hr = canvas.DrawFrame(x_min, y_min, x_max, y_max, "")
   VV = "ZH"
   
   hr.SetXTitle("m_{"+models[model]['m_str']+"} [GeV]")
   #hr.SetYTitle("#sigma_{95%} [pb]") # #rightarrow 2l2q
   hr.SetYTitle("#sigma_{obs} / #sigma_{theory} (95% C.L.)")
   if options.x_sec: hr.SetYTitle("#sigma_{theory} {pp #rightarrow Z' #rightarrow #chi #bar{#chi} + s (WW)}")
   hr.SetMinimum(y_min)
   hr.SetMaximum(y_max)

   TG95.SetFillColor(ROOT.kYellow)
   TG95.SetFillStyle(1001)#solid
   TG95.SetLineStyle(ROOT.kDashed)
   TG95.SetLineWidth(3)
   TG95.GetXaxis().SetTitle("m_{V'} [GeV]")
   TG95.GetYaxis().SetTitle("#sigma_{95%} #times BR(V' #rightarrow " + VV + ") [pb]") # #rightarrow 2l2q
   TG95.GetXaxis().SetRangeUser(x_min, x_max)

   TG95.Draw("3")
   ##  TG95.SetMinimum(0.00001)
   ##TG95.SetMaximum(1000.0)
   
   ##TG50.SetMinimum(0.00001)
   ##TG50.SetMaximum(1000.0)
   
   TG68.SetFillColor(ROOT.kGreen)
   TG68.SetFillStyle(1001)#solid
   TG68.SetLineStyle(ROOT.kDashed)
   TG68.SetLineWidth(3)
   TG68.Draw("3same")
   TG50.GetXaxis().SetTitle("M_{V'} [GeV]")
   TG50.GetYaxis().SetTitle("#sigma_{95%} #times BR(V' #rightarrow " + VV + ") [pb]") # #rightarrow 2l2q
   TG50.SetMarkerStyle(24)#25=hollow squre
   TG50.SetMarkerColor(ROOT.kBlack)
   TG50.SetLineStyle(2)
   TG50.SetLineWidth(3)
   if unblind:
       TGob.SetMarkerStyle(24)
       TGob.SetMarkerColor(ROOT.kRed)
       TGob.SetLineColor(ROOT.kRed)
       TGob.SetLineStyle(2)
       TGob.SetLineWidth(3)

   TGSM.SetLineColor(ROOT.kBlack)
   TGSM.SetLineWidth(2)
   TGSM.SetLineStyle(ROOT.kSolid)
   TGSM.SetFillColor(ROOT.kRed)
   TGSM.SetFillStyle(3344)
 
 
   TGSM.Draw("L3")
   TG50.Draw("L")   
   if unblind:
       TGob.Draw("L")

   canvas.Update()


   ROOT.gStyle.SetOptStat(0)
   postGrid = ROOT.TH1D("postGrid", "", 1, x_min, x_max)
   postGrid.GetYaxis().SetRangeUser(y_min, y_max)
   postGrid.Draw("AXIGSAME")

   #more graphics

   x1_leg = .20
   x2_leg = .75

   y1_leg = .62
   y2_leg = .77

   leg = ROOT.TLegend(x1_leg, y1_leg, x2_leg, y2_leg)
   #   TLegend *leg = new TLegend(.35,.71,.90,.90)
   leg.SetFillColor(0)
   leg.SetLineColor(0)
   leg.SetShadowColor(0)
   leg.SetTextFont(42)
   leg.SetTextSize(0.03)
   #   leg.SetBorderMode(0)
   #if (model == "2HDM"){
   #leg.SetHeader(models[model]['model_str'])
   #leg.SetHeader('#splitline{'+mdl_str+'}{'+msp_str+'}')
   #leg.AddEntry((TObject*)0, "Sin#theta = 0.35, tan#beta = 1.0, m_{a} = 150 GeV, m_{#chi} = 10 GeV", "")
   #leg.AddEntry(None, models[model]['spec_str'], "")
   #}
   #if (model == "Zbar"){
   #  leg.SetHeader("Z\'-Baryonic, Z\' #rightarrow DM + h(WW)")
   #  leg.AddEntry((TObject*)0, "g_{#chi} = 1, g_{q} = 0.25, m_{#chi} = 1 GeV", "")
   #}
   #if(obs) leg.AddEntry(grobslim_cls, "Frequentist CL_{S} Observed", "LP") 
   leg.AddEntry(TG68, "Frequentist CL_{S}  Expected #pm 1#sigma", "LF")
   leg.AddEntry(TG95, "Frequentist CL_{S}  Expected #pm 2#sigma", "LF")
   if unblind:
       leg.AddEntry(TGob, "Observed", "L")
#     leg.AddEntry(grthSM, "#sigma_{TH} x BR(Z' #rightarrow " + VV + "), #tilde{k}=0.50", "L") # #rightarrow 2l2q
#     leg.AddEntry(grthSM10, "#sigma_{TH} x BR(Z' #rightarrow " + VV + "), #tilde{k}=0.20", "L") # #rightarrow 2l2q
   leg.AddEntry(TGSM, "#sigma_{theory}", "L")
   leg.Draw()

   chan = 'semi'
   if options.ww: chan = 'ww' 
   if options.full: chan = 'full' 

   pt = mod_PT(x1_leg,y2_leg,x2_leg,y2_leg+0.13, 'darkHiggs', mp_str, chan=chan) 
   pt.Draw()
   #pavetext = ROOT.TPaveText(x1_leg,y2_leg,x2_leg,y2_leg+0.13, 'NDC')
   ##pavetext.SetNDC()
   #pavetext.SetLineColor(0)
   #pavetext.SetFillColor(0)
   #pavetext.SetBorderSize(1)
   #pavetext.SetShadowColor(0)
   #pavetext.SetTextFont(42)
   #pavetext.SetTextSize(0.035)
   #pavetext.SetTextAlign(11)
   #pavetext.AddText(mdl_str)
   #pavetext.AddText(cs_str)
   #pavetext.AddText(mp_str)
   #pavetext.Draw()
 
   intLumi = LUMI

   latex = ROOT.TLatex()
   latex.SetNDC()
   latex.SetTextFont(42)
   latex.SetTextSize(0.04)
   latex.SetTextAlign(11) # align left
   latex.DrawLatex(0.16, 0.96, "#bf{CMS} #it{preliminary}")
   latex.SetTextAlign(31)
   #latex.DrawLatex(0.95, 0.96, str(intLumi)+" fb^{-1} at #sqrt{s} = 13 TeV")
   latex.DrawLatex(0.95, 0.96, str(intLumi)+" fb^{-1} (13 TeV)")
   
   if options.kin_lim:
       n_pts = 100
       step = (y_max - y_min+0.)/(n_pts + 0.)

       #mZp = 2*mx + mhs
       Zp_lim = ROOT.TGraph()
       for idx in range(n_pts):
           m_y =  y_min + idx*step
           m_x = mhs + 2*mx
           Zp_lim.SetPoint(idx, m_x, m_y)
       Zp_lim.SetLineWidth(2)
       Zp_lim.SetLineColor(2)
       Zp_lim.Draw('pl,same')

       #mZp = 2*mx
       mx2_lim = ROOT.TGraph()
       for idx in range(n_pts):
           m_y =  y_min + idx*step
           m_x = 2*mx
           mx2_lim.SetPoint(idx, m_x, m_y)
       mx2_lim.SetLineWidth(2)
       mx2_lim.SetLineColor(2)
       mx2_lim.Draw('pl,same')

   # cMCMC.RedrawAxis("")
   ROOT.gPad.RedrawAxis("")
   # hr.GetYaxis().DrawClone()
   canvas.Update()
   #TString fnam
   #string outputname="shape2d"
   #string outputname="shape1d"
   #string outputname="counting"

   ROOT.gPad.SetLogy()
   canvas.Update()

   file_str = 'limits_'+mp_str_f+'_'+model+'.png'
   if options.x_sec: file_str = 'limits_xsec_'+mp_str_f+'_'+model+'.png'
   canvas.SaveAs(file_str)

   #raw_input('continue')

def extract_1cont(tg2):
   canvas = ROOT.TCanvas("c_2d_lim_Asymptotic", "canvas with 2d limits for Asymptotic CLs", 630, 600)
   cont = array('d', [1.])
   tg2_y_max = max(tg2.GetY())
   tg2_y_min = min(tg2.GetY())
   #print(max(tg2.GetX()), min(tg2.GetX()), max(tg2.GetY()), min(tg2.GetY()))
   #if tg2.GetMinimum() == tg2.GetMaximum(): return ROOT.TGraph(2, array('d', [0, 5000]), array('d', [0, 0]))
   #tg2.GetHistogram().Draw()
   tg2.Draw('cont z list')
   tg2.GetHistogram().SetContour(1, cont)
   canvas.Update()
   cont = ROOT.gROOT.GetListOfSpecials().FindObject('contours')
   if not cont: print('None')
   #if not cont: print('none')
   #print('cont size', cont.GetSize(), cont.At(0).GetSize())
   #tg = ROOT.TGraph()
   x = array('d', [])
   y = array('d', [])
   for i_tg in range(cont.At(0).GetSize()):
       tg_temp = cont.At(0).At(i_tg)
       x_temp = tg_temp.GetX()
       y_temp = tg_temp.GetY()

       idx_es = list(range(tg_temp.GetN()))
       #n = len(idx_es)
       #if len(x) > 0 and len(x_temp) > 0:
           #print('last pt',x[-1], y[-1], x[-1] - x[-2], y[-1] - y[-2],'first new',x_temp[0], y_temp[0], 'last new', x_temp[n-1], y_temp[n-1], x_temp[0] - x_temp[1], y_temp[0] - y_temp[1])
           #if ((x[-1] - x_temp[0])**2 + (y[-1] - y_temp[0])**2) > ((x[-1] - x_temp[n-1])**2 + (y[-1] - y_temp[n-1])**2): idx_es.reverse()
       for i_point in idx_es:
           #tg.AddPoint(tg_temp.GetPointX(i_point), tg_temp.GetPointY(i_point))
           #x.append(tg_temp.GetPointX(i_point))
           #y.append(tg_temp.GetPointY(i_point))
           x.append(x_temp[i_point])
           y.append(y_temp[i_point])

   
   if len(x) > 0: 
       #x.insert(0, min(x))
       #y.insert(0, tg2_y_min)
       ##y = sort_lim(x, y)
       ##x = sort_lim(x, x)
       tg = ROOT.TGraph(len(x), x, y)
   else:
       ##tg = cont.At(0).First()
       ##if not tg.GetN() < 2: 
       ##print('tg None', tg2.GetMaximum(), tg2.GetMinimum())
       ##tg = ROOT.TGraph(2, array('d', [0, 5000]), array('d', [0, 0]))
       #tg = ROOT.TGraph(2, array('d', [0, 5000, 5000, 0, 0]), array('d', [0, 0, 1000, 1000, 0]))
       tg = ROOT.TGraph()
   #print(min(tg.GetY()))
   #tg_x_max = max(tg.GetX())
   #tg_x_min = min(tg.GetX())
   #tg.SetPoint(tg.GetN(), tg_x_max, tg2_y_min)

   #tg.SetPoint(tg.GetN(), tg_x_min, tg2_y_min)
   return copy.deepcopy(tg)

def plot_2D(tg2_50, tg2_2, tg2_16, tg2_84, tg2_97, min_mZp, max_mZp, min_mhs, max_mhs, name, mhs):
   set_style()
   tg_50 = extract_1cont(tg2_50)
   tg_2  = extract_1cont(tg2_2)
   tg_16 = extract_1cont(tg2_16)
   tg_84 = extract_1cont(tg2_84)
   tg_97 = extract_1cont(tg2_97)

   tg_50.SetLineWidth(2)
   tg_97.SetFillColor(0) 
   tg_84.SetFillColor(ROOT.kYellow)
   tg_16.SetFillColor(ROOT.kGreen) 
   tg_2.SetFillColor(ROOT.kYellow) 
   
   #x_max = max(tg2_50.GetX()) 
   #x_min = min(tg2_50.GetX()) 
   #y_max = max(tg2_50.GetY()) 
   #y_min = min(tg2_50.GetY()) 
   x_max = max_mZp
   x_min = min_mZp
   y_max = max_mhs
   y_min = min_mhs
   
   canvas = ROOT.TCanvas("c_2d_lim_Asymptotic", "canvas with 2d limits for Asymptotic CLs", 630, 600)
   #hr = canvas.DrawFrame(195, 160, 1500, 200, "")
   hr = canvas.DrawFrame(x_min, y_min, x_max, y_max, "")
   VV = "ZH"
   
   #hr.SetXTitle("M_{"+models[args.model]['m_str']+"} [GeV]")
   hr.SetXTitle("m_{Z'} [GeV]")
   #hr.SetYTitle("#sigma_{95%} [pb]") # #rightarrow 2l2q
   hr.SetYTitle("m_{s} [GeV]")
   #hr.SetMinimum(160)
   #hr.SetMaximum(200)
   hr.SetMinimum(y_min)
   hr.SetMaximum(y_max)

   tg_2.Draw('CF SAME')   
   tg_16.Draw('CF SAME')   
   tg_84.Draw('CF SAME')
   tg_97.Draw('CF SAME')
   tg_50.Draw('C SAME')


   leg = ROOT.TLegend(.17, .18, .52, .3)
   #leg.SetMargin(.1)
   #   TLegend *leg = new TLegend(.35,.71,.90,.90)
   leg.SetFillColor(0)
   leg.SetLineColor(0)
   leg.SetShadowColor(0)
   leg.SetTextFont(42)
   leg.SetTextSize(0.02)
   mdl_str = models['darkHiggs']['model_str']
   #mdl_str = 'darkHiggs, Z\' #rightarrow #chi #bar{#chi} + s (WW #rightarrow l#nuqq\')'
   msp_str = '#theta = 0.01, g_{q} = 0.25, g_{#chi} = 1, m_{#chi} = '+str(mhs)+' GeV'
   #leg.SetHeader('#splitline{'+mdl_str+'}{'+msp_str+'}')
   leg.AddEntry(tg_16, "Frequentist CL_{S}  Expected #pm 1#sigma", "LF")
   leg.AddEntry(tg_2, "Frequentist CL_{S}  Expected #pm 2#sigma", "LF")
   #leg.AddEntry(tg_50, "#sigma_{TH}", "L")
   leg.Draw()
 
   intLumi = LUMI

   latex = ROOT.TLatex()
   latex.SetNDC()
   latex.SetTextFont(42)
   latex.SetTextSize(0.04)
   latex.SetTextAlign(11) # align left
   latex.DrawLatex(0.16, 0.96, "#bf{CMS} #it{preliminary}")
   latex.SetTextAlign(31)
   latex.DrawLatex(0.95, 0.96, str(intLumi)+" fb^{-1} at #sqrt{s} = 13 TeV")
   latex.SetTextAlign(11)
   latex.SetTextSize(0.03)
   latex.DrawLatex(.18, .89, '#splitline{'+mdl_str+'}{'+msp_str+'}')

   ROOT.gPad.RedrawAxis("")

   canvas.SaveAs(name)

#mass_hs = [160, 180, 200]
#mass_DM = [100, 150, 200]
#mass_Zp = [195, 200, 295, 300, 400, 500, 800, 1000, 1200, 1500]
##for mhs in mass_hs:
##    for mx in mass_DM:
##        mass, lim_50, lim_2, lim_16, lim_84, lim_97 = get_limits(mhs, mx)
##        plot(mass, lim_50, lim_2, lim_16, lim_84, lim_97, mhs, mx, model=options.model)
#
#
#tg2_mx100_50 = ROOT.TGraph2D()
#tg2_mx150_50 = ROOT.TGraph2D()
#tg2_mx200_50 = ROOT.TGraph2D()
#tg2_mx100_2 = ROOT.TGraph2D()
#tg2_mx150_2 = ROOT.TGraph2D()
#tg2_mx200_2 = ROOT.TGraph2D()
#tg2_mx100_16 = ROOT.TGraph2D()
#tg2_mx150_16 = ROOT.TGraph2D()
#tg2_mx200_16 = ROOT.TGraph2D()
#tg2_mx100_84 = ROOT.TGraph2D()
#tg2_mx150_84 = ROOT.TGraph2D()
#tg2_mx200_84 = ROOT.TGraph2D()
#tg2_mx100_97 = ROOT.TGraph2D()
#tg2_mx150_97 = ROOT.TGraph2D()
#tg2_mx200_97 = ROOT.TGraph2D()
#
#dmx = 0.1
#dmhs = 0.5
#dmzp = 0.1
#for mx in mass_DM:
#    bin_idx = 0
#    for mhs in mass_hs:
#        mhs_fill = mhs
#        if mhs > 190: mhs_fill += dmhs
#        elif mhs < 170: mhs_fill -= dmhs
#        mass, lim_50, lim_2, lim_16, lim_84, lim_97 = get_limits(mhs, mx)
#        for idx,mZp in enumerate(mass):
#            if mx == 100: 
#                #binx = th2_mhs160.GetXaxis().FindBin(mZp)
#                #biny = th2_mhs160.GetYaxis().FindBin(mx)
#                #bint = th2_mhs160.GetBin(binx, biny)
#                #th2_mhs160.SetBinContent(bint, lim_50[idx])
#                tg2_mx100_50.SetPoint(bin_idx, mZp, mhs_fill, lim_50[idx])
#                tg2_mx100_2.SetPoint(bin_idx,  mZp, mhs_fill, lim_2[idx])
#                tg2_mx100_16.SetPoint(bin_idx, mZp, mhs_fill, lim_16[idx])
#                tg2_mx100_84.SetPoint(bin_idx, mZp, mhs_fill, lim_84[idx])
#                tg2_mx100_97.SetPoint(bin_idx, mZp, mhs_fill, lim_97[idx])
#            elif mx == 150: 
#                #binx = th2_mhs180.GetXaxis().FindBin(mZp)
#                #biny = th2_mhs180.GetYaxis().FindBin(mx)
#                #bint = th2_mhs180.GetBin(binx, biny)
#                #th2_mhs180.SetBinContent(bint, lim_50[idx])
#                tg2_mx150_50.SetPoint(bin_idx, mZp, mhs_fill, lim_50[idx])
#                tg2_mx150_2.SetPoint(bin_idx,  mZp, mhs_fill, lim_2[idx])
#                tg2_mx150_16.SetPoint(bin_idx, mZp, mhs_fill, lim_16[idx])
#                tg2_mx150_84.SetPoint(bin_idx, mZp, mhs_fill, lim_84[idx])
#                tg2_mx150_97.SetPoint(bin_idx, mZp, mhs_fill, lim_97[idx])
#            else: 
#                #binx = th2_mhs200.GetXaxis().FindBin(mZp)
#                #biny = th2_mhs200.GetYaxis().FindBin(mx)
#                #bint = th2_mhs200.GetBin(binx, biny)
#                #th2_mhs200.SetBinContent(bint, lim_50[idx])
#                tg2_mx200_50.SetPoint(bin_idx, mZp, mhs_fill, lim_50[idx])
#                tg2_mx200_2.SetPoint(bin_idx,  mZp, mhs_fill, lim_2[idx])
#                tg2_mx200_16.SetPoint(bin_idx, mZp, mhs_fill, lim_16[idx])
#                tg2_mx200_84.SetPoint(bin_idx, mZp, mhs_fill, lim_84[idx])
#                tg2_mx200_97.SetPoint(bin_idx, mZp, mhs_fill, lim_97[idx])
#            bin_idx+=1
#        plot(mass, lim_50, lim_2, lim_16, lim_84, lim_97, mhs, mx, model=options.model)
#
#
#
#
##plot_2D(th2_mx100, 'limits_mx100.png')
##plot_2D(th2_mx150, 'limits_mx150.png')
##plot_2D(th2_mx200, 'limits_mx200.png')
#plot_2D(tg2_mx100_50, tg2_mx100_2, tg2_mx100_16, tg2_mx100_84, tg2_mx100_97, 'limits_mx_100_darkHiggs.png', 100)
#plot_2D(tg2_mx150_50, tg2_mx150_2, tg2_mx150_16, tg2_mx150_84, tg2_mx150_97, 'limits_mx_150_darkHiggs.png', 150)
#plot_2D(tg2_mx200_50, tg2_mx200_2, tg2_mx200_16, tg2_mx200_84, tg2_mx200_97, 'limits_mx_200_darkHiggs.png', 200)

all_files = os.listdir('.')
covered_mhs_mx_pairs = []
tg2_dict = {}
for fil in all_files:
    if not '.root' in fil: continue
    if not 'AsymptoticLimits' in fil: continue
    mhs = int(fil.split('_mhs_')[-1].split('_')[0])
    mx = int(fil.split('_mx_')[-1].split('_')[0])
    pair_str = 'mhs_'+str(mhs)+'_mx_'+str(mx)
    if pair_str in covered_mhs_mx_pairs: continue
    else:
        covered_mhs_mx_pairs.append(pair_str)
        mass, lim_50, lim_2, lim_16, lim_84, lim_97, lim_ob = get_limits(mhs, mx)
        mx_key = 'mx_'+str(mx)
        if not mx_key in tg2_dict: 
            tg2_dict[mx_key] = {}
            tg2_dict[mx_key]['50'] = ROOT.TGraph2D()
            tg2_dict[mx_key]['2']  = ROOT.TGraph2D()
            tg2_dict[mx_key]['16'] = ROOT.TGraph2D()
            tg2_dict[mx_key]['84'] = ROOT.TGraph2D()
            tg2_dict[mx_key]['97'] = ROOT.TGraph2D()
            tg2_dict[mx_key]['idx'] = 0
            tg2_dict[mx_key]['min_mZp'] = 10000
            tg2_dict[mx_key]['max_mZp'] = 0
            tg2_dict[mx_key]['min_mhs'] = 10000
            tg2_dict[mx_key]['max_mhs'] = 0
        #print(len(mass), mass)
        #print(len(lim_50), lim_50)
        for idx,mZp in enumerate(mass):
            #print(idx)
            tg2_dict[mx_key]['50'].SetPoint(tg2_dict[mx_key]['idx'], mZp, mhs, lim_50[idx])
            tg2_dict[mx_key]['2'] .SetPoint(tg2_dict[mx_key]['idx'], mZp, mhs, lim_2[idx])
            tg2_dict[mx_key]['16'].SetPoint(tg2_dict[mx_key]['idx'], mZp, mhs, lim_16[idx])
            tg2_dict[mx_key]['84'].SetPoint(tg2_dict[mx_key]['idx'], mZp, mhs, lim_84[idx])
            tg2_dict[mx_key]['97'].SetPoint(tg2_dict[mx_key]['idx'], mZp, mhs, lim_97[idx])
            tg2_dict[mx_key]['idx'] += 1
            if mhs > tg2_dict[mx_key]['max_mhs']: tg2_dict[mx_key]['max_mhs'] = mhs
            if mhs < tg2_dict[mx_key]['min_mhs']: tg2_dict[mx_key]['min_mhs'] = mhs
            if mZp > tg2_dict[mx_key]['max_mZp']: tg2_dict[mx_key]['max_mZp'] = mZp
            if mZp < tg2_dict[mx_key]['min_mZp']: tg2_dict[mx_key]['min_mZp'] = mZp

        plot(mass, lim_50, lim_2, lim_16, lim_84, lim_97, lim_ob, mhs, mx, model=options.model)


#for key in tg2_dict:
#    ##Add cheat points to fix contours
#    #tg2_dict[key]['50'].SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['min_mZp']-100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['2'] .SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['min_mZp']-100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['16'].SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['min_mZp']-100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['84'].SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['min_mZp']-100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['97'].SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['min_mZp']-100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['idx'] += 1
#    #tg2_dict[key]['50'].SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['max_mZp']+100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['2'] .SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['max_mZp']+100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['16'].SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['max_mZp']+100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['84'].SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['max_mZp']+100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['97'].SetPoint(tg2_dict[key]['idx'], tg2_dict[key]['max_mZp']+100, tg2_dict[key]['max_mhs'], 100)
#    #tg2_dict[key]['idx'] += 1
#
#
#    mx = int(key.replace('mx_', ''))
#    ROOT.gStyle.Reset()
#    #ROOT.gStyle.SetPadBorderMode(1)
#    #ROOT.gStyle.SetFrameBorderMode(1)
#    ROOT.gStyle.SetPadRightMargin(0.1)#0.02)
#    #ROOT.gStyle.SetPadLeftMargin(0.01)#0.02)
#    canvas = ROOT.TCanvas("debug", "debug", 630, 600)
#    #canvas.SetRightMargin(0.2)
#    tg2_dict[key]['50'].Draw('colz')
#    c_list = tg2_dict[key]['50'].GetContourList(1.)
#    if c_list:
#        for thing in c_list:
#            print(type(thing))
#            thing.Draw('Lsame')
#    canvas.Update()
#    raw_input('cont')
#    plot_2D(tg2_dict[key]['50'], tg2_dict[key]['2'], tg2_dict[key]['16'], tg2_dict[key]['84'], tg2_dict[key]['97'], tg2_dict[key]['min_mZp'], tg2_dict[key]['max_mZp'], tg2_dict[key]['min_mhs'], tg2_dict[key]['max_mhs'],'limits_'+key+'_darkHiggs.png', mx)
#    raw_input('cont')


