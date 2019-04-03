import ROOT as rt
from math import *
from collections import namedtuple


#structures

curves = namedtuple("curves", ["nvar", "roc1", "roc2", "signif1", "signif2", "signif11", "signif22", "legf11", "legf22"], verbose=True)
multicurves = namedtuple("multicurves", ["roc1", "roc2", "signif1", "signif2", "leg1", "leg2", "leg12", "leg22"], verbose=True)

#create structure

def create_curves (number):
    return curves(number, rt.TGraph(), rt.TGraph(), rt.TGraph(), rt.TGraph(),rt.TGraph(), rt.TGraph(), rt.TLegend(0.1,0.8,0.2,0.9),rt.TLegend(0.1,0.8,0.2,0.9))

#create canvas

def create_canva (num):
    return rt.TCanvas("signif{}".format(3 + num), "", 100, 200, 700, 500)

#roc and significance curves generator

def roc_curve (sig, bkg, namevar, mycurves , mymulticurves):

    
    if mycurves.nvar == 0:
        colour1 = 4
        mycurves.roc1.SetMarkerStyle(20)
        mycurves.roc2.SetMarkerStyle(20)
        mycurves.signif1.SetMarkerStyle(20)
        mycurves.signif2.SetMarkerStyle(20)
        mycurves.signif11.SetMarkerStyle(20)
        mycurves.signif22.SetMarkerStyle(20)
    elif mycurves.nvar == 1:
        colour1 = 2
        mycurves.roc1.SetMarkerStyle(21)
        mycurves.roc2.SetMarkerStyle(21)
        mycurves.signif1.SetMarkerStyle(21)
        mycurves.signif2.SetMarkerStyle(21)
        mycurves.signif11.SetMarkerStyle(21)
        mycurves.signif22.SetMarkerStyle(21)
    elif mycurves.nvar == 2:
        colour1 = 417
        mycurves.roc1.SetMarkerStyle(22)
        mycurves.roc2.SetMarkerStyle(22)
        mycurves.signif1.SetMarkerStyle(22)
        mycurves.signif2.SetMarkerStyle(22)
        mycurves.signif11.SetMarkerStyle(22)
        mycurves.signif22.SetMarkerStyle(22)
    elif mycurves.nvar == 3:
        colour1 = 900 -8
        mycurves.roc1.SetMarkerStyle(29)
        mycurves.roc2.SetMarkerStyle(29)
        mycurves.signif1.SetMarkerStyle(29)
        mycurves.signif2.SetMarkerStyle(29)
        mycurves.signif11.SetMarkerStyle(29)
        mycurves.signif22.SetMarkerStyle(29)
    elif mycurves.nvar == 4:
        colour1 = 604
        mycurves.roc1.SetMarkerStyle(33)
        mycurves.roc2.SetMarkerStyle(33)
        mycurves.signif1.SetMarkerStyle(33)
        mycurves.signif2.SetMarkerStyle(33)
        mycurves.signif11.SetMarkerStyle(33)
        mycurves.signif22.SetMarkerStyle(33)
    else:
        colour1 = 880 - (mycurves.nvar)*20
        mycurves.roc1.SetMarkerStyle(24+mycurves.nvar)
        mycurves.roc2.SetMarkerStyle(24+mycurves.nvar)
        mycurves.signif1.SetMarkerStyle(24+mycurves.nvar)
        mycurves.signif2.SetMarkerStyle(24+mycurves.nvar)
        mycurves.signif11.SetMarkerStyle(24+mycurves.nvar)
        mycurves.signif22.SetMarkerStyle(24+mycurves.nvar)
        
    N_sig = sig.Integral() #Number of events (signal)
    N_bkg = bkg.Integral() #Number of events (background)
    Nbin = sig.GetNbinsX() #we assume Nbin_sig = Nbin_bkg
    sum_sig = 0
    sum_bkg = 0
    eff_sig=1.
    eff_bkg=1.
    S1= float(N_sig) / (float (sqrt(N_bkg)))
    S2= float(N_sig) / (float (sqrt(N_bkg)))
    
    for i in range(1,Nbin):
        mycurves.roc1.SetPoint(i, eff_bkg, eff_sig)
        mycurves.roc2.SetPoint(i, 1-eff_bkg, 1-eff_sig)
        mycurves.signif1.SetPoint(i, eff_sig, S1)
        mycurves.signif2.SetPoint(i, 1-eff_sig, S2)
        mycurves.signif11.SetPoint(i, sig.GetBinCenter(i), S1)
        mycurves.signif22.SetPoint(i, sig.GetBinCenter(i), S2)
        sum_sig += sig.GetBinContent(i)
        sum_bkg += bkg.GetBinContent(i)
        if N_bkg - sum_bkg != 0 and sum_bkg != 0:
            #break
            eff_sig = float (N_sig - sum_sig) / N_sig
            eff_bkg = float (N_bkg - sum_bkg) / N_bkg
            S1 = float (N_sig - sum_sig) / (float (sqrt(N_bkg - sum_bkg)))
            S2 = float (sum_sig) / (float (sqrt(sum_bkg)))
    
    #mycurves.roc1.SetMarkerStyle(20)
    mycurves.roc1.SetMarkerSize(0.9) #0.75
    mycurves.roc1.SetMarkerColor(colour1)
        
    #mycurves.roc2.SetMarkerStyle(20)
    mycurves.roc2.SetMarkerSize(0.9)
    mycurves.roc2.SetMarkerColor(colour1)
    
    #mycurves.signif1.SetMarkerStyle(20)
    mycurves.signif1.SetMarkerSize(0.9)
    mycurves.signif1.SetMarkerColor(colour1)  
    
    #mycurves.signif2.SetMarkerStyle(20)
    mycurves.signif2.SetMarkerSize(0.9)
    mycurves.signif2.SetMarkerColor(colour1)
    
    #mycurves.signif11.SetMarkerStyle(20)
    mycurves.signif11.SetMarkerSize(0.9)
    mycurves.signif11.SetMarkerColor(colour1)
    mycurves.signif11.GetXaxis().SetTitleSize(0.05)
    mycurves.signif11.GetXaxis().SetLabelSize(0.05)
    mycurves.signif11.GetYaxis().SetTitleSize(0.05)
    mycurves.signif11.GetYaxis().SetLabelSize(0.05)
    mycurves.signif11.GetXaxis().SetTitleOffset(0.85)
    mycurves.signif11.GetYaxis().SetTitleOffset(0.85)
    mycurves.legf11.AddEntry(mycurves.signif11, namevar, "lp")

    #mycurves.signif22.SetMarkerStyle(20)
    mycurves.signif22.SetMarkerSize(0.9)
    mycurves.signif22.SetMarkerColor(colour1)
    mycurves.signif22.GetXaxis().SetTitleSize(0.05)
    mycurves.signif22.GetXaxis().SetLabelSize(0.05)
    mycurves.signif22.GetYaxis().SetTitleSize(0.05)
    mycurves.signif22.GetYaxis().SetLabelSize(0.05)
    mycurves.signif22.GetXaxis().SetTitleOffset(0.85)
    mycurves.signif22.GetYaxis().SetTitleOffset(0.85)
    mycurves.legf22.AddEntry(mycurves.signif22, namevar, "lp")
 
    mymulticurves.roc1.Add(mycurves.roc1)
    mymulticurves.leg1.AddEntry(mycurves.roc1, namevar, "lp")
    
    mymulticurves.roc2.Add(mycurves.roc2)
    mymulticurves.leg12.AddEntry(mycurves.roc2, namevar, "lp")
    
    mymulticurves.signif1.Add(mycurves.signif1)
    mymulticurves.leg2.AddEntry(mycurves.signif1, namevar, "lp")
    
    mymulticurves.signif2.Add(mycurves.signif2)
    mymulticurves.leg22.AddEntry(mycurves.signif2, namevar, "lp")

    if mycurves.nvar == 0:
    
        mymulticurves.roc1.SetTitle(" ; #varepsilon_{bkg}; #varepsilon_{sig} ")
        mymulticurves.roc1.GetXaxis().SetTitleSize(0.05)
        mymulticurves.roc1.GetXaxis().SetLabelSize(0.05)
        mymulticurves.roc1.GetYaxis().SetTitleSize(0.05)
        mymulticurves.roc1.GetYaxis().SetLabelSize(0.05)
        mymulticurves.roc1.GetXaxis().SetTitleOffset(0.85)
        mymulticurves.roc1.GetYaxis().SetTitleOffset(0.85)
        
        mymulticurves.roc2.SetTitle(" ; #varepsilon_{bkg}; #varepsilon_{sig} ")
        mymulticurves.roc2.GetXaxis().SetTitleSize(0.05)
        mymulticurves.roc2.GetXaxis().SetLabelSize(0.05)
        mymulticurves.roc2.GetYaxis().SetTitleSize(0.05)
        mymulticurves.roc2.GetYaxis().SetLabelSize(0.05)
        mymulticurves.roc2.GetXaxis().SetTitleOffset(0.85)
        mymulticurves.roc2.GetYaxis().SetTitleOffset(0.85)
        
        mymulticurves.signif1.SetTitle(" ; #varepsilon_{sig}; #Sigma_{1} ")
        mymulticurves.signif1.GetXaxis().SetTitleSize(0.05)
        mymulticurves.signif1.GetXaxis().SetLabelSize(0.05)
        mymulticurves.signif1.GetYaxis().SetTitleSize(0.05)
        mymulticurves.signif1.GetYaxis().SetLabelSize(0.05)
        mymulticurves.signif1.GetXaxis().SetTitleOffset(0.85)
        mymulticurves.signif1.GetYaxis().SetTitleOffset(0.85)
        
        mymulticurves.signif2.SetTitle(" ; #varepsilon_{sig}; #Sigma_{2} ")
        mymulticurves.signif2.GetXaxis().SetTitleSize(0.05)
        mymulticurves.signif2.GetXaxis().SetLabelSize(0.05)
        mymulticurves.signif2.GetYaxis().SetTitleSize(0.05)
        mymulticurves.signif2.GetYaxis().SetLabelSize(0.05)
        mymulticurves.signif2.GetXaxis().SetTitleOffset(0.85)
        mymulticurves.signif2.GetYaxis().SetTitleOffset(0.85)
    
# mkROC macro
   
#file_in = raw_input('Insert *.root file name: ')
file_in = "plots_VBS_SS_test.root"
#subdirectory = raw_input('Insert subdirectory name: ')
subdirectory = "VBS_13TeV_BaseCut"
    
variables = []
v_curves = []
    
c = 1
    
c1 = rt.TCanvas("roc1", "", 100, 200, 700, 500)
c2 = rt.TCanvas("roc2", "", 100, 200, 700, 500)
c3 = rt.TCanvas("signif1", "", 100, 200, 700, 500)
c4 = rt.TCanvas("signif2", "", 100, 200, 700, 500)

f = rt.TFile(file_in)
    
ansv = "y"

# variables cycle
    
while True:
    variable = raw_input('Insert variable name: ')
    variables.append(variable)
    ansv = raw_input('Do you want to insert any other variable (y/n)? ')
    if ansv != "y":
        break
        
# structures cycle

i = 0
while True:
    v_curves.append(create_curves(i))
    i += 1
    if i >= len(variables):
        break

rt.gDirectory.cd(subdirectory)           #subdirectory
    
#namesgn = raw_input('Insert signal histo to analyze: ')
namesgn1 = "histo_WpWp_EWK"
namesgn2 = "histo_WmWm_EWK"

namebkg = []
bkg = 'y'
while True:
    name_b = raw_input('Insert bkg histo to analyze: ')
    namebkg.append(name_b)
    bkg = raw_input('Do you want to group any other bkg histo (y/n)? ')
    if bkg == "n":
        break

mymulticurves = multicurves(rt.TMultiGraph(), rt.TMultiGraph(), rt.TMultiGraph(), rt.TMultiGraph(), \
    rt.TLegend(0.1,0.8,0.2,0.9), rt.TLegend(0.1,0.8,0.2,0.9), rt.TLegend(0.1,0.8,0.2,0.9), rt.TLegend(0.1,0.8,0.2,0.9))
        
# cycle on the variables
    
for i1 in range(0, len(variables)):
    if (i1 != 0):
        rt.gDirectory.cd("../")
    rt.gDirectory.cd(variables[i1])
            
    histosgn1 = rt.gDirectory.Get(namesgn1)
    histosgn2 = rt.gDirectory.Get(namesgn2)
    histosgn = histosgn1
    for i4 in range(0, histosgn1.GetNbinsX()):
        histosgn.SetBinContent(i4, histosgn1.GetBinContent(i4)+histosgn2.GetBinContent(i4))
    
    for i2 in range(0, len(namebkg)):
        histobkg = rt.gDirectory.Get(namebkg[i2])
        if i2 == 0:
	    histobkgTot = histobkg
	else:
	    for i3 in range(0, histobkg.GetNbinsX()):
	        histobkgTot.SetBinContent(i3, histobkgTot.GetBinContent(i3)+histobkg.GetBinContent(i3))
               
    roc_curve(histosgn,histobkgTot, variables[i1], v_curves[i1], mymulticurves)
    
#l = rt.TLine(0,0,1,1)
l = rt.TF1("bis","x",0.,1.)
l.SetLineStyle(9)
l.SetLineColor(804)
l.SetLineWidth(2)
        
c1.cd()
mymulticurves.roc1.Draw("AP")
mymulticurves.leg1.Draw("SAME")
l.Draw("SAME")
c1.SaveAs("roc1.png")
    
c2.cd()
mymulticurves.roc2.Draw("AP")
mymulticurves.leg12.Draw("SAME")
l.Draw("SAME") 
c2.SaveAs("roc2.png")
    
c3.cd()
mymulticurves.signif1.Draw("AP")
mymulticurves.leg2.Draw("SAME")
c3.SaveAs("signif1.png")
    
c4.cd()
mymulticurves.signif2.Draw("AP")
mymulticurves.leg22.Draw("SAME")
c4.SaveAs("signif2.png")
      
for j in range(0, len(variables)):
    varname = variables[j]
        
    c11 = create_canva(j)
    c11.cd()
    v_curves[j].signif11.GetXaxis().SetTitle(varname)
    v_curves[j].signif11.GetYaxis().SetTitle("#Sigma_{1}")
    v_curves[j].signif11.Draw("AP")
    v_curves[j].legf11.Draw("SAME")
    c11.SaveAs("signif1_{}".format(varname)+".png")
        
    c22 = create_canva(len(variables)*2 - 1 - j)
    c22.cd()
    v_curves[j].signif22.GetXaxis().SetTitle(varname)
    v_curves[j].signif22.GetYaxis().SetTitle("#Sigma_{2}")
    v_curves[j].signif22.Draw("AP")
    v_curves[j].legf22.Draw("SAME")
    c22.SaveAs("signif2_{}".format(varname)+".png")
