#!/usr/bin/env python



from ROOT import *
import optparse
import sys, numpy, os
import copy
from scipy import interpolate




class TH1Interpolator:
  def __init__(self):
    self.widthValues = []
    self.histos = []
    self.perBinInterpolation = []
    self.perBinInterpolationError = []
    Hmass = [200, 202, 204, 206, 208, 210, 212, 214, 216, 218, 220, 222, 224, 226, 228, 230, 232, 234, 236, 238, 240, 242, 244, 246, 248, 250, 252, 254, 256, 258, 260, 262, 264, 266, 268, 270, 272, 274, 276, 278, 280, 282, 284, 286, 288, 290, 292, 294, 296, 298, 300, 305, 310, 315, 320, 325, 330, 335, 340, 345, 350, 360, 370, 380, 390, 400, 420, 440, 450, 460, 480, 500, 520, 540, 550, 560, 580, 600, 620, 640, 650, 660, 680, 700, 720, 740, 750, 760, 780, 800, 820, 840, 850, 860, 880, 900, 920, 940, 950, 960, 980, 1000., 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 2000, 2050, 2100, 2150, 2200, 2250, 2300, 2350, 2400, 2450, 2500, 2550, 2600, 2650, 2700, 2750, 2800, 2850, 2900, 2950, 3000]
    Hwidth = [1.43, 1.51, 1.59, 1.68, 1.76, 1.85, 1.93, 2.02, 2.12, 2.21, 2.31, 2.40, 2.50, 2.61, 2.71, 2.82, 2.93, 3.04, 3.16, 3.27, 3.40, 3.52, 3.64, 3.77, 3.91, 4.04, 4.18, 4.32, 4.46, 4.61, 4.76, 4.91, 5.07, 5.23, 5.39, 5.55, 5.72, 5.89, 6.07, 6.25, 6.43, 6.61, 6.80, 6.99, 7.19, 7.39, 7.59, 7.79, 8.00, 8.22, 8.43, 8.99, 9.57, 10.20, 10.80, 11.40, 12.10, 12.80, 13.50, 14.20, 15.20, 17.60, 20.20, 23.10, 26.10, 29.20, 35.90, 43.00, 46.80, 50.80, 59.10, 68.00, 77.50, 87.70, 93.00, 98.60, 110.00, 123.00, 136.00, 150.00, 158.00, 165.00, 182.00, 199.00, 217.00, 237.00, 247.00, 258.00, 280.00, 304.00, 330.00, 357.00, 371.00, 386.00, 416.00, 449.00, 484.00, 521.00, 540.00, 560.00, 602.00, 647.00, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500];
    self.g = ROOT.TH1D("g","SM Higgs width",len(Hmass)-1,numpy.array(Hmass));
    for k,v in enumerate(Hwidth):
      self.g.SetBinContent(k+1,v);

  def _GprimeOverGsm(self, k,br):
   return k/(1-br)

  def _width(self, mh,k,br):
    return  self._GprimeOverGsm(k, br)*self.g.GetBinContent(self.g.FindBin(mh))
  
  def addPoint(self, histo, mh, cprime, brnew):
    self.histos.append(histo)
    width=self._width(mh, cprime**2, brnew)
    #print "adding point for width", width
    self.widthValues.append(width)

  def initialize(self):
    #print "initializing with these widths", self.widthValues
    widthsArray = numpy.array(self.widthValues)
    for ibin in range(1, self.histos[0].GetNbinsX()+1):
      currentBin = []
      currentBinError = []
      for histo in self.histos:
        currentBin.append(histo.GetBinContent(ibin))
        currentBinError.append(histo.GetBinError(ibin))
      currentBinArray=numpy.array(currentBin)
      currentBinErrorArray=numpy.array(currentBinError)
      f = interpolate.interp1d(widthsArray, currentBinArray, kind='cubic')
      fe = interpolate.interp1d(widthsArray, currentBinErrorArray, kind='cubic')
      self.perBinInterpolation.append(f)
      self.perBinInterpolationError.append(fe)
    
  def getH(self, width, name, title):
    h = self.histos[0].Clone()
    h.SetNameTitle(name, title)
    for ibin in range(1, self.histos[0].GetNbinsX()+1):
      h.SetBinContent(ibin, self.perBinInterpolation[ibin-1](width))
      h.SetBinError(ibin, self.perBinInterpolationError[ibin-1](width))

    return h  


def interpolateOne(filein, mass, baseName, cut, variable, models, targetWidth, nuisance=""):
  morphing=TH1Interpolator()
  for model in models:
    cprime = float(model[6:9])
    brn = float(model[-3:])
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    histoname=cut+"/"+variable+"/"+baseName+"_"+model_name
    if nuisance !="":
      histoname=histoname+"_"+nuisance
    histo=filein.Get(histoname)
    print "Getting",histoname,histo
    morphing.addPoint(histo, float(mass), cprime, brn)
  morphing.initialize()
  filein.cd(cut+"/"+variable)
  outname=baseName+"_fixedWidth"+str(width).replace(".", "p")
  if nuisance !="":
    outname=outname+"_"+nuisance
  h=morphing.getH(targetWidth, outname, outname)
  h.Write()






if __name__ == '__main__':
  print '''
 _    _ _     _ _   _       _____      _                        _       _             
| |  | (_)   | | | | |     |_   _|    | |                      | |     | |            
| |  | |_  __| | |_| |__     | | _ __ | |_ ___ _ __ _ __   ___ | | __ _| |_ ___  _ __ 
| |/\| | |/ _` | __| '_ \    | || '_ \| __/ _ \ '__| '_ \ / _ \| |/ _` | __/ _ \| '__|
\  /\  / | (_| | |_| | | |  _| || | | | ||  __/ |  | |_) | (_) | | (_| | || (_) | |   
 \/  \/|_|\__,_|\__|_| |_|  \___/_| |_|\__\___|_|  | .__/ \___/|_|\__,_|\__\___/|_|   
                                                   | |                                
                                                   |_|                               
  '''

  usage  = "usage: %prog filein width [opts]\n"

  myparser = optparse.OptionParser(usage)
  myparser.add_option("-m", "--massesAndModels", action="store", help="massesAndModels", default="massesAndModels.py")
  myparser.add_option("-c", "--cuts", action="store", help="cuts file", default="cuts.py")
  myparser.add_option("-n", "--nuisances", action="store", help="nuisances file", default="nuisances.py")
  myparser.add_option("-v", "--variables", action="store", help="variables file", default="variables.py")


  (opts, args) = myparser.parse_args()
  if len(args)<2 :
    myparser.print_help()
    sys.exit(1)

  bVeto="1"
  xrootdPath=""
  treeBaseDir=""
  skim=""
  Nlep="2"
  bSF="1"
  eleWP=""
  muWP=""

  cuts={}
  handle = open(opts.cuts)
  exec(handle)
  handle.close()

  nuisances={}
  handle = open(opts.nuisances)
  exec(handle)
  handle.close()

  variables={}
  #handle = open(opts.variables)
  handle = open('variables.py')
  exec(handle)
  handle.close()

  #handle = open(opts.massesAndModels)
  handle = open('massesAndModels.py')
  exec(handle)
  handle.close()


  print args
  

  width=float(args[1])
  filein=TFile(args[0])
  fileoutname = args[0].replace(".root", "_interp.root")
  os.system("cp "+args[0]+" "+fileoutname)
  fileout=TFile(fileoutname, "update")

  for mass in masses:
    print "---> Mass", mass
    for cut in cuts:
      print "   ---> cut", cut    
      for variable in variables:
        print "       ---> variable", variable
        interpolateOne(fileout, mass, "histo_ggH_hww_"+str(mass), cut, variable, models, width)
        interpolateOne(fileout, mass, "histo_ggH_hww_SBI"+str(mass), cut, variable, models, width)
        for nuisanceName in nuisances:
          nuisance = nuisances[nuisanceName]
          if nuisance["type"] == "shape" and (not nuisance.has_key("cuts") or cut in nuisance["cuts"]):
            if not nuisance.has_key("samples") or any("ggH_hww_"+str(mass) in word for word in nuisance["samples"]):
              print "           --> ggH nuisance", nuisanceName
              interpolateOne(fileout, mass, "histo_ggH_hww_"+str(mass),    cut, variable, models, width, nuisance['name']+"Up")
              interpolateOne(fileout, mass, "histo_ggH_hww_"+str(mass),    cut, variable, models, width, nuisance['name']+"Down")
            if not nuisance.has_key("samples") or any("ggH_hww_SBI"+str(mass) in word for word in nuisance["samples"]):  
              print "           --> ggH_SBI nuisance", nuisanceName
              interpolateOne(fileout, mass, "histo_ggH_hww_SBI"+str(mass), cut, variable, models, width, nuisance['name']+"Up")
              interpolateOne(fileout, mass, "histo_ggH_hww_SBI"+str(mass), cut, variable, models, width, nuisance['name']+"Down")
            if not nuisance.has_key("samples") or any("qqH_hww_"+str(mass) in word for word in nuisance["samples"]):  
              print "           --> qqH nuisance", nuisanceName
              interpolateOne(fileout, mass, "histo_qqH_hww_"+str(mass),    cut, variable, models, width, nuisance['name']+"Up")
              interpolateOne(fileout, mass, "histo_qqH_hww_"+str(mass),    cut, variable, models, width, nuisance['name']+"Down")
          

  print "please add models.extend([\"fixedWidth"+str(width).replace(".", "p")+"\"]) to your massesAndModels file before making datacards" 
      

