#!/usr/bin/env python

from ROOT import *
import math

filein = TFile("rootFile/plots_Z.root")

def printSF(cutname):
  plotData = filein.Get(cutname+"/csvv2ivf_twobins_1/histo_DATA")
  plotData2 = filein.Get(cutname+"/csvv2ivf_twobins_2/histo_DATA")
  plotData.Add(plotData2)


  plotDY = filein.Get(cutname+"/csvv2ivf_twobins_1/histo_DY")
  plotDY2 = filein.Get(cutname+"/csvv2ivf_twobins_2/histo_DY")

  plotDY.Add(plotDY2)


  effMC = plotDY.GetBinContent(2)/plotDY.Integral()

  effData = plotData.GetBinContent(2)/plotData.Integral()

  errData = math.sqrt(effData*(1.-effData)*plotData.Integral()) / plotData.Integral()

  print cutname, "effMC   ", effMC
  print cutname, "effData ", effData, "+/-", errData

  sf = effData/effMC
  sferr = errData/effMC

  print cutname, "SF      ", sf, "+/-", sferr

printSF("Zjets")
print "*"*50
printSF("Z0jet")
