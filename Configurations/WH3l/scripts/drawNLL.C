void drawNLL() {
 
TFile *f = new TFile("/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/WH_Limits/2016/15Sept/higgsCombineLHScan.MultiDimFit.mH125.root","read");
TTree *limit = (TTree*)f->Get("limit");

  TCanvas* cc = new TCanvas("cc","", 800, 600);
  int n = 0;
  
  n = limit->Draw("2*deltaNLL:r","deltaNLL<10 && deltaNLL>0","l");
  TGraph *graphScan = new TGraph(n,limit->GetV2(),limit->GetV1());
  graphScan->RemovePoint(0);
  
  
  cc->SetGrid();
  
  graphScan->GetXaxis()->SetTitle("#mu");
  graphScan->GetYaxis()->SetTitle("-2 #Delta LL");
  
  graphScan->SetTitle("");
  graphScan->SetMarkerStyle(21);
  graphScan->SetLineWidth(2);
  graphScan->SetMarkerColor(kBlue);
  graphScan->SetLineColor(kBlue);
  
//   graphScan->Draw("APL");
  
  //----
  cc->SetTicks();
  cc->SetFillColor(0);
  cc->SetBorderMode(0);
  cc->SetBorderSize(2);
  cc->SetTickx(1);
  cc->SetTicky(1);
  cc->SetRightMargin(0.05);
  cc->SetBottomMargin(0.12);
  cc->SetFrameBorderMode(0);
  
  TLatex * tex;
  tex = new TLatex(0.94,0.92,"#sqrt{s} = 13 TeV");
  tex->SetNDC();
  tex->SetTextAlign(31);
  tex->SetTextFont(42);
  tex->SetTextSize(0.04);
  tex->SetLineWidth(2);
  
  TLatex * tex2 = new TLatex(0.14,0.92,"CMS Preliminary");
  tex2->SetNDC();
  tex2->SetTextFont(61);
  tex2->SetTextSize(0.04);
  tex2->SetLineWidth(2);
  
  TLatex * tex3;
  tex3 = new TLatex(0.55,0.92,"L = 12.3 fb^{-1}");
  tex3->SetNDC();
  tex3->SetTextFont(52);
  tex3->SetTextSize(0.035);
  tex3->SetLineWidth(2);
  
  graphScan  ->Draw("al");
  
  tex->Draw("same");
  tex2->Draw("same");
  tex3->Draw("same");
  
  
  //  2deltaLogL = 1.00
  //  2deltaLogL = 3.84
  
  TLine *line1 = new TLine((limit->GetV2())[0],1.0,(limit->GetV2())[n-1],1.0);
  line1->SetLineWidth(2);
  line1->SetLineStyle(2);
  line1->SetLineColor(kRed);
  line1->Draw(); 
  
  TLine *line2 = new TLine((limit->GetV2())[0],3.84,(limit->GetV2())[n-1],3.84);
  line2->SetLineWidth(2);
  line2->SetLineStyle(2);
  line2->SetLineColor(kRed);
  line2->Draw();
  
  cc->SaveAs("ll_12p3fb.png");
  
}
