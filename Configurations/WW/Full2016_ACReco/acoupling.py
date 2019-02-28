
acoupling = {}

# Basic definition

acoupling['sigName']       = 'WW_${iWeight}_aTGC'  # End name by a string to avoid problems
acoupling['launch_card']   = 'WWTolnulnu_01j_aTGC_lep_WWmass-0to400_4f_NLO_FXFX_reweight_card.dat'
acoupling['nOperators']    = 3
acoupling['operatorNames'] = ['CWWW','CW','CB']
acoupling['operatorLatex'] = { 'CWWW':'c_{WWW}/#Lambda^{2}','CW':'c_{W}/#Lambda^{2}','CB':'c_{B}/#Lambda^{2}' }
acoupling['operatorUnit']  = { 'CWWW':'TeV^{-2}','CW':'TeV^{-2}','CB':'TeV^{-2}' }
acoupling['operatorRange'] = { 'CWWW' : [-8,8] , 'CW': [-15,15] , 'CB': [-30,30] }

acoupling['combsName']     = { 
                               'ww_0jet_em' : 'WW #rightarrow e#mu, 0 jet' , 
                               'ww_1jet_em' : 'WW #rightarrow e#mu, 1 jet' , 
                               'ww_01jet_em' : 'WW #rightarrow e#mu, 0+1 jet' ,
                               # ---
                               'ww_0jet_em_mll1' : 'WW #rightarrow e#mu, 0 jet (mll binning 1)' ,
                               'ww_1jet_em_mll1' : 'WW #rightarrow e#mu, 1 jet (mll binning 1)' ,
                               'ww_01jet_em_mll1' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 1)' ,
                               # ---
                               'ww_0jet_em_mll2' : 'WW #rightarrow e#mu, 0 jet (mll binning 2)' , 
                               'ww_1jet_em_mll2' : 'WW #rightarrow e#mu, 1 jet (mll binning 2)' , 
                               'ww_01jet_em_mll2' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 2)' ,
                               # ---
                               'ww_0jet_em_mll3' : 'WW #rightarrow e#mu, 0 jet (mll binning 3)' ,
                               'ww_1jet_em_mll3' : 'WW #rightarrow e#mu, 1 jet (mll binning 3)' ,
                               'ww_01jet_em_mll3' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 3)' ,
                               # ---
                               'ww_0jet_em_mll4' : 'WW #rightarrow e#mu, 0 jet (mll binning 4)' ,
                               'ww_1jet_em_mll4' : 'WW #rightarrow e#mu, 1 jet (mll binning 4)' ,
                               'ww_01jet_em_mll4' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 4)' ,
                               # ---
                               'ww_0jet_em_mll4_2' : 'WW #rightarrow e#mu, 0 jet (mll binning 4_2)' ,
                               'ww_1jet_em_mll4_2' : 'WW #rightarrow e#mu, 1 jet (mll binning 4_2)' ,
                               'ww_01jet_em_mll4_2' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 4_2)' ,
                               # ---
                               'ww_0jet_em_mll4_3' : 'WW #rightarrow e#mu, 0 jet (mll binning 4_3)' ,
                               'ww_1jet_em_mll4_3' : 'WW #rightarrow e#mu, 1 jet (mll binning 4_3)' ,
                               'ww_01jet_em_mll4_3' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 4_3)' ,
                               # ---
                               'ww_0jet_em_mll5' : 'WW #rightarrow e#mu, 0 jet (mll binning 5)' ,
                               'ww_1jet_em_mll5' : 'WW #rightarrow e#mu, 1 jet (mll binning 5)' ,
                               'ww_01jet_em_mll5' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 5)' ,
                               # ---
                               'ww_0jet_em_mll5_2' : 'WW #rightarrow e#mu, 0 jet (mll binning 5_2)' ,
                               'ww_1jet_em_mll5_2' : 'WW #rightarrow e#mu, 1 jet (mll binning 5_2)' ,
                               'ww_01jet_em_mll5_2' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 5_2)' ,
                               # ---
                               'ww_0jet_em_mll5_3' : 'WW #rightarrow e#mu, 0 jet (mll binning 5_3)' ,
                               'ww_1jet_em_mll5_3' : 'WW #rightarrow e#mu, 1 jet (mll binning 5_3)' ,
                               'ww_01jet_em_mll5_3' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 5_3)' ,
                               # ---
                               'ww_0jet_em_mll5_4' : 'WW #rightarrow e#mu, 0 jet' ,
                               'ww_1jet_em_mll5_4' : 'WW #rightarrow e#mu, 1 jet' ,
                               'ww_01jet_em_mll5_4' : 'WW #rightarrow e#mu, 0+1 jet' ,
                               # ---
                               'ww_0jet_em_mll6' : 'WW #rightarrow e#mu, 0 jet (mll binning 6)' ,
                               'ww_1jet_em_mll6' : 'WW #rightarrow e#mu, 1 jet (mll binning 6)' ,
                               'ww_01jet_em_mll6' : 'WW #rightarrow e#mu, 0+1 jet (mll binning 6)' ,
                             }


acoupling['operatorPlot']  = { 'CWWW' : [-8,8] , 'CW': [-15,15] , 'CB': [-30,30] }
acoupling['scanOrigin']    = ['3' , '4', '20' ]   # Declare it if one of the point is used as central value for the generation
acoupling['LheOffset']     = 112
acoupling['weights']       = {}

# Get LHE weights from launch card (This part depend on the structure of the launch card)

iWeight=-1
acVal=[]
iVal=0
for line in open(acoupling['launch_card'],'r').readlines():
   if 'launch' in line :
     acVal=[]
     iVal=0
     iWeight+=1
   if 'set' in line :
     iVal+=1 
     x=line.replace('\n','').split(" ")
     acVal.append(x[4])
   if iVal == 3:
     iLheWeight=iWeight+acoupling['LheOffset']
     acoupling['weights'][iWeight] = {}
     acoupling['weights'][iWeight]['operatorValues'] = acVal 
     acoupling['weights'][iWeight]['LheWeight']      = iLheWeight 

if 'scanOrigin' in acoupling :
  iWeight+=1
  iLheWeight=-1
  acoupling['weights'][iWeight] = {}
  acoupling['weights'][iWeight]['operatorValues'] = acoupling['scanOrigin']
  acoupling['weights'][iWeight]['LheWeight']      = iLheWeight 

# Plotting some values of the AC on top of distributions as signal
# Value(s) and Color

acoupling['PlotConfig']  = {
                            '1D' : { 
                                     'CWWW' : [3.2,632] ,
                                   # 'CW'   : [4.9,632] ,
                                   # 'CB'   : [15.0,632] ,
                                   } ,
                            '2D' : {
                            #        'CWWW:CB' : [3.0,15.0,632],
                                   }, 
                           }     

# Retrieve scans from weights (Edit the ScanConfig, rest should be automatic, you can comment out some lines to suppress 1D, 2D or 3D)

acoupling['ScanConfig']  = {
                            '1D' : ['CWWW','CW','CB'],
                            '2D' : ['CWWW:CW','CWWW:CB','CW:CB'],
                            #'1D' : ['CWWW'],
                            #'2D' : ['CWWW:CW'],
                            #'3D' : ['CWWW:CW:CB'],
                           }

# In case of missing point on the grid, we can take a neightbouring one with increased error bars (need to activate in mkACPlot as well):
#acoupling['ScansFix'] = { '3D' : { 'CWWW:CW:CB' : { '3:4:20' : '3:4:10' } } }

# ... Start filling (You should not need to edit below)
acoupling['Scans'] = {}

# ... 1D Scan
if '1D' in acoupling['ScanConfig'] and len(acoupling['ScanConfig']['1D']) > 0 :
  acoupling['Scans']['1D'] = {}
  for iScan in acoupling['ScanConfig']['1D']:
    acoupling['Scans']['1D'][iScan] = {}
    idx = acoupling['operatorNames'].index(iScan) 
    for iWeight in acoupling['weights']:
      checkVal=True
      for iOp in  range(acoupling['nOperators']):
        if not iOp == idx and not float(acoupling['weights'][iWeight]['operatorValues'][iOp]) == 0 : checkVal=False
      if checkVal: 
         acoupling['Scans']['1D'][iScan][acoupling['weights'][iWeight]['operatorValues'][idx]]=iWeight    

# ... 2D Scan
if '2D' in acoupling['ScanConfig'] and len(acoupling['ScanConfig']['2D']) > 0 :
  acoupling['Scans']['2D'] = {}
  for iScan in acoupling['ScanConfig']['2D']:
     acoupling['Scans']['2D'][iScan] = {}
     idx1= acoupling['operatorNames'].index(iScan.split(':')[0])
     idx2= acoupling['operatorNames'].index(iScan.split(':')[1])
     for iWeight in acoupling['weights']:
       checkVal=True
       for iOp in  range(acoupling['nOperators']):
         if not iOp == idx1 and not iOp == idx2 and not float(acoupling['weights'][iWeight]['operatorValues'][iOp]) == 0 : checkVal=False
       if checkVal:  
          acoupling['Scans']['2D'][iScan][acoupling['weights'][iWeight]['operatorValues'][idx1]+':'+acoupling['weights'][iWeight]['operatorValues'][idx2]]=iWeight

# ... 3D Scan
if '3D' in acoupling['ScanConfig'] and len(acoupling['ScanConfig']['3D']) > 0 :
  acoupling['Scans']['3D'] = {}
  for iScan in acoupling['ScanConfig']['3D']:
     acoupling['Scans']['3D'][iScan] = {}
     idx1= acoupling['operatorNames'].index(iScan.split(':')[0])
     idx2= acoupling['operatorNames'].index(iScan.split(':')[1])
     idx3= acoupling['operatorNames'].index(iScan.split(':')[2])
     for iWeight in acoupling['weights']:
       checkVal=True
       for iOp in  range(acoupling['nOperators']):
         if not iOp == idx1 and not iOp == idx2 and not iOp == idx3 and not float(acoupling['weights'][iWeight]['operatorValues'][iOp]) == 0 : checkVal=False
       if checkVal:
         acoupling['Scans']['3D'][iScan][acoupling['weights'][iWeight]['operatorValues'][idx1]+':'+acoupling['weights'][iWeight]['operatorValues'][idx2]+':'+acoupling['weights'][iWeight]['operatorValues'][idx3]]=iWeight



