//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// CMS Publications Committee: New CMS standards for plot decorations
// https://ghm.web.cern.ch/ghm/plots/
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


void PaperStyle()
{
  TStyle* PaperStyle = new TStyle("PaperStyle", "PaperStyle");

  gStyle = PaperStyle;


  //----------------------------------------------------------------------------
  // General
  //----------------------------------------------------------------------------
  PaperStyle->SetEndErrorSize    (  5);
  PaperStyle->SetHatchesLineWidth(  1);
  PaperStyle->SetHatchesSpacing  (0.7);
  PaperStyle->SetPalette         (1,0);


  //----------------------------------------------------------------------------
  // Canvas
  //----------------------------------------------------------------------------
  PaperStyle->SetCanvasBorderMode(  0);
  PaperStyle->SetCanvasBorderSize( 10);
  PaperStyle->SetCanvasColor     (  0);
  PaperStyle->SetCanvasDefH      (600);
  PaperStyle->SetCanvasDefW      (550);
  PaperStyle->SetCanvasDefX      ( 10);
  PaperStyle->SetCanvasDefY      ( 10);


  //----------------------------------------------------------------------------
  // Pad
  //----------------------------------------------------------------------------
  PaperStyle->SetPadBorderMode  (   0);
  PaperStyle->SetPadBorderSize  (  10);
  PaperStyle->SetPadColor       (   0);
  PaperStyle->SetPadBottomMargin(0.20);
  PaperStyle->SetPadTopMargin   (0.08);
  PaperStyle->SetPadLeftMargin  (0.18);
  PaperStyle->SetPadRightMargin (0.05);


  //----------------------------------------------------------------------------
  // Frame
  //----------------------------------------------------------------------------
  PaperStyle->SetFrameBorderMode( 0);
  PaperStyle->SetFrameBorderSize(10);
  PaperStyle->SetFrameFillStyle ( 0);
  PaperStyle->SetFrameFillColor ( 0);
  PaperStyle->SetFrameLineColor ( 1);
  PaperStyle->SetFrameLineStyle ( 0);
  PaperStyle->SetFrameLineWidth ( 2);


  //----------------------------------------------------------------------------
  // Hist
  //----------------------------------------------------------------------------
  PaperStyle->SetHistFillColor(0);
  PaperStyle->SetHistFillStyle(1);
  PaperStyle->SetHistLineColor(1);
  PaperStyle->SetHistLineStyle(0);
  PaperStyle->SetHistLineWidth(1);


  //----------------------------------------------------------------------------
  // Axis
  //----------------------------------------------------------------------------
  PaperStyle->SetLabelFont  (   43, "xyz");  // 43 for size in absolute pixel number
  PaperStyle->SetLabelOffset(0.020, "xyz");
  PaperStyle->SetLabelSize  (   22, "xyz");  // 22 for size in absolute pixel number
  PaperStyle->SetNdivisions (  510, "xyz");
  PaperStyle->SetTitleFont  (   42, "xyz");
  PaperStyle->SetTitleSize  (0.040, "xyz");
  PaperStyle->SetTitleOffset( 1.15,   "x");
  PaperStyle->SetTitleOffset( 1.15,   "y");
  PaperStyle->SetPadTickX   (           1);
  PaperStyle->SetPadTickY   (           1);


  //----------------------------------------------------------------------------
  // Title
  //----------------------------------------------------------------------------
  PaperStyle->SetTitleAlign     (   33);
  PaperStyle->SetTitleBorderSize(    0);
  PaperStyle->SetTitleFillColor (   10);
  PaperStyle->SetTitleFont      (   42);
  PaperStyle->SetTitleFontSize  (0.045);
  PaperStyle->SetTitleX         (0.960);
  PaperStyle->SetTitleY         (0.990);


  //----------------------------------------------------------------------------
  // Stat
  //----------------------------------------------------------------------------
  PaperStyle->SetOptStat       (   0);
  PaperStyle->SetStatBorderSize(   0);
  PaperStyle->SetStatColor     (  10);
  PaperStyle->SetStatFont      (  42);
  PaperStyle->SetStatX         (0.94);
  PaperStyle->SetStatY         (0.91);
}
