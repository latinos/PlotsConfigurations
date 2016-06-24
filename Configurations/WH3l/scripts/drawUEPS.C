//
//---- calculate correction factors for UE/PS nuisance
//

void drawUEPS(std::string sample = "WWTo2L2Nu") {
  
  TFile fileRef(std::string("/tmp/amassiro/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_" + sample + ".root").c_str(), "READ");
  TFile file_UEup(std::string("/tmp/amassiro/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_" + sample + ".root").c_str(), "READ");
  TFile file_UEdo(std::string("/tmp/amassiro/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_" + sample + ".root").c_str(), "READ");

  TFile file_PS(std::string("/tmp/amassiro/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_" + sample + ".root").c_str(), "READ");
  
  
  TTree* latinoRef = (TTree*) fileRef.Get("latino");
  TTree* latino_UEup = (TTree*) file_UEup.Get("latino");
  TTree* latino_UEdo = (TTree*) file_UEdo.Get("latino");
  TTree* latino_PS = (TTree*) file_PS.Get("latino");
  
  latinoRef->Draw("1 >> htemp(1,0,2)","(puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1])*(std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10)","goff");
  double nominal = htemp->GetBinContent(1);
  
  latino_UEup->Draw("1 >> htemp(1,0,2)","(puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1])*(std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10)","goff");
  double norm_latino_UEup = htemp->GetBinContent(1);
  latino_UEdo->Draw("1 >> htemp(1,0,2)","(puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1])*(std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10)","goff");
  double norm_latino_UEdo = htemp->GetBinContent(1);
  latino_PS->Draw("1 >> htemp(1,0,2)","(puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1])*(std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10)","goff");
  double norm_latino_PS = htemp->GetBinContent(1);
  
  std::cout << "ue up/nom = " << norm_latino_UEup / nominal << std::endl;
  std::cout << "ue do/nom = " << norm_latino_UEdo / nominal << std::endl;
  std::cout << "PS   /nom = " << norm_latino_PS   / nominal << std::endl;
  
}