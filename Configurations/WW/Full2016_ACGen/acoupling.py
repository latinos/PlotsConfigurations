
acoupling = {}

# Basic definition

acoupling['sigName']       = 'WW_${iWeight}_aTGC'  # End name by a string to avoid problems
acoupling['launch_card']   = 'WWTolnulnu_01j_aTGC_lep_WWmass-0to400_4f_NLO_FXFX_reweight_card.dat'
acoupling['nOperators']    = 3
acoupling['operatorNames'] = ['CWWW','CW','CB']
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
     

# Retrieve scans from weights (Edit the ScanConfig, rest should be automatic, you can comment out some lines to suppress 1D, 2D or 3D)

acoupling['ScanConfig']  = {
                             '1D' : ['CWWW','CW','CB'],
                             '2D' : ['CWWW:CW','CWWW:CB','CW:CB'],
                             '3D' : ['CWWW:CW:CB'],
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



