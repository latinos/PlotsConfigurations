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
parser.add_option(      "--unblind",  dest="unblind", action="store_true", help="Expect unblinded results" , default=False)
parser.add_option(      "--ww"     ,  dest="ww"     , action="store_true", help="Full combination (2l2n + lnjj)" , default=False)
parser.add_option(      "--full"   ,  dest="full"   , action="store_true", help="Full leptonic (2l2n)" , default=False)
parser.add_option(      "--kin-lim",  dest="kin_lim", action="store_true", help="Draw kinematic boarders" , default=False)
parser.add_option(      "--points" ,  dest="points" , action="store_true", help="Indicate mass points" , default=False)
parser.add_option(      "--as-pdf" ,  dest="as_pdf" , action="store_true", help="Store as pdf in stead of png" , default=False)
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

INC_FILE = 'Incomplete_files.txt'
o_file = open(INC_FILE, 'w')
o_file.close()

#channel = {'ele' : 'e', 'mu' : '#mu', 'elemu': 'l'}

# 2016
LUMI = options.lumi

CENTRAL_MP = [
    ('160', '100', '2000'), ('160', '100', '2500'), 
    ('160', '150', '2000'), ('160', '150', '2500'),
    ('160', '200', '2000'), ('160', '200', '2500'),
    ('160', '300', '1000'), ('160', '300', '1200'), ('160', '300', '1500'), ('160', '300', '2000'), ('160', '300', '2500'), ('160', '300', '800'),
    ('180', '100', '2000'), ('180', '100', '2500'),
    ('180', '150', '2000'), ('180', '150', '2500'),
    ('180', '200', '2000'), ('180', '200', '2500'),
    ('180', '300', '1000'), ('180', '300', '1200'), ('180', '300', '1500'), ('180', '300', '2000'), ('180', '300', '2500'), ('180', '300', '800'),
    ('200', '100', '2000'), ('200', '100', '2500'),
    ('200', '150', '2000'), ('200', '150', '2500'),
    ('200', '200', '2000'), ('200', '200', '2500'),
    ('200', '300', '1000'), ('200', '300', '1200'), ('200', '300', '1500'), ('200', '300', '2000'), ('200', '300', '2500'), ('200', '300', '800'),
    ('300', '150', '1000'), ('300', '150', '1200'), ('300', '150', '1500'), ('300', '150', '400'), ('300', '150', '500'), ('300', '150', '800'),
    ('300', '200', '1000'), ('300', '200', '1200'), ('300', '200', '1500'), ('300', '200', '500'), ('300', '200', '800'),
    ('300', '300', '1000'), ('300', '300', '1200'), ('300', '300', '800'),
    ('400', '200', '1000'), ('400', '200', '500'), ('400', '200', '800'),
]

mhs = ['160', '180', '200']
mDM = ['100', '150', '200']
mZp = ['195', '200', '295', '300', '400', '500', '800', '1000', '1200', '1500']

#CENTRAL_MP = []
for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            mp_tuple = (hs, DM, Zp)
            CENTRAL_MP.append(mp_tuple)

#mhs = ['160','180','200','250','300','350','400']
mhs = ['160','180','200','250','300']
mDM = ['100','150','200','300']
mZp = ['200','300','400','500','600','700','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

PRIVATE_MP = [
    ('250', '150', '1200'),
    ('350', '200', '1200'),
]

INTERPOLATED_MP = []
for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            mp_tuple = (hs, DM, Zp)
            if mp_tuple not in CENTRAL_MP and mp_tuple not in PRIVATE_MP: INTERPOLATED_MP.append(mp_tuple)



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
   #ROOT.gStyle.SetTitleXOffset(1.15)#0.9)
   ROOT.gStyle.SetTitleXOffset(1.0)#1.0)
   ROOT.gStyle.SetTitleYOffset(1.0) # => 1.15 if exponents
   ROOT.gStyle.SetLabelColor(1, "XYZ")
   ROOT.gStyle.SetLabelFont(42, "XYZ")
   ROOT.gStyle.SetLabelOffset(0.007, "XYZ")
   ROOT.gStyle.SetLabelSize(0.045, "XYZ")

   ROOT.gStyle.SetPadBorderMode(0)
   ROOT.gStyle.SetFrameBorderMode(0)
   ROOT.gStyle.SetTitleTextColor(1)
   ROOT.gStyle.SetTitleFillColor(10)
   ROOT.gStyle.SetTitleFontSize(0.05)

#_theta_0p01_gq_0p25_gx_1p0_mhs_160_mx_150_mZp_1000
def get_mx_th2_limits(mx, output_file, blind=True):

    # Get all files with right mx mass
    mx_files = []
    mhs_l = []
    mZp_l = []
    for fil in os.listdir('.'):
       if not '.root' in fil: continue
       if not 'mx_'+str(mx) in fil: continue
       if not 'higgsCombine' in fil: continue
       if not 'AsymptoticLimits' in fil: continue
       if 'darkHiggsVal' in fil: continue
       mZp = float(fil.split('mZp_')[-1].split('_')[0].split('.')[0]) 
       mhs = float(fil.split('mhs_')[-1].split('_')[0].split('.')[0])
 
       # Skip these
       if '95' in str(mZp): continue

       if not mZp in mZp_l: mZp_l.append(mZp) 
       if not mhs in mhs_l: mhs_l.append(mhs) 
       if not fil in mx_files: mx_files.append(fil)

    print('Found '+str(len(mx_files))+' files for mx '+str(mx))
    mhs_l.sort()    
    mZp_l.sort()    

    # Init the TH2
    mhs_a = array( 'd', mhs_l)
    mZp_a = array( 'd', mZp_l)
    mhs_a.append(mhs_l[-1]+100)
    mZp_a.append(mZp_l[-1]+100)
    th2f_exp = ROOT.TH2F('raw_exp_mx'+str(mx), 'raw_exp', len(mZp_a)-1, mZp_a, len(mhs_a)-1, mhs_a)
    th2f_1up = ROOT.TH2F('raw_1up_mx'+str(mx), 'raw_1up', len(mZp_a)-1, mZp_a, len(mhs_a)-1, mhs_a)
    th2f_1do = ROOT.TH2F('raw_1do_mx'+str(mx), 'raw_1do', len(mZp_a)-1, mZp_a, len(mhs_a)-1, mhs_a)
    th2f_2up = ROOT.TH2F('raw_2up_mx'+str(mx), 'raw_2up', len(mZp_a)-1, mZp_a, len(mhs_a)-1, mhs_a)
    th2f_2do = ROOT.TH2F('raw_2do_mx'+str(mx), 'raw_2do', len(mZp_a)-1, mZp_a, len(mhs_a)-1, mhs_a)
    if not blind: th2f_obs = ROOT.TH2F('raw_obs_mx'+str(mx), 'raw_obs', len(mZp_a)-1, mZp_a, len(mhs_a)-1, mhs_a)

    # Fill 2D histograms
    list_of_unusual = []
    for x_idx,mZp in enumerate(mZp_l):
        for y_idx,mhs in enumerate(mhs_l):
            # Select right masspoint file
            curr_file = None
            for fil in mx_files:
                if 'mZp_'+str(int(mZp)) in fil and 'mhs_'+str(int(mhs)) in fil: 
                    curr_file = fil
                    break
            if curr_file is None: continue

            # Set histo idx
            xbin = x_idx+1
            ybin = y_idx+1
            
            # Load and check tree
            r_file = ROOT.TFile.Open(curr_file)
            if not r_file:
                print('Corrupted file? '+fil)
                print(' --> skipping')
                list_of_unusual.append(fil)
                continue
                
            #tree = r_file.limit
            tree = r_file.Get('limit')
            if not tree:
                print('No limit tree found in '+fil)
                print(' --> skipping')
                list_of_unusual.append(fil)
                continue

            n_lim = tree.GetEntries()
            n_exp_lim = 5
            if not blind: n_exp_lim = 6
            if n_lim < n_exp_lim: 
                print('Unexpected amount of limits found, '+str(n_lim)+' in stead of '+str(n_exp_lim)+' in '+fil)
                print(' --> skipping')
                list_of_unusual.append(fil)
                continue

            # Set right contents
            entry = 0
            for event in tree:
                if entry == 0: th2f_2do.SetBinContent(xbin, ybin, event.limit) 
                elif entry == 1: th2f_1do.SetBinContent(xbin, ybin, event.limit) 
                elif entry == 2: th2f_exp.SetBinContent(xbin, ybin, event.limit) 
                elif entry == 3: th2f_1up.SetBinContent(xbin, ybin, event.limit) 
                elif entry == 4: th2f_2up.SetBinContent(xbin, ybin, event.limit) 
                elif entry == 5 and not blind: th2f_obs.SetBinContent(xbin, ybin, event.limit) 
                entry +=1

            r_file.Close()

    # Write
    limits_th2_l = [th2f_2do, th2f_1do, th2f_exp, th2f_1up, th2f_2up]
    if not blind: limits_th2_l.append(th2f_obs)
    o_file = ROOT.TFile(output_file, 'recreate')
    o_file.cd()
    for hist in limits_th2_l:
        hist.Write()
    o_file.Close()

    # Make list for potential resub
    o_file = open(INC_FILE, 'a')
    for fil in list_of_unusual:
        o_file.write(fil+'\n')
    o_file.close()

    return limits_th2_l

def fill_gaps(output_file, th2_lims):
    
    # Make a copy
    th2_copy = th2_lims.Clone()
    th2_copy.SetName(th2_lims.GetName()+'_gapfill')

    print('Filling gaps of '+th2_lims.GetName())
    # Start loop
    n_empty = 0
    n_filled = 0
    for xbin in range(1, th2_copy.GetNbinsX()+1):
        for ybin in range(1, th2_copy.GetNbinsY()+1):
            # Detect gap
            if not th2_copy.GetBinContent(xbin, ybin) == 0: continue
            #print('Gap detected in '+str(th2_copy.GetXaxis().GetBinLowEdge(xbin))+','+str(th2_copy.GetYaxis().GetBinLowEdge(ybin)))
            n_empty += 1

            # Average non zero neigbouring bins
            neigbour_sum = 0.
            neigbours = 0
            #for ori in [(0,1), (0,-1), (1,0), (-1, 0)]: # Average over both x and y, is this wanted?
            for ori in [(1,0), (-1, 0)]: # Average over both x and y, is this wanted?
                neigbour_val = th2_lims.GetBinContent(xbin+ori[0], ybin+ori[1]) # look at original neigbours
                if not neigbour_val == 0: 
                    neigbour_sum += neigbour_val
                    neigbours+= 1

            neigbour_avg = 0
            if neigbours > 0: neigbour_avg = (neigbour_sum+0.)/(neigbours+0.)
            #print(neigbours, neigbour_avg)

            # Set bin value
            if not neigbour_avg == 0: 
                th2_copy.SetBinContent(xbin, ybin, neigbour_avg)
                n_filled += 1

    if n_empty > 0: print('Found '+str(n_empty)+' empty binnes, managed to fill '+str(n_filled))

    # Write
    o_file = ROOT.TFile(output_file, 'update')
    o_file.cd()
    th2_copy.Write()
    o_file.Close()
    
    return th2_copy
    
def get_contours(output_file, th2_lims, nx_tg=200, ny_tg=200):
    org_name = th2_lims.GetName()

    # Extract TGraph2D
    x = array('d', []) 
    y = array('d', [])
    l = array('d', [])
    n_below_one = 0 
    for xbin in range(1, th2_lims.GetNbinsX()+1):
        for ybin in range(1, th2_lims.GetNbinsY()+1):
            x_val = th2_lims.GetXaxis().GetBinLowEdge(xbin)
            y_val = th2_lims.GetYaxis().GetBinLowEdge(ybin)
            l_val = th2_lims.GetBinContent(xbin, ybin)

            # Avoid white boarders?
            if xbin == 1: x_val -= 1. #mzp
            if ybin == 1: y_val -= 1.
            if xbin == th2_lims.GetNbinsX(): x_val += 4. #mzp
            if ybin == th2_lims.GetNbinsY(): y_val += 1.

            x.append(x_val)
            y.append(y_val)
            l.append(l_val)

            if l_val < 1.: n_below_one += 1

    tg2_name = org_name.replace('raw', 'tg2')
    tg2_lims = ROOT.TGraph2D(tg2_name, tg2_name, len(x), x, y, l)

    # Enlarge resolution
    tg2_lims.SetNpx(nx_tg)
    tg2_lims.SetNpy(ny_tg)
    th2_HD = tg2_lims.GetHistogram()
    th2_HD.SetName(org_name.replace('raw', 'DTri')) #Delaunay Triangle
    th2_HD.Smooth(1)
    tg2_HD = ROOT.TGraph2D(th2_HD)
    tg2_HD.SetNpx(nx_tg)
    tg2_HD.SetNpy(ny_tg)
    tg2_HD.SetName(org_name.replace('raw', 'DTri_tg2'))

    # Extract contour(s)
    contours = []
    cont_list = tg2_HD.GetContourList(1.)
    if n_below_one > 0 and cont_list:
        for i_tg in range(cont_list.GetSize()):
            tg_temp = cont_list.At(i_tg).Clone()
            tg_temp.SetName(org_name.replace('raw', 'c'+str(i_tg)))
            contours.append(tg_temp)
    else:
        tg_temp = ROOT.TGraph()
        tg_temp.SetName(org_name.replace('raw', 'cdef'))
        contours.append(ROOT.TGraph())
        
    # Write
    o_file = ROOT.TFile(output_file, 'update')
    o_file.cd()
    tg2_HD.Write()
    for cont in contours:
        cont.Write()
    o_file.Close()

    return contours, tg2_HD

def plot_limits(output_file, mx, tg2_HD_list, contours_list, show_int=False):
    set_style()

    blind = True
    if len(tg2_HD_list) > 5: blind = False

    mZp_min = 200
    mZp_max = 2500
    mhs_min = 160
    #mhs_max = 350
    mhs_max = 400

    exp_h = tg2_HD_list[2].GetHistogram()
    #exp_h.Smooth(1, 'k3a')
    #exp_h.GetXaxis().SetTitle('m_{Z\'} [GeV]')
    #exp_h.GetYaxis().SetTitle('m_{s} [GeV]')
    #exp_h.GetXaxis().SetRangeUser(mZp_min, mZp_max)
    ##exp_h.GetYaxis().SetRangeUser(160, 400)
    ##exp_h.GetYaxis().SetRangeUser(160, 350)
    #exp_h.GetYaxis().SetRangeUser(mhs_min, mhs_max)
    exp_h.GetZaxis().SetRangeUser(0.05, 50)
    exp_h.SetTitle('')

    exp_c = contours_list[2]
    s1up_c = contours_list[3]
    s1do_c = contours_list[1]

    wanted_c = [exp_c, s1up_c, s1do_c]
    if not blind: wanted_c.append(contours_list[5])

    #canvas = ROOT.TCanvas('c_'+str(mx),'c_'+str(mx),800,800)
    canvas = ROOT.TCanvas('c_'+str(mx),'c_'+str(mx),800,600)
    canvas.cd()

    pad1 = ROOT.TPad("pad1","pad1",0.,0.,1.,1.)
    #pad1.SetLeftMargin(0.15)
    #pad1.SetLeftMargin(0.135)
    pad1.SetLeftMargin(0.11)
    #pad1.SetRightMargin(0.12)
    pad1.SetRightMargin(0.15)
    pad1.SetBottomMargin(0.12)
    pad1.Draw()
    pad1.cd()
    pad1.SetLogz()

    ROOT.gStyle.SetOptStat(0)
    #ghost = ROOT.TH2D("postGrid", "", 1, mZp_min-100, mZp_max+100, 1, mhs_min-100, mhs_max+100)
    ghost = ROOT.TH1D('ghost', '', 1, mZp_min, mZp_max)
    ghost.GetYaxis().SetRangeUser(mhs_min, mhs_max)
    ghost.GetXaxis().SetTitle('m_{Z\'} [GeV]')
    ghost.GetYaxis().SetTitle('m_{s} [GeV]')
    #ghost.Draw("AXIG")
    ghost.Draw()


    exp_h.Draw('colz, same')
    for idx,cont_l in enumerate(wanted_c):
        for cont in cont_l:
            if idx == 0:
                cont.SetLineWidth(4)
            elif idx < 3:
                cont.SetLineWidth(1)
            elif idx > 2 and idx == len(wanted_c)-1:
                cont.SetLineWidth(4)
                cont.SetLineColor(ROOT.kRed)
            cont.Draw('l,same')
    ROOT.gPad.RedrawAxis('')


    if not show_int:
        #x1_leg = 1-.52
        #x2_leg = 1-.13
        x1_leg = 1-.55
        x2_leg = 1-.16

        #y1_leg = 1-.231
        #y2_leg = 1-.151
        y1_leg = 1-.291
        y2_leg = 1-.191
        if options.ww:
            #x1_leg = 1-.44
            #x2_leg = 1-.13
            x1_leg = 1-.47
            x2_leg = 1-.16

            #y1_leg = 1-.201
            #y2_leg = 1-.121
    else:
        x1_leg = 1-.53
        #y1_leg = 1-.2
        y1_leg = 1-.27
        #x2_leg = 1-.17
        x2_leg = 1-.18
        #y2_leg = 1-.08
        y2_leg = 1-.15

    leg = ROOT.TLegend(x1_leg, y1_leg, x2_leg, y2_leg)
    leg.SetFillColor(0)
    leg.SetLineColor(0)
    leg.SetShadowColor(0)
    leg.SetTextFont(42)
    leg.SetTextSize(0.025)
    ##mdl_str = 'darkHiggs, Z\' #rightarrow #chi #bar{#chi} + s (WW #rightarrow l#nuqq\')'
    #mdl_str = models['darkHiggs']['model_str']
    ##mdl_str = 'darkHiggs, Z\' #rightarrow #chi #bar{#chi} + s (WW #rightarrow l#nuqq\')'
    #cs_str = '#theta = 0.01, g_{q} = 0.25, g_{#chi} = 1'
    mp_str = 'm_{#chi} = '+str(mx)+' GeV'
    #msp_str = '#theta = 0.01, g_{q} = 0.25, g_{#chi} = 1, m_{#chi} = '+str(mx)+' GeV'
    ##leg.SetHeader(mdl_str)
    ##leg.SetHeader('#splitline{'+mdl_str+'}{'+msp_str+'}')
    ##leg.SetHeader('#splitline{#splitline{'+mdl_str+'}{'+msp_str+'}}{ }')
    leg.AddEntry(wanted_c[0][0], "Expected 95% CL", "l")
    if not blind: leg.AddEntry(wanted_c[-1][0], "Observed 95% CL", "l")
    leg.AddEntry(wanted_c[1][0], "#pm 1 std. dev.", "l")
    leg.Draw()
  
    chan = 'semi'
    if options.ww: chan = 'ww' 
    if options.full: chan = 'full' 

    pt = mod_PT(x1_leg,y2_leg,x2_leg,y2_leg+0.13, 'darkHiggs', mp_str, chan=chan) 
    pt.Draw()
 
    intLumi = LUMI

    latex = ROOT.TLatex()
    latex.SetNDC()
    latex.SetTextFont(42)
    latex.SetTextSize(0.04)
    latex.SetTextAlign(11) # align left
    latex.DrawLatex(0.11, 0.96, "#bf{CMS} #it{preliminary}")
    latex.SetTextAlign(31)
    latex.DrawLatex(0.85, 0.96, str(intLumi)+" fb^{-1} (13 TeV)")

    latex.SetTextSize(0.05)
    latex.SetTextAlign(33)
    latex.SetTextAngle(90)
    latex.DrawLatex(0.945, 0.95, '#sigma/#sigma_{theory}')

    if options.kin_lim:

        #mZp = 2*mx + mhs
        Zp_lim = ROOT.TGraph()
        idx = 0
        for m in range(mhs_min -50, mhs_max+100, 10):
            m_y = m
            m_x = m + 2*mx
            Zp_lim.SetPoint(idx, m_x, m_y)
            idx += 1
        Zp_lim.SetLineWidth(2)
        Zp_lim.SetLineColor(2)
        Zp_lim.Draw('pl,same')

        #mZp = 2*mx
        mx2_lim = ROOT.TGraph()
        idx = 0
        for m in range(mhs_min -50, mhs_max+100, 10):
            m_y = m
            m_x = 2*mx
            mx2_lim.SetPoint(idx, m_x, m_y)
            idx += 1
        mx2_lim.SetLineWidth(2)
        mx2_lim.SetLineColor(2)
        mx2_lim.Draw('pl,same')

    if not show_int:
        canvas.Update()
        if options.as_pdf: canvas.SaveAs(output_file.replace('.root', '.pdf'))
        else: canvas.SaveAs(output_file.replace('.root', '.png'))
    else:
        # Load central points
        mp_cen = ROOT.TGraph()
        idx = 0
        #cen_x = array('d', [])
        #cen_y = array('d', [])
        for point in CENTRAL_MP:
            if not int(point[1]) == int(mx): continue
            x = float(point[2])
            y = float(point[0])
            mp_cen.SetPoint(idx, x, y)
            idx += 1
            #cen_x.append(float(point[2]))
            #cen_y.append(float(point[0])) 

        # Load private points
        mp_pri = ROOT.TGraph()
        idx = 0
        #cen_x = array('d', [])
        #cen_y = array('d', [])
        for point in PRIVATE_MP:
            if not int(point[1]) == int(mx): continue
            x = float(point[2])
            y = float(point[0])
            mp_pri.SetPoint(idx, x, y)
            idx += 1
            #cen_x.append(float(point[2]))
            #cen_y.append(float(point[0])) 

        # Load interpolated points
        mp_int = ROOT.TGraph()
        idx = 0
        #int_x = array('d', [])
        #int_y = array('d', [])
        for point in INTERPOLATED_MP:
            if not int(point[1]) == int(mx): continue
            x = float(point[2])
            y = float(point[0])
            mp_int.SetPoint(idx, x, y)
            idx += 1
            #int_x.append(float(point[2]))
            #int_y.append(float(point[0])) 
       
        # Set Style
        mp_cen.SetMarkerStyle(20) 
        mp_pri.SetMarkerStyle(20) 
        mp_int.SetMarkerStyle(20) 
        mp_cen.SetMarkerColor(1) 
        mp_pri.SetMarkerColor(2) 
        mp_int.SetMarkerColor(600)

        # Draw points
        mp_cen.Draw('same,p')
        mp_pri.Draw('same,p')
        mp_int.Draw('same,p')

        # Add to legend
        leg.AddEntry(mp_cen, 'Central mass points', 'p')
        leg.AddEntry(mp_pri, 'Private mass points', 'p')
        leg.AddEntry(mp_int, 'Interpolated mass points', 'p')
        leg.Draw()

        canvas.Update()
        if options.as_pdf: canvas.SaveAs(output_file.replace('.root', '.pdf'))
        else: canvas.SaveAs(output_file.replace('.root', '.png'))

#for mx in [200]:
blind = True
if options.unblind: blind = False
obj_dict = {}
for mx in [100, 150, 200, 300]:
    obj_dict[mx] = {}
    output_file = 'limits_mx_'+str(mx)+'_darkHiggs.root'
    raw_hist = get_mx_th2_limits(mx, output_file, blind)
    gap_filled_hist = [fill_gaps(output_file, hist) for hist in raw_hist]
    contours = []
    hd_2D_graphs = []
    for hist in gap_filled_hist:
        conts, tg2 = get_contours(output_file, hist)
        contours.append(conts)
        hd_2D_graphs.append(tg2)
    obj_dict[mx]['tg2'] = hd_2D_graphs
    obj_dict[mx]['cont'] = contours
    #plot_limits(output_file, mx, hd_2D_graphs, contours)


for mx in [100, 150, 200, 300]:
    output_file = 'limits_mx_'+str(mx)+'_darkHiggs.root'
    plot_limits(output_file, mx, obj_dict[mx]['tg2'], obj_dict[mx]['cont'], show_int=options.points)
    #for tg in hd_2D_graphs:
    #    tg.Clear()
    #ROOT.gROOT.Reset()
