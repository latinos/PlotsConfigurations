# 
# Expanded version of samples.py 
# 
samples['DY'] = { 
     'name'  :  [ 
            'latino_DYJetsToTT_MuEle_M-50__part0.root',
            'latino_DYJetsToTT_MuEle_M-50__part1.root',
            'latino_DYJetsToTT_MuEle_M-50_ext1__part0.root',
            'latino_DYJetsToTT_MuEle_M-50_ext1__part1.root',
            'latino_DYJetsToLL_M-10to50.root',
     ],  
     'weights'  :  [ 
            '(1.)*((0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140))*(0.00725432292044/baseW)',
            '(1.)*((0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140))*(0.00725432292044/baseW)',
            '(1.)*((0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140))*(0.00725432292044/baseW)',
            '(1.)*((0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140))*(0.00725432292044/baseW)',
            '(1.)*((0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140))',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
     'FilesPerJob'  :   2 ,
}  
   
 samples['top'] = { 
     'name'  :  [ 
            'latino_TTTo2L2Nu__part0.root',
            'latino_TTTo2L2Nu__part1.root',
            'latino_TTTo2L2Nu__part10.root',
            'latino_TTTo2L2Nu__part11.root',
            'latino_TTTo2L2Nu__part12.root',
            'latino_TTTo2L2Nu__part13.root',
            'latino_TTTo2L2Nu__part14.root',
            'latino_TTTo2L2Nu__part15.root',
            'latino_TTTo2L2Nu__part16.root',
            'latino_TTTo2L2Nu__part17.root',
            'latino_TTTo2L2Nu__part18.root',
            'latino_TTTo2L2Nu__part19.root',
            'latino_TTTo2L2Nu__part2.root',
            'latino_TTTo2L2Nu__part20.root',
            'latino_TTTo2L2Nu__part3.root',
            'latino_TTTo2L2Nu__part4.root',
            'latino_TTTo2L2Nu__part5.root',
            'latino_TTTo2L2Nu__part6.root',
            'latino_TTTo2L2Nu__part7.root',
            'latino_TTTo2L2Nu__part8.root',
            'latino_TTTo2L2Nu__part9.root',
            'latino_ST_tW_antitop.root',
            'latino_ST_tW_top.root',
            'latino_ST_t-channel_antitop.root',
            'latino_ST_t-channel_top.root',
            'latino_ST_s-channel.root',
     ],  
     'weights'  :  [ 
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)*((TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))',
            '(1.)',
            '(1.)',
            '(1.)',
            '(1.)',
            '(1.)',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
     'FilesPerJob'  :   2 ,
}  
   
 samples['WW'] = { 
     'name'  :  [ 
            'latino_WWTo2L2Nu.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC*nllW' ,
}  
   
 samples['ggWW'] = { 
     'name'  :  [ 
            'latino_GluGluWWTo2L2Nu_MCFM.root',
     ],  
     'isData'  :  [ 
            '0',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['Vg'] = { 
     'name'  :  [ 
            'latino_Wg_MADGRAPHMLM.root',
            'latino_Zg__part0.root',
            'latino_Zg__part1.root',
            'latino_Zg__part2.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*METFilter_MC* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )' ,
}  
   
 samples['WZgS_L'] = { 
     'name'  :  [ 
            'latino_WZTo3LNu_mllmin01_ext1__part0.root',
            'latino_WZTo3LNu_mllmin01_ext1__part1.root',
            'latino_WZTo3LNu_mllmin01_ext1__part2.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC* (Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4)*0.94' ,
}  
   
 samples['WZgS_H'] = { 
     'name'  :  [ 
            'latino_WZTo3LNu_mllmin01_ext1__part0.root',
            'latino_WZTo3LNu_mllmin01_ext1__part1.root',
            'latino_WZTo3LNu_mllmin01_ext1__part2.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC* (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4)*1.14' ,
}  
   
 samples['VZ'] = { 
     'name'  :  [ 
            'latino_ZZTo2L2Nu__part0.root',
            'latino_ZZTo2L2Nu__part1.root',
            'latino_ZZTo2L2Nu__part2.root',
            'latino_WZTo2L2Q__part0.root',
            'latino_WZTo2L2Q__part1.root',
            'latino_WZTo2L2Q__part2.root',
            'latino_WZTo2L2Q__part3.root',
            'latino_ZZTo2L2Q__part0.root',
            'latino_ZZTo2L2Q__part1.root',
            'latino_ZZTo2L2Q__part2.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC*1.11' ,
     'FilesPerJob'  :   6 ,
}  
   
 samples['VVV'] = { 
     'name'  :  [ 
            'latino_ZZZ.root',
            'latino_WZZ.root',
            'latino_WWZ.root',
            'latino_WWW.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['ggH_hww'] = { 
     'name'  :  [ 
            'latino_GluGluHToWWTo2L2NuPowheg_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC*weight2MINLO' ,
}  
   
 samples['qqH_hww'] = { 
     'name'  :  [ 
            'latino_VBFHToWWTo2L2Nu_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['WpWmJJ_EWK'] = { 
     'name'  :  [ 
            'latino_WpWmJJ_EWK.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['WpWmJJ_EWK_QCD_noHiggs'] = { 
     'name'  :  [ 
            'latino_WpWmJJ_EWK_QCD_noHiggs.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['WpWmJJ_EWK_QCD_noTop'] = { 
     'name'  :  [ 
            'latino_WpWmJJ_EWK_QCD_noTop.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['WpWmJJ_EWK_QCD_noTop_noHiggs'] = { 
     'name'  :  [ 
            'latino_WpWmJJ_EWK_QCD_noTop_noHiggs.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['WpWmJJ_EWK_noTop'] = { 
     'name'  :  [ 
            'latino_WpWmJJ_EWK_noTop.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['WpWmJJ_QCD_noTop'] = { 
     'name'  :  [ 
            'latino_WpWmJJ_QCD_noTop.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['ZH_hww'] = { 
     'name'  :  [ 
            'latino_HZJ_HToWW_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['ggZH_hww'] = { 
     'name'  :  [ 
            'latino_ggZH_HToWW_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['WH_hww'] = { 
     'name'  :  [ 
            'latino_HWminusJ_HToWW_M125.root',
            'latino_HWplusJ_HToWW_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['bbH_hww'] = { 
     'name'  :  [ 
            'latino_bbHToWWTo2L2Nu_M125_yb2.root',
            'latino_bbHToWWTo2L2Nu_M125_ybyt.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['ttH_hww'] = { 
     'name'  :  [ 
            'latino_ttHToNonbb_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['ggH_htt'] = { 
     'name'  :  [ 
            'latino_GluGluHToTauTau_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['qqH_htt'] = { 
     'name'  :  [ 
            'latino_VBFHToTauTau_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['ZH_htt'] = { 
     'name'  :  [ 
            'latino_HZJ_HToTauTau_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 samples['WH_htt'] = { 
     'name'  :  [ 
            'latino_HWplusJ_HToTauTau_M125.root',
            'latino_HWminusJ_HToTauTau_M125.root',
     ],  
     'weight'  :   'XSWeight*SFweight2l*bPogSF_CMVAL*LepSF2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*LepCut2l__ele_mva_90p_Iso2016__mu_cut_Tight80x*GenLepMatch2l*METFilter_MC' ,
}  
   
 