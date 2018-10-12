# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

#variables['mucca_BDT'] = {
#     'name': 'hww_VBF_mvaBDT(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/Full2016BDT/mymacros/hww_VBF_mvaBDT.C+', 'initmyreaderBDT()']
#     }

variables['mucca_BDT12'] = {
     'name': 'hww_VBF_mvaBDT12(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
     'range' : (20,-1.,1.),
     'xaxis' : 'MVA discriminant',
     'fold' : 3,
     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/Full2016BDT/mymacros/hww_VBF_mvaBDT12.C+', 'initmyreaderBDT12()']
     }

#
#variables['mucca_BDT2'] = {
#     'name': 'hww_VBF_mvaBDT2(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT2.C+', 'initmyreaderBDT2()']
#     }
#
#variables['mucca_BDT3'] = {
#     'name': 'hww_VBF_mvaBDT3(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT3.C+', 'initmyreaderBDT3()']
#     }
#
#variables['mucca_BDT4'] = {
#     'name': 'hww_VBF_mvaBDT4(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT4.C+', 'initmyreaderBDT4()']
#     }
#
#variables['mucca_BDT5'] = {
#     'name': 'hww_VBF_mvaBDT5(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT5.C+', 'initmyreaderBDT5()']
#     }
#
#variables['mucca_BDT6'] = {
#     'name': 'hww_VBF_mvaBDT6(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT6.C+', 'initmyreaderBDT6()']
#     }
#
#variables['mucca_BDT7'] = {
#     'name': 'hww_VBF_mvaBDT7(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT7.C+', 'initmyreaderBDT7()']
#     }
#
#variables['mucca_BDT8'] = {
#     'name': 'hww_VBF_mvaBDT8(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT8.C+', 'initmyreaderBDT8()']
#     }

#variables['mucca_BDT11'] = {
#     'name': 'hww_VBF_mvaBDT11(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT11.C+', 'initmyreaderBDT11()']
#     }

#variables['mucca_BDT14'] = {
#     'name': 'hww_VBF_mvaBDT14(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT14.C+', 'initmyreaderBDT14()']
#     }
#
#variables['mucca_BDT15'] = {
#     'name': 'hww_VBF_mvaBDT15(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT15.C+', 'initmyreaderBDT15()']
#     }
#
#variables['mucca_BDT16'] = {
#     'name': 'hww_VBF_mvaBDT16(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT16.C+', 'initmyreaderBDT16()']
#     }

#variables['mucca_BDTG'] = {
#     'name': 'hww_VBF_mvaBDTG(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG.C+', 'initmyreaderBDTG()']
#     }
#
#variables['mucca_BDTG2'] = {
#     'name': 'hww_VBF_mvaBDTG2(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG2.C+', 'initmyreaderBDTG2()']
#     }
#
#variables['mucca_BDTG4'] = {
#     'name': 'hww_VBF_mvaBDTG4(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG4.C+', 'initmyreaderBDTG4()']
#     }
#
#variables['mucca_BDTG5'] = {
#     'name': 'hww_VBF_mvaBDTG5(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG5.C+', 'initmyreaderBDTG5()']
#     }
#
#variables['mucca_BDTG6'] = {
#     'name': 'hww_VBF_mvaBDTG6(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG6.C+', 'initmyreaderBDTG6()']
#     }

#variables['mucca_BDTG7'] = {
#     'name': 'hww_VBF_mvaBDTG7(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG7.C+', 'initmyreaderBDTG7()']
#     }

#variables['mucca_BDTG11'] = {
#     'name': 'hww_VBF_mvaBDTG11(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG11.C+', 'initmyreaderBDTG11()']
#     }
#
#variables['mucca_BDTG12'] = {
#     'name': 'hww_VBF_mvaBDTG12(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG12.C+', 'initmyreaderBDTG12()']
#     }
#
#variables['mucca_BDTG13'] = {
#     'name': 'hww_VBF_mvaBDTG13(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG13.C+', 'initmyreaderBDTG13()']
#     }
#
#variables['mucca_BDTG14'] = {
#     'name': 'hww_VBF_mvaBDTG14(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG14.C+', 'initmyreaderBDTG14()']
#     }
#
#
#variables['mucca_BDTG15'] = {
#     'name': 'hww_VBF_mvaBDTG15(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG15.C+', 'initmyreaderBDTG15()']
#     }

#variables['mucca_BDTG16'] = {
#     'name': 'hww_VBF_mvaBDTG16(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG16.C+', 'initmyreaderBDTG16()']
#     }
#
#
#variables['mucca_BDTG17'] = {
#     'name': 'hww_VBF_mvaBDTG17(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTG17.C+', 'initmyreaderBDTG17()']
#     }

#variables['mucca_BDTB'] = {
#   #  'name': 'hww_VBF_mvaBDT((*std_vector_lepton_pt)[0],(*std_vector_lepton_pt)[1],mll,mjj,jetpt1,jetpt2,detajj,ptll,jeteta1,jeteta2)',
##     'name': 'hww_VBF_mvaBDTB(mll,mjj,jetpt1,jetpt2,detajj,ptll,jeteta1,jeteta2,metPfType1,mth)',
#     'name': 'hww_VBF_mvaBDTB(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),  
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTB.C+', 'initmyreaderBDTB()']
#     }
#
#variables['mucca_BDTB2'] = {
#     'name': 'hww_VBF_mvaBDTB2(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTB2.C+', 'initmyreaderBDTB2()']
#     }
#
#variables['mucca_BDTB3'] = {
#     'name': 'hww_VBF_mvaBDTB3(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTB3.C+', 'initmyreaderBDTB3()']
#     }
#
#variables['mucca_BDTB4'] = {
#     'name': 'hww_VBF_mvaBDTB4(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTB4.C+', 'initmyreaderBDTB4()']
#     }
#
#variables['mucca_BDTD'] = {
#     'name': 'hww_VBF_mvaBDTD(mll,mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2,metPfType1,mth)',
#     'range' : (20,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDTD.C+', 'initmyreaderBDTD()']
#     }


#variables['events']  = {   'name': '1',      
#                        'range' : (1,0,2),  
#                        'xaxis' : 'events', 
#                         'fold' : 3
#                        }
#
#variables['mll_optim']  = { 'name': 'mll',            #   variable name
#                            'range' : ([12,30,50,70,90,110,150,200],),    #   variable range
#                            'xaxis' : 'mll [GeV]',  #   x axis name
#                            'fold' : 3,
#                            'doWeight' : 1,
#                            'binX'     : 1,
#                            'binY'     : 7
#                          }
#
##variables['mll']  = {   'name': 'mll',            #   variable name
##                        'range' : (4, 0,200),    #   variable range
##                        #'range' : (7,10,210),    #   variable range
##                      # 'range' : (12,90,300),    #   control region: mll > 90
##                        'xaxis' : 'mll [GeV]',  #   x axis name
##                        'fold' : 3
##                        }
##
##variables['mll_more']  = {   'name': 'mll',            #   variable name
##                        'range' : (8, 0,200),    #   variable range
##                        #'range' : (7,10,210),    #   variable range
##                      # 'range' : (12,90,300),    #   control region: mll > 90
##                        'xaxis' : 'mll [GeV]',  #   x axis name
##                        'fold' : 3
##                        }
#
#
#variables['mjj']  = {  'name': 'mjj',
#                       'range': (20,400,1000),  #for 500 < mjj < 1000
#                       #'range': (20,0,200),  #for 500 < mjj < 1000
#                     # 'range': (15,1000,2000),  #for  mjj > 1000
#                       'xaxis': 'mjj [GeV]',
#                       'fold': 0
#                       }
#
#
#
#variables['detajj']  = {  'name': 'detajj',
#                       'range': (7,0.0,3.5),
#                     # 'range': (10,3.5,8.5),
#                       'xaxis': 'detajj',
#                       'fold': 3
#                       }
#
#variables['ptll']  = {  'name': 'ptll',            #   variable name
#                        'range' : (20,30,200),    #   variable range
#                        'xaxis' : 'ptll [GeV]',  #   x axis name
#                        'fold' : 3
#                        }
#
#
#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
#                        'range' : (40,0,100),   
#                        'xaxis' : 'p_{T} 1st lep',
#                        'fold'  : 3                         
#                        }
#
#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        'range' : (40,0,100),   
#                        'xaxis' : 'p_{T} 2nd lep',
#                        'fold'  : 3                         
#                        }
#
#
#variables['drll']  = {   'name': 'drll',     
#                        'range' : (40,0,3.15),   
#                        'xaxis' : '#Delta R_{ll}',
#                        'fold'  : 3                         
#                        }
#
#
#
#
#
#
#
#
##variables['mjjmanybins']  = {  'name': 'mjj',
##                       'range': (30,20,200),  #for 500 < mjj < 1000
##                       #'range': (20,0,200),  #for 500 < mjj < 1000
##                     # 'range': (15,1000,2000),  #for  mjj > 1000
##                       'xaxis': 'mjj [GeV]',
##                       'fold': 0
##                       }
##
##
##
##
##variables['mllmanybins']  = {   'name': 'mll',            #   variable name
##                        'range' : (40, 0,200),    #   variable range
###                        #'range' : (7,10,210),    #   variable range
##                      # 'range' : (12,90,300),    #   control region: mll > 90
##                        'xaxis' : 'mll [GeV]',  #   x axis name
##                        'fold' : 0
##                        }
#
#
#
#
#
#
#
#
#
#
#
##variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
#                       ##'range' : (40,0,100),   
#                       #'range' : (10,25,100),   
#                       #'xaxis' : 'p_{T} 1st lep',
#                       #'fold'  : 0                         
#                       #}
#
##variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        ##'range' : (40,0,100),   
#                        #'range' : (10,10,100),   
#                        #'xaxis' : 'p_{T} 2nd lep',
#                        #'fold'  : 0                         
#                        #}
##
##
##
##
#variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',     
#                        #'range' : (40,0,100),   
#                        'range' : (10,30,200),   
#                        'xaxis' : 'p_{T} 1st jet',
#                        'fold'  : 0                        
#                        }
#
#variables['jetpt2']  = {   'name': 'std_vector_jet_pt[1]',     
#                        #'range' : (40,0,100),   
#                        'range' : (10,30,200),   
#                        'xaxis' : 'p_{T} 2nd jet',
#                        'fold'  : 0                        
#                        }
#
#
#
##variables['pt1manybins']  = {   'name': 'std_vector_lepton_pt[0]',     
##                        #'range' : (40,0,100),   
##                        'range' : (100,25,200),   
##                        'xaxis' : 'p_{T} 1st lep',
##                        'fold'  : 0                         
##                        }
##
##variables['pt2manybins']  = {   'name': 'std_vector_lepton_pt[1]',     
##                        #'range' : (40,0,100),   
##                        'range' : (100,10,200),   
##                        'xaxis' : 'p_{T} 2nd lep',
##                        'fold'  : 0                         
##                        }
##
##
##
##variables['pt1rangelarge']  = {   'name': 'std_vector_lepton_pt[0]',     
##                        #'range' : (40,0,100),   
##                        'range' : (10,25,200),   
##                        'xaxis' : 'p_{T} 1st lep',
##                        'fold'  : 0                         
##                        }
##
##variables['pt2rangelarge']  = {   'name': 'std_vector_lepton_pt[1]',     
##                        #'range' : (40,0,100),   
##                        'range' : (10,10,200),   
##                        'xaxis' : 'p_{T} 2nd lep',
##                        'fold'  : 0                         
##                        }
##
##
##
##
##variables['jetpt1manybins']  = {   'name': 'std_vector_jet_pt[0]',     
##                        #'range' : (40,0,100),   
##                        'range' : (100,30,200),   
##                        'xaxis' : 'p_{T} 1st jet',
##                        'fold'  : 0                         
##                        }
##
##variables['jetpt2manybins']  = {   'name': 'std_vector_jet_pt[1]',     
##                        #'range' : (40,0,100),   
##                        'range' : (100,30,200),   
##                        'xaxis' : 'p_{T} 2nd jet',
##                        'fold'  : 0                         
##                        }


