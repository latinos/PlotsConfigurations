import ROOT as R 
import sys 
from array import array

import CMS_lumi
import LatinoAnalysis.ShapeAnalysis.tdrStyle as tdrStyle
tdrStyle.setTDRStyle()

iF = R.TFile.Open(sys.argv[1])

# h3 = iF.Get("incl_cleanlep/ratio_dipolepythia_njet_vbs1_pt_detajj_bin3")\
h3 = iF.Get("incl_cleanlep/ratio_dipolepythia_njet_vbs1_pt_detajj_bin3")
cache = []
R.gStyle.SetOptStat(0)

njets = [2,3,4,5,6,7,8,9,10]
ptbins = [ 60,65,70,75,80,85,90,95,100,105,110,120,130,140,150,180,200,350,600]
# ptbins = [30,40,50,65,80,100,115,130,150,200,500 ]
detabins = [0,0.5,1.,1.5,2.,2.5,3.,3.5,4.,4.5,5.,5.5,6.,7.,10]

# the first zero it is just to do the first round
for x in range(0, h3.GetNbinsX()+1):
    # h2 = R.TH2D("X={}".format(int(x)), "X={}".format(int(x)), h3.GetNbinsY(),h3.GetYaxis().GetBinLowEdge(1), h3.GetYaxis().GetBinUpEdge(h3.GetNbinsY()) , 
    #                                                             h3.GetNbinsZ(),h3.GetZaxis().GetBinLowEdge(1), h3.GetZaxis().GetBinUpEdge(h3.GetNbinsZ())  )
    h2 = R.TH2D("X={}".format(int(x)), "X={}".format(int(x)), len(ptbins)-1, array('d',ptbins), len(detabins)-1, array('d',detabins)    )
    
    njet = njets[x-1]
    for y in range(1, h3.GetNbinsY()+1):
        for z in range(1, h3.GetNbinsZ()+1):
            h2.SetBinContent(h2.FindBin( h3.GetYaxis().GetBinCenter(y), h3.GetZaxis().GetBinCenter(z)), h3.GetBinContent(x,y,z))
   
    h2.GetZaxis().SetRangeUser(0,2)
    h2.Draw("COLZ")

    tcanvas = R.TCanvas("c","c", 900,800) 

    tcanvas.cd()
    canvasPad1Name = 'pad1_' + "_" + "X={}".format(njet)
    pad1 = R.TPad(canvasPad1Name,canvasPad1Name, 0, 0., 1, 1)
    pad1.SetTopMargin(0.098)
    pad1.SetBottomMargin(0.13) 
    pad1.SetRightMargin(0.15) 
    pad1.Draw()

    minXused = h2.GetXaxis().GetBinLowEdge(1)
    maxXused = h2.GetXaxis().GetBinUpEdge(h2.GetNbinsX())
    minYused = h2.GetYaxis().GetBinLowEdge(1)
    maxYused = h2.GetYaxis().GetBinUpEdge(h2.GetNbinsY())

    pad1.cd()
    #print " pad1 = ", pad1
    canvasFrameDistroName = 'frame_distro_' + "_" + "X={}".format(njet)
    frameDistro = pad1.DrawFrame(minXused, minYused, maxXused, maxYused, canvasFrameDistroName)
    xAxisDistro = frameDistro.GetXaxis()
    xAxisDistro.SetNdivisions(6,5,0)
    yAxisDistro = frameDistro.GetYaxis()
    yAxisDistro.SetNdivisions(6,5,0)

    yAxisDistro.SetTitle("GEN detaJJ")
    xAxisDistro.SetTitle("GEN VBS 1 pt")

    h2.Draw("surf2 same")
    pad1.SetLogx(True)
    
    CMS_lumi.writeExtraText = 1
    CMS_lumi.extraText = "Preliminary"
    CMS_lumi.lumi_sqrtS = "njet={}".format(njet) # used with iPeriod = 0, e.g. for simulation-only plots (default is an empty string)

    iPos = 0
    iPeriod = 0
    if( iPos==0 ): CMS_lumi.relPosX = 0.22
    CMS_lumi.CMS_lumi(pad1, iPeriod, iPos)    

    # draw back all the axes            
    #frameDistro.Draw("AXIS")
    pad1.Update()
    pad1.RedrawAxis()

    tcanvas.Update()
    tcanvas.Draw()
    tcanvas.SaveAs("ratio_njets_{}.png".format(njet))
    cache.append((h2,tcanvas))