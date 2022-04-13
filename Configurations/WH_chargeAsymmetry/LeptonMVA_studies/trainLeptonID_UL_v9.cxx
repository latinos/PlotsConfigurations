/* 

-----------------
-- 2016_preVFP --
-----------------

Dataset name: /TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODAPVv9-106X_mcRun2_asymptotic_preVFP_v11-v1/NANOAODSIM
Dataset info in: dasgoclient -query="file dataset=/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODAPVv9-106X_mcRun2_asymptotic_preVFP_v11-v1/NANOAODSIM" -json > 2016_preVFP.json

ttH-like:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_el_TTH-like_2016_preVFP", "2016_preVFP")'
to eos:  root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_el_TTH-like_2016_preVFP", "2016_preVFP")'

ttW-like:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_el_default_2016_preVFP", "2016_preVFP")'
to eos:  root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_el_default_2016_preVFP", "2016_preVFP")'

ttH-like muons:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_mu_TTH-like_2016_preVFP", "2016_preVFP", "/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/")'
to eos:  root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_mu_TTH-like_2016_preVFP", "2016_preVFP", "/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/")' 

----------
-- 2016 --
----------

Dataset name: /TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODv9-106X_mcRun2_asymptotic_v17-v1/NANOAODSIM
Dataset info in: dasgoclient -query="file dataset=/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODv9-106X_mcRun2_asymptotic_v17-v1/NANOAODSIM" -json > 2016.json

ttH-like:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_el_TTH-like_2016", "2016")'
to eos: root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_el_TTH-like_2016", "2016")'

ttH-like:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_el_default_2016", "2016")'
to eos: root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_el_default_2016", "2016")'

ttH-like muons:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_mu_TTH-like_2016", "2016", "/ceph/ntrevisa/Samples_LeptonMVATraining/2016/")'
to eos:  root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_mu_TTH-like_2016", "2016", "/ceph/ntrevisa/Samples_LeptonMVATraining/2016/")' 

----------
-- 2017 --
----------

Dataset name: /TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL17NanoAODv9-106X_mc2017_realistic_v9-v1/NANOAODSIM
Dataset info in: dasgoclient -query="file dataset=/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL17NanoAODv9-106X_mc2017_realistic_v9-v1/NANOAODSIM" -json > 2017.json
files size with: jq '.[].file[].nevents' 2017.json > 2017.sum; awk '{total += $0; $0 = total}1' 2017.sum > 2017.cumsum
with first 119 files, 140M events available (140644000)


ttH-like:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_el_TTH-like_2017", "2017")'
to eos: root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_el_TTH-like_2017", "2017")'

ttW-like:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_el_default_2017", "2017")'
to eos: root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_el_default_2017", "2017")'

ttH-like muons:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_mu_TTH-like_2017", "2017", "/ceph/ntrevisa/Samples_LeptonMVATraining/2017/")'
to eos:  root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_mu_TTH-like_2017", "2017", "/ceph/ntrevisa/Samples_LeptonMVATraining/2017/")' 

----------
-- 2018 --
----------

Dataset name: /TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM
Dataset info in: dasgoclient -query="file dataset=/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM" -json > 2018.json
files size with: jq '.[].file[].nevents' 2018.json > 2018.sum; awk '{total += $0; $0 = total}1' 2018.sum > 2018.cumsum
with first 112 files, 140M events available (141308000)

ttH-like:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_el_TTH-like_2018", "2018")'
to eos: root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_el_TTH-like_2018", "2018")'

ttW-like:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_el_default_2018", "2018")'
to eos: root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_el_default_2018", "2018")'

ttH-like muons:
root -l -b -q 'trainLeptonID_UL_v9.cxx("training_nanoAOD_v9", "UL20_mu_TTH-like_2018", "2018", "/ceph/ntrevisa/Samples_LeptonMVATraining/2018/")'
to eos:  root -l -b -q 'trainLeptonID_UL_v9.cxx("/eos/user/n/ntrevisa/LeptonMVA/training_nanoAOD_v9", "UL20_mu_TTH-like_2018", "2018", "/ceph/ntrevisa/Samples_LeptonMVATraining/2018/")' 

*/

#include <assert.h>

using namespace std;

void trainLeptonID_UL_v9(TString folder,
			 TString name, 
			 // TString sig1file, 
			 // TString sig2file, 
			 // TString bkg1file, 
			 // TString bkg2file, 
			 TString year,
			 TString input_folder,
			 bool    doMultiClass    = false, 
			 TString file_for_sigW_1 = "", 
			 TString file_for_sigW_2 = "", 
			 TString file_for_bkgW_1 = "", 
			 TString file_for_bkgW_2 = "", 
			 double  int1s = 0, 
			 double  int2s = 0, 
			 double  int1b = 0,
			 double  int2b = 0) {
  
  std::vector<TString> files_names_strings;
  
  if (year == "2016_preVFP"){
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/441EFC2B-C4AC-364B-928E-7178DB30D1FF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/F985999A-DA55-EF49-A024-AF759B96A054.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/938B566B-9040-4C46-90DE-5F1A5185204C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/7B30BF4D-C2FA-654F-AAB7-0AE0CD48A5F3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/244D3551-7F73-EC4A-9D3D-BEDB39497D15.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/672144A1-4873-2844-9F8F-E09C10895464.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/7F04B24C-F96D-354F-88F6-6F98D684AE2D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/A4068AAA-42CA-1947-8667-1422E9A951FC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/30378CFD-005A-614E-80BD-AF79385B98A0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/C941537B-91BD-EF4A-B3D9-C2E798634049.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/CB7B86EB-9EA4-A54E-ACBA-4A784977EA53.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/FDAAFC1C-D7E8-314E-8F34-52C23AAAA031.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2EE98862-35D6-8246-A642-10E846FAFD09.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/662209A6-311B-1B4D-9CBA-C8C795BB54CE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/D148688E-81B2-C54E-9253-EFF7A34DAB9D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2805EF78-7EB0-8247-8882-A0D36C1919A6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/DB232626-FA6E-3C4B-ACD0-5BC385F9F0E8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/998BCEED-E2C8-9649-B29B-F44043EF0491.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/1D5E25A7-63C9-EE49-AF4D-AFB73BA399FD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/E4053BF0-CA77-A749-982D-DACB935A34D5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/A70168E2-254D-254A-8AC1-B21286440455.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/5C45294D-6FF6-E349-B6D7-F66AFF311837.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/9CE50358-80B7-924B-B011-2CCBF3BFDF1A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/0F8DF849-F999-BA4F-82D4-0C4FE856C5E8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/4C09FD6C-AC76-2D48-B9AD-9A16F21DDAEC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/0B288835-4066-C54F-A313-60C8937EA893.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/4A7D75EC-9CFB-DE4D-A52D-ACA888FD662F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/772A947B-F45D-6648-AB5B-89008DB78027.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/561080D4-37D6-654C-9BC3-FB9A87B3A806.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2D6B1225-F430-6540-8ED2-58EADE9B73E4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/8180C0A2-B207-6E4C-97DB-AC7EE1A80569.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/D34B68C7-E4B5-4343-AFCF-6F8D98F78A4A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/7342A3C0-0F38-8F48-B1C3-BFEE93E24579.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/BEE8596B-8037-BE45-BD02-EDBFFBFE46A4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2F19EA2B-587C-0746-8D17-0669FD2AC869.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/8C4598FB-339A-BA49-91A4-B6DC5EE81808.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/385B6EAC-F80B-9A43-BDDA-967CB306F2E1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/46143661-D277-3445-96CC-C50DFA94091B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/CAC79A16-FE6C-9F43-AE81-FCBAA6572A27.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2160803A-8150-BE44-AEDB-5C7F8E3B1159.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/6959D5D1-10FD-0B4A-BE3C-44B481140E55.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/1D6FE928-F5D2-7643-B307-D96CBC2993D7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/7F3BEF68-0C05-BA40-8987-A1978215BB66.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/0334195C-E60B-A04E-875A-5D298731BBC5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/6921DE30-3DBE-9743-B32D-6EEF6A8CBD9A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/BF0F54FD-83F8-9C4E-8CCF-7073362383C2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/85C0766F-F093-E648-B90A-EE3769AA8206.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/0D9A805F-4E83-1446-844A-F416C5334FE9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/3C821213-9B7F-5545-9EE1-3113B7D2C309.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/D261A159-C785-DF48-8EB1-FBF47CF39733.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/4E1E74E9-E098-6040-8444-E83614C3FE06.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/61528205-21B2-6D41-84BD-C85E35917BEC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2FC6922B-9C07-584F-8D91-6A268A258864.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/CE644D36-3166-FB48-AC82-4C945D4F72E4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/B4C1F348-6321-0C41-90D4-7D40D66B73D0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/0F9D47EA-6A5A-244B-91A0-853A9E65ED92.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/9B2BEE68-C966-4B45-8432-BDE40189972E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/0EA88403-C2F1-F14F-BCA0-260A4F9C9C3E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/706D9CB6-5A74-674D-9A66-AAF9AFF22E4F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/8DE075FC-18D7-4A40-B468-B916BE56F4FE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/7B3A9969-B8E9-DD4A-BEAB-D9A21250B074.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/EE0EA73C-9164-C347-B46A-A75269062A08.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/0929A51D-BF1D-6445-902B-0F98583D6CDB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/E7E2C17C-3ACC-5B4E-AA0F-CD056765B894.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/BEBF4248-EC6A-E342-8DE4-36CD93626C7A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/D8B83E34-1C14-E248-9C45-AD5C6EB35E7A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/925BBAD3-35E8-F14E-B6D2-C94110DE4D2D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/06AF0A83-DCFB-0B49-8C25-05CB4AF2C935.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/E97A8336-8273-914D-8A48-9582C61F6149.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/D1B0C7EB-DF72-3744-A8BE-81EF59063FB9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/962917FB-C08B-8C4B-A113-C968082E423E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/63E0475C-7B88-2043-959B-6838330A01EF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2F97E933-FCB1-F045-B2F2-EB733905C166.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2F489792-CA0C-0F4F-87D6-CEC3818C0A74.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/EF202F17-84EF-034B-B4CD-83FBC7D47B8A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/87995745-EF0B-5D42-A096-40D1FB54F068.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/7BF18730-6B80-5041-883A-B34F507FCA8E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/A5216A19-1814-8749-83DF-C9B71C035483.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/70833784-9467-AD47-89AE-202A79276FCF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/A561339F-4231-1544-9FC9-63489CE4D29C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/7A8DAFF9-E66E-0245-B7AF-BC2DC51D7908.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/B633AF54-F404-804B-ACA3-910495006F83.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/53921B13-2948-B041-88D7-FEAA27E19715.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/1AABCF87-A92B-8040-B424-926D88029E39.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/B92C423D-1E83-1F45-A76B-5D61216D2261.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2F49DA5D-7F16-7B40-A1ED-2F9A9807B0C9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/28647462-7E33-F64B-B82F-732BBC276B50.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/59E9EC50-5E95-2941-8DA3-FDC85B1B0613.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/C735C413-DAE0-1B43-8CC4-D43FBE509FEB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/ECCD5A9B-2E0D-C644-B831-E5AF47A6A6D9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/D6F25F13-E7F2-274A-987B-29AAC2BB2C90.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/F3E59201-59A5-8A4F-A1D8-E66F47206AEF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/6BA9E004-12AA-E343-A73F-404CADC15868.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2315AC34-A7E3-CA4C-8E64-BBFD76DBCB05.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/9BAAE053-152E-C648-BE7C-CE321676595A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/C2B2916F-2751-9D4B-A5F9-7056E41F3AAF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/217870D4-5D14-2B42-9E46-92EA52BB0436.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/B05DBBF5-E84E-B14F-A3CE-863106A07C73.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/BD7597F8-98A7-5A41-9138-9736B025709A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/5D45E263-7D61-DD45-8F88-382E855654BE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/42E5EE05-6A83-6E40-B8D5-2219873FBEB8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/67686C23-9C7C-0544-8DA7-50643BC5DC01.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/47C0D3E3-AB31-FA4F-84D5-C1E60A21C89D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/CC3B8FC2-643B-ED48-ACF2-AB4052C59DC6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/BE630CF5-DBC5-3045-8FD7-09DB924A62C3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/F311D370-D1CF-2749-8A9B-44DE5580995A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/D64CC547-F1FF-B840-85B0-B196F43335F3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/DE7172D3-1DB6-D646-A039-CAD3A070BCCB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2AC61769-B900-C34E-A47E-8DCD41B87EA7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/5C4541DA-8FC5-D842-808B-5987AF7211DD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/959581A4-3D56-E945-A150-B65EA3B035AC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/9950F8EC-D030-854C-8A63-98D1BFB547E2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/BC6E0FA9-C5AA-BB46-A25D-DA1131EF4A82.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/2861FED6-4244-B74A-BB58-BC98A1CAC320.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/25819290-1B37-6543-AC59-13D845FCE8DA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/8B311D33-2D18-C34C-A0B5-ED5BE3A093F4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016_preVFP/958DA73D-E7EB-F04B-8735-CB6F654C573D.root");
  } 
  //
  else if (year == "2016"){
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/08FCB2ED-176B-064B-85AB-37B898773B98.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/7D120E49-E712-B74B-9E1C-67F2D0057995.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/2D439FBF-CF8D-654F-93B1-2F7D0A74B0CB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/0BD60695-8388-5141-B157-32AE1A3B4885.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/9D743040-FBD3-B349-AC43-F7F6C2A2E76F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/52BE289E-E098-294C-BBF4-976248552297.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/0F91D1FB-8209-154F-BBD4-DD8A3BF8E20B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/B394935D-7CE4-CC48-9D5F-21691247CB69.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/BCAD1751-CBCC-BE4F-80CB-8EE1A4E9E64B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/38728C1E-8B09-954D-8F53-FD7D939FFFBE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/C008FFA3-9764-BB4A-BD4B-4D74BF8C8DFB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/608E3128-EBD8-CD4C-A48C-2C35C4499480.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/2E85B521-A37E-0044-8662-BFB0C1291422.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/18C263F0-0CA5-EF45-A6D4-E4FE3578ADE4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/7681408F-8BD8-864E-B938-AFEF0F1E3CB0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/515BA035-03D5-1D4E-A190-DA20F24527B3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/799CCCA2-BF94-2C48-9B4C-BE0B680504D2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/D2164C22-DAC7-E74B-A884-1C316271AA1A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/38732C5E-2EDA-B04E-82EF-D2D59660EC70.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/DA782B23-D9A2-1549-96B3-42ED362DD0B8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/581CBD80-7D60-5E42-9952-B1234440AE4F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/89A9F24F-82B2-CF4B-8CEB-F0DC24DF4D30.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/45170D2A-584E-224D-938F-1AF554EF9F9D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/CD46D073-75B2-E249-8B48-A6D6AF9AC6BB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/DD8F059C-D5F2-8543-B8C7-E6902BF8D475.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/2BBB8900-6637-514A-A80F-17542BBECC1A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/89A4E514-322F-F74B-AC7C-7B8E205AA189.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/845DDDCD-18FB-414E-81E5-629CE68B7584.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/B1C6AB78-7B2F-9242-9E78-8D4612704EBD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/0C0F16E0-3063-F94A-8089-6964A9A0E22E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/5DD53BE3-F9BD-7140-A248-708BBAE6250B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/37C523BE-D655-694D-B153-5A751632FF7D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/FF354815-9EFF-DD4B-8FE4-6E8184346F69.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/DA2C2988-D459-6F46-B39E-778EC1D90276.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/269F3713-D203-8843-8A31-2F3C0287ED1E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/D5244B90-484A-0C4B-A2E1-FC61B43BA074.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/98FF0313-4D72-E84D-9539-AF9098719F64.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/0605BFCA-C65A-CA4C-8A6A-9148DC1B7B9A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/F9842AF1-DF1A-164B-868B-4B2F44E2D337.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/FA590B06-29A5-2E44-B8C0-3DDF2E4EDE56.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/A00B0BA1-A526-3E40-8D4E-08B993B96C0D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/B28F335F-DB03-D740-9333-E4C70FFC564D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/CBA39E34-6BAD-B740-AB89-ECD745490CE5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/EE71C83D-685F-6E4A-99C0-9ED7578417DF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/7449AE39-6D6D-4341-B389-9DA5EB0A7D57.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/32FEAFAD-1126-CC41-9687-B2B563700EA3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/389927B8-6C48-6D40-891C-2D245C0AB873.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/EECE0C71-B5AF-9346-8C67-8D9C1E9D4EDA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/7A0A17BD-3A01-6D41-B1E1-730116978C41.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/D1257262-C0FA-D345-8A82-8E4EB1551830.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/937C685E-5DEB-BC41-A9DC-ED1DA345C216.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/7028AB38-566C-584B-91CD-AD65C1CAB6AF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/8D65A33A-CF86-894B-ABC7-6905A074145C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/18F4714B-3B7D-104F-AF23-5B323B762540.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/498606AE-2EFE-3244-B6C6-9D7130102D90.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/3432F14A-FEF0-9B46-B0CC-9452668E3F04.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/28ED52B8-0FE2-F44D-8975-C830DDD87656.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/0AFFFA0B-438F-0B4E-A74E-344E41B69B2D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/4C7FB836-6EFD-734C-BE1B-98D559F9242E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/26000357-1AAE-9B42-82E6-C0E8C73A6383.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/BA27F623-45F5-E44B-ADC0-F1D3BBB3E99C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/0B4EBF8D-E812-A648-B3D5-0656D7A916A2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/5E264054-F583-3A44-A0E4-64FF48207D37.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/A8175577-8AA3-D142-828B-C0D183AC1D6A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/7DB85334-39F9-A246-87BE-29B6E07E74A4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/531090D8-978E-4A42-8093-8243B45FCB13.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/3A7F86F2-79CF-7144-97DC-AA39A86FF7A9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/76B84D2A-2AE4-AE4B-BA52-6144DD843FAE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/5EDEF575-F57C-8944-B483-667A8A72ED95.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/6EE99EF2-36D4-0242-90DE-027541664D97.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/E67D5EE9-AEFB-0446-9BB4-757330B8A26B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/AC9B54BF-8EC3-A04F-B747-32261F61760B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/6E4E2647-6A09-4D45-8F1F-234D84FE70D1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/8D5CA583-60F1-9E47-93AC-7EB9E1360AE7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/667E7CB1-F38C-D74B-A94E-8247C8F7CEF6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/082C7405-F649-D24A-859A-490226F647D6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/6B0E9962-0874-854E-BCC4-99F3ECB4AEF1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/599E5138-5CF6-9641-98C1-DDBB36520CBA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/F1ECF9B1-276C-EC4E-916A-E5A4E090418E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/DCFF4026-63BC-DC42-BA91-7C177EA82D6B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/FB5A9307-B677-B947-8970-21DA6BD7C9C2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/D6AF8817-1087-DB4A-955A-0C14848E8F54.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/77B512A9-44FC-4843-941D-AC3CD4245B1A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/BAED748E-4A60-ED47-A943-8BD1C3ED1C30.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/FFA621C8-C16B-5740-AB60-84246D9B2FD1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/4F3C361D-258C-1D41-AEEA-48CB87D3839A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/FA5B9B55-06B4-A640-AF3C-7B44552E2393.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/733A7BD3-3F27-F345-A8F4-BE11DC1AF91A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/CD5106BD-A080-F243-9C9E-B6823002BA13.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/5406CD79-47C3-0345-9FEB-BA4FF4B2BC71.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/B68E5826-9098-DA43-9AC1-EDAD206E1F49.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/C749BBA3-17D9-824F-BE96-E2BD29DD5435.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/6E5733F4-BF92-7349-A50A-2C0A6BA4E4CD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/1D63950A-E444-E049-BFF0-D33296A8A6CA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/F6C0248E-6AC1-CE45-BEFA-56A735AA214A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/301EA765-5A14-1B43-ADED-D3BE6147134B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/B5A479F2-4790-6D47-8D86-8E0072E69709.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/788BA782-7116-5643-A6FC-1EA2493298F7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/6F78A4CF-97BC-7741-B6E4-DE51CF82EE6E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/7E0D502E-992A-D94B-B22B-9A9E4DAA2135.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/9EC205DD-F082-2E44-9EB5-03F29950A516.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/0466CE11-3870-184D-84B7-25AF38B82FDA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/F43B0F3D-15FC-AB44-87AD-FD46AA0895B9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/7C94DA4D-C0B5-8747-B6F8-E4903C610777.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/26950AAC-CD42-1C4B-8A09-E79E729FDD68.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/10A4B734-3471-2D45-BAF0-FA3ECA06116F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/82919C1F-33F4-C64F-95F5-300D200B08FE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/AAF0A922-439A-C044-A034-41EA8ED6726B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/77F32248-92AB-614B-B9CE-4448CDBC2390.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/6D1FE144-4CC1-6E4D-9A91-A6C36680D9EB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/E1A64115-6416-AE48-9607-8A5E1A7ECD65.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/F8F5865F-5E5E-5C49-9044-99D712F0F18B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/CAEF3144-345D-DC41-B0B8-24A9472402E0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/84F1F4C7-73E2-924D-BBD8-CC947486E5F6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/70F91CF1-891B-AC4D-9806-82AB5B12229E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/257843DE-C45F-184D-9D55-DE34507E676A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/C1323D33-C88D-3E4A-81DA-99817B2E4C9D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/04089478-525E-924A-90F0-E5DD4999CAFA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/E202BF8A-CD57-2A4F-B7F3-1C27534849AC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/0025EA45-516D-FA44-90D5-57C724BE1288.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/054C5ED8-9E58-5049-9967-77452D48F061.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/F5E9EC3E-3496-A842-A407-544FBAB06F6A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/81CF6DA7-77E1-BF4B-8A64-D9C5E41FC562.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/6ACD4464-D195-0443-A127-E5E4A4119C64.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/CCEF8E97-3971-EF44-8C30-290C3FA39C55.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/B4252915-446F-294C-A936-9BAAC8E8088B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/709A653D-2F2A-FA4F-A86D-69DD26091974.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/ED783F3F-0E31-3F4F-96A4-2F9AE2772129.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/EAC90209-246F-B94D-8AC8-42C27489B6AC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/EAF8DAA3-5F9C-C64D-B940-A4D96541702D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/24E12E9B-16FC-4B49-8FC5-A1DA55F66812.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/AB1B1697-748A-2749-B489-13419B0467D4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/E79D4874-C489-0242-8347-0A3FF8E74A69.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/EF3B5E82-FA5F-6B45-A5F1-8D859F86413F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/170D90C6-7617-EB45-876D-1BC22C403711.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/F03130A4-DE71-1043-90F6-FFB6930185B6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/5644A12B-798F-F445-98E1-CEC588E7D7B1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2016/C956C5DE-CC3B-F244-815E-83A6A4CED3D2.root");
  } 
  //
  else if (year == "2017"){
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/549451D9-10EC-704C-8568-23FF9D40C9F4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/AC357503-8E32-0445-89E6-D3BD6BB1B5DC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A86FD660-3852-2049-94F6-71F92FE6BC99.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4F25F27B-458A-324B-8AD1-992B29A1FD5E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/CDE6AA30-7DA9-2C45-9A4C-8DD1CCC14DC6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5ED8826F-6130-0E41-87F5-997586C1F84F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A86082D9-E522-9944-ACFD-5DE53ACD2EA7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/02515D28-F990-454A-B1F5-280694F8B702.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/32732C98-B8F0-5947-A5C1-4AFAE9A709D0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B26DF967-A99A-994F-B191-68B71EC81F22.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8A0E0875-31CC-0E46-87A4-59FC66D9EA0B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/714A431E-C23C-044B-81B2-3DDE40A7DFFF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9E423420-12B8-D848-AACE-2F6AFAEA17DA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/443E6C7A-50BB-3F40-AAE7-850DD6F694F8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1A9D96E5-083E-D248-BFE0-21F596DC8D8A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/42C9AAC8-5117-E142-9CC0-47D5B845B7EE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/26002B07-3F48-2A48-AC6A-A5D51CF907B8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/0B53E1A9-B028-2344-827A-871F71A258E0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BFB208D8-EB28-384F-8CCB-352D4F42459F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/207658F3-F083-6D4B-A40D-3ACF6A3D92F0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/62E241D8-17F1-DA47-8268-21F927ADAFEA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/E1290A71-4B70-A44B-8F51-8BFBD883230E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/AA818FBF-A339-E24C-B26A-E8FED00AD96D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/7CE259CB-DA91-6C41-9F1E-388F645317FC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6BBCD998-1B65-F545-8A2C-0DCDC41EFBD6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/74B4F05D-D081-5947-9E5D-D5623C791BC4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5AFE2D67-3D41-1940-A7AD-C652E02F5732.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9E859620-42D8-6245-A41E-21A913B44C1B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/631A2A20-7A4D-4843-951B-CCAB3A2F0DF1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D3298592-3304-8242-A281-A9A9BCBBD680.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/87CB2347-B72E-DC42-9CC6-7B239C39813C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/50570399-500C-9D45-880A-F64CD511EB0F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/03DA582E-4125-B248-820A-278C0165604F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/06C2E9DF-E0E0-9342-9545-966D4D527E72.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/18DC0500-0205-0249-A961-B03061573A85.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BBC7E603-6B04-DD4F-B5D5-9286BB27E7B7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1E5F8C72-9C93-D241-9050-72B6E8A33A17.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/18E12853-9620-0143-94D1-4AE46E905F7A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/3C91B317-A307-A545-849A-4EDA9C4C7B84.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/698FAD8C-1271-5747-A7F8-BFC5AA6975A6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/292C155B-D369-CC46-ABD9-D1A8E7A4461D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8C0B89D1-7757-6D4E-9599-8979B4DD48D9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/273C7418-E3F6-2D4C-9762-BA16940E1427.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C5D6F17C-652E-C840-8623-3C55ECC8D1C4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/DB76A0D2-1168-DF45-98AC-0793B1D7B63D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/584F342A-4813-6C4E-804E-19170366EA9E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D893F674-1A35-5A42-9D1D-9C8F620E5566.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/E9BA4681-2A5B-9B4C-83F0-8FA7B7811F22.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B28F826B-F564-754F-9AE2-7C02E546F683.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/90A17CFA-5DAB-1241-A5DB-40A0322787C5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4D43C628-545E-E44A-8EC6-F5D262E97DE9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C552B9EF-E719-0F40-93E5-2A7FDFBE2BEC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6B103F12-C756-FC4D-96C2-8E68786B4B30.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F71C81EE-511E-AF46-A403-4016B3B7C131.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D68CB923-0ADD-2E43-907F-B64BE9494143.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/711E56AE-E30C-904C-A2B5-08905767094D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/3967FB6F-04E3-7E40-B0EE-6AEA2BCCB387.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F93794B4-8EA6-6C46-9E3A-969053068C34.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/67040F26-C878-4242-89DC-23CB89A994E0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/DD410EFC-F35F-1642-A80E-84B2A45B439C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6F8E4AF1-25B8-5D47-883A-73016028EE6C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/DBC2CB25-D377-7946-A448-A61A732A9482.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F498211F-893C-224F-95F5-CEA9BC0CA337.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/2378A5DC-E875-774E-BDE4-A99EE8E6622A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/2A29364A-AF38-E746-ADA9-B67686A742A2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/AB3382C2-FAC9-7F42-9DA6-7B977A58DC12.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/7ED61085-7E87-344D-B97D-F3F530CB1C7A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/806E7A18-48CC-3647-BB55-809A3B8A18F3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/DB73A2DE-EF5C-AC4A-983C-BA783D370F63.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/268DE3F6-C68E-AF4C-AEA2-76219420AB58.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4B2147BE-AB6F-9D42-AA3F-2C335D5E6BCE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/151C6C08-782D-CB4A-9D49-E63A05F46C96.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1725BEC7-877C-D94F-BA79-FDF8933AEB81.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D3075B34-505E-6146-A069-3DE2D2E7EFD5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/039AAFCA-E063-AD44-A1E9-E7FCE25486D5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/644D1221-B9CF-EF4A-BA39-3D2F987FBC2F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/7B365539-2D78-8041-875E-A9B46885CBF7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A2451597-6BE0-E849-982E-C9CB21E9496D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/27120003-F9BE-3049-9D3B-C3649E49D106.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/36A780A1-322F-4146-9937-8BE66A3BDE27.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5B77BF5F-47D6-8441-A54F-AE88F2B04F6E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5C01AB46-B45C-4045-AE52-99E2741A5252.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/E78F1298-962E-324D-8BBC-99FE18303873.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8F27CB0B-3C4A-304D-B7E6-45513AF12554.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4DE5BEFA-27EB-714F-890C-2297B878AD58.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6A8EEE9A-E763-C84B-8BF7-558AC04E9F53.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/CDC894C6-6BE6-BF4B-B2C5-C9C82D1F6E4A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/AB7EE379-DE7E-0F45-8AD1-9AAAF1C94250.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/34D2D957-B346-FE42-ADC8-4DB8687ECF9D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/7EB2D0FE-DA19-0A4A-B18D-0FAD74AAAC65.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A8643B99-0E77-744F-8696-AC290F7ADD0A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6A3F4304-F743-4B49-9CEE-B6FECB6171A2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F9CBE658-D7D8-8F43-B28A-F150E513EA52.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B0475752-B699-F148-89BB-0C69E524BEE4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9F201ACE-8034-654B-9F0F-BEAD3B0EF882.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9D63303C-BF47-904A-BA3A-6C2B205EF903.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B42A12E7-9AA7-FF45-BE43-C538D2836A3A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/ECB3F231-DFFD-604C-A37C-D473988F80F4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9A0F376B-696B-5249-97FA-34C344317E55.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D7ED6543-2172-CF4E-8BF0-CE12402CA674.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/30FBE4ED-01CD-4540-8540-CA2CA3ABAE27.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C555C62F-7080-5F47-871B-1F24824DBB27.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D00AA33F-1465-0540-AAF9-BC414233E8DE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B864EF70-8D0A-8642-BAC0-BDDED18AB691.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/13B3DD5D-B196-6B44-AA93-3C71708F1EA5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/13DF6987-8E38-1C48-BBC3-FC149C56CC9E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/72728E0C-B4A0-7B44-8613-E5A711B8AE38.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6421188D-8802-374D-9F10-4EBC3C612780.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BB7404C5-5C27-1944-AAAC-C72D657ADA89.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/E47D38AB-9CE5-664F-AE5A-F4AF033A360B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/ACE05B03-0A18-8645-BEE7-08E051EDFB4E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/13FFBDBA-ED51-7C4F-8949-9932B4E0A942.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/900F5F8B-212B-7A4D-9129-38734CE961CD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9EE47518-5438-D64A-8A81-FE1DFC29EAD1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/7DF2F235-B63D-6749-812A-D7A066516395.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BAE9C69A-703F-0848-84D5-9E7ED5CBE4E1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/CDFFC04E-429D-2947-A4A6-10C6EE946F9B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/0497D61E-61C6-EB4E-A70B-EC157DF1D156.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/311EAFF4-E447-494F-84D6-62BA206CA8D9.root");
    // with these files, we have 140M events
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/564154B8-049B-F849-8F91-2F7BCA1EAEAF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/119F6DE1-9D27-FC48-9EE5-6AA027468ED0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B43AC612-4AE4-0942-AB95-CFBFEB4AF628.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/3C1421E0-621A-3143-A220-51FA0F9E9B1F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/74445623-68F7-6D48-A7D5-C35CC95C4154.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4A9B408A-09EE-2A42-8F99-B9FA4084BB4B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/919561AF-DCF0-2E4F-B50B-006CED2B0FEB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BFD25B22-4164-4D4F-99CE-DD7E75E6874E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B26622E3-5399-8A4C-B419-AD7CFDD72EA4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1B641002-89CA-2140-8606-99AA57E195E8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/3B6A28C2-FA12-524A-A1A8-E7D7FE84678F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/CC7BA9EE-64B5-2846-9DE2-7421642989A3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A73A0BE3-4973-E94C-9E08-2B16A6B210E7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/329A481A-643F-B243-9766-B27585C1949E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D14E7A39-14B7-434D-B7B1-550DB6DDC742.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/3AEB208C-72C2-2B45-91DB-B6DE5FBEB2BC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/CB2858CF-CC23-1140-A88D-E7E679E43A93.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/3BD494A3-345E-434B-8DED-3175653B71E2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1280EE8B-43AC-4F40-A27B-C391D8E41588.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9445F7A8-11A3-5049-8E68-5CB63816CF9A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A5C00062-9AEC-4F4A-9254-E4A9119F1C4F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/0C2C0051-D461-EE4B-AEA4-BFB2CA21E497.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8C520E74-96B3-6845-BB59-11583AEA1697.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/00C0605F-9AB6-E843-A77C-D74D3643DB9B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9620E8EA-D70D-BC49-9D65-AF7A040A6017.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8EEAC4FE-84B9-5546-84E9-361458C0D7FC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/27D8B06F-97FC-344F-9B93-7643DE2A7FA8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/77C10411-8AE8-544D-A364-FDEB62A4378E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F96F2414-8DA8-0740-9542-84656675F9CF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/31C76ADB-C7BF-C645-B552-D319A2DFDF2D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9624F081-EC55-FF4E-BCE1-AB94344AD97C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BDE2C597-80A1-904D-9DB6-41A4BA8A6758.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A6FB2245-FC01-1B4F-AD39-6F20149DBF2C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F5465F79-FCEC-FE41-B8A1-D57981843FB4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/599CB1FE-87CC-424F-9FE5-ACDEE7F038FA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/977D8F0A-4699-314F-95FD-87EB5DAE0F6D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F584B96A-3145-3643-84AB-BDBAC9760C6F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4C56BA82-7FE4-9D40-A1FC-04080A2E3386.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F289FED8-B4A3-CE48-B076-44184F584E15.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/AC72CB41-8C71-3741-9084-ADDA31F63DAC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C2A49BAC-F873-0245-94AA-DF4A04B47944.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BE1F91B1-EB49-4949-A728-F165D1FFEEA6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D720CA9E-A884-7149-B764-AC17799B2EE8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/DF9336B7-C9C2-4642-B7C0-8FC49F2B649D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/48701415-7FA2-8446-A0C5-5CD18A54F449.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B6E6DADE-8977-1148-A083-B51ECFD5AC6A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C75EA326-FE74-CA42-95A5-5B175D83727A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8E444872-5BDC-AA45-9698-93C8837136B1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BFDD9898-F533-6C43-B134-48A31BBEF6C9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4E70A957-9E56-FA4B-9F09-597C9401BD55.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1B4D6EFC-BBB9-054F-91BB-F354134A1665.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C47B8B2F-9016-DC40-814E-9F4FE12032F2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/DAB45796-0776-C64B-BFCB-4AD78181A708.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/614F47F9-7C10-A14C-926D-1DFA35024C36.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/3BB7EDDF-9B47-1D4B-B9BC-69F3C6E9740F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/FD8DDDD5-B044-F54C-AC39-4148E3751095.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A99AB52E-10F1-714B-845F-2B234BDCC6A1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1E686E68-51A1-0548-AD65-E2968B09C933.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4CA07277-0D23-DF46-8A1F-D994EE9CB15B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4FA8A1BC-642D-6244-B475-F11554A9720F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/7DC37355-BEFB-1E4C-97E7-2917E67581F9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/705F39C8-A0F2-5341-BA4A-6C0E654F0877.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/87B1A704-8F56-6E41-BC6C-01DF543E5C6B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/54F9275A-FC5A-7844-994C-89032A041F09.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/44ED3D53-222D-9D4A-A41D-16028FD0D6DE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/859C8979-12C2-F74D-9756-EE727EF52C6B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F1D5D907-B441-2640-B579-66DE7CD8E30F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/7812AD1E-A025-2F4F-AA8F-6D60B27AF6EC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/80B6AE2E-CA08-DC45-A1B0-CD0929AC7DCD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9C32793A-1BA2-9143-B76A-8987A1221954.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/44556066-DE0C-3F4D-8D26-AB7C36DB3893.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6434B578-880B-FA46-8804-301B11EF764F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D12A7CE6-6285-EE40-AE6E-F6B7D42249DE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D61D4A26-E5E2-0543-B890-EE22EB9D0B7A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/E0558D52-174A-6C47-A484-B838E4E82475.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B1BD95FE-0AAF-3540-9B97-32D704A92CA3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A88A4A79-3E93-CB42-9B82-45ED64D2A990.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C3F3C68A-F81B-5547-9F01-EB6931F729B6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/93A28447-C759-3444-B28F-FB28BF923E1E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/AE6586FA-C0CB-354E-BFEE-1896014215D8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/758C66E1-283D-1E45-85E6-56CC2C566452.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/35BC871D-BE8F-3D48-BDE3-C5AF52BFBFA5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8C9E2B64-AC66-B44B-84A9-68927B67861E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/18C8C416-0FAE-B348-9E01-C1F904C2849D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/E824FCAE-389C-1B4C-8FF5-847E72258197.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D465F5BC-00BF-1F4D-AE2A-F2338B3EA1D3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F5798FE1-AF60-9E40-8F8A-3FD727FCF753.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/E5F5F64B-BF25-2D4D-83B4-CDF4C1702D2F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F24171B1-91F5-D24C-B23C-95C390B0B96E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8C7229FF-5545-784A-AD25-4FC6E5577690.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/792DC969-D8E1-7A4F-B834-C4A2FFF92DE5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5FB171D4-4C1D-D948-A131-59155ED57568.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F9F7A021-B59F-8248-B551-9B45DB8623FD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B10CE1A0-996D-9D43-984F-2A61C35FD86F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5A58813B-0CB5-B941-ACAA-636A967A4802.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/225654C5-5417-3948-A481-9E9E316D64F9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B8B78730-B1BB-004E-B32E-8426BE143793.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/B675B1DA-D1C9-FA44-BDFD-886996129AFD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/DEBC7A9C-271F-354C-B0F3-D33788F85682.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C6E7540E-1789-8143-9C94-C19162ECACC8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/0ECE9A92-C745-894C-BA31-326A01B9574D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/701CBAD6-D893-0B45-A9CC-2227223ECF3E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/2F1F3BB7-FCB5-844C-92B4-E12A24177958.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/FFA76224-ADD8-944F-9E7D-F79DF9BE8663.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1FC3133E-D4D4-4F45-BE28-E2341817DCB1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/CD880082-5320-9F49-BD88-E1B8F7C5C7B1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4AE3C67C-9C69-DD49-A7A4-3958C9A613BF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5AE34614-E0C8-A44D-9B23-5CC367BFF026.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/E9845C81-C20B-E640-8A70-1FE41F230069.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D878B1BD-D78C-944E-A666-682DCF286A82.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/493B9433-609E-154E-BE1B-852BDCACAF07.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/3EABEDC8-B55E-904D-AE35-773466B4297E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/62C67E71-5706-AD4E-9DE5-13C987CCA0A9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/CE8E3585-655D-FD47-A0D6-5C7C8DAAA540.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D7422DFE-7177-6D4A-B1B1-013AFB9B8B2C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/595B5C13-14CC-6546-ABC6-404A6CC8C325.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C07A5E25-D1B9-5B4A-A410-1596FE30B9D6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/C764E809-76A0-C340-BFB5-54E0B4CECF43.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/7AEE45F4-DE49-954B-BAAC-2D41256E9340.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/2305FF3D-1DBC-5640-8DC1-60100C449E46.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5F580B00-FF5E-F344-A4AF-EEB31866ECC5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/EA698AC2-64D3-6A4C-B7FF-F3445629314C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/0EBFC1BC-0176-224E-9840-B4E027CBD5D3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/094327D3-C72B-5948-9F55-F26F9C35FA18.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/682A02A8-1565-1343-8B56-F3E344467B72.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/7AE8D654-C234-CC4E-AC41-56030A338BD0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6A6B0306-5728-7047-A504-2B00295DAFF1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/46EEBD7F-FF01-2C43-99B1-53CE831E8AE4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F81F585B-5BD1-3E49-8C2F-9DEF849D091D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5829996D-85C8-334B-8738-E2A56317CBB3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/36D05E65-82FC-9E42-8C6B-A53E9EE52F4E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6144110B-D3F7-7F4A-878C-37FC59F86452.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BC3FB8F3-4929-8146-8758-A6021E3FEF42.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F19CA422-21DA-6541-A04F-97CE60FD78C5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/74E96C4E-3658-0E4D-8530-1DBBC27C01FA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BF04FFF9-1AD2-5C4A-8E96-D81FE852FF8C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/84CE63F6-F7EC-CA4B-93BD-4E9B3397BC0F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/44E4B6E0-F64F-4E42-9F65-4EB593B48259.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/AC04B64B-D618-BC47-93B4-8D4D10293469.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/3F97C8A5-C5A0-B842-81DC-14BA20897144.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/FA87BDC7-5E95-8349-9147-6FA3AA264B2F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/707EC16C-DAAD-E64E-8B63-31FDD9957448.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A81584FF-B417-CB46-8BAA-BBF44D8F09FB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/F123A6C9-9AE9-C648-BE7E-0A3F720E1C21.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/2887C2E7-C1C1-8249-849B-FE8C4A4F704A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D563AC42-FBB4-1C4C-8C55-150FAB1F9A58.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/938B604D-A934-3244-9153-C31D4DD6B928.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/27037E05-B76D-F846-A0D3-172925A8D45F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/88BF7E8D-EF54-B24A-BEA3-B2F7B99704C6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/AF0A410D-4715-5C4B-8F62-43B10027C616.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/80A71D14-5EB4-BC43-94C5-650BC0B3110B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/08FA525D-7D81-D04C-8CAF-8BF3FFAACFBE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A6BB0C0E-3A7A-B549-B016-68581B985C27.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/0737908D-B64A-1445-892F-33B863539CCD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8D372AB7-3D33-434D-9EDD-D69F0E4E4B06.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/52AAC4EF-6D30-EA40-83C7-9AFB9ECF579B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/468F0610-61BD-FD42-AEE4-CEC2FA253EC7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1E6B81B7-695D-F44E-B4C4-AC0E31CE052F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/CA0F49A7-7477-2B4C-8EE7-C04611763634.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8C758634-33C8-1F44-8B8D-627E258BE7FA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A4AD2187-0044-754F-ABD1-DA675E7E93C6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/BD98726D-4F5D-8B4F-9A02-50E576A5E86D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/74490F05-D277-704A-BD36-4E086786FA53.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/D6A8C8AF-E6AD-D44E-9F18-B808EF81CF7C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6144E8B0-AD39-D84E-BD81-64A0B71FDA04.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9026088D-E1D4-3944-A99B-B31B76274B8E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/EA1BBFED-3CF0-E047-B12B-8D0F5FE78ABE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/8EB08C29-73D1-224E-8B08-68240A78484D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/A783EF4C-086E-CB4B-9436-F53AAFDF5F59.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/710D4271-8A15-5147-B58D-576193BEF481.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/1D318448-221C-184D-B103-F19EEC7A0A17.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4329D335-69D3-7047-B52F-C119B12F1902.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/6BD02BC6-6D82-B145-A194-5E67A2B20C52.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/4D35209E-FE78-3445-87B8-E53459CC7148.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/AE4935D8-4523-7C49-9EAD-8C2E4A04FE6E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/9AD40DC8-B63F-9048-998E-E8C9B37BB922.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/5669AB65-83CF-3D45-9190-6D765216ED67.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2017/04729E95-78DB-434C-8F46-13A94379B243.root");
  } 
  //
  else if (year == "2018"){
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/87DEE912-70CF-A549-B10B-1A229B256E88.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E61E2699-4C60-F94F-8B0A-4CBDFC387BCA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2EEEF2A2-D775-764F-8ED6-EF0D5B425739.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E45035E9-854E-D847-8A01-F87DBDC4CE19.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B3FAAB2D-73A2-2C41-836D-3B530C6CAD13.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/23AD2392-C48B-D643-9E16-C93730AA4A02.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/3EA6E929-788C-B94F-84B6-1855A7DBB589.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/3757682B-9F48-3B44-88CC-632400689053.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F3F60B58-60DD-894C-9BB1-E151DC54808A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B4DCBDA9-7A12-6242-9134-8AAB29239701.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A2E94655-4FF1-074D-96D4-3E04D5F4BB31.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5A51156D-9F77-A747-B2AC-F90E3B98822F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E42D5296-2695-5945-8902-13C452CB9095.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6F092431-07EE-F842-BD8A-BF936310A11C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/AA0B733C-EA9A-6A4D-AEA8-5430296A9986.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/84DABB80-5C90-C648-BF16-B92C29FEF92D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/15FC5EA3-70AA-B640-8748-BD5E1BB84CAC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7EF39306-2D9D-1141-881E-EF376C2693F9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D664FFD8-5B79-3E44-9E77-AC4D198DB4AA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/684537A6-012B-B94B-995A-05DA4C482D0C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7AED4A75-5B6E-8D4F-BB14-19C5E354B47D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D57584A5-CA3E-3D4C-8F3C-9023B42481F4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/C4CBA231-C754-9147-A7EE-F3BDBB230B49.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/329FB0B6-F45B-8D4B-A27C-3D61E33C91DC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/98516AAC-9C84-1647-8C09-D0FFD03E41BE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6BB4E634-943C-B14C-AAF1-B83F9B183398.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/54CC88B4-7C8E-4249-ADE7-3969965304E2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7D19ED1C-E369-454A-8731-4C9C8AA86871.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DC022790-76FC-854A-8D01-CA52706A07D7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/8FD57351-9BC4-4141-88D4-F3CF2DF8DEBF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B26E5520-385A-B949-94A2-6424A950DE99.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0E9EA19A-AE0E-3149-88C3-D733240FF5AB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/CF6B557C-6A92-FE4A-ACD2-7BFDE5133F05.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0520A050-AF68-EF43-AA5B-5AA77C74ED73.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/81EF7A51-827B-5D42-BCE8-646CCD18D50F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5F80F469-1369-7248-9911-BBEAD9F0AD42.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2AE859A8-8012-F240-AD0E-0A6BBFDA73BB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/35900831-44DB-E54D-929C-98059280E761.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/00B80E97-1F89-E04E-81CD-5595AAE21627.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B54B0DB8-C5A9-BC4B-8D55-ADA7A4AB6B76.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B00B6268-3970-DA40-8DA3-E57C67C2AD6C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/08CF3F43-AEEA-2540-A9EC-099B02E445AF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EA0953C2-7242-9147-B827-A13A4E538C5D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BA460E8D-B718-2B42-87BA-EC55A03AEF9A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0D9EAE6F-43D0-9B49-8812-5C55ED605345.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DE77FC17-88F7-1745-BCB4-B03C38871C0C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7F4F2CD3-5B9B-074B-A488-308EB3A02FDB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/844E4909-C790-4C4F-A490-1D29226CC9A5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/4596499A-5E02-3E49-83A4-70FA25DB6203.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/9B4CF96C-A4C8-5A44-9B2D-51D9338E0810.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/93F132C5-02FC-4643-AA16-B520CC2102F6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/75424785-41B3-E342-9551-B332DBC25B75.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/27285E14-3243-4649-87BC-D91E1F4A1621.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/AEDB9BC2-0ED7-7841-8D45-C717F11BF943.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1B7C3ECA-1675-F14A-A850-4F1B956C8EE2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0B5AB59F-91EC-364C-BB00-3BE951CCC3B8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6632144A-5431-FC48-84E9-1AB835E6F2F3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/28707BA6-B9AE-1B44-8748-8D36D87AF23C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/971E0B97-20D2-964C-ACCD-AFA4E9FB493E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F2BBAE77-3593-4149-B6E5-0E76A117BCA5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DD96D75D-409A-4A46-9181-8BDC6F6E4B84.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F479D041-6A5A-C740-BAD2-4B7CE4B80937.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0608B80C-56F5-5547-8BB4-FEA6C6EB6566.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/AB700EA9-E82B-274F-87AE-E1E020FA3F37.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B4913516-8BDC-9E43-892E-F5144E7D7D5E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/10B77071-4DF3-1543-A8F5-15062610BA2C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E2ABAE27-0DE3-E644-8B4D-9FA7AF633C6C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/487495DD-B577-6047-B212-5406E5CB913B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5DE002F6-18CE-9C49-926E-68FB7674700D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EE91DFF3-4F88-984F-B3C9-C40B269E1E72.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/19EB631D-2CC4-9E43-8A54-237D4A7C17DB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/93F5AC28-C812-CF4A-A32C-0469A94DE39C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E01860B0-366C-164B-957A-CDD3A4700BDD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/24A99C4E-3CBD-2D45-A8F4-D48DB487F5FF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B6C4872D-3DF2-5E49-AC9F-A9C72792735B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E6A742BD-68EB-6A4D-999C-AC3EA6E6867F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/18EA7597-4008-FE48-B747-3CC5FCED5648.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1F8D7BBA-DA04-2640-94B9-4FE4F414D4F4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1287809C-C63F-F944-9A2B-165EBB816B54.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/526BACFE-895C-F841-BAC9-2E658822854A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/79F45F44-C589-364C-B1EA-CBA24F787ED7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/9A4927A9-522D-CE47-9C24-03BBC4CF410F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/9F084E23-3FE6-9140-8358-13044BE942FB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F3760436-BB00-7647-83D3-3019502DEC28.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A5268175-194A-7F41-BFF2-672D498C1081.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/01813688-66C6-8947-9196-40F35999DDA3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/29888806-CA2C-DA4E-AF23-D5306D7C91C4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A1715778-C2A3-7949-9D17-1D268C709311.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EC5372D4-09E4-A648-95A8-8AB793147CB8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1CD61F25-9DE8-D741-9200-CCBBA61E5A0A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/143F7726-375A-3D48-9D53-D6B071CED8F6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/262EAEE2-14CC-2A44-8F4B-B1A339882B25.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D6C55DF3-D681-EC43-8EF1-640701146563.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1D885366-E280-1243-AE4F-532D326C2386.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/44E3579B-F232-834C-AAE1-79B46AB34D41.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/C4B3C922-EE0D-0248-A292-FC512316E23F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/8D764BC6-29F6-A944-8F1B-E546CFDFEADB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/52557D67-72C0-754B-AC60-7AEE7FF1FD4A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/42735D52-F6A9-5D4B-A919-9620DA7331DB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B214D06E-DF73-7C40-B5E3-29A2132E65EB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/245961C8-DE06-8F4F-9E92-ED6F30A097C4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B712D71D-F7D2-954B-B42A-3F11754F3A56.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F31B62FD-1975-884D-883A-D569343113A8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D8B9E36E-9596-0147-B26C-51C841D0F69C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B8A5BD50-ABDE-B042-865F-4470516EF2A6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F8DFE697-E2CC-6A4F-AD58-5592CDF8BE16.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7B4BADE6-06CF-F048-BDDC-53CE2D6B414D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B5954571-DD91-1E4A-97D5-00AA65D40D96.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/8A4185BB-7F95-F840-A156-6E753EE4CE5E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B8F4ECF8-1363-C14F-B6F4-D292106546A0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/62356EBC-D8B5-AB4A-B506-70619A663B78.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5FA524E5-403F-5746-8382-08EE22417B0D.root");
    // with these files, we have 140M events
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/43FD54B7-8F80-8648-B72C-44A065727306.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/75C6D6CD-8705-2C4C-BDA2-E5DC13DCF6F9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/23B8669A-3449-B14A-87B3-87B7B5289CFC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/097CE08A-B334-C44D-BE14-0F790B9D4690.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DD5679CF-C732-DE48-BB74-FB96240D8D50.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/180D87DF-DEB3-6A4F-8311-E87DB173308D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F6B84D16-A347-1D4F-B7BC-D6D48F6BA3C4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E37D3625-C89A-3D49-A064-1F324E70ED0F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0C17C1F1-A637-EA4E-9DE1-5D58439BD278.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B69A942B-2467-ED46-A08B-E15D8EC1595D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B0DC8B88-14EF-0C4F-AD3A-907E9493A322.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F02FCBA0-7C06-2A48-8F9E-4843F0D53759.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/751C215A-700A-184B-A21F-127DB2883FE9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/8B90B4D1-F232-9E40-842F-E7A46B401398.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2551EE27-0316-544F-AD89-E5B0D0E07445.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2100F56F-9584-6249-8763-925E986F2307.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/42BC90D4-180A-C540-986D-3682A5E2463A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/75472393-1D3C-8040-9616-E7E56E1B1E23.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5BC41450-DD72-7A47-BA0C-102C3C52A67D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/35A87EF2-8D5E-844F-96C7-A3B12B191319.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A2F92435-A134-2D45-A29A-25710DBB80B9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E0EAF624-6D1C-494E-8ABF-2633CC17ACFA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/74C29123-BB41-9D4D-B6DB-2D65497C590A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/FABC59CB-749F-4044-B754-4724B72038BC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D5495D33-F635-2445-AA02-21CD067B7E1A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/599C3AEA-E0F1-054D-B794-0AC6BC39AC46.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/16D64009-D07B-E842-9B7D-80F0013ED79C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EF601739-3D2D-4B4B-98F7-363F710660FF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7FA3E3A2-4BB3-A34F-9884-838D5F18416B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/128E9B7C-498F-584B-8366-E64229DAC526.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D807748B-956B-B34A-8431-5EE4B10A6BDB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EF66A3B1-8493-6F42-92A9-D6BA0D146DA3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/408B912B-3049-5B4A-927A-A3929280385F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/778F7E92-5232-C740-936B-5683E660D345.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DA7D656D-D004-774D-A77A-C6ACEA5589DE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/FDFAA930-823C-3B4F-A062-340DD15264A0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/48235A63-0204-C747-90EC-25855AF69848.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/8E2613E5-9327-D644-9567-C3A5CE721D27.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/48D3DCD5-FB5F-4142-95B3-A230FF87D7C6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F2605E8E-EFAF-E942-B7DA-CF046EEAAA3A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5CB0002D-DC19-9A4F-9668-5AF74F1DBCB8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EA5AF95B-4FAC-0B4C-94F5-B93B9290BD13.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DA3FD382-3F76-6D4C-A165-A7ACBE16174D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BBA42FF5-E19F-834D-90E4-E02FF7605508.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/50591872-DB78-694E-8998-B33CFA97E3A5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6F4766FA-E6F7-FE4D-9064-8E48729825EB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/AA6F90D5-16A4-4C4C-BF34-5D30E5FF8021.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/3626FFBF-C054-3443-B33C-E4053D07962D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A9CA9D5A-6FBE-ED44-A539-14DA55A57164.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/133DD13C-C40C-024B-A69B-45B8EF34CF14.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DD7FA1F0-0C47-D745-A390-35AC6B143504.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/FBEB491D-1966-7A45-97A7-6F30C1306A59.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/10AE0CA0-AD1E-5A47-8437-B0D867A62B80.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5F28C17D-FFE1-124E-A42B-C321FBAB1972.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/AB40D7B4-BB1F-C14B-8AC4-95E1C6EE7CC2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6C85A3E7-2729-5A4E-88AE-48E496090D3A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/55E34B31-19B1-C84C-ADE8-25802CC1FDEA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/42D068F8-BD11-7042-9E79-9E10CD302AEC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/867F4D67-281B-BC41-A1AD-E67D3D07AE60.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F3958B1F-07E6-564C-A259-06DF1D745EC2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BB0C7169-CEEF-884C-80D1-CAC673761774.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/246AA27D-4153-B349-8584-889FB927AB91.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/4B7AC0FB-6C9E-8645-8EB2-7274064D6BB0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A910F805-5770-4342-9ACF-33D584BE74DD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6364DE85-CB61-F449-ADBF-824C9C43E571.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E95A5111-DC11-1444-B531-A8B286AA51DD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F66FAAEE-FD9D-044E-AD01-4517C6278BDD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/ACA9E01D-462A-CC45-AC38-3204699C7445.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2071CEB2-E2DC-9B47-9894-AFA4432E2CD0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F4DBE0C8-3F77-FD47-9E6C-7EB037DFEE4F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/8F3F3CBB-1F8B-DE43-9BD1-161F1595E0FA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/13A2F71D-5A9A-0046-A53D-21CCF32D4A2C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/67E44D1F-E80E-4A45-B897-D3EAEA7FB56B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0855323E-D897-BC43-BC7C-0B6DC2ABAAB2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F213D0B8-92CA-A94B-99A7-A66F88307664.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F8E2C45D-DDA7-4C49-A04F-ADDE0E803FCE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/CA1F2495-7AB3-C044-BB7C-4067DE42078E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/ADD6DA0F-932A-1A44-ABA5-5C5AE0B7A5B5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B2CAAD95-A27F-6F41-84B7-972E04F05151.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/254CC7BB-2D4A-9442-8BFA-39AAAF603749.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/572F22CD-D5DA-7E4C-899C-1B520ABA9828.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A40EDEC3-412E-5344-AC54-CB7FDE20744C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/FD35ECD9-E9C9-6144-98C8-295324D981CC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/3A72AC07-8C0A-EA44-AD48-DFFBC5845BD8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1CDCEA6C-4779-C94B-8095-3752D5C8AD5A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B13D38BF-CDAC-A742-8A80-441F5304E06F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/428C081E-F0DF-7241-BF9A-0B01F412FE4B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B2C942C7-B597-544A-A8AD-BAB26DEEF3C9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/23F395F7-7E77-D946-BB50-BD94C34D3502.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DA3B2083-CC2D-7742-BA0A-5C0B2CD53A57.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0A56CF21-81E3-6D4B-AFFA-C85D78C30483.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/FD820B2B-DF2C-5F4B-9DF3-325313BD9EC9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1CD8C5CD-4559-AA40-93E9-DB8FC1629847.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0FCA2845-819D-2340-9789-94AA36887B2A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E8C0C317-E163-194A-9521-064A3160D7A1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/02003FED-4DED-2849-BAFB-494212F691EE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E0098968-209F-6442-A815-5740E4C368E3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/84D8B82C-C1C1-EF4D-B45B-CA56BF23FE95.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/30C72E91-FCD3-B94F-9E0F-3FE037CF5BBC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A587024C-3E33-0D4D-9D85-8B8E96E41FF9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E630C661-131E-E642-BC7E-0C09AFB22EB4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/4C9D2C6C-83A9-E94F-A50D-605839DA23EC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E949854A-883A-AF4B-A072-76CC19FBE360.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/05838131-1A49-6D4A-9FC4-6EF813FFA18A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/11CCA297-39F2-5944-A45C-88AA91B64A57.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B4F5F49E-D771-3A4F-8C92-4C7DC475F2C9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/74DDD835-0FED-DF48-9F0D-4A6D5F2EB2B6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/773F68D6-504C-6841-8441-638E938D9883.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BCC2DBF0-DC05-994E-B7AB-DB3B462BE5CA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F24C68DE-14D3-F94E-855C-C96607427023.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/41532D40-BF92-F04A-BB20-BA38602A4225.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/63F9BC2F-DBED-4347-B031-19775711FB8D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/95DB7ACD-B245-9640-9532-0078B838F5B8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5018A0AD-5C61-074F-BC9F-57DD0F5E10F0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/8CD5F2C8-F5E2-BB4C-B921-394D1FAC7ADD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1AC6242A-7C19-3A4A-867C-ED9DC0849ED9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6800481A-E7B5-DE48-AB19-C9DA68F3944E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5F4D7DAC-F1F0-9F47-A385-E5D9EB1318E0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EB3DEDC6-3E18-F041-B257-FE052E8B1ECD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E079C5AC-DD02-D946-B824-E4A0D6A7FEA0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D77106E8-7AF7-1C49-92B9-C769D3681B59.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7C2DD5B5-EADD-6241-B9E6-E005E3F1DFA8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/72DFC88A-875B-B74E-8032-B223C1CB7257.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/C4BC43C4-FE16-3E42-AFBF-C2FD34948B0C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/C06791D4-2E16-854D-93EF-0D81BE74F4E8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/FFCC36D1-EF5D-B542-95BE-AC701A03EB70.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D2142AEA-8200-8949-A082-7FF41FF8D2B1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B6183B34-1CE9-814A-A9E3-3A3739D89423.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E2EB6FE4-B8A6-094F-8A1D-0B1F404D64C0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/CD2CF0B5-DEE6-7B4B-A7C2-9CD1FA5C1307.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/4DA8A783-15B8-E54B-9C91-B7C613544DE4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/45071430-DDCF-B341-A64E-5E37A9C193A8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/CCD72ED5-F8CA-4444-9183-A2F80E9DE429.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/4D369FEB-1E6B-D142-AD8F-F117CF918B97.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/59864497-C611-BA45-A8A0-106A7E32EB8E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/CC750420-683D-2D4F-A699-9B9BD96F2C9A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E3703E79-6740-C84E-B15E-A70B514B124F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7996B2A4-A9BE-2645-A419-787AE5C0FCD9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6BA87215-42C3-ED41-86E7-8F346400136C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/C7516832-F537-DB40-8E94-52249027B3FA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/091BAD9E-F5F4-C04A-AA61-7411E90DC218.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/CF842F60-40EC-274D-B58B-8EFD4D285E9D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/09C9CA3B-2DA8-A241-AA38-906481B9FEF2.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/9C2F6BE8-21CD-6F47-BEDD-7C1D7DE8FE51.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6F780337-F7AD-D54B-93FD-1053F793AA21.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/659F0105-828E-804F-A48B-21149514D2A1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D1F9AD55-26B9-584F-B3AA-BC24E7220954.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/364BF285-71ED-8643-B672-E65E8B94F557.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/313CFEB0-2967-234E-A573-D69E9BA01FE7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D9222F10-488A-204F-87A6-7555586AD7B0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/89F0260A-17A0-634F-82D4-D8A89FF554F3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/AA4859C7-BB57-F14C-BE40-DA9CA147AD58.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/11861924-BFA6-E543-AA28-45E4062ABE9E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BB0B2273-B1B9-334F-A054-F144687A9BE1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7520B487-747B-2946-BCF6-3A19C37A55E0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/58BF2CCF-5614-6E40-AA6C-C534F3F60966.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/72B6018F-137D-6C40-8BCE-57EB8ECAE242.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/AE4F3B24-1253-0B42-9118-287FBBA329EB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B325D15C-E5CA-AD43-899D-213F38E17D34.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/9F3C618C-5F9D-0349-9914-EE8A6E2B21E9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DDEACF62-4CC2-FB42-9232-CE923A1C02CF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BF6DDC1A-67EF-4648-9DE0-D7DD65C4D9C5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A0C78203-B7F5-AE47-92F9-DF8BB6CB80C4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/9642C495-49CE-2A4A-A981-E04F742FCB5B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/387C9797-9345-2F48-B6C0-55A3799B99F8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/52D91D3C-C797-DF41-B1B1-6DC6658142D3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/3DAA7FE0-F439-4C4A-B6F1-6E4D4108C71E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/4E3CF0AA-84D7-8043-9503-AE57A7CFD35D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1A3D06C2-6605-9E49-B084-D19135CF8433.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/47FEEC7B-E6D9-B743-B944-79ED80FB5A3E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/109975A7-83F2-9B40-ABDF-5FF2C79C1E1C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BD0436B0-56F7-1E42-BD04-1A7675F02CA5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/900B9640-208E-124A-A263-F9BEA74B4767.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/82669872-20AD-6D4F-BEB6-1B879046E7E3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5CF214A6-C0E2-4441-9F56-CFDE80156F12.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2734F07B-4465-B244-AB2A-4B563A832E9C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D7B4AF21-1AD9-7E44-9E2B-883E31BBA446.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B888E892-E631-7448-B8F6-72F944A7DA55.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BD86499C-9DBC-414D-B2E3-9CFEEA6F6F48.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2C0D0F75-C7DC-C448-8337-40A0D354107E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1C05230E-F8FC-6D43-A9C4-D873BAD44EDF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EB1D7CD5-F15D-884F-926D-765F43F70F65.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E99B0A9D-0EDF-214A-9705-EAC5E10A07C0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/51CD3EFF-01DF-DD45-AF7D-E49F795017BF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/8B8D9852-4AC0-294D-BF70-E73344BBAF8C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/16008836-42E8-3243-9570-98359CBD924F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/13387D30-FC17-2242-AB46-EA953CC48398.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D8DF5471-0595-6F4A-8462-6079CEA84713.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/32D2C7A5-DA42-9048-9E6D-90E278428502.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/54FA26F1-9813-7C44-90F5-32EC060D5205.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2EE8DAA9-2490-024A-88FC-3BE45DCAAD3A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/94A0636D-B0A6-DC4E-A7AF-A8370297BA9E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/34E2EF4E-6798-474C-820A-76FE24AE2CF5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/35CBF7CE-B110-F24A-81D8-3DE2ABB2F2C9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A62A3AA1-D79D-0744-89FA-4E2167025D9D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5E2C6015-CAA2-6A4C-8092-98118557548B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A1816657-D669-EE42-809A-C0ABD1CA1E3F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F7D805B7-1F50-C940-B094-085CE35F41AD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/F411CAD1-386A-E14B-A9FE-8C58028F5D15.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/81BB5DE3-8684-BD44-AD0A-752567C237F5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0285487F-DF3D-064A-826D-3855BF9F23EF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/DA0928E7-2B0A-C84D-BAF6-9F1D57A0463C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/3E53CEA8-C109-B543-8367-D7B4D5201B71.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7EA60F1F-FDD9-114F-B7C3-029433A95F70.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B3DB4D66-3232-AB43-8D9A-91D556728819.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B6AF122A-873B-0041-A557-902B405FBBFB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/38EE355A-861B-0F4C-B3F0-601BB537E895.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D2202145-95B1-0647-9C6C-808BA77A3BE8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A11F01E7-323B-C047-9DFA-89B138D4F264.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/52A9A11F-372A-9247-A9AF-EA31BD5EDE58.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/29F851BC-E912-6F4C-9CD8-3F8CF495F6D1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B27592AF-28D3-DE43-8482-94B94C948D26.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0DADD5E7-310C-E44E-A62A-E5D0ABDCA5EF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/93E20668-246E-2842-83DE-B89A8A9D381B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/93CF009A-5927-A644-8855-C008706AEA41.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/95F900BE-1447-2940-8B96-4A134C22ED71.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D22F7EAA-CC76-1D4C-9713-9B03EFE28B13.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/57229545-E687-E443-9764-D8EBD94288FB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/67FF016B-0F26-BF44-AD35-080622EB52EE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/125B56AE-250D-B743-94B9-B2F1D8C94B62.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BCF60CFD-1447-3243-A232-F57A6BB1F29E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/880BDBED-EC05-E24A-99E4-1AA2B5908F97.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/16CADE27-A3FC-3542-8350-7C7F9C79C24F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E85FD314-B644-BB40-B98F-98E0E97DD464.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6929103E-3FC8-724F-85B9-8642FC83FBDD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2295A1DD-7B7F-374A-B6A1-9D43ACB3B257.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/3154B791-CD64-9849-B75D-3A2226EE79B4.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BD305BD0-D63F-E943-8D6F-73833907C646.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/9125BF97-34D3-A14A-96F4-FFB6CB7ED92A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/524CB2CF-F2EE-F542-B4B0-37580F54C9DF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5390F8C1-324B-E141-81EB-8FE6DF39F7B0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/C07913C5-4F08-F847-8598-84844D23C2CB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/291F8F7F-CBEB-5242-8B69-9EE4D955D9B1.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/FA4AB21C-A6CD-354B-B612-4454BB1DCDF6.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/53324160-0784-7049-96FC-B704B85A14A9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/08496053-8F46-0E4A-82D0-0152EB8FE3B5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/C29F9D70-2085-BA46-B230-61F3B76A321E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/9AAE9F4A-E967-B145-BA0A-0AE6C1BEB6B3.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B533D91E-530F-674D-98FF-989EDBFF4280.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/A3650967-C23A-474D-AE40-5995DD7B880E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/719BC3BC-8884-4D42-AB76-A25E9CAD2C45.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/C3CF93B4-8023-6E48-94D1-BDABA079B5B0.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/298D2AD3-3928-FA4F-93BE-444CE787694A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/26BA6BA8-E3CA-0F41-82FB-667BFE90A3AB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/FD21FACC-304D-6F46-857D-C521B22C890A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/D6DE94B4-735D-D94D-9A4F-BDB942B12AF7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/B047029C-C11B-A54B-A5F3-91981AB3D5DC.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7246BBB1-D6AC-DE42-8969-A09972D79AD7.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/40BE02DB-5FE3-B149-9ADA-2F9827DDCBCD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/5C51FB99-FD50-D043-8D31-0BF338159D77.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/140A308E-61CB-7040-BB55-505C2C5AC69B.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7743862E-537C-C640-B2CD-23831CF5535C.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/E8B23BD7-4C4C-724E-84E1-EDA7A301FDD5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/3119FF45-7534-E942-8ABE-1F497DECDD26.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BC92CD1E-ADDE-474A-BB67-BF48D3842A8E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2D5A98A8-810F-CE4E-AF84-CF4E766612EF.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7546FE6A-9F8C-2740-AF6D-5BCBA7435694.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/BC85479F-BB8C-B34E-A08B-2A2D5E78D6BB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/CD47C9F3-53C2-1948-BFA6-079EA5F97068.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/96405B1F-F6D4-654C-AC75-A5D138CB522D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/7A1CCF47-4612-6A41-8927-265D01C52B7A.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/95F923B5-1389-2D4D-83D7-68D80BC57DDB.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2CD1FB5F-4565-5F41-B2E1-79B6CDC25955.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/9318E3DA-8AF2-F045-B3A8-607078CC2B1F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2C4FEAE3-6ECC-2C49-8113-71F42AD33634.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/78AD70F7-6ABF-004A-9CDD-3D8B2751475E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/014BDC65-BE41-D14F-B57A-ABD0054C28FE.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/0D2B6883-6349-2E4E-AA27-23DD68E8E266.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EAE2ECE8-4147-1D45-9BD1-A5D205E84CD9.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/AF3ECD97-7095-E14D-AB23-53C49C7FBAC5.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/92D0BDF3-91AE-514F-88B5-8F591450B8AD.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/452E6B11-BFCF-164F-A005-82A61E010F27.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/1325F6D3-3D7B-8344-9F6E-D8C8F62DCB40.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/2787267D-9C91-E049-AD73-1D863438A6BA.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/3DFB93F3-41A5-9A4D-A726-C3AAB15A409F.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/EC9824A7-0AF8-1B42-96CE-9A6ACF97683D.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/39D00F7A-EB63-FE44-A676-88AFFE54590E.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/C79D530A-05E7-A14E-8502-54CA15E2D6B8.root");
    files_names_strings.push_back("/ceph/ntrevisa/Samples_LeptonMVATraining/2018/6B4EB386-4969-D648-93F7-CB19DAB240F8.root");
  }
  else{
    cout << "Please enter a valid era" << endl; 
    return;
  }


  TChain *dSig1 = new TChain("Events");
  TChain *dBg1  = new TChain("Events");
  for (int i = 0; i < files_names_strings.size(); ++i){
    dSig1 -> AddFile(files_names_strings.at(i));
    dBg1  -> AddFile(files_names_strings.at(i));
    cout << "File " << i << " added" << endl;
  }
  
  TString mkdir = "mkdir -p " + folder;
  gSystem -> Exec(mkdir);

  TFile *fOut = new TFile(folder + "/" + name + ".root", "RECREATE");

  TString factory_conf = (!doMultiClass) ? "!V:!Color:Transformations=I" : "!V:!Color:Transformations=I:AnalysisType=Multiclass";
  
 
  TMVA::Factory *factory       = new TMVA::Factory(name, fOut, factory_conf.Data());
  TMVA::DataLoader *dataloader = new TMVA::DataLoader("dataset");


  TCut lepton = "1";
    
  if (name.Contains("UL")) {
    if (name.Contains("_mu")) {
      // Spectators
      dataloader->AddSpectator("event",                         'D');
      dataloader->AddSpectator("Muon_mvaTTH",                   'D');
      dataloader->AddSpectator("Muon_miniPFRelIso_all",         'D'); // relative isolation
      dataloader->AddSpectator("Muon_looseId",                  'D');
      dataloader->AddSpectator("Muon_genPartFlav",              'D');
      dataloader->AddSpectator("Muon_isGlobal",                 'D');
      dataloader->AddSpectator("Muon_isTracker",                'D');
      dataloader->AddSpectator("Muon_isPFcand",                 'D');
      dataloader->AddSpectator("Muon_mediumId",                 'D');
      dataloader->AddSpectator("Muon_looseId",                  'D');
      dataloader->AddSpectator("Muon_dxy",                      'D');
      dataloader->AddSpectator("Muon_dz",                       'D');
      // Training variables
      dataloader->AddVariable("Muon_pt",                        'D'); // pt
      dataloader->AddVariable("Muon_eta",                       'D'); // eta
      dataloader->AddVariable("Muon_pfRelIso03_all",            'D'); // PF relative isolation
      dataloader->AddVariable("Muon_miniPFRelIso_chg",          'D'); // mini relative isolation - charged component
      dataloader->AddVariable("Muon_miniRelIsoNeutral := Muon_miniPFRelIso_all - Muon_miniPFRelIso_chg", 'D'); // mini relative isolation - neutral component
      dataloader->AddVariable("Muon_jetNDauCharged",            'D'); // number of charged daughters of the closest jet
      dataloader->AddVariable("Muon_jetPtRelv2",                'D'); // relative momentum of the lepton with respect to the closest jet after subtracting the lepton
      dataloader->AddVariable("Muon_jetPtRatio := min(1 / (1 + Muon_jetRelIso), 1.5)", 'D'); // ratio between the lepton and the closest jet pTs (1+(PFIsoAll04/pt) if no matching jet)
      dataloader->AddVariable("Muon_jetBTagDeepFlavB := Muon_jetIdx > -1 ? Jet_btagDeepFlavB[Muon_jetIdx] : 0", 'D'); // Jet b-tagging probability of the associated jet 
      dataloader->AddVariable("Muon_sip3d",                         'D'); // 3D impact parameter significance wrt first PV
      dataloader->AddVariable("Muon_log_dxy := log(abs(Muon_dxy))", 'D'); // transverse impact parameter wrt PV
      dataloader->AddVariable("Muon_log_dz  := log(abs(Muon_dz))",  'D'); // longitudinal impact parameter wrt PV
      dataloader->AddVariable("Muon_segmentComp",                   'D'); // segment compatibility
      lepton += "nMuon > 0 && Muon_miniPFRelIso_all < 0.4 && Muon_sip3d < 8";
      // Keep 1 event every 25 for testing
      // lepton += "(event % 25 != 0)";
      // From ttW talk
      if (name.Contains("default")){
	lepton += "Muon_pt > 10 && abs(Muon_eta) < 2.4 && (Muon_isGlobal == 1 || Muon_isTracker == 1) && Muon_isPFcand == 1 && abs(Muon_dxy) < 0.05 && abs(Muon_dz) < 0.1 && Muon_mediumId == 1";
      }
      else if (name.Contains("TTH-like")){
	// From https://github.com/sscruz/cmgtools-lite/blob/104X_dev_nano/TTHAnalysis/python/tools/nanoAOD/ttH_modules.py
	lepton += "abs(Muon_eta) < 2.4 && Muon_pt > 5 && Muon_miniPFRelIso_all < 0.4 && Muon_sip3d < 8 && abs(Muon_dxy) < 0.05 && abs(Muon_dz) < 0.1"; // line 18
	lepton += "Muon_looseId == 1"; // line 97
      }
    }
    else if (name.Contains("_el")) {
      // Spectators
      dataloader->AddSpectator("event",                                 'D');
      dataloader->AddSpectator("Electron_mvaTTH",                       'D');
      dataloader->AddSpectator("Electron_miniPFRelIso_all",             'D'); // relative isolation
      dataloader->AddSpectator("Electron_mvaFall17V2noIso_WPL",         'D');
      dataloader->AddSpectator("Electron_lostHits",                     'D');
      dataloader->AddSpectator("Electron_genPartFlav",                  'D');
      dataloader->AddSpectator("Electron_dxy",                          'D');
      dataloader->AddSpectator("Electron_dz",                           'D');
      // Training variables
      dataloader->AddVariable("Electron_pt",                            'D'); // pt
      dataloader->AddVariable("Electron_eta",                           'D'); // eta
      dataloader->AddVariable("Electron_pfRelIso03_all",                'D'); // PF relative isolation
      dataloader->AddVariable("Electron_miniPFRelIso_chg",              'D'); // mini relative isolation - charged component
      dataloader->AddVariable("Electron_miniRelIsoNeutral := Electron_miniPFRelIso_all - Electron_miniPFRelIso_chg", 'D'); // mini relative isolation - neutral component
      dataloader->AddVariable("Electron_jetNDauCharged",                'D'); // number of charged daughters of the closest jet
      dataloader->AddVariable("Electron_jetPtRelv2",                    'D'); // relative momentum of the lepton with respect to the closest jet after subtracting the lepton
      dataloader->AddVariable("Electron_jetPtRatio := min(1 / (1 + Electron_jetRelIso), 1.5)", 'D'); // ratio between the lepton and the closest jet pTs (1+(PFIsoAll04/pt) if no matching jet)
      dataloader->AddVariable("Electron_jetBTagDeepFlavB := Electron_jetIdx > -1 ? Jet_btagDeepFlavB[Electron_jetIdx] : 0", 'D'); // closest jet b-tagging probability 
      dataloader->AddVariable("Electron_sip3d",                             'D'); // 3D impact parameter significance wrt first PV
      dataloader->AddVariable("Electron_log_dxy := log(abs(Electron_dxy))", 'D'); // transverse impact parameter wrt PV
      dataloader->AddVariable("Electron_log_dz  := log(abs(Electron_dz))",  'D'); // longitudinal impact parameter wrt PV
      dataloader->AddVariable("Electron_mvaFall17V2noIso",                  'D'); // electron MVA ID value
      lepton += "Electron_miniPFRelIso_all < 0.4 && Electron_sip3d < 8";
      // Keep 1 event every 25 for testing
      // lepton += "(event % 25 != 0)";
      // From ttW talk
      if (name.Contains("default")){
	lepton += "Electron_pt > 10 && abs(Electron_eta) < 2.5 && Electron_lostHits < 2 && abs(Electron_dxy) < 0.05 && abs(Electron_dz) < 0.1";
      }
      else if (name.Contains("TTH-like")){
	// From https://github.com/sscruz/cmgtools-lite/blob/104X_dev_nano/TTHAnalysis/python/tools/nanoAOD/ttH_modules.py
	lepton += "abs(Electron_eta) < 2.5 && Electron_pt > 5 && Electron_miniPFRelIso_all < 0.4 && Electron_sip3d < 8 && abs(Electron_dxy) < 0.05 && abs(Electron_dz) < 0.1 && Electron_mvaFall17V2noIso_WPL == 1"; // line 19
	lepton += "Electron_lostHits <= 1"; // line 97
      }
    }
    else { 
      std::cerr << "ERROR: must either be electron or muon." << std::endl; 
      return; 
    }
  }

  double wSig = 1.0, wBkg = 1.0;
  dataloader->AddSignalTree(dSig1, wSig);
  dataloader->AddBackgroundTree(dBg1, wBkg);


  // Flavour of genParticle for MC matching (for signal and bkg)
  if (name.Contains("_mu"))   
    dataloader->PrepareTrainingAndTestTree(lepton+" Muon_genPartFlav == 1 || Muon_genPartFlav == 15", lepton+" Muon_genPartFlav != 1 && Muon_genPartFlav != 15", "");
  else if (name.Contains("_el")){
    dataloader->PrepareTrainingAndTestTree(lepton+" Electron_genPartFlav == 1 || Electron_genPartFlav == 15", lepton+" Electron_genPartFlav != 1 && Electron_genPartFlav != 15", "");
  }
  else{
    std::cerr << "ERROR: must either be electron or muon." << std::endl; 
    return;
  }
  
  TString BDTGopt  = "!H:!V:NTrees=500:BoostType=Grad:Shrinkage=0.10:!UseBaggedGrad:nCuts=2000:UseNvars=9:MaxDepth=8";
  TString BDTGopt2 = "!H:!V:NTrees=1000:BoostType=Grad:Shrinkage=0.10:!UseBaggedGrad:nCuts=1000:UseNvars=9:MaxDepth=4:MinNodeSize=0.05";

  // alternative options
  //TString BDTGopt = "!H:!V:NTrees=1000:BoostType=Grad:Shrinkage=0.10:!UseBaggedGrad:nCuts=2000:nEventsMin=100:MaxDepth=3";
  //TString BDTGopt = "!H:!V:NTrees=1000:BoostType=Grad:Shrinkage=0.10:!UseBaggedGrad:nCuts=2000";
    

  // if (!doMultiClass) 
  BDTGopt += ":CreateMVAPdfs"; // Create Rarity distribution
  factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDTG", BDTGopt);
  // factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDTG2", BDTGopt2);
  
  factory->TrainAllMethods();
  factory->TestAllMethods();
  factory->EvaluateAllMethods();
  
  fOut->Close();
}
