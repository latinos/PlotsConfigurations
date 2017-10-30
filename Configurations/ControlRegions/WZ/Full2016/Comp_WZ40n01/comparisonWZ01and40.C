#define BIN 150.
#define HiLimit 150.
#define ZoomBIN 100.
#define ZoomHiLimit 10.
#define nVar 20
#define nCh 7
void comparisonWZ01and40(){

  gStyle->SetOptStat(0);
  TH1::SetDefaultSumw2();

  TString fileName("./rootFile_l2tightWZonly_Gen23/plots_l2tightWZonly_Gen23.root");
  //TString fileName("./rootFile_l2tightWZonly/plots_l2tightWZonly.root");
  //TString fileName("./rootFile_WZ_WZCut_Nlep2_LepCut3/plots_WZ_WZCut_Nlep2_LepCut3.root");
  cout<<fileName<<endl;
  TFile *myF   = new TFile(fileName);
  
  TString plotDir("plotsCompWZ4WZ01_l2tight_Gen23/");
  //TString plotDir("plotsCompWZ4WZ01_WZTo3LNu_Nlep2_LepCut3/");

  TString channel[nCh];
  channel[0]="emOF";
  channel[1]="emSF";
  channel[2]="eeOF";
  channel[3]="eeSF";
  channel[4]="mmOF";
  channel[5]="mmSF";
  channel[6]="All";

  //channel[0]="ZTomumuWTomu";
  //channel[1]="ZTomumuWToe";
  //channel[2]="ZTomumu";
  //channel[3]="ZToeeWTomu";
  //channel[4]="ZToeeWToe";
  //channel[5]="ZToee";

  enum idxChannel{ZTomumuWTomu,ZTomumuWToe,ZTomumu,ZToeeWTomu,ZToeeWToe,ZToee};


  TString varName[nVar];
  varName[0]="mll";
  varName[1]="mllmin3l";
  varName[2]="mllmin3lPeak";
  varName[3]="pt1";
  varName[4]="pt2";
  varName[5]="pt3";
  varName[6]="eta1";
  varName[7]="eta2";
  varName[8]="eta3";
  varName[9]="pfmet";
  varName[10]="trkMet";
  varName[11]="mpmet";
  varName[12]="mth";
  varName[13]="ptll";
  varName[14]="drll";
  varName[15]="mllWgSt";
  varName[16]="mllWgStLowM";
  varName[17]="mllWgStLLowM";
  varName[18]="mtw1";
  varName[19]="njet";

  TString histBase;

  TH1F* h_WZgS_L, *h_WZgS_H, *h_WZ;

  TCanvas *myCan=new TCanvas("myCan");

  for(int i(0); i<nCh; i++){
    cout<<"decay channel: "<<channel[i]<<"====================================="<<endl;
    for(int j(0); j<nVar; j++){
      histBase=channel[i]+"/"+varName[j]+"/";
      cout<<"histogram name :"<<histBase<<endl;
      h_WZgS_L    = (TH1F*)myF->Get(histBase+"histo_WZgS_L");
      h_WZgS_H    = (TH1F*)myF->Get(histBase+"histo_WZgS_H");
      h_WZ        = (TH1F*)myF->Get(histBase+"histo_WZ");

      h_WZgS_L->Scale(1.12);
      h_WZgS_H->Scale(1.12);

      h_WZgS_L->SetLineColor(kViolet);
      h_WZgS_H->SetLineColor(kBlue);
      h_WZ    ->SetLineColor(kRed);

      h_WZ    ->SetLineWidth(2);
      h_WZgS_L->SetLineWidth(2);
      h_WZgS_H->SetLineWidth(2);

      h_WZ    ->SetTitle(varName[j]);

      h_WZ    ->Draw();
      h_WZgS_L->Draw("same");
      h_WZgS_H->Draw("same");

      TLegend *leg = new TLegend(0.75,0.75,0.87,0.87,NULL,"brNDC");
      leg->SetBorderSize(1);
      leg->SetTextFont(62);
      leg->SetTextSize(0.03084746);
      leg->SetLineColor(0);
      leg->SetLineStyle(1);
      leg->SetLineWidth(1);
      leg->SetFillColor(0);
      leg->SetFillStyle(1001);
      leg->AddEntry(h_WZgS_L,"01_GenL","l");
      leg->AddEntry(h_WZgS_H,"01_GenH","l");
      leg->AddEntry(h_WZ,"4","l");
      leg->Draw("same");


      myCan->Update();
      myCan->SaveAs(plotDir+channel[i]+"_"+varName[j]+".png");
      myCan->SaveAs(plotDir+channel[i]+"_"+varName[j]+".pdf");
      myCan->Clear();

      // Ratio all01/all4
      auto c1 = new TCanvas();
      auto rp = new TRatioPlot(h_WZ,h_WZgS_H);
      rp->Draw();
      rp->GetLowerRefYaxis()->SetTitle("mll40/mll01");
      rp->GetLowerRefGraph()->SetMaximum(1.6);
      //rp->GetLowerRefXaxis()->SetTitle("mllWgSt [GeV]");
      //c1->Update();
      TLegend *lg = new TLegend(0.4373563,0.7,0.8577586,0.87,NULL,"brNDC");
      lg->SetBorderSize(1);
      lg->SetTextFont(62);
      lg->SetTextSize(0.04084746);
      lg->SetLineColor(0);
      lg->SetLineStyle(1);
      lg->SetLineWidth(1);
      lg->SetFillColor(0);
      lg->SetFillStyle(1001);
      lg->AddEntry(h_WZ,"mll40","f");
      lg->AddEntry(h_WZgS_H,"mll01","f");
      lg->Draw();
      gPad->Modified();
      gPad->Update();
      c1->Update();
      c1->SaveAs(plotDir+channel[i]+"_"+varName[j]+"_Ratio.png");
      c1->SaveAs(plotDir+channel[i]+"_"+varName[j]+"_Ratio.pdf");

    }
  }

  /****************
  //===============================================
  TH1D* mllWgSt_ZGstMassInverse_01 = new TH1D("mllWgSt_ZGstMassInverse_01","",BIN,0,HiLimit);
  TH1D* mllWgSt_ZGstMass0ToX_4     = new TH1D("mllWgSt_ZGstMass0ToX_4","",BIN,0,HiLimit);
  TH1D* mllWgSt_ZGstMassInverse_4  = new TH1D("mllWgSt_ZGstMassInverse_4","",BIN,0,HiLimit);

  TH1D* zoomMllWgSt_ZGstMass0ToX_01    = new TH1D("zoomMllWgSt_ZGstMass0ToX_01","",ZoomBIN,0,ZoomHiLimit);
  TH1D* zoomMllWgSt_ZGstMassInverse_01 = new TH1D("zoomMllWgSt_ZGstMassInverse_01","",ZoomBIN,0,ZoomHiLimit);
  TH1D* zoomMllWgSt_ZGstMass0ToX_4     = new TH1D("zoomMllWgSt_ZGstMass0ToX_4","",ZoomBIN,0,ZoomHiLimit);
  TH1D* zoomMllWgSt_ZGstMassInverse_4  = new TH1D("zoomMllWgSt_ZGstMassInverse_4","",ZoomBIN,0,ZoomHiLimit);

  THStack *hs = new THStack("hs","");
  THStack *zoomHs = new THStack("zoomHs","");

  mllWgSt_ZGstMass0ToX_01->SetFillColor(kRed);
  mllWgSt_ZGstMassInverse_01->SetFillColor(kRed-10);
  mllWgSt_ZGstMass0ToX_4->SetFillColor(kBlue);
  mllWgSt_ZGstMassInverse_4->SetFillColor(kBlue-10);

  zoomMllWgSt_ZGstMass0ToX_01->SetFillColor(kRed);
  zoomMllWgSt_ZGstMassInverse_01->SetFillColor(kRed-10);
  zoomMllWgSt_ZGstMass0ToX_4->SetFillColor(kBlue);
  zoomMllWgSt_ZGstMassInverse_4->SetFillColor(kBlue-10);

  WZ4_t.Add("latino_WZTo3LNu__part0.root");
  WZ4_t.Add("latino_WZTo3LNu__part1.root");
  WZ4_t.Add("latino_WZTo3LNu__part2.root");
  WZ4_t.Add("latino_WZTo3LNu__part3.root");
  WZ01_t.Add("latino_WZTo3LNu_mllmin01_ext1__part0.root");
  WZ01_t.Add("latino_WZTo3LNu_mllmin01_ext1__part1.root");
  WZ01_t.Add("latino_WZTo3LNu_mllmin01_ext1__part2.root");
  WZ01_t.Add("latino_WZTo3LNu_mllmin01_ext1__part3.root");

  TCanvas *myCan=new TCanvas("myCan");


  // fill histograms
  WZ01_t.Draw("mllWgSt>>mllWgSt_ZGstMass0ToX_01",cut_rang);
  WZ01_t.Draw("mllWgSt>>mllWgSt_ZGstMassInverse_01",cut_invs);

  WZ4_t.Draw("mllWgSt>>mllWgSt_ZGstMass0ToX_4",cut_rang);
  WZ4_t.Draw("mllWgSt>>mllWgSt_ZGstMassInverse_4",cut_invs);

  // zoomed histogram
  WZ01_t.Draw("mllWgSt>>zoomMllWgSt_ZGstMass0ToX_01",zoomCut_rang);
  WZ01_t.Draw("mllWgSt>>zoomMllWgSt_ZGstMassInverse_01",zoomCut_invs);

  WZ4_t.Draw("mllWgSt>>zoomMllWgSt_ZGstMass0ToX_4",zoomCut_rang);
  WZ4_t.Draw("mllWgSt>>zoomMllWgSt_ZGstMassInverse_4",zoomCut_invs);

  double zMassEvet_ZGstmassInv_4  = mllWgSt_ZGstMassInverse_4->Integral(80*BIN/HiLimit,110*BIN/HiLimit);
  double zMassEvet_ZGstmassInv_01 = mllWgSt_ZGstMassInverse_01->Integral(80*BIN/HiLimit,110*BIN/HiLimit);
  double zMassEvet_ZGstmass0ToX_01= mllWgSt_ZGstMass0ToX_01->Integral(80*BIN/HiLimit,110*BIN/HiLimit);
  double scale4 = zMassEvet_ZGstmassInv_01/zMassEvet_ZGstmassInv_4;
  double zGmassEvt_0ToXovAll_01 = zMassEvet_ZGstmass0ToX_01/(zMassEvet_ZGstmassInv_01+zMassEvet_ZGstmass0ToX_01);
  cout<<"Number of event at Z peak"<<endl;
  cout<<"ZGstmassGT7_4 : "<<zMassEvet_ZGstmassInv_4<<endl;
  cout<<"ZGstmassGT7_01: "<<zMassEvet_ZGstmassInv_01<<endl;
  cout<<"scale for 4   : "<<scale4<<endl;
  cout<<"ZGstmass 0ToX contamination at Zpeak:"<<zGmassEvt_0ToXovAll_01<<endl;
  //mllWgStWgSt_01->DrawNormalized();
  //
  //Nomalization
  mllWgSt_ZGstMass0ToX_4->Scale(scale4);
  mllWgSt_ZGstMassInverse_4->Scale(scale4);
  zoomMllWgSt_ZGstMass0ToX_4->Scale(scale4);
  zoomMllWgSt_ZGstMassInverse_4->Scale(scale4);


  hs->Add(mllWgSt_ZGstMass0ToX_01);
  hs->Add(mllWgSt_ZGstMassInverse_01);
  hs->Add(mllWgSt_ZGstMass0ToX_4);
  hs->Add(mllWgSt_ZGstMassInverse_4);
  hs->Draw("h");
  hs->GetXaxis()->SetTitle("mllWgSt [GeV]");
  //myCan->Modified();
  TLegend *leg = new TLegend(0.6,0.7,0.87,0.87,NULL,"brNDC");
  leg->SetBorderSize(1);
  leg->SetTextFont(62);
  leg->SetTextSize(0.03084746);
  leg->SetLineColor(0);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->AddEntry(mllWgSt_ZGstMass0ToX_01,"ZGstM_0To"+sepWgStMass+"_mll01","f");
  leg->AddEntry(mllWgSt_ZGstMassInverse_01,"ZGstM_Inverse_mll01","f");
  leg->AddEntry(mllWgSt_ZGstMass0ToX_4,"ZGstM_0To"+sepWgStMass+"_mll4","f");
  leg->AddEntry(mllWgSt_ZGstMassInverse_4,"ZGstM_Inverse_mll4","f");
  leg->Draw("same");
  myCan->SaveAs(plotDir+plotBaseName+".png");
  myCan->SaveAs(plotDir+plotBaseName+".pdf");
  myCan->Clear();
  // draw again for log scaled plots
  myCan->SetLogy();
  hs->Draw("h");
  leg->Draw("same");
  myCan->SaveAs(plotDir+"lg_"+plotBaseName+".png");
  myCan->SaveAs(plotDir+"lg_"+plotBaseName+".pdf");
  myCan->Clear();
  myCan->SetLogy(0);

  zoomHs->Add(zoomMllWgSt_ZGstMass0ToX_01);
  zoomHs->Add(zoomMllWgSt_ZGstMassInverse_01);
  zoomHs->Add(zoomMllWgSt_ZGstMass0ToX_4);
  zoomHs->Add(zoomMllWgSt_ZGstMassInverse_4);
  zoomHs->Draw("h");
  zoomHs->GetXaxis()->SetTitle("mllWgSt [GeV]");
  //myCan->Modified();
  TLegend *zoomLeg = new TLegend(0.6,0.7,0.87,0.87,NULL,"brNDC");
  zoomLeg->SetBorderSize(1);
  zoomLeg->SetTextFont(62);
  zoomLeg->SetTextSize(0.03084746);
  zoomLeg->SetLineColor(0);
  zoomLeg->SetLineStyle(1);
  zoomLeg->SetLineWidth(1);
  zoomLeg->SetFillColor(0);
  zoomLeg->SetFillStyle(1001);
  zoomLeg->AddEntry(zoomMllWgSt_ZGstMass0ToX_01,"ZGstM_0To"+sepWgStMass+"_mll01","f");
  zoomLeg->AddEntry(zoomMllWgSt_ZGstMassInverse_01,"ZGstM_Inverse_mll01","f");
  zoomLeg->AddEntry(zoomMllWgSt_ZGstMass0ToX_4,"ZGstM_0To"+sepWgStMass+"_mll4","f");
  zoomLeg->AddEntry(zoomMllWgSt_ZGstMassInverse_4,"ZGstM_Inverse_mll4","f");
  zoomLeg->Draw("same");
  myCan->SaveAs(plotDir+plotBaseName+"_zoom.png");
  myCan->SaveAs(plotDir+plotBaseName+"_zoom.pdf");
  myCan->Clear();
  // draw again for log scaled plots
  myCan->SetLogy();
  zoomHs->Draw("h");
  zoomLeg->Draw("same");
  myCan->SaveAs(plotDir+"lg_"+plotBaseName+"_zoom.png");
  myCan->SaveAs(plotDir+"lg_"+plotBaseName+"_zoom.pdf");
  myCan->Close();


  // Ratio all01/all4

  auto c1 = new TCanvas();
  auto h4all = (TH1D*)mllWgSt_ZGstMass0ToX_4->Clone("h4all");
  h4all->Add(mllWgSt_ZGstMassInverse_4);
  auto h01all = (TH1D*)mllWgSt_ZGstMass0ToX_01->Clone("h01all");
  h01all->Add(mllWgSt_ZGstMassInverse_01);
  h01all->GetXaxis()->SetTitle("mllWgSt [GeV]");
  auto rp = new TRatioPlot(h01all,h4all);
  rp->Draw();
  rp->GetLowerRefYaxis()->SetTitle("mllWgSt01/mllWgSt4");
  rp->GetLowerRefGraph()->SetMaximum(1.6);
  //rp->GetLowerRefXaxis()->SetTitle("mllWgSt [GeV]");
  //c1->Update();
  TLegend *lg = new TLegend(0.4373563,0.7,0.8577586,0.87,NULL,"brNDC");
  lg->SetBorderSize(1);
  lg->SetTextFont(62);
  lg->SetTextSize(0.04084746);
  lg->SetLineColor(0);
  lg->SetLineStyle(1);
  lg->SetLineWidth(1);
  lg->SetFillColor(0);
  lg->SetFillStyle(1001);
  lg->AddEntry(h01all,"mllWgSt_01","f");
  lg->AddEntry(h4all,"mllWgSt_4","l");
  lg->Draw();
  gPad->Modified();
  gPad->Update();
  c1->Update();
  c1->SaveAs(plotDir+plotBaseName+"_Ratio.png");
  c1->SaveAs(plotDir+plotBaseName+"_Ratio.pdf");
  ******************/


}
