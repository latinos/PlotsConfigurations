#!/usr/bin/env python

from ROOT import *
import sys


filein = TFile(sys.argv[1])
plotData=filein.Get("Zmm/ptll/histo_DATA")

plotDY=filein.Get("Zmm/ptll/histo_DY")

plotfem=filein.Get("Zmm/ptll/histo_Fake_em")
plotfme=filein.Get("Zmm/ptll/histo_Fake_me")
plottop=filein.Get("Zmm/ptll/histo_top")
plotggWW=filein.Get("Zmm/ptll/histo_ggWW")
plotWW=filein.Get("Zmm/ptll/histo_WW")
plotVg=filein.Get("Zmm/ptll/histo_Vg")
plotVZ=filein.Get("Zmm/ptll/histo_VZ")
plotVgS=filein.Get("Zmm/ptll/histo_VgS")


plotBkg = plotfem.Clone()
plotBkg.Add(plotfme)
plotBkg.Add(plottop)
plotBkg.Add(plotggWW)
plotBkg.Add(plotWW)
plotBkg.Add(plotVg)
plotBkg.Add(plotVZ)
plotBkg.Add(plotVgS)


plotDataMinusBkg = plotData.Clone()
plotDataMinusBkg.Add(plotBkg, -1)


ratio=plotDataMinusBkg.Clone()
ratio.Divide(plotDY)


ratio.Draw()

#x>45 and x>10
#p0                        =     0.379119   +/-   0.0463813   
#p1                        =     0.099744   +/-   0.00672837  
#p2                        =  -0.00487351   +/-   0.000335719 
#p3                        =  9.19509e-05   +/-   6.92549e-06 
#p4                        =  -6.0212e-07   +/-   5.04064e-08 


#x>45
#       1  p0           9.12137e-01   2.17409e+00   1.14233e-04   7.14677e-05
#       2  p1           1.11957e-04   5.28743e-02   8.79810e-07   1.68881e-02
#       3  p2          -3.15325e-06   4.24165e-04   5.62877e-09   2.14242e+00
#       4  p3          -4.29708e-09   2.46287e-06   3.32133e-11   1.96262e+02
#       5  p4           3.35791e-11   7.92623e-09   1.88094e-13   5.87310e+03



func=TF1("f", "0.87*(x<10)+(0.379119+0.099744*x-0.00487351*x**2+9.19509e-05*x**3-6.0212e-07*x**4)*(x>=10 && x<45)+(9.12137e-01+1.11957e-04*x-3.15325e-06*x**2-4.29708e-09*x**3+3.35791e-11*x**4)*(x>=45 && x<200) + 1*(x>200)", 0, 200)

func.Draw("sames")

a=raw_input("ciao")

