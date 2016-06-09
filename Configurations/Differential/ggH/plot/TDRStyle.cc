#include "TGaxis.h"
#include "TStyle.h"
#include "TLatex.h"

void TDRStyle(){
  ///===========================================================================
  
  //  gROOT->Reset();
  //  gROOT->SetStyle("Plain");
  //  gStyle->SetPalette(1); 
  //  gStyle->SetOptStat(1110);
  //  gStyle->SetPadTickX(1);
  //  gStyle->SetPadTickY(1);
  //  gStyle->SetTitleBorderSize(0);
  
  // style:
  
  //For the canvas:
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetCanvasColor(kWhite);
  gStyle->SetCanvasDefH(800); //600
  //Height of canvas
  gStyle->SetCanvasDefW(800);//800 //Width of canvas
  gStyle->SetCanvasDefX(0);   //POsition on screen
  gStyle->SetCanvasDefY(0);
  
  // For the Pad:
  gStyle->SetPadBorderMode(0);
  // gStyle->SetPadBorderSize(Width_t size = 1);
  gStyle->SetPadColor(kWhite);
  gStyle->SetPadGridX(false);
  gStyle->SetPadGridY(false);
  gStyle->SetGridColor(0);
  gStyle->SetGridStyle(3);
  gStyle->SetGridWidth(1);
  
  //For the frame:
  gStyle->SetFrameBorderMode(0);
  gStyle->SetFrameBorderSize(1);
  gStyle->SetFrameFillColor(0);
  gStyle->SetFrameFillStyle(0);
  gStyle->SetFrameLineColor(1);
  gStyle->SetFrameLineStyle(1);
  gStyle->SetFrameLineWidth(1);
  
  // For the histo:
  gStyle->SetHistLineColor(1);
  gStyle->SetHistLineStyle(0);
  gStyle->SetHistLineWidth(2);
  gStyle->SetEndErrorSize(2);
  //  gStyle->SetErrorMarker(20);
  //gStyle->SetErrorX(0.);
  gStyle->SetMarkerStyle(8);
  
  
  // For the legend:
  //  gStyle->SetFillColor(8);
  gStyle->SetFillStyle(0);
  
  
  
  // For the statistics box:
  gStyle->SetOptFile(0);
  //  gStyle->SetOptStat(1);
  gStyle->SetOptStat(0);
  gStyle->SetStatColor(kWhite);
  gStyle->SetStatFont(42);
  gStyle->SetStatFontSize(0.025);
  gStyle->SetStatTextColor(1);
  gStyle->SetStatFormat("6.4g");
  gStyle->SetStatBorderSize(1);
  //   gStyle->SetStatBorderSize(0);
  gStyle->SetStatH(.1);
  gStyle->SetStatW(.15);
  
  //  gStyle->SetStatX(.9);
  // gStyle->SetStatY(.9);
  
  // For the Global title:
  gStyle->SetOptTitle(0);
  //   gStyle->SetOptTitle(1);
  gStyle->SetTitleFont(42);
  gStyle->SetTitleColor(1);
  gStyle->SetTitleTextColor(1);
  gStyle->SetTitleFillColor(10);
  //  gStyle->SetTitleFontSize(0.05);
  gStyle->SetTitleFontSize(0.04);
  gStyle->SetTitleX(0.4);
  
  // For the axis titles:
  gStyle->SetTitleColor(1, "XYZ");
  gStyle->SetTitleFont(42, "XYZ");
  //  gStyle->SetTitleSize(0.06, "XYZ");
  gStyle->SetTitleSize(0.04, "XYZ");
  gStyle->SetTitleXOffset(0.9);
  // gStyle->SetTitleYOffset(1.25);
  //gStyle->SetTitleXOffset(0.5);
  gStyle->SetTitleYOffset(1.0);
  
  // For the axis labels:
  gStyle->SetLabelColor(1, "XYZ");
  gStyle->SetLabelFont(42, "XYZ");
  gStyle->SetLabelOffset(0.007, "XYZ");
  
  gStyle->SetLabelSize(0.05, "XYZ");
  //  gStyle->SetLabelSize(0.02, "XYZ");
  
  // For the axis:
  gStyle->SetAxisColor(1, "XYZ");
  gStyle->SetStripDecimals(kTRUE);
  gStyle->SetTickLength(0.03, "XYZ");
  gStyle->SetNdivisions(510, "XYZ");
  gStyle->SetPadTickX(0);  // To get tick marks on the opposite side of the frame
  gStyle->SetPadTickY(1);
  // // Postscript options:
  //   //gStyle->SetPaperSize(20.,20.);
  
  // CC style  
  gStyle->SetTitleXOffset(0.8);
  //   gStyle->SetTitleYOffset(0.8);
  gStyle->SetTitleYOffset(1.0);
  
  gStyle->SetLabelOffset(0.005, "XYZ");
  gStyle->SetTitleSize(0.07, "XYZ");
  gStyle->SetTitleFont(22,"X");
  gStyle->SetTitleFont(22,"Y");
  /*  gStyle->SetPadBottomMargin(0.13);
   * gStyle->SetPadTopMargin(0.23);
   * gStyle->SetPadLeftMargin(0.15);
   * gStyle->SetPadRightMargin(0.21);*/
  /*  //PlotPt4Lep=====================
   * gStyle->SetPadBottomMargin(0.15);
   * gStyle->SetPadTopMargin(0.05);
   * gStyle->SetPadLeftMargin(0.15);
   * gStyle->SetPadRightMargin(0.05);*/
  /*  //PlotPrePreSelInvMass=====================
   * gStyle->SetPadBottomMargin(0.15);
   * gStyle->SetPadTopMargin(0.10);
   * gStyle->SetPadLeftMargin(0.15);
   * gStyle->SetPadRightMargin(0.10);*/
  /*  //PlotPrePreSelEff=====================
   * gStyle->SetPadBottomMargin(0.15);
   * gStyle->SetPadTopMargin(0.15);
   * gStyle->SetPadLeftMargin(0.15);
   * gStyle->SetPadRightMargin(0.15);*/
  //PlotInvMass=====================
  gStyle->SetPadBottomMargin(0.17);
  gStyle->SetPadTopMargin(0.07);
  //  gStyle->SetPadTopMargin(0.12);
  gStyle->SetPadLeftMargin(0.17);
  gStyle->SetPadRightMargin(0.12);
  /*  //PlotEffvsEff=====================
   * gStyle->SetPadBottomMargin(0.15);
   * gStyle->SetPadTopMargin(0.05);
   * gStyle->SetPadLeftMargin(0.15);
   * gStyle->SetPadRightMargin(0.05);*/
  /*  //JetMET=====================
   * gStyle->SetPadBottomMargin(0.15);
   * gStyle->SetPadTopMargin(0.05);
   * gStyle->SetPadLeftMargin(0.15);
   * gStyle->SetPadRightMargin(0.05);*/
  //   //Met2dEff=====================
  //   gStyle->SetPadBottomMargin(0.15);
  //   gStyle->SetPadTopMargin(0.05);
  //   gStyle->SetPadLeftMargin(0.15);
  //   gStyle->SetPadRightMargin(0.15);
  //   //Dalitz+PtVsMET=====================
  //   gStyle->SetPadBottomMargin(0.15);
  //   gStyle->SetPadTopMargin(0.10);
  //   gStyle->SetPadLeftMargin(0.15);
  //   gStyle->SetPadRightMargin(0.15);
  
  /*  gStyle->SetPadBottomMargin(0.13);
   * gStyle->SetPadLeftMargin(0.15);*/
  //  gStyle->SetHistLineWidth(3);
  gStyle->SetHistLineWidth(2);
  gStyle->SetLineStyleString(5,"20 12 4 12");
  gStyle->SetLineStyleString(6,"20 12 4 12 4 12 4 12");
  gStyle->SetLineStyleString(7,"20 20");
  gStyle->SetLineStyleString(8,"20 12 4 12 4 12");
  gStyle->SetLineStyleString(9,"80 20");
  
  
  
  
  
  TGaxis::SetMaxDigits(2);
  
  
  gStyle->cd(); 
  
  ///===========================================================================
}
