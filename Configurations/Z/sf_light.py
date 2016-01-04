#!/usr/bin/env python

from ROOT import *
import math

filein = TFile("rootFile/plots_Z.root")

plotData = filein.Get("Zjet/csvv2ivf_twobins_1/histo_DATA")
plotData2 = filein.Get("Zjet/csvv2ivf__twobins_2/histo_DATA")
plotData.Add(plotData2)


plotDY = filein.Get("Zjet/csvv2ivf_twobins_1/histo_DY")
plotDY2 = filein.Get("Zjet/csvv2ivf__twobins_2/histo_DY")

plotDY.Add(plotDY2)


#plotData.Draw()
#plotDY.Draw("sames")

effMC = plotDY.GetBinContent(2)/plotDY.Integral()

effData = plotData.GetBinContent(2)/plotData.Integral()

errData = math.sqrt(effData*(1.-effData)*plotData.Integral()) / plotData.Integral()

print "effMC   ", effMC
print "effData ", effData, "+/-", errData

sf = effData/effMC
sferr = errData/effMC

print "SF      ", sf, "+/-", sferr

