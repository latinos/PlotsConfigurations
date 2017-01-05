#!/usr/bin/env python
import re
from sys import argv, stdout, stderr, exit
from optparse import OptionParser

import CombineHarvester.CombineTools.plotting as plot




# tool to compare fitted nuisance parameters to prefit values.
#
# Also used to check for potential problems in RooFit workspaces to be used with combine
# (see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/HiggsPAGPreapprovalChecks)

# import ROOT with a fix to get batch mode (http://root.cern.ch/phpBB3/viewtopic.php?t=3198)
hasHelp = False
for X in ("-h", "-?", "--help"):
    if X in argv:
        hasHelp = True
        argv.remove(X)
argv.append( '-b-' )
import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.gSystem.Load("libHiggsAnalysisCombinedLimit")
argv.remove( '-b-' )
if hasHelp: argv.append("-h")

parser = OptionParser(usage="usage: %prog [options] in.root  \nrun with --help to get list of options")
parser.add_option("--vtol", "--val-tolerance", dest="vtol", default=0.30, type="float", help="Report nuisances whose value changes by more than this amount of sigmas")
parser.add_option("--stol", "--sig-tolerance", dest="stol", default=0.10, type="float", help="Report nuisances whose sigma changes by more than this amount")
parser.add_option("--vtol2", "--val-tolerance2", dest="vtol2", default=2.0, type="float", help="Report severely nuisances whose value changes by more than this amount of sigmas")
parser.add_option("--stol2", "--sig-tolerance2", dest="stol2", default=0.50, type="float", help="Report severely nuisances whose sigma changes by more than this amount")
parser.add_option("-a", "--all",      dest="all",    default=False,  action="store_true", help="Print all nuisances, even the ones which are unchanged w.r.t. pre-fit values.")
parser.add_option("-A", "--absolute", dest="abs",    default=False,  action="store_true", help="Report also absolute values of nuisance values and errors, not only the ones normalized to the input sigma")
parser.add_option("-p", "--poi",      dest="poi",    default="r",    type="string",  help="Name of signal strength parameter (default is 'r' as per text2workspace.py)")
parser.add_option("-f", "--format",   dest="format", default="text", type="string",  help="Output format ('text', 'latex', 'twiki'")
parser.add_option("-g", "--histogram", dest="plotfile", default=None, type="string", help="If true, plot the pulls of the nuisances to the given file.")

parser.add_option("-o", "--output", dest="output", default="test.root", type="string", help="If true, plot the pulls of the nuisances to the given file (pdf).")
parser.add_option("-i", "--inputNuisances", dest="inputNuisances", default=None, type="string", help="If set, read the list of nuisances to be plotted in the pdf file")



(options, args) = parser.parse_args()
if len(args) == 0:
    parser.print_usage()
    exit(1)

file = ROOT.TFile(args[0])
if file == None: raise RuntimeError, "Cannot open file %s" % args[0]
fit_s  = file.Get("fit_s")
fit_b  = file.Get("fit_b")
prefit = file.Get("nuisances_prefit")
if fit_s == None or fit_s.ClassName()   != "RooFitResult": raise RuntimeError, "File %s does not contain the output of the signal fit 'fit_s'"     % args[0]
if fit_b == None or fit_b.ClassName()   != "RooFitResult": raise RuntimeError, "File %s does not contain the output of the background fit 'fit_b'" % args[0]
if prefit == None or prefit.ClassName() != "RooArgSet":    raise RuntimeError, "File %s does not contain the prefit nuisances 'nuisances_prefit'"  % args[0]

isFlagged = {}

# maps from nuisance parameter name to the row to be printed in the table
table = {}

# get the fitted parameters
fpf_b = fit_b.floatParsFinal()
fpf_s = fit_s.floatParsFinal()

pulls = []

nuis_p_i=0
# Also make histograms for pull distributions:
hist_fit_b  = ROOT.TH1F("prefit_fit_b"   ,"B-only fit Nuisances;;#theta ",prefit.getSize(),0,prefit.getSize())
hist_fit_s  = ROOT.TH1F("prefit_fit_s"   ,"S+B fit Nuisances   ;;#theta ",prefit.getSize(),0,prefit.getSize())
hist_prefit = ROOT.TH1F("prefit_nuisancs","Prefit Nuisances    ;;#theta ",prefit.getSize(),0,prefit.getSize())

# loop over all fitted parameters
for i in range(fpf_s.getSize()):

    nuis_s = fpf_s.at(i)
    name   = nuis_s.GetName();
    nuis_b = fpf_b.find(name)
    nuis_p = prefit.find(name)

    #print " i=", i, " nuis_s = ", nuis_s  
    
    # keeps information to be printed about the nuisance parameter
    row = []

    flag = False;
    mean_p, sigma_p = 0,0

    if nuis_p == None:
        # nuisance parameter NOT present in the prefit result
        if not options.abs: continue
        row += [ "[%.2f, %.2f]" % (nuis_s.getMin(), nuis_s.getMax()) ]

    else:
        # get best-fit value and uncertainty at prefit for this 
        # nuisance parameter
        mean_p, sigma_p = (nuis_p.getVal(), nuis_p.getError())

        if not sigma_p > 0: sigma_p = (nuis_p.getMax()-nuis_p.getMin())/2
        if options.abs: row += [ "%.6f +/- %.6f" % (nuis_p.getVal(), nuis_p.getError()) ]

    for fit_name, nuis_x in [('b', nuis_b), ('s',nuis_s)]:
        if nuis_x == None:
            row += [ " n/a " ]
        else:
            row += [ "%+.2f +/- %.2f" % (nuis_x.getVal(), nuis_x.getError()) ]
        
            if nuis_p != None:
                if options.plotfile: 
                  if fit_name=='b':
                    nuis_p_i+=1
                    hist_fit_b.SetBinContent(nuis_p_i,nuis_x.getVal())
                    hist_fit_b.SetBinError(nuis_p_i,nuis_x.getError())
                    hist_fit_b.GetXaxis().SetBinLabel(nuis_p_i,name)
                  if fit_name=='s':
                    hist_fit_s.SetBinContent(nuis_p_i,nuis_x.getVal())
                    hist_fit_s.SetBinError(nuis_p_i,nuis_x.getError())
                    hist_fit_s.GetXaxis().SetBinLabel(nuis_p_i,name)
                  hist_prefit.SetBinContent(nuis_p_i,mean_p)
                  hist_prefit.SetBinError(nuis_p_i,sigma_p)
                  hist_prefit.GetXaxis().SetBinLabel(nuis_p_i,name)

                if sigma_p>0: 

                        # calculate the difference of the nuisance parameter
                        # w.r.t to the prefit value in terms of the uncertainty
                        # on the prefit value
                        valShift = (nuis_x.getVal() - mean_p)/sigma_p

                        # ratio of the nuisance parameter's uncertainty
                        # w.r.t the prefit uncertainty
                        sigShift = nuis_x.getError()/sigma_p

                else :
                        print "No definition for prefit uncertainty %s. Printing absolute shifts"%(nuis_p.GetName())
                        valShift = (nuis_x.getVal() - mean_p)
                        sigShift = nuis_x.getError()
                if fit_name == 'b':
                    pulls.append(valShift)
                if options.abs:
                    row[-1] += " (%+4.2fsig, %4.2f)" % (valShift, sigShift)
                else:
                    row[-1] = " %+4.2f, %4.2f" % (valShift, sigShift)

                if (abs(valShift) > options.vtol2 or abs(sigShift-1) > options.stol2):

                    # severely report this nuisance:
                    # 
                    # the best fit moved by more than 2.0 sigma or the uncertainty (sigma)
                    # changed by more than 50% (default thresholds) w.r.t the prefit values

                    isFlagged[(name,fit_name)] = 2

                    flag = True

                elif (abs(valShift) > options.vtol  or abs(sigShift-1) > options.stol):

                    # report this nuisance:
                    # 
                    # the best fit moved by more than 0.3 sigma or the uncertainty (sigma)
                    # changed by more than 10% (default thresholds) w.r.t the prefit values

                    if options.all: isFlagged[(name,fit_name)] = 1

                    flag = True

                elif options.all:
                    flag = True

    # end of loop over s and b

    row += [ "%+4.2f"  % fit_s.correlation(name, options.poi) ]
    if flag or options.all: table[name] = row

#end of loop over all fitted parameters

#----------
# print the results
#----------

#fmtstring = "%-40s     %15s    %15s  %10s"
#highlight = "*%s*"
#morelight = "!%s!"
#pmsub, sigsub = None, None
#if options.format == 'text':
    #if options.abs:
        #fmtstring = "%-40s     %15s    %30s    %30s  %10s"
        #print fmtstring % ('name', 'pre fit', 'b-only fit', 's+b fit', 'rho')
    #else:
        #print fmtstring % ('name', 'b-only fit', 's+b fit', 'rho')
#elif options.format == 'latex':
    #pmsub  = (r"(\S+) \+/- (\S+)", r"$\1 \\pm \2$")
    #sigsub = ("sig", r"$\\sigma$")
    #highlight = "\\textbf{%s}"
    #morelight = "{{\\color{red}\\textbf{%s}}}"
    #if options.abs:
        #fmtstring = "%-40s &  %15s & %30s & %30s & %6s \\\\"
        #print "\\begin{tabular}{|l|r|r|r|r|} \\hline ";
        #print (fmtstring % ('name', 'pre fit', '$b$-only fit', '$s+b$ fit', r'$\rho(\theta, \mu)$')), " \\hline"
    #else:
        #fmtstring = "%-40s &  %15s & %15s & %6s \\\\"
        #print "\\begin{tabular}{|l|r|r|r|} \\hline ";
        ##what = r"$(x_\text{out} - x_\text{in})/\sigma_{\text{in}}$, $\sigma_{\text{out}}/\sigma_{\text{in}}$"
        #what = r"\Delta x/\sigma_{\text{in}}$, $\sigma_{\text{out}}/\sigma_{\text{in}}$"
        #print  fmtstring % ('',     '$b$-only fit', '$s+b$ fit', '')
        #print (fmtstring % ('name', what, what, r'$\rho(\theta, \mu)$')), " \\hline"
#elif options.format == 'twiki':
    #pmsub  = (r"(\S+) \+/- (\S+)", r"\1 &plusmn; \2")
    #sigsub = ("sig", r"&sigma;")
    #highlight = "<b>%s</b>"
    #morelight = "<b style='color:red;'>%s</b>"
    #if options.abs:
        #fmtstring = "| <verbatim>%-40s</verbatim>  | %-15s  | %-30s  | %-30s   | %-15s  |"
        #print "| *name* | *pre fit* | *b-only fit* | *s+b fit* | "
    #else:
        #fmtstring = "| <verbatim>%-40s</verbatim>  | %-15s  | %-15s | %-15s  |"
        #print "| *name* | *b-only fit* | *s+b fit* | *corr.* |"
#elif options.format == 'html':
    #pmsub  = (r"(\S+) \+/- (\S+)", r"\1 &plusmn; \2")
    #sigsub = ("sig", r"&sigma;")
    #highlight = "<b>%s</b>"
    #morelight = "<strong>%s</strong>"
    #print """
#<html><head><title>Comparison of nuisances</title>
#<style type="text/css">
    #td, th { border-bottom: 1px solid black; padding: 1px 1em; }
    #td { font-family: 'Consolas', 'Courier New', courier, monospace; }
    #strong { color: red; font-weight: bolder; }
#</style>
#</head><body style="font-family: 'Verdana', sans-serif; font-size: 10pt;"><h1>Comparison of nuisances</h1>
#<table>
#"""
    #if options.abs:
        #print "<tr><th>nuisance</th><th>pre fit</th><th>background fit </th><th>signal fit</th><th>correlation</th></tr>"
        #fmtstring = "<tr><td><tt>%-40s</tt> </td><td> %-15s </td><td> %-30s </td><td> %-30s </td><td> %-15s </td></tr>"
    #else:
        #what = "&Delta;x/&sigma;<sub>in</sub>, &sigma;<sub>out</sub>/&sigma;<sub>in</sub>";
        #print "<tr><th>nuisance</th><th>background fit<br/>%s </th><th>signal fit<br/>%s</th><th>&rho;(&mu;, &theta;)</tr>" % (what,what)
        #fmtstring = "<tr><td><tt>%-40s</tt> </td><td> %-15s </td><td> %-15s </td><td> %-15s </td></tr>"

#names = table.keys()
#names.sort()
#highlighters = { 1:highlight, 2:morelight };
#for n in names:
    #v = table[n]
    #if options.format == "latex": n = n.replace(r"_", r"\_")
    #if pmsub  != None: v = [ re.sub(pmsub[0],  pmsub[1],  i) for i in v ]
    #if sigsub != None: v = [ re.sub(sigsub[0], sigsub[1], i) for i in v ]
    #if (n,'b') in isFlagged: v[-3] = highlighters[isFlagged[(n,'b')]] % v[-3]
    #if (n,'s') in isFlagged: v[-2] = highlighters[isFlagged[(n,'s')]] % v[-2]
    #if options.abs:
       #print fmtstring % (n, v[0], v[1], v[2], v[3])
    #else:
       #print fmtstring % (n, v[0], v[1], v[2])

#if options.format == "latex":
    #print " \\hline\n\end{tabular}"
#elif options.format == "html":
    #print "</table></body></html>"



def getGraph(hist,shift):

   gr = ROOT.TGraphErrors()
   gr.SetName(hist.GetName())
   for i in range(hist.GetNbinsX()):
     x = hist.GetBinCenter(i+1)+shift
     y = hist.GetBinContent(i+1)
     e = hist.GetBinError(i+1)
     gr.SetPoint(i,x,y)
     gr.SetPointError(i,float(abs(shift))*0.8,e)
   return gr



list_nuisances = []
if options.inputNuisances :
  import json
  print " inputNuisances = ", options.inputNuisances
  with open(options.inputNuisances, "r") as data_file:    
    data = json.load(data_file)
    list_nuisances =  data['nuisances']
    

if options.plotfile:
    import ROOT
    fout = ROOT.TFile(options.plotfile,"RECREATE")
    ROOT.gROOT.SetStyle("Plain")
    ROOT.gStyle.SetOptFit(1)
    histogram = ROOT.TH1F("pulls", "Pulls", 60, -3, 3)
    for pull in pulls:
        histogram.Fill(pull)
    canvas = ROOT.TCanvas("asdf", "asdf", 800, 800)
    histogram.GetXaxis().SetTitle("pull")
    histogram.SetTitle("Post-fit nuisance pull distribution")
    histogram.SetMarkerStyle(20)
    histogram.SetMarkerSize(2)
    #histogram.Fit("gaus")
    histogram.Draw("pe")
    #canvas.SaveAs(options.plotfile)
    fout.WriteTObject(canvas)

    canvas_nuis = ROOT.TCanvas("nuisancs", "nuisances", 900, 600)
    hist_fit_e_s = hist_fit_s.Clone("errors_s")
    hist_fit_e_b = hist_fit_b.Clone("errors_b")
    gr_fit_s = getGraph(hist_fit_s,-0.1)
    gr_fit_b = getGraph(hist_fit_b, 0.1)
    gr_fit_s.SetLineColor(ROOT.kRed)
    gr_fit_s.SetMarkerColor(ROOT.kRed)
    gr_fit_b.SetLineColor(ROOT.kBlue)
    gr_fit_b.SetMarkerColor(ROOT.kBlue)
    gr_fit_b.SetMarkerStyle(20)
    gr_fit_s.SetMarkerStyle(20)
    gr_fit_b.SetMarkerSize(1.0)
    gr_fit_s.SetMarkerSize(1.0)
    gr_fit_b.SetLineWidth(2)
    gr_fit_s.SetLineWidth(2)
    hist_prefit.SetLineWidth(2)
    hist_prefit.SetTitle("Nuisance Paramaeters")
    hist_prefit.SetLineColor(ROOT.kBlack)
    hist_prefit.SetFillColor(ROOT.kGray)
    hist_prefit.SetMaximum(3)
    hist_prefit.SetMinimum(-3)
    hist_prefit.Draw("E2")
    hist_prefit.Draw("histsame")
    gr_fit_b.Draw("EPsame")
    gr_fit_s.Draw("EPsame")
    canvas_nuis.SetGridx()
    canvas_nuis.RedrawAxis()
    canvas_nuis.RedrawAxis('g')
    leg=ROOT.TLegend(0.6,0.7,0.89,0.89)
    leg.SetFillColor(0)
    leg.SetTextFont(42)
    leg.AddEntry(hist_prefit,"Prefit","FL")
    leg.AddEntry(gr_fit_b,"B-only fit","EPL")
    leg.AddEntry(gr_fit_s,"S+B fit"   ,"EPL")
    leg.Draw()
    fout.WriteTObject(canvas_nuis)
    canvas_pferrs = ROOT.TCanvas("post_fit_errs", "post_fit_errs", 900, 600)
    for b in range(1,hist_fit_e_s.GetNbinsX()+1): 
      hist_fit_e_s.SetBinContent(b,hist_fit_s.GetBinError(b)/hist_prefit.GetBinError(b))
      hist_fit_e_b.SetBinContent(b,hist_fit_b.GetBinError(b)/hist_prefit.GetBinError(b))
      hist_fit_e_s.SetBinError(b,0)
      hist_fit_e_b.SetBinError(b,0)
    hist_fit_e_s.SetFillColor(ROOT.kRed)
    hist_fit_e_b.SetFillColor(ROOT.kBlue)
    hist_fit_e_s.SetBarWidth(0.4)
    hist_fit_e_b.SetBarWidth(0.4)
    hist_fit_e_b.SetBarOffset(0.45)
    hist_fit_e_b.GetYaxis().SetTitle("#sigma_{#theta}/(#sigma_{#theta} prefit)")
    hist_fit_e_b.SetTitle("Nuisance Parameter Uncertainty Reduction")
    hist_fit_e_b.SetMaximum(1.5)
    hist_fit_e_b.SetMinimum(0)
    hist_fit_e_b.Draw("bar")
    hist_fit_e_s.Draw("barsame")
    leg_rat=ROOT.TLegend(0.6,0.7,0.89,0.89)
    leg_rat.SetFillColor(0)
    leg_rat.SetTextFont(42)
    leg_rat.AddEntry(hist_fit_e_b,"B-only fit","F")
    leg_rat.AddEntry(hist_fit_e_s,"S+B fit"   ,"F")
    leg_rat.Draw()
    line_one = ROOT.TLine(0,1,hist_fit_e_s.GetXaxis().GetXmax(),1)
    line_one.SetLineColor(1); line_one.SetLineStyle(2); line_one.SetLineWidth(2)
    line_one.Draw()
    canvas_pferrs.RedrawAxis()

    fout.WriteTObject(canvas_pferrs)



    #
    # fancy impact plot style
    
    import math
    
    # number of nuisances
    #n_params_total = fpf_s.getSize()
    n_params_total = gr_fit_s.GetN()
    
    if len(list_nuisances) != 0 :
      n_params_total = len(list_nuisances)
    
    print " n_params_total = ", n_params_total
    
    # Set the global plotting style
    plot.ModTDRStyle(l=0.4, b=0.10, width=700)
    
    # Set the number of parameters per page (show) and the number of pages (n)
    show = 30 # hardcoded -> but it could be passed by user command line
    n = int(math.ceil(float(n_params_total) / float(show)))
    #print " n = ", n, " fpf_s.getSize() = ", fpf_s.getSize()
    
    # loop over the pages
    for page in xrange(n):

      canv = ROOT.TCanvas( options.output , options.output )    
      
      # parameters in this page: check not to exceed the maximum number of parameters available
      n_params = show
      if (n_params_total - page * show) < n_params :
        n_params = (n_params_total - page * show)
        
      boxes = []
      for i in xrange(n_params):
        y1 = ROOT.gStyle.GetPadBottomMargin()
        y2 = 1. - ROOT.gStyle.GetPadTopMargin()
        h = (y2 - y1) / float(n_params)
        y1 = y1 + float(i) * h
        y2 = y1 + h
        box = ROOT.TPaveText(0, y1, 1, y2, 'NDC')
        plot.Set(box, TextSize=0.02, BorderSize=0, FillColor=0, TextAlign=12, Margin=0.005)
        if i % 2 == 0:
            box.SetFillColor(18)
        box.AddText('%i' % (n_params - i + page * show))
        box.Draw()
        boxes.append(box)
   
      # Crate and style the pads
      #pads = plot.TwoPadSplitColumns(0.7, 0., 0.)
      pads = plot.TwoPadSplitColumns(0.67, 0., 0.)
      pads[0].SetGrid(1, 0)
      pads[0].SetTickx(1)
      pads[1].SetGrid(1, 0)
      pads[1].SetTickx(1)
   
  
      h_pulls = ROOT.TH2F("pulls", "pulls", 6, -2.9, 2.9, n_params, 0, n_params)
      g_pulls = ROOT.TGraphAsymmErrors(n_params)
      g_pulls_b = ROOT.TGraphAsymmErrors(n_params)
   
      text_entries = []
      for p in xrange(n_params):
          i = n_params - (p + 1)
          
          if len(list_nuisances) == 0 :
            
              # s+b fit
              g_pulls.SetPoint(i, gr_fit_s.GetY()[i + page * show], float(i) + 0.5)
              g_pulls.SetPointError( i, gr_fit_s.GetErrorYlow(i + page * show), gr_fit_s.GetErrorYhigh(i + page * show), 0., 0.)
              
              # b fit
              g_pulls_b.SetPoint(i, gr_fit_b.GetY()[i + page * show], float(i) + 0.5)
              g_pulls_b.SetPointError( i, gr_fit_b.GetErrorYlow(i + page * show), gr_fit_s.GetErrorYhigh(i + page * show), 0., 0.)
              
              col = 1
              h_pulls.GetYaxis().SetBinLabel( i + 1, ('#color[%i]{%s}'% (col, hist_fit_e_s.GetXaxis().GetBinLabel(i + page * show + 1)    )))
   
          
          else :
            
              for ibin in xrange(gr_fit_s.GetN()) :                
                if hist_fit_e_s.GetXaxis().GetBinLabel(ibin+1) == list_nuisances[i + page * show] :
                               
                  # s+b fit
                  g_pulls.SetPoint(i, gr_fit_s.GetY()[ibin], float(i) + 0.5)
                  g_pulls.SetPointError( i, gr_fit_s.GetErrorYlow(ibin), gr_fit_s.GetErrorYhigh(ibin), 0., 0.)
                  
                  # b fit
                  g_pulls_b.SetPoint(i, gr_fit_b.GetY()[ibin], float(i) + 0.5)
                  g_pulls_b.SetPointError( i, gr_fit_b.GetErrorYlow(ibin), gr_fit_s.GetErrorYhigh(ibin), 0., 0.)
                  
                  col = 1
                  h_pulls.GetYaxis().SetBinLabel( i + 1, ('#color[%i]{%s}'% (col, hist_fit_e_s.GetXaxis().GetBinLabel(ibin + 1)    )))
            
          
   
             
      # Style and draw the pulls histo
      plot.Set(h_pulls.GetXaxis(), TitleSize=0.04, LabelSize=0.03, Title='S+B hyp (#hat{#theta}-#theta_{0})/#Delta#theta')
      plot.Set(h_pulls.GetYaxis(), LabelSize=0.022, TickLength=0.0)
      h_pulls.GetYaxis().LabelsOption('v')
      h_pulls.Draw()
  
      pads[1].cd()
      h_impacts = ROOT.TH2F("pullsb", "pullsb", 6, -2.9, 2.9, n_params, 0, n_params)
      #plot.Set(h_impacts.GetXaxis(), LabelSize=0.03, TitleSize=0.04, Ndivisions=505, Title='B hyp (#hat{#theta}-#theta_{0})/#Delta#theta')
      plot.Set(h_impacts.GetXaxis(), TitleSize=0.04, LabelSize=0.03, Title='B hyp (#hat{#theta}-#theta_{0})/#Delta#theta')
      plot.Set(h_impacts.GetYaxis(), LabelSize=0.022, TickLength=0.0)
      
      h_impacts.GetYaxis().SetLabelOffset(999);
      h_impacts.GetYaxis().SetLabelSize(0);
      h_impacts.Draw()

  
      # the first pad to draw the pulls graph in the signal + background hypothesis
      pads[0].cd()
      plot.Set(g_pulls, MarkerSize=0.8, LineWidth=2)
      g_pulls.Draw('PSAME')

      # the second pad to draw the pulls graph in the background hypothesis
      pads[1].cd()
      plot.Set(g_pulls_b, MarkerSize=0.8, LineWidth=2)
      g_pulls_b.Draw('PSAME')
      pads[1].RedrawAxis()

  
      plot.DrawCMSLogo(pads[0], 'CMS', 'Internal', 0, 0.25, 0.00, 0.00)

      extra = ''
      if page == 0:
          extra = '('
      if page == n - 1:
          extra = ')'
      canv.Print('.pdf%s' % extra)






