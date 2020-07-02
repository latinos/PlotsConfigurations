#Script to make correlation matrix of fixed size, showing correlations between signal strengths and nuisances with highest correlations
#Argument: multidimfit*.root produced when running MultiDimFit in combine and using --saveFitResult, or fitDiagnostics*.root produced when running FitDiagnostics

from ROOT import TCanvas, TH2F, gStyle, gPad, TFile, TLatex, gROOT
from itertools import combinations
import sys
import re

gROOT.SetBatch(True)

H = 1200
W = 1200
T = 0.08*H
B = 0.30*H
L = 0.30*W
R = 0.14*W
  
canvas = TCanvas("c2","c2",50,50,W,H)
canvas.SetFillColor(0)
canvas.SetBorderMode(0)
canvas.SetFrameFillStyle(0)
canvas.SetFrameBorderMode(0)
canvas.SetLeftMargin( L/W )
canvas.SetRightMargin( R/W )
canvas.SetTopMargin( T/H )
canvas.SetBottomMargin( B/H )
canvas.SetTickx(0)
canvas.SetTicky(0)

SIZE = 30

if len(sys.argv) != 2:
    print 'Usage: python correlationMatrix.py <input file name>'
    exit()

filename = sys.argv[1]
f0 = TFile(filename)

fit_result = f0.Get("fit_mdf")
if fit_result == None:
    fit_result = f0.Get("fit_s")
if fit_result == None:
    print 'Input file must be a multidimfit*.root file containing a fit_mdf object (produced by using --saveFitResult when running MultiDimFit in combine) or a fitDiagnostics*.root file containing a fit_s object (produced by running FitDiagnostics in combine)'
    exit()

arglist = fit_result.floatParsFinal()
args = [arglist.at(i).GetName() for i in xrange(0,len(arglist))]
sigstrength = [s for s in args if (s.startswith('r_') or s == 'r')]
nuisances = [n for n in args if not (n.startswith('r_') or n == 'r')]

def maxcorr(nuis):
    maxcorr = 0.0
    for n in nuisances:
        if n == nuis : continue
        n_split = re.split('(bin\d+_)',n)
        nuis_split = re.split('(bin\d+_)',nuis)
        if len(n_split) == len(nuis_split) == 3 and n_split[0] == nuis_split[0] and n_split[1] == nuis_split[1] : continue
        if abs(fit_result.correlation(nuis,n)) > maxcorr : maxcorr = abs(fit_result.correlation(nuis,n))
    return maxcorr

sorted_nuisances = sorted(nuisances,key = lambda nuis : maxcorr(nuis), reverse = True)
nNuis = SIZE - len(sigstrength)
sorted_nuisances = sorted_nuisances[:nNuis]
allpars = sigstrength+sorted_nuisances

corMatrix = TH2F("corMatrix","corMatrix",SIZE,0,SIZE,SIZE,0,SIZE)

for i, inuis in enumerate(allpars):
    for j, jnuis in enumerate(allpars):
        if i != j:
            corMatrix.SetBinContent(i+1, j+1, fit_result.correlation(inuis,jnuis))

corMatrix.SetStats(0)
corMatrix.SetTitle("")
corMatrix.GetXaxis().SetLabelOffset(99)
corMatrix.GetYaxis().SetLabelOffset(99)
corMatrix.Draw("colz")

xlabels = TLatex()
xlabels.SetTextSize(0.018)
xlabels.SetTextAngle(90)
xlabels.SetTextAlign(32)

for i,nuis in enumerate(allpars):
    y = gPad.GetUymin() - 0.5*corMatrix.GetYaxis().GetBinWidth(i+1)
    x = corMatrix.GetXaxis().GetBinCenter(i+1)
    xlabels.DrawLatex(x,y,nuis)

ylabels = TLatex()
ylabels.SetTextSize(0.018)
ylabels.SetTextAngle(0)
ylabels.SetTextAlign(32)

for j,nuis in enumerate(allpars):
    x = gPad.GetUxmin() - 0.5*corMatrix.GetXaxis().GetBinWidth(j+1)
    y = corMatrix.GetXaxis().GetBinCenter(j+1)
    ylabels.DrawLatex(x,y,nuis)

filename = filename.replace('multidimfit','correlation_matrix')
filename = filename.replace('fitDiagnostics','correlation_matrix')
filename = filename.replace('root','pdf')
canvas.SaveAs(filename)



