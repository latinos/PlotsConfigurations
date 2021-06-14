#!/usr/bin/env python
import re
from sys import argv, stdout, stderr, exit
from optparse import OptionParser

import CombineHarvester.CombineTools.plotting as plot

# tool to compare fitted nuisance parameters to another fit values.
#Useful for Asimov vs Data
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
parser.add_option("-A", "--asimov", dest="asimov", default="",  type="string", help="Asimov fit result")
parser.add_option("-D", "--data", dest="data", default="",  type="string", help="Data result")
parser.add_option("--order", dest="order", default="",  type="string", help="Ordered list of nuisance")
parser.add_option("-o", "--output", dest="output", default="test.root", type="string", help="If true, plot the pulls of the nuisances to the given file (pdf).")


(options, args) = parser.parse_args()


fileA = ROOT.TFile(options.asimov)
fileB = ROOT.TFile(options.data)

if fileA == None: raise RuntimeError, "Cannot open file %s" % options.asimov
if fileB == None: raise RuntimeError, "Cannot open file %s" % options.data

fit_s_A  = fileA.Get("fit_s")
fit_s_B = fileB.Get("fit_s")

nuisance_list = [ f.strip() for f in open(options.order).readlines()]

prefit_A = fileA.Get("nuisances_prefit")
prefit_B = fileB.Get("nuisances_prefit")

if fit_s_A == None or fit_s_A.ClassName()   != "RooFitResult": raise RuntimeError, "File %s does not contain the output of the signal fit 'fit_s'"     % options.asimov
if fit_s_B == None or fit_s_B.ClassName()   != "RooFitResult": raise RuntimeError, "File %s does not contain the output of the signal fit 'fit_s'"     % options.data

isFlagged = {}

# maps from nuisance parameter name to the row to be printed in the table
table = {}

# get the fitted parameters
fpf_s_A = fit_s_A.floatParsFinal()
fpf_s_B = fit_s_B.floatParsFinal()

pulls = []

# Also make histograms for pull distributions:
hist_fit_s_A  = ROOT.TH1F("prefit_fit_s_A"   ,"S+B fit Nuisances   ;;#theta ",prefit_A.getSize(),0,prefit_A.getSize())
hist_prefit_A = ROOT.TH1F("prefit_nuisancs_A","Prefit Nuisances    ;;#theta ",prefit_A.getSize(),0,prefit_A.getSize())
hist_fit_s_B  = ROOT.TH1F("prefit_fit_s_B"   ,"S+B fit Nuisances   ;;#theta ",prefit_A.getSize(),0,prefit_A.getSize())
hist_prefit_B = ROOT.TH1F("prefit_nuisancs_B","Prefit Nuisances    ;;#theta ",prefit_A.getSize(),0,prefit_A.getSize())

# loop over all fitted parameters
for nuis_p_i, nuis in enumerate(nuisance_list):

    name   = nuis
    nuis_s_A = fpf_s_A.find(name)
    nuis_s_B = fpf_s_B.find(name)
    nuis_p_A = prefit_A.find(name)
    nuis_p_B = prefit_B.find(name)

    print " i=",nuis_p_i, " nuis_s = ", name
    
    # keeps information to be printed about the nuisance parameter
    row_A = []

    flag = False;
    mean_p_A, sigma_p_A, mean_p_B, sigma_p_B, = 0,0,0,0

  
    # get best-fit value and uncertainty at prefit for this 
    # nuisance parameter
    # if nuis_p_A == None:
    #     mean_p_A, sigma_p_A = 1., 1.
    # else:
    #     mean_p_A, sigma_p_A = (nuis_p_A.getVal(), nuis_p_A.getError())
    # if nuis_p_B == None:
    #     mean_p_B, sigma_p_B = 1., 1.
    # else:
    #     mean_p_B, sigma_p_B = (nuis_p_B.getVal(), nuis_p_B.getError())


    # if not sigma_p_A > 0: sigma_p_A = (nuis_p_A.getMax()-nuis_p_A.getMin())/2
    # if not sigma_p_B > 0: sigma_p_B = (nuis_p_B.getMax()-nuis_p_B.getMin())/2
   
    print "A: ", nuis_s_A.getVal(), " B: ", nuis_s_B.getVal()

    if  "norm" in name:
        hist_fit_s_A.SetBinContent(nuis_p_i+1,nuis_s_A.getVal() - 1 )
        hist_fit_s_B.SetBinContent(nuis_p_i+1,nuis_s_B.getVal() - 1 )
    else:
        hist_fit_s_A.SetBinContent(nuis_p_i+1,nuis_s_A.getVal() )
        hist_fit_s_B.SetBinContent(nuis_p_i+1,nuis_s_B.getVal() )

    hist_fit_s_A.SetBinError(nuis_p_i+1,nuis_s_A.getError())
    hist_fit_s_A.GetXaxis().SetBinLabel(nuis_p_i+1,name)
    hist_fit_s_B.SetBinError(nuis_p_i+1,nuis_s_B.getError())
    hist_fit_s_B.GetXaxis().SetBinLabel(nuis_p_i+1,name)
    # hist_prefit_B.SetBinContent(nuis_p_i+1,mean_p_B)
    # hist_prefit_B.SetBinError(nuis_p_i+1,sigma_p_B)
    # hist_prefit_B.GetXaxis().SetBinLabel(nuis_p_i+1,name)


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

# Objects for the drawing
gr_fit_s_A = getGraph(hist_fit_s_A,-0.1)
gr_fit_s_B = getGraph(hist_fit_s_B, 0.1)
hist_fit_e_s_A = hist_fit_s_A.Clone("errors_s_A")
hist_fit_e_s_B = hist_fit_s_B.Clone("errors_s_B")

#
# fancy impact plot style

import math

# number of nuisances
#n_params_total = fpf_s.getSize()
n_params_total = nuis_p_i + 1

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


    h_pulls = ROOT.TH2F("pulls", "pulls", 6, -2.5, 2.5, n_params, 0, n_params)
    g_pulls = ROOT.TGraphAsymmErrors(n_params)
    g_pulls_b = ROOT.TGraphAsymmErrors(n_params)

    text_entries = []
    for p in xrange(n_params):
        i = p 
        iy = n_params - (p + 1)
        #print(i)
        # print i
        # A fit
        g_pulls.SetPoint(i, gr_fit_s_A.GetY()[i + page * show], float(iy) + 0.5)
        # print  gr_fit_s_A.GetY()[i + page * show]
        g_pulls.SetPointError( i, gr_fit_s_A.GetErrorYlow(i + page * show), gr_fit_s_A.GetErrorYhigh(i + page * show), 0., 0.)
        
        # B fit
        g_pulls_b.SetPoint(i, gr_fit_s_B.GetY()[i + page * show], float(iy) + 0.5)
        # print gr_fit_s_B.GetY()[i + page * show]
        g_pulls_b.SetPointError( i, gr_fit_s_B.GetErrorYlow(i + page * show), gr_fit_s_B.GetErrorYhigh(i + page * show), 0., 0.)
        
        col = 1
        h_pulls.GetYaxis().SetBinLabel( iy + 1, ('#color[%i]{%s}'% (col, hist_fit_e_s_A.GetXaxis().GetBinLabel(i + page * show + 1)    )))
        #print(hist_fit_e_s_A.GetXaxis().GetBinLabel(i + page * show + 1) )
        

            
    # Style and draw the pulls histo
    plot.Set(h_pulls.GetXaxis(), TitleSize=0.04, LabelSize=0.03, Title='Asimov (#hat{#theta}-#theta_{0})/#Delta#theta')
    plot.Set(h_pulls.GetYaxis(), LabelSize=0.022, TickLength=0.0)
    h_pulls.GetYaxis().LabelsOption('v')
    h_pulls.Draw()

    pads[1].cd()
    h_impacts = ROOT.TH2F("pullsb", "pullsb", 6, -2.5, 2.5, n_params, 0, n_params)
    #plot.Set(h_impacts.GetXaxis(), LabelSize=0.03, TitleSize=0.04, Ndivisions=505, Title='B hyp (#hat{#theta}-#theta_{0})/#Delta#theta')
    plot.Set(h_impacts.GetXaxis(), TitleSize=0.04, LabelSize=0.03, Title='Data (#hat{#theta}-#theta_{0})/#Delta#theta')
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






