from optparse import OptionParser
parser = OptionParser()
parser.add_option("--funcX0", dest="funcX0", default='x*[0]+x**2*[1]', type="string", action="store", help="Which function to use. Default: x*[0]+x**2*[1]")
parser.add_option("--funcX1", dest="funcX1", default='x*[0]+x**2*[1]', type="string", action="store", help="Which function to use. Default: x*[0]+x**2*[1]")
parser.add_option("--funcY0", dest="funcY0", default='x*[0]+x**2*[1]', type="string", action="store", help="Which function to use. Default: x*[0]+x**2*[1]")
parser.add_option("--funcY1", dest="funcY1", default='x*[0]+x**2*[1]', type="string", action="store", help="Which function to use. Default: x*[0]+x**2*[1]")
parser.add_option("--rebin", dest="rebin", default=0, type="int", action="store", help="Rebinning to performe on tProfiles")
parser.add_option("--fitRangeX0", dest="fitRangeX0", default='0,2000', type="string", action="store", help="Which fitRangeX0. Default:0,2000")
parser.add_option("--fitRangeX1", dest="fitRangeX1", default='0,2000', type="string", action="store", help="Which fitRangeX1. Default:0,2000")
parser.add_option("--fitRangeY0", dest="fitRangeY0", default='0,2000', type="string", action="store", help="Which fitRangeY0. Default:0,2000")
parser.add_option("--fitRangeY1", dest="fitRangeY1", default='0,2000', type="string", action="store", help="Which fitRangeY1. Default:0,2000")
parser.add_option("--xZoomRange", dest="xZoomRange", default='', type="string", action="store", help="Which xZoomRange. Default:Max")
parser.add_option("--yZoomRange", dest="yZoomRange", default='-40,40', type="string", action="store", help="Which zoom range in y Axis. Default:-40,40")
parser.add_option("--mode", dest="mode", default='sumPt', type="string", action="store", help="Which mode [multiplicity/nGoodVtx/sumPt]")
parser.add_option("--input", dest="input", default='DYJetsToLL_M-50_HT-100toInf_Tune4C_13TeV-madgraph-tauola_Phys14DR-PU20bx25_PHYS14_25_V1-v1_AODSIM.root', type="string", action="store", help="input file.Default:DYJetsToLL_M-50_HT-100toInf_Tune4C_13TeV-madgraph-tauola_Phys14DR-PU20bx25_PHYS14_25_V1-v1_AODSIM.root")
parser.add_option("--outPutDir", dest="outPutDir", default="/", type="string", action="store", help="dir name Default:/")
parser.add_option("--sampleName", dest="sampleName", default="TestSample", type="string", action="store", help="sample name that the corrections are applied to. Default:TestSample.")
parser.add_option("--scriptName", dest="scriptName", default="metXYcorrPara_cfi.py", type="string", action="store", help="Text file name that the corrections are appended to. Default:metXYcorrPara_cfi.py.")
parser.add_option("--batch", dest="batch", default="False", type="string", action="store", help="Choose batch mode. If True, no canvas pop-up. Default:False.")
(options, args) = parser.parse_args()

import ROOT
import pickle, os

from math import pi, cos, sin, sqrt, atan2
ROOT.gROOT.ProcessLine(".L $CMSSW_BASE/src/PlotsConfigurations/Configurations/ControlRegions/MetXYshift/Utils/tdrstyle.C")
ROOT.setTDRStyle()

if options.batch=="True":
  ROOT.gROOT.SetBatch(True)

from PlotsConfigurations.Configurations.helpers import getObjFromFile
from PlotsConfigurations.Configurations.categories import *


exec("yZoomRange = (" +options.yZoomRange+ ")")
exec("fitRangeX0 = (" +options.fitRangeX0+ ")")
exec("fitRangeX1 = (" +options.fitRangeX1+ ")")
exec("fitRangeY0 = (" +options.fitRangeY0+ ")")
exec("fitRangeY1 = (" +options.fitRangeY1+ ")")
if options.xZoomRange!='':
  exec("xZoomRange = (" +options.xZoomRange+ ")")
else:
  xZoomRange = None

assert options.mode in ["multiplicity","nGoodVtx","sumPt"],"Mode %s not known. Must be one of [nGoodVtx/sumPt/multiplicity]"%options.mode

print 'input', options.input, 'mode', options.mode, 'yZoomrange', yZoomRange, 'fitRangeX0', fitRangeX0, 'fitRangeX1', fitRangeX1, 'fitRangeY0', fitRangeY0, 'fitRangeY1', fitRangeY1, 'xZoomRange', xZoomRange


txtFileName = options.scriptName.replace('_cfi.py', '.txt')
fx0 = ROOT.TF1('fx0', options.funcX0, *(fitRangeX0))
fx1 = ROOT.TF1('fx1', options.funcX1, *(fitRangeX1))
fy0 = ROOT.TF1('fy0', options.funcY0, *(fitRangeY0))
fy1 = ROOT.TF1('fy1', options.funcY1, *(fitRangeY1))
fx0.SetLineColor(ROOT.kBlue)
fx1.SetLineColor(ROOT.kBlue)

MetBin = 6
parList_x0_0 = []
parList_x0_1 = []
parList_x1_0 = []
parList_x1_1 = []
parList_y0_0 = []
parList_y0_1 = []
parList_y1_0 = []
parList_y1_1 = []

metList   = []
# for each met ranges
for imet in range(0, MetBin):
  histName = 'prMetType1VsVtx_metBin'+str(imet)+'_x'
  px = getObjFromFile(options.input, histName)
  py = getObjFromFile(options.input, histName.replace('_x','_y'))
  assert px and py, "Could not read {_Px,_Py} from input from file %s)"%options.input
  if options.rebin:
    px.Rebin(options.rebin)
    py.Rebin(options.rebin)

  c0 = ROOT.TCanvas()  
  ROOT.gStyle.SetOptStat(0)
  ROOT.gStyle.SetOptFit(0)
  if options.mode=="multiplicity":
    px.GetXaxis().SetTitle("multiplicity in "+sampleName)
    py.GetXaxis().SetTitle("multiplicity in "+sampleName)
  if options.mode=="sumPt":
    px.GetXaxis().SetTitle("#Sigma p_{T} of "+sampleName)
    py.GetXaxis().SetTitle("#Sigma p_{T} of "+sampleName)
  if options.mode=="nGoodVtx":
    px.GetXaxis().SetTitle("nGoodVtx")
    py.GetXaxis().SetTitle("nGoodVtx")
  
  px.GetYaxis().SetTitle("<#slash{E}_{x}> (GeV)")
  px.GetXaxis().SetTitleSize(0.05)
  px.GetXaxis().SetTitleOffset(1.1)
  px.GetYaxis().SetRangeUser(*yZoomRange)
  #if imet == 0:
  #  px.GetYaxis().SetRangeUser(-1,2)
  #elif imet == 4:
  #  px.GetYaxis().SetRangeUser(-1,12)
  #elif imet == 5:
  #  px.GetYaxis().SetRangeUser(-1,16)
  #else:
  #  px.GetYaxis().SetRangeUser(*yZoomRange)
  py.GetYaxis().SetTitle("<#slash{E}_{y}> (GeV)")
  py.GetXaxis().SetTitleSize(0.05)
  py.GetXaxis().SetTitleOffset(1.1)
  py.GetYaxis().SetRangeUser(*yZoomRange)
  if xZoomRange:
    px.GetXaxis().SetRangeUser(*xZoomRange)
    py.GetXaxis().SetRangeUser(*xZoomRange)
  
  
  px.Fit(fx0,'R')
  px.Fit(fx1,'R+')
  py.Fit(fy0,'R')
  py.Fit(fy1,'R+')
  
  px.SetLineColor(ROOT.kBlue)
  px.SetLineStyle(0)
  px.SetLineWidth(2)
  px.SetMarkerStyle(22)
  px.SetMarkerSize(1.5)
  px.SetMarkerColor(ROOT.kBlue)
  px.Draw('e1')
    #    py.GetYaxis().SetRangeUser(-20,20)
  py.SetLineColor(ROOT.kRed)
  py.SetLineStyle(0)
  py.SetLineWidth(2)
  py.SetMarkerStyle(22)
  py.SetMarkerSize(1.5)
  py.SetMarkerColor(ROOT.kRed)
  py.Draw('e1same')
    
  l = ROOT.TLegend(0.80,0.87,.95,.95)
  l.AddEntry(px, "< #slash{E}_{x} >")#+etab[0].split('_')[0]+", "+shortName[etab[0].split('_')[1]])
  l.AddEntry(py, "< #slash{E}_{y} >")
  l.SetFillColor(0)
  l.SetShadowColor(ROOT.kWhite)
  l.SetBorderSize(1)
  l.Draw()
  plotFileName= options.sampleName+'_'+options.mode+'_metBin'+str(imet)+'.pdf'
  c0.Print(options.outPutDir+"/"+plotFileName)
  #c0.Print(options.outPutDir+"/"+options.plotFileName.replace('.pdf', '.root'))
  c0.Print(options.outPutDir+"/"+plotFileName.replace('.pdf', '.png'))

#scriptFileName='metXYshiftPara_'+options.sampleName+'.py'
#with open(options.outPutDir+"/"+options.scriptName, "a") as ofile:
#  ofile.write(options.sampleName+'\t'+'={')
#  ofile.write('\'name\':'+'\''+options.sampleName+'\',  ')
#  ofile.write('\'varType\':'+'\''+str(varType[options.mode])+'\',  ')
#  ofile.write('\'fx\':'+'\''+fx.GetExpFormula().Data()+'\',  ')
#  ofile.write('\'paraX\':['+','.join(str(fx.GetParameter(i)) for i in range(fx.GetNpar()))+'],  ')
#  ofile.write('\'fy\':'+'\''+fy.GetExpFormula().Data()+'\',  ')
#  ofile.write('\'paraY\':['+','.join(str(fy.GetParameter(i)) for i in range(fy.GetNpar()))+']}')
  with open(options.outPutDir+"/"+txtFileName, "a") as ofile:
    ofile.write('['+options.sampleName+']\n')
    ofile.write('{'+' ')
    ofile.write(str('1')+' ') # number of parameterizing variables
    ofile.write(str(varType[options.mode])+' ') # type of parameterising variable
    ofile.write(fx0.GetExpFormula().Data()+' ') # formula
    ofile.write(fx1.GetExpFormula().Data()+' ') # formula
    ofile.write(fy0.GetExpFormula().Data()+' ') # formula
    ofile.write(fy1.GetExpFormula().Data()) # formula
    ofile.write('}'+'\n') # formula
    ofile.write('X'+' ')
    ofile.write(str(imet*10)+' ')
    if imet == MetBin -1:
      ofile.write(str(90000)+' ')
    else:
      ofile.write(str((imet+1)*10)+' ')
      histName = 'hMetType1_metBin'+str(imet)+'_x'
      metHist = getObjFromFile(options.input, histName)
      metList.append(metHist.GetMean())
      for i in range(fx0.GetNpar()):
	if i == 0:
	  parList_x0_0.append(fx0.GetParameter(i))
	if i == 1:
	  parList_x0_1.append(fx0.GetParameter(i))
      for i in range(fx1.GetNpar()):
	if i == 0:
	  parList_x1_0.append(fx1.GetParameter(i))
	if i == 1:
	  parList_x1_1.append(fx1.GetParameter(i))
    ofile.write(str(fx0.GetNpar())+' ') # number of parameters
    ofile.write(' '.join(str(fx0.GetParameter(i)) for i in range(fx0.GetNpar()))+'\n')
    ofile.write(str(fx1.GetNpar())+' ') # number of parameters
    ofile.write(' '.join(str(fx1.GetParameter(i)) for i in range(fx1.GetNpar()))+'\n')
    ofile.write('Y'+' ') # formula
    ofile.write(str(imet*10)+' ')
    if imet == MetBin -1:
      ofile.write(str(90000)+' ')
    else:
      ofile.write(str((imet+1)*10)+' ')
      for i in range(fy0.GetNpar()):
	if i == 0:
	  parList_y0_0.append(fy0.GetParameter(i))
	if i == 1:
	  parList_y0_1.append(fy0.GetParameter(i))
      for i in range(fy1.GetNpar()):
	if i == 0:
	  parList_y1_0.append(fy1.GetParameter(i))
	if i == 1:
	  parList_y1_1.append(fy1.GetParameter(i))
    ofile.write(str(fy0.GetNpar())+' ') # number of parameters
    ofile.write(' '.join(str(fy0.GetParameter(i)) for i in range(fy0.GetNpar()))+'\n')
    ofile.write(str(fy1.GetNpar())+' ') # number of parameters
    ofile.write(' '.join(str(fy1.GetParameter(i)) for i in range(fy1.GetNpar()))+'\n')

print metList
print "parList_x0_0", parList_x0_0
print "parList_x0_1", parList_x0_1
print "parList_x1_0", parList_x1_0
print "parList_x1_1", parList_x1_1
print "parList_y0_0", parList_y0_0
print "parList_y0_1", parList_y0_1
print "parList_y1_0", parList_y1_0
print "parList_y1_1", parList_y1_1

from array import array
par_met = array("f",metList)
# parFtn x0_0
cx0_0 = ROOT.TCanvas()
fpar_x0_0 = ROOT.TF1('fpar_x0_0', "x*[0]+x**2*[1]", 0, 45)
par_list_x0_0 = array("f",parList_x0_0)
tg_par_x0_0 = ROOT.TGraph(len(par_met),par_met,par_list_x0_0);
tg_par_x0_0.Fit(fpar_x0_0,'R')
tg_par_x0_0.Draw("al*");
plotFileName= options.sampleName+'_'+options.mode+'_parX0_0'+'.pdf'
cx0_0.Print(options.outPutDir+"/"+plotFileName)
# parFtn x1_0
cx1_0 = ROOT.TCanvas()
fpar_x1_0 = ROOT.TF1('fpar_x1_0', "x*[0]+x**2*[1]", 0, 45)
par_list_x1_0 = array("f",parList_x1_0)
tg_par_x1_0 = ROOT.TGraph(len(par_met),par_met,par_list_x1_0);
tg_par_x1_0.Fit(fpar_x1_0,'R')
tg_par_x1_0.Draw("al*");
plotFileName= options.sampleName+'_'+options.mode+'_parX1_0'+'.pdf'
cx1_0.Print(options.outPutDir+"/"+plotFileName)
# parFtn x1_1
cx1_1 = ROOT.TCanvas()
fpar_x1_1 = ROOT.TF1('fpar_x2_1', "x*[0]+x**2*[1]", 0, 45)
par_list_x1_1 = array("f",parList_x1_1)
tg_par_x1_1 = ROOT.TGraph(len(par_met),par_met,par_list_x1_1);
tg_par_x1_1.Fit(fpar_x1_1,'R')
tg_par_x1_1.Draw("al*");
plotFileName= options.sampleName+'_'+options.mode+'_parX1_1'+'.pdf'
cx1_1.Print(options.outPutDir+"/"+plotFileName)


cy0_0 = ROOT.TCanvas()
fpar_y0_0 = ROOT.TF1('fpar_y0_0', "x*[0]+x**2*[1]", 0, 45)
par_list_y0_0 = array("f",parList_y0_0)
tg_par_y0_0 = ROOT.TGraph(len(par_met),par_met,par_list_y0_0);
tg_par_y0_0.Fit(fpar_y0_0,'R')
tg_par_y0_0.Draw("al*");
plotFileName= options.sampleName+'_'+options.mode+'_parY0_0'+'.pdf'
cy0_0.Print(options.outPutDir+"/"+plotFileName)

cy1_0 = ROOT.TCanvas()
fpar_y1_0 = ROOT.TF1('fpar_y1_0', "x*[0]+x**2*[1]", 0, 45)
par_list_y1_0 = array("f",parList_y1_0)
tg_par_y1_0 = ROOT.TGraph(len(par_met),par_met,par_list_y1_0);
tg_par_y1_0.Fit(fpar_y1_0,'R')
tg_par_y1_0.Draw("al*");
plotFileName= options.sampleName+'_'+options.mode+'_parY1_0'+'.pdf'
cy1_0.Print(options.outPutDir+"/"+plotFileName)

cy1_1 = ROOT.TCanvas()
fpar_y1_1 = ROOT.TF1('fpar_y1_1', "x*[0]+x**2*[1]", 0, 45)
par_list_y1_1 = array("f",parList_y1_1)
tg_par_y1_1 = ROOT.TGraph(len(par_met),par_met,par_list_y1_1);
tg_par_y1_1.Fit(fpar_y1_1,'R')
tg_par_y1_1.Draw("al*");
plotFileName= options.sampleName+'_'+options.mode+'_parY1_1'+'.pdf'
cy1_1.Print(options.outPutDir+"/"+plotFileName)

functionalParFileName = options.scriptName.replace('_cfi.py', '.txt').replace('.txt','_ftnalPar.txt')
with open(options.outPutDir+"/"+functionalParFileName, "a") as ofile:
  ofile.write('['+options.sampleName+']\n')
  ofile.write('{'+' ')
  ofile.write(str('1')+' ') # number of parameterizing variables
  ofile.write(str(varType[options.mode])+' ') # type of parameterising variable
  ofile.write(fpar_x0_0.GetExpFormula().Data()+' ') # formula
  ofile.write(fpar_x1_0.GetExpFormula().Data()+' ') # formula
  ofile.write(fpar_x1_1.GetExpFormula().Data()+' ') # formula
  ofile.write(fpar_y0_0.GetExpFormula().Data()+' ') # formula
  ofile.write(fpar_y1_0.GetExpFormula().Data()+' ') # formula
  ofile.write(fpar_y1_1.GetExpFormula().Data()+' ') # formula
  ofile.write('}'+'\n') # formula
  ofile.write('X0'+' ')
  ofile.write(str(fitRangeX0[0])+' '+str(fitRangeX0[1])+' ')
  ofile.write(str(fpar_x0_0.GetNpar())+' ') # number of parameters
  ofile.write(' '.join(str(fpar_x0_0.GetParameter(i)) for i in range(fpar_x0_0.GetNpar()))+'\n')
  ofile.write('X1'+' ')
  ofile.write(str(fitRangeX1[0])+' '+str(fitRangeX1[1])+' ')
  ofile.write(str(fpar_x1_0.GetNpar())+' ') # number of parameters
  ofile.write(' '.join(str(fpar_x1_0.GetParameter(i)) for i in range(fpar_x1_0.GetNpar()))+'  ')
  ofile.write(str(fpar_x1_1.GetNpar())+' ') # number of parameters
  ofile.write(' '.join(str(fpar_x1_1.GetParameter(i)) for i in range(fpar_x1_1.GetNpar()))+'\n')
  ofile.write('Y0'+' ') # formula
  ofile.write(str(fitRangeY0[0])+' '+str(fitRangeY0[1])+' ')
  ofile.write(str(fpar_y0_0.GetNpar())+' ') # number of parameters
  ofile.write(' '.join(str(fpar_y0_0.GetParameter(i)) for i in range(fpar_y0_0.GetNpar()))+'\n')
  ofile.write('Y1'+' ') # formula
  ofile.write(str(fitRangeY1[0])+' '+str(fitRangeY1[1])+' ')
  ofile.write(str(fpar_y1_0.GetNpar())+' ') # number of parameters
  ofile.write(' '.join(str(fpar_y1_0.GetParameter(i)) for i in range(fpar_y1_0.GetNpar()))+'  ')
  ofile.write(str(fpar_y1_1.GetNpar())+' ') # number of parameters
  ofile.write(' '.join(str(fpar_y1_1.GetParameter(i)) for i in range(fpar_y1_1.GetNpar()))+'\n')


#outRootF = ROOT.TFile(options.outPutDir+"/"+options.sampleName+'_'+options.mode+".root","recreate")
#fx.Write()
#fy.Write()
#px.Write()
#py.Write()
###outRootF.Write()
#outRootF.Close()
