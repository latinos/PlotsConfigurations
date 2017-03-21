



#  _______        _   
# |__   __|      | |  
#    | | ___  ___| |_ 
#    | |/ _ \/ __| __|
#    | |  __/\__ \ |_ 
#    |_|\___||___/\__|
		                        
		                        
# gardener.py <command> <options> filein.root fileout.root
gardener.py l2selfiller --kind 2 --cmssw Full2016 --selection 1 ~/SE_UserHome/../spak/LatinoProduction/Feb2017_TheGreatWall_v5/LatinoTrees/latino_WZTo3LNu_mllmin01_ext1__part0.root latino_WZTo3LNu_mllmin01_ext1__part0_l2Sel.root
#gardener.py l2kinfiller --cmssw Full2016  TestRootFile/latino_WZTo3LNu_mllmin01_ext1__part0_l2Sel_WgsDr03.root latino_WZTo3LNu_mllmin01_ext1__part0_l2Sell2kin.root



#gardener.py  metXYshift -c 809 -p metXYshiftPara_MoriondV1_ftnalPar.txt --sample DY /d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_DYJetsToLL_M-50_0000__part0.root latino_MetCorrected_data_numEventTest.root
#mv latino_MetCorrected_data_numEventTest.root MEtXYcorrWithNvtx_MorionV1_DYJetsToLL_M-50_0000__part0.root





#mkGardener.py -p 07Jun2016_spring16_mAODv2_12pXfbm1_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i MCl2loose__hadd__bSFL2pTEff__l2tight -O /d2/scratch/Garden2/HWW12fb_v2 -R -b -Q cms
#mkGardener.py -p 07Jun2016_spring16_mAODv2_12pXfbm1_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i MCWgStarsel__hadd__EpTCorr -O /d2/scratch/Garden2/HWW12fb_v2 -R -b -Q cms
#mkGardener.py -p 21Jun2016_v2_Run2016B_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__EpTCorr__l2tight -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 21Jun2016_v2_Run2016B_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i WgStarsel__hadd__EpTCorr -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 21Jun2016_v2_Run2016B_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__EpTCorr__fakeW12fb -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 05Jul2016_Run2016B_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__EpTCorr__l2tight -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 05Jul2016_Run2016B_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i WgStarsel__hadd__EpTCorr -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 05Jul2016_Run2016B_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__EpTCorr__fakeW12fb -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 08Jul2016_Run2016B_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__EpTCorr__l2tight -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 08Jul2016_Run2016B_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i WgStarsel__hadd__EpTCorr -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 08Jul2016_Run2016B_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__EpTCorr__fakeW12fb -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 08Jul2016_Run2016C_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__EpTCorr__l2tight -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 08Jul2016_Run2016C_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i WgStarsel__hadd__EpTCorr -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 08Jul2016_Run2016C_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__EpTCorr__fakeW12fb -O /d2/scratch/Garden2/HWW6p3 -R -b -Q cms
#mkGardener.py -p 11Jul2016_Run2016C_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__ICHEPjson__EpTCorr__l2tight -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 11Jul2016_Run2016C_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i WgStarsel__hadd__ICHEPjson__EpTCorr -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 11Jul2016_Run2016C_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 15Jul2016_Run2016C_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__ICHEPjson__EpTCorr__l2tight -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 15Jul2016_Run2016C_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i WgStarsel__hadd__ICHEPjson__EpTCorr -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 15Jul2016_Run2016C_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 15Jul2016_Run2016D_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__ICHEPjson__EpTCorr__l2tight -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 15Jul2016_Run2016D_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i WgStarsel__hadd__ICHEPjson__EpTCorr -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 15Jul2016_Run2016D_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 26Jul2016_Run2016D_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__ICHEPjson__EpTCorr__l2tight -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 26Jul2016_Run2016D_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i WgStarsel__hadd__ICHEPjson__EpTCorr -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
#mkGardener.py -p 26Jul2016_Run2016D_PromptReco_KNU -s l2kin -S Target -I /d1/scratch/Garden1/Latino_CernBox/80Xv2/ -i l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb -O /d2/scratch/Garden2/HWW12fb -R -b -Q cms
