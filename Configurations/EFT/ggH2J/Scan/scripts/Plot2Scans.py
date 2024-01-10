
import sys
import ROOT 
import numpy as np
import shutil
import math
from os import path
from array import array

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)

def getGraph(Dir,AC,ABS):

 if "e" in AC : file = "hists/"+Dir+"higgsCombine"+AC+".MultiDimFit.mH125.root" 
 else :         file = "hists/"+Dir+"higgsCombine"+AC+".MultiDimFit.mH125.root" 

 print file

 src = path.realpath(""+file+"") 
 F = ROOT.TFile.Open(''+src+'', 'read')
 T = F.Get("limit")

 x1, y1 = array('d'), array('d')

 for evt in T : 
  Fai   = evt.FaiF 
  QE = evt.quantileExpected
  dNLL = evt.deltaNLL
  NLL  = evt.nll + evt.nll0
  if QE>-1 :
   x1.append(round(Fai,2)) #remove round for mu  
   if ABS is True : y1.append(2*(dNLL+NLL))
   else :           y1.append(2*dNLL)

 n = len(x1)
 x1, y1 = zip(*sorted(zip(x1, y1)))
 gr = ROOT.TGraph(n, np.array(x1), np.array(y1))

 F.Close()
 return x1, y1, gr
   
########################

def Plot(AC,ABS):

 x1, y1, gr1 = getGraph("",AC, ABS)
 gr1.SetMarkerColor(1)
 gr1.SetLineColor(1)
 gr1.SetLineWidth(2)
 if ABS is False : 
  Max = max(y1)
  gr1.SetMinimum(0.0)
  gr1.SetMaximum(1.5)
 gr1.SetMarkerStyle(7)
 gr1.GetXaxis().SetTitle(''+AC+'')
 gr1.GetYaxis().SetTitle('-2 #Delta ln L') 

 canvas = ROOT.TCanvas('canvas', '', 500, 500)
 gr1.Draw("LA") 

 canvas.SaveAs("plots/"+AC+".pdf")
 canvas.SaveAs("plots/"+AC+".png")

def MergAndFix(x,y, x1,y1):
 
 for i in range(0,len(x1)) :
  for j in range(0,len(x)):
    if x1[i] == x[j] and y1[i] < y[j] :
     y[j]  = y1[i]

 return x, y

def Plot_MultiMinFix(AC):

 x  = np.arange(-1, 1.02, .02)     #41 (-1, 1.05, 0.05) #101 (-1, 1.02, .02)
 x  = [round(num, 2) for num in x]
 y  = np.zeros(len(x)) # NLL
 y  = y + 20000000

 x0, y0, gr0 = getGraph("",AC+"_H1", True)
 gr0.SetLineColor(4) # 4
 x,y = MergAndFix(x,y, x0,y0)
 
 InitialGuess = []
 GuessGraphs = []
 for i in InitialGuess: 
  ig = "H"+str(i)
  x1, y1, gr1 = getGraph("",AC+"_"+ig+"", True)
  x,y = MergAndFix(x,y, x1,y1)
  GuessGraphs.append(gr1)

 if "H0LZg" in AC :
  y[0]   = y[1]
  y[100] = y[99]

 indx = np.where(y == 20000000)
 x = np.delete(x, indx)
 y = np.delete(y, indx)

 print y

 gr_comb = ROOT.TGraph(len(x), np.array(x), np.array(y))
 gr_comb.SetLineColor(2)
 gr_comb.SetLineWidth(2)

 ymin = min(y)                                                                                  
 y = y - ymin                                                                                                       
 gr_comb2 = ROOT.TGraph(len(x), np.array(x), np.array(y))                                            
 gr_comb2.SetLineColor(2)                                                                                           
 gr_comb2.SetLineWidth(2)
 gr_comb2.SetMaximum(15.0)

 canvas = ROOT.TCanvas('canvas', '', 500, 500)
 gr_comb.Draw("LA")
 for idx, igr in enumerate(GuessGraphs):
   igr.SetLineColor(11)
   igr.Draw("L SAME")
 gr0.Draw("L SAME") 
 gr_comb.Draw("L SAME")
 canvas.SaveAs("plots/"+AC+"_InfoMinFix.pdf")
 canvas.SaveAs("plots/"+AC+"_InfoMinFix.png")

 canvas2 = ROOT.TCanvas('canvas2', '', 500, 500)                                                                    
 gr_comb2.Draw("LA")     
 canvas2.SaveAs("plots/"+AC+"_min.pdf")                                                                      
 canvas2.SaveAs("plots/"+AC+"_min.png")


def getGraphMultiMinFix(Dir,AC,Hyp):

 x  = np.arange(-1, 1.02, .02)     #41 (-1, 1.05, 0.05) #101 (-1, 1.02, .02)
 x  = [round(num, 2) for num in x]
 y  = np.zeros(len(x)) # NLL
 y  = y + 20000000

 x0, y0, gr0 = getGraph("",AC+"_"+Hyp+"", True)
 x,y = MergAndFix(x,y, x0,y0)

 if "H0LZg" in AC :
  y[0]    = y[1]
  y[100]  = y[99]

 ymin = min(y)                                                                                  
 y = y - ymin   

 gr_comb = ROOT.TGraph(len(x), np.array(x), np.array(y))    

 return gr_comb

def Plot_All(AC, Hyp, Max):

 x16, y16, gr16 = getGraph("","HGG_16"+AC+"_"+Hyp+"", False)
 x17, y17, gr17 = getGraph("","HGG_17"+AC+"_"+Hyp+"", False)
 x18, y18, gr18 = getGraph("","HGG_18"+AC+"_"+Hyp+"", False)#

 x16e, y16e, gr16e = getGraph("","HGG_16"+AC+"e_"+Hyp+"", False)
 x17e, y17e, gr17e = getGraph("","HGG_17"+AC+"e_"+Hyp+"", False)
 x18e, y18e, gr18e = getGraph("","HGG_18"+AC+"e_"+Hyp+"", False)#

 gr16e.SetMaximum(Max)
 gr16e.SetMinimum(0.0)
 gr16e.SetLineColor(3)    
 gr16e.GetXaxis().SetTitle('F_{a3}^{ggH}')
 gr16e.GetYaxis().SetTitle('-2 #Delta ln L')
 gr16e.GetXaxis().SetRangeUser(-1, 1)  
 gr16e.SetLineStyle(10)
 gr16e.SetLineWidth(2)

 gr17e.SetLineStyle(10)
 gr17e.SetLineColor(4)                                                                                           
 gr17e.SetLineWidth(2)
 gr18e.SetLineStyle(10)
 gr18e.SetLineColor(2)                                                                                           
 gr18e.SetLineWidth(2)

 gr16.SetLineWidth(2)
 gr16.SetLineColor(3)                                                                                           
 gr17.SetLineWidth(2)
 gr17.SetLineColor(4)
 gr18.SetLineColor(2)                                                                                           
 gr18.SetLineWidth(2)

 canvas = ROOT.TCanvas('canvas', '', 500, 500)
 
 gr16e.Draw("LA")
 gr17e.Draw("L same")
 gr18e.Draw("L same")

 gr16.Draw("L same")
 gr17.Draw("L same")
 gr18.Draw("L same")

 canvas.SaveAs("plots/HGGALL"+AC+".pdf")
 canvas.SaveAs("plots/HGGALL"+AC+".png")
     
###########################################

def Plot_OE(AC, Hyp, Max):

 xA, yA, grA = getGraph("","HGG_"+AC+"_"+Hyp+"", False)
 xF, yF, grF = getGraph("","HGG_"+AC+"e_"+Hyp+"", False)

 grF.SetMaximum(Max)
 grF.SetMinimum(0.0)
 grF.SetLineColor(4)
 grF.SetLineStyle(7)
 grF.SetLineWidth(2)
 grF.GetXaxis().SetTitle('f_{a3}^{ggH}')
 grF.GetXaxis().CenterTitle(1)
 grF.GetYaxis().SetTitle('-2 #Delta ln L')
 grF.GetXaxis().SetRangeUser(-1, 1)

 grA.SetLineColor(4)
 grA.SetLineWidth(2)

 canvas = ROOT.TCanvas('canvas', '', 500, 500)
 
 # From Lourdes
 tex = ROOT.TLatex(0.10,0.91,"#bf{CMS Preliminary}"); 
 tex.SetNDC();
 tex.SetTextFont(42);
 tex.SetTextSize(0.030);
 tex.SetLineWidth(2);
 texlumi = ROOT.TLatex(0.90,0.935,"L = 138 fb^{-1} (#sqrt{s} = 13 TeV)");
 texlumi.SetNDC();
 texlumi.SetTextAlign(33);
 texlumi.SetTextFont(42);
 texlumi.SetTextSize(0.03);
 texlumi.SetLineWidth(2);
 line68 = ROOT.TLine(-1,1.0,1.0,1.0)
 line68.SetLineStyle(3)
 line68.SetLineColor(ROOT.kGray)
   
 grF.GetXaxis().SetRangeUser(-1.0, 1.0)        
 grF.Draw("LA") 
 grA.SetLineStyle(1)  
 grA.Draw("L SAME")  
 canvas.Update()

 leg = ROOT.TLegend(0.30,0.68, 0.75, 0.88)
# leg.SetHeader("Full Run 2 (0-, 1- and 2-jet ggH channels)", "C")
 leg.SetNColumns(1)
 leg.SetBorderSize(0)
 leg.SetTextSize(0.025)
 leg.SetTextFont(42)
 leg.SetFillColor(0)
 leg.AddEntry(grA,"Observed","l")
 leg.AddEntry(grF,"Expected","l")
 leg.Draw()
 tex.Draw("sames");
 texlumi.Draw("sames");
 line68.Draw("P")

 canvas.SaveAs("plots/HGG_"+AC+"_"+Hyp+".pdf")
 canvas.SaveAs("plots/HGG_"+AC+"_"+Hyp+".png")

###########################################                                                                                           

def Plot(AC, Hyp, Max):

 xF, yF, grF = getGraph("","HGG_"+AC+"_"+Hyp+"", False)

 grF.SetMaximum(Max)
 grF.SetMinimum(0.0)
 grF.SetLineColor(1)
 grF.SetLineStyle(10)
 grF.SetLineWidth(2)
 grF.GetXaxis().SetTitle('F_{a3}^{ggH}')
 grF.GetYaxis().SetTitle('-2 #Delta ln L')
 grF.GetXaxis().SetRangeUser(-1, 1)

 canvas = ROOT.TCanvas('canvas', '', 500, 500)

 grF.Draw("LA")

 canvas.SaveAs("plots/HGG_"+AC+"_"+Hyp+".pdf")
 canvas.SaveAs("plots/HGG_"+AC+"_"+Hyp+".png")


##########################################

Plot_OE("AllF", "H1", 2.0)
Plot_OE("All", "H1", 2.0)

#Plot_All("F","H1", 2.0)  

#Plot_OE("All", "H1", 1.6)
#Plot_OE("16F", "H1", 1.6)
#Plot_OE("16", "H1", 1.6)
#Plot_OE("17F", "H1", 1.6)
#Plot_OE("17", "H1", 1.6)
#Plot_OE("18F", "H1", 1.6)
#Plot_OE("18", "H1", 1.6)

#Plot("AllFe", "H2", 1.6)

##########################################

#Plot_All("F","H1", 1.6)

#Plot_FP("H1", 0.6)



