import ROOT as rt
import CMS_lumi, tdrstyle
import array

def get_canvas(text, H_ref=600, W_ref=800):
    #set the tdr style
    tdrstyle.setTDRStyle()

    #change the CMS_lumi variables (see CMS_lumi.py)
    # CMS_lumi.lumi_7TeV = "4.8 fb^{-1}"
    # CMS_lumi.lumi_8TeV = "18.3 fb^{-1}"
    CMS_lumi.writeExtraText = 1
    CMS_lumi.extraText = "Preliminary"
    CMS_lumi.lumi_sqrtS = text # used with iPeriod = 0, e.g. for simulation-only plots (default is an empty string)

    iPos = 0
    if( iPos==0 ): CMS_lumi.relPosX = 0.12

    W = W_ref
    H  = H_ref
    # 
    # Simple example of macro: plot with CMS name and lumi text
    #  (this script does not pretend to work in all configurations)
    # iPeriod = 1*(0/1 7 TeV) + 2*(0/1 8 TeV)  + 4*(0/1 13 TeV) 
    # For instance: 
    #               iPeriod = 3 means: 7 TeV + 8 TeV
    #               iPeriod = 7 means: 7 TeV + 8 TeV + 13 TeV 
    #               iPeriod = 0 means: free form (uses lumi_sqrtS)
    # Initiated by: Gautier Hamel de Monchenault (Saclay)
    # Translated in Python by: Joshua Hardenbrook (Princeton)
    # Updated by:   Dinko Ferencek (Rutgers)
    #
    iPeriod = 0

    # references for T, B, L, R
    T = 0.08*H_ref
    B = 0.14*H_ref 
    L = 0.12*W_ref
    R = 0.04*W_ref

    canvas = rt.TCanvas("c2","c2",50,50,W,H)
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

    return canvas 



def finalize(canvas, main_obj):
    xAxis = main_obj.GetXaxis()
    #xAxis.SetNdivisions(6,5,0)
    xAxis.SetTitleOffset(0.95)

    yAxis = main_obj.GetYaxis()
    yAxis.SetNdivisions(6,5,0)
    yAxis.SetTitleOffset(0.9)

    canvas.cd()
    canvas.Update()
    canvas.RedrawAxis()
    frame = canvas.GetFrame()
    frame.Draw()

    #draw the lumi text on the canvas
    iPos = 0 
    iPeriod = 0
    CMS_lumi.CMS_lumi(canvas, iPeriod, iPos)

    #update the canvas to draw the legend
    canvas.Update()
    

