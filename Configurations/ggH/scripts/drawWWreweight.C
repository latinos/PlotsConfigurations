
// r99t eos/user/a/amassiro/HWW2015/ICHEP/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2Nu.root     scripts/drawWWreweight.C

{
  
  TCanvas* cc = new TCanvas ("cc", "", 800, 600);
  
  
  TH1F h("h", "NLO",                                  30, 0, 100);
  TH1F hNLL("hNLL", "NLO+NNLL",                       30, 0, 100);
  TH1F hNLL_Rup("hNLL_Rup", "NLO+NNLL Rup",           30, 0, 100);
  TH1F hNLL_Rdown("hNLL_Rdown", "NLO+NNLL Rdown",     30, 0, 100);
  TH1F hNLL_Qup("hNLL_Qup", "NLO+NNLL Qup",           30, 0, 100);
  TH1F hNLL_Qdown("hNLL_Qdown", "NLO+NNLL Qdown",     30, 0, 100);
  
  
  
  
  h.Sumw2()                ;
  hNLL.Sumw2()             ;
  hNLL_Rup.Sumw2()         ;
  hNLL_Rdown.Sumw2()       ;
  hNLL_Qup.Sumw2()         ;
  hNLL_Qdown.Sumw2()       ;
  
  
  
  latino->Draw("gen_ptww >> h", "baseW")                                            ;
  latino->Draw("gen_ptww >> hNLL", "baseW*nllW", "same")                            ;
  latino->Draw("gen_ptww >> hNLL_Rup", "baseW*nllW_Rup", "same")                    ;
  latino->Draw("gen_ptww >> hNLL_Rdown", "baseW*nllW_Rdown", "same")                ;
  latino->Draw("gen_ptww >> hNLL_Qup", "baseW*nllW_Qup", "same")                    ;
  latino->Draw("gen_ptww >> hNLL_Qdown", "baseW*nllW_Qdown", "same")                ;
  
  h.Scale (1. / h.Integral())                             ;
  hNLL.Scale (1. / hNLL.Integral())                       ;
  hNLL_Rup.Scale (1. / hNLL_Rup.Integral())               ;
  hNLL_Rdown.Scale (1. / hNLL_Rdown.Integral())           ;
  hNLL_Qup.Scale (1. / hNLL_Qup.Integral())               ;
  hNLL_Qdown.Scale (1. / hNLL_Qdown.Integral())           ;
  
  
  h.SetLineColor          (kBlack)                    ;
  hNLL.SetLineColor       (kRed)                   ;
  hNLL_Rup.SetLineColor   (kMagenta-7)         ;
  hNLL_Rdown.SetLineColor (kMagenta-4)       ;
  hNLL_Qup.SetLineColor   (kTeal+2)            ;
  hNLL_Qdown.SetLineColor (kTeal-2)           ;
  
  h.SetLineStyle(2)                 ;

  
  h.SetLineWidth(2)                 ;
  hNLL.SetLineWidth(2)            ;
  hNLL_Rup.SetLineWidth(2) ;
  hNLL_Rdown.SetLineWidth(2)      ;
  hNLL_Qup.SetLineWidth(2)           ;
  hNLL_Qdown.SetLineWidth(2)         ;
  
  
  
  h.SetMarkerColor         (kBlack)                 ;
  hNLL.SetMarkerColor      (kRed)                ;
  hNLL_Rup.SetMarkerColor  (kMagenta-7)          ;
  hNLL_Rdown.SetMarkerColor(kMagenta-4)        ;
  hNLL_Qup.SetMarkerColor  (kTeal+2)          ;
  hNLL_Qdown.SetMarkerColor(kTeal-2)        ;
  
  
  h.GetXaxis()->SetTitle("p_{T} WW [GeV]");
  
  h.DrawClone("hist")                       ;
  hNLL.DrawClone("hist same")               ;
  hNLL_Rup.DrawClone("hist same")           ;
  hNLL_Rdown.DrawClone("hist same")         ;
  hNLL_Qup.DrawClone("hist same")           ;
  hNLL_Qdown.DrawClone("hist same")         ;
  
  gPad->BuildLegend();
  
  
}