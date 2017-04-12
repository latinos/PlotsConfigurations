import os
import subprocess
import string

# samples

#samples = {}

###### DY #######

samples['DY']  = {    'name': [ ],    
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                 }

directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'
for DataSet in ['latino_DYJetsToLL_M-10to50','latino_DYJetsToLL_M-50__part']:
    fileCmd='ls '+directory+DataSet+'*'
    proc=subprocess.Popen(fileCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
    out, err = proc.communicate()
    FileTarget=string.split(out)
    for iFile in FileTarget:
      samples['DY']['name'].append(os.path.basename(iFile))

# ... no SF at all

samples['DY-noSF']  = {    'name': [ ],
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                 }

directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'
for DataSet in ['latino_DYJetsToLL_M-10to50','latino_DYJetsToLL_M-50__part']:
    fileCmd='ls '+directory+DataSet+'*'
    proc=subprocess.Popen(fileCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
    out, err = proc.communicate()
    FileTarget=string.split(out)
    for iFile in FileTarget:
      samples['DY-noSF']['name'].append(os.path.basename(iFile))

# .... TrigW only

samples['DY-trigW']  = {    'name': [ ],
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*effTrigW',
                 }

directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'
for DataSet in ['latino_DYJetsToLL_M-10to50','latino_DYJetsToLL_M-50__part']:
    fileCmd='ls '+directory+DataSet+'*'
    proc=subprocess.Popen(fileCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
    out, err = proc.communicate()
    FileTarget=string.split(out)
    for iFile in FileTarget:
      samples['DY-trigW']['name'].append(os.path.basename(iFile))

samples['DY-trigW-EMTF']  = {    'name': [ ],
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*effTrigW*veto_EMTFBug',
                 }

directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'
for DataSet in ['latino_DYJetsToLL_M-10to50','latino_DYJetsToLL_M-50__part']:
    fileCmd='ls '+directory+DataSet+'*'
    proc=subprocess.Popen(fileCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
    out, err = proc.communicate()
    FileTarget=string.split(out)
    for iFile in FileTarget:
      samples['DY-trigW-EMTF']['name'].append(os.path.basename(iFile))

# .... SF+TrigW

samples['DY-trigW-SF']  = {    'name': [ ],
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*veto_EMTFBug',
                 }

directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'
for DataSet in ['latino_DYJetsToLL_M-10to50','latino_DYJetsToLL_M-50__part']:
    fileCmd='ls '+directory+DataSet+'*'
    proc=subprocess.Popen(fileCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
    out, err = proc.communicate()
    FileTarget=string.split(out)
    for iFile in FileTarget:
      samples['DY-trigW-SF']['name'].append(os.path.basename(iFile))

###### Top #######

samples['top'] = {   'name': [ ],          
                           #'latino_ST_tW_antitop.root',
                           #'latino_ST_tW_top.root'
                       'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*veto_EMTFBug',    #   weight/cut 
                      }

directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'
for DataSet in ['latino_TTTo2L2Nu__part']:
    fileCmd='ls '+directory+DataSet+'*'
    proc=subprocess.Popen(fileCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
    out, err = proc.communicate()
    FileTarget=string.split(out)
    for iFile in FileTarget:
      samples['top']['name'].append(os.path.basename(iFile))

###### WW ########
             
samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'nllW*baseW*puW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*veto_EMTFBug',          
                  }



#samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      ##'weights': ['abs(nllW)'] ,           
                      ##'weights': ['1.000'] ,           
                      #'isData': ['0'],                            
                  #}



## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%



#samples['Vg']  = {    'name': ['latino_Wg_MADGRAPHMLM.root'],      
                      #'weight' : 'puW63mb*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*GEN_weight_SM/abs(GEN_weight_SM)\
                                  #* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 ##*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      #'weights': ['0.0684952181745'] ,           
                      ##'isData': ['0'],                            
                  #}



#samples['VgS']  = {    'name': [
                             #'latino_WgStarLNuEE.root', 
                             #'latino_WgStarLNuMuMu.root'
                             #],      
                      #'weight' : '1.4*puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      #'weights': ['1','1'] ,           
                  #}

## 
## Wg* scale factor is
##
## X.X  +/- X.X     in mumumu
## 1.4  +/- 0.4     in emumu
##
##





#samples['VZ']  = {    'name': [
                          ##'latino_WZ.root', 
                          #'latino_WZTo3LNu.root', 
                          ##'latino_ZZ.root', # ---> replaced by exclusive samples
                          #'latino_ZZTo2L2Nu.root',   # 
                          ##'latino_ZZTo2L2Q.root'
                          #'latino_WZTo2L2Q__part0.root',
                          #'latino_WZTo2L2Q__part1.root',
                          #'latino_WZTo2L2Q__part10.root',
                          #'latino_WZTo2L2Q__part11.root',
                          #'latino_WZTo2L2Q__part12.root',
                          #'latino_WZTo2L2Q__part13.root',
                          #'latino_WZTo2L2Q__part14.root',
                          #'latino_WZTo2L2Q__part15.root',
                          #'latino_WZTo2L2Q__part16.root',
                          #'latino_WZTo2L2Q__part17.root',
                          #'latino_WZTo2L2Q__part18.root',
                          #'latino_WZTo2L2Q__part19.root',
                          #'latino_WZTo2L2Q__part2.root',
                          #'latino_WZTo2L2Q__part20.root',
                          #'latino_WZTo2L2Q__part21.root',
                          #'latino_WZTo2L2Q__part22.root',
                          #'latino_WZTo2L2Q__part23.root',
                          #'latino_WZTo2L2Q__part24.root',
                          #'latino_WZTo2L2Q__part25.root',
                          #'latino_WZTo2L2Q__part26.root',
                          #'latino_WZTo2L2Q__part27.root',
                          #'latino_WZTo2L2Q__part28.root',
                          #'latino_WZTo2L2Q__part29.root',
                          #'latino_WZTo2L2Q__part3.root',
                          #'latino_WZTo2L2Q__part30.root',
                          #'latino_WZTo2L2Q__part31.root',
                          #'latino_WZTo2L2Q__part32.root',
                          #'latino_WZTo2L2Q__part33.root',
                          #'latino_WZTo2L2Q__part34.root',
                          #'latino_WZTo2L2Q__part35.root',
                          #'latino_WZTo2L2Q__part36.root',
                          #'latino_WZTo2L2Q__part37.root',
                          #'latino_WZTo2L2Q__part38.root',
                          #'latino_WZTo2L2Q__part39.root',
                          #'latino_WZTo2L2Q__part4.root',
                          #'latino_WZTo2L2Q__part40.root',
                          #'latino_WZTo2L2Q__part41.root',
                          #'latino_WZTo2L2Q__part42.root',
                          #'latino_WZTo2L2Q__part5.root',
                          #'latino_WZTo2L2Q__part6.root',
                          #'latino_WZTo2L2Q__part7.root',
                          #'latino_WZTo2L2Q__part8.root',
                          #'latino_WZTo2L2Q__part9.root',                          
                          ##
                          #'latino_ZZTo2L2Q__part0.root',
                          #'latino_ZZTo2L2Q__part1.root',
                          #'latino_ZZTo2L2Q__part2.root',
                          #'latino_ZZTo2L2Q__part3.root',
                          ##
                          ##'latino_ZZTo4L.root'
                         #], 
                      #'weight' : 'puW63mb*bPogSF*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weights': [
                          #'0.002214825',
                          ##
                          #'6.28902765388e-05',
                          ##
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',                          
                          ##
                          #'0.000329080664109',
                          #'0.000329080664109',
                          #'0.000329080664109',
                          #'0.000329080664109',
                          ##
                        #'',
                        #] ,           
                      ##'isData': ['0'],                            
                  #}



#samples['VVV'] = {    'name': [
                          #'latino_WZZ.root', 
                          #'latino_ZZZ.root',
                          #'latino_WWW.root',
                          #'latino_WWZ.root',
                          #],      
                      #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      ##'isData': ['0'],                            
                  #}


## Htautau
#samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
                                    #'latino_VBFHToTauTau_M125.root'
                                    ##'latino_HWminusJ_HToTauTau_M125.root',
                                    ##'latino_HWplusJ_HToTauTau_M125.root',
                                    ##'latino_HZJ_HToTauTau_M125.root'
                                    #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
                           #'weights': ['1', '1']
                                       ##, 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  #}



## HWW 

#samples['ggH_hww']  = {    'name': [
                               #'latino_GluGluHToWWTo2L2NuPowheg_M125.root'
                               #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  #}

#samples['qqH_hww']  = {    'name': [
                               ##'latino_VBFHToWWTo2L2Nu_M125.root'
                               #'latino_VBFHToWWTo2L2Nu_alternative_M125.root'
                               #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  #}

#samples['ggZH_hww']  = {    'name': [
                               #'latino_ggZH_HToWW_M125.root',
                               #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  #}


#samples['WH_hww']  = {    'name': [
                             #'latino_HWminusJ_HToWW_M125.root',
                             #'latino_HWplusJ_HToWW_M125.root'
                             #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}

#samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}



###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : 'veto_EMTFBug',
                       'weights' : [ ],
                       'isData': ['all'],                            
                  }

MyWeights={
           'MuonEG'         : ' trig_EleMu' ,
           'DoubleMuon'     : '!trig_EleMu &&  trig_DbleMu' ,
           'SingleMuon'     : '!trig_EleMu && !trig_DbleMu &&  trig_SnglMu' ,
           'DoubleEG'       : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu &&  trig_DbleEle' ,
           'SingleElectron' : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle' ,
          }

for Run in ['F'] :
  directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Feb2017_Run2016'+Run+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight/'
  for DataSet in ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']:
    fileCmd='ls '+directory+'*'+DataSet+'*'
    proc=subprocess.Popen(fileCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
    out, err = proc.communicate()
    FileTarget=string.split(out)
    for iFile in FileTarget:
      samples['DATA']['name'].append('###'+iFile)
      samples['DATA']['weights'].append(MyWeights[DataSet]) 
