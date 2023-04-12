# variables
variables['events']  = {   'name': '1',
                           'range' : (1,0,2),
                           'xaxis' : 'events',
                           'fold' : 3,
                           'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_of2j_Vh']

                       }

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and 
############## STD ###################
# kdmbinning = [0,0.5,0.75,1] # Main category 
# mllbinning = [10,35,55,90,210] # Subcategory
# kdbinning = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1] # In each kdm*mll bin plot KD_BSM (12 bins of KD_BSM) 
# nbins = 120  # 3 x 4 x 10
####################################

def DeclareKD3D(KDName,Xaxis, mainvar,mainbinning,sub1var,sub1binning,sub2var,sub2binning, Cuts):

 nbins =  (len(sub2binning) - 1)*(len(sub1binning) - 1)*(len(mainbinning) - 1)

 name = ''
 sub2bin = ['1'] # folding underflow -> always 1
 for isub2 in range(1, len(sub2binning) - 1):
    sub2bin.append('('+sub2var+' >= %1.2f)' % sub2binning[isub2])
 name += '+'.join(sub2bin)
 name += ' + %d*(' % (len(sub2binning) - 1)
 sub1bin = [] # 1-1 for first bin
 for isub1 in range(1, len(sub1binning) - 1):
    sub1bin.append('('+sub1var+' >= %1.2f)' % sub1binning[isub1])
 name += '+'.join(sub1bin)
 name += ')'
 name += ' + %d*(' % ((len(sub2binning) - 1)*(len(sub1binning) - 1))
 mainbin = [] # 1-1 for first bin
 for imain in range(1, len(mainbinning) - 1):
    mainbin.append('('+mainvar+' >= %1.2f)' % mainbinning[imain])
 name += '+'.join(mainbin)
 name += ') - 0.5'

 variables['kd3d_'+KDName+''] = {
    'name': name,
    'range': (nbins, 0., nbins),
    'xaxis': Xaxis, 
    'cuts' : Cuts
 }

def DeclareKD4D(KDName,Xaxis, mainvar,mainbinning,sub1var,sub1binning,sub2var,sub2binning,sub3var,sub3binning, Cuts):

 nbins =  (len(sub3binning) - 1)*(len(sub2binning) - 1)*(len(sub1binning) - 1)*(len(mainbinning) - 1)

 name = ''
 sub3bin = ['1'] # folding underflow -> always 1
 for isub3 in range(1, len(sub3binning) - 1):
    sub3bin.append('( '+sub3var+'>= %1.2f)' % sub3binning[isub3])
 name += '+'.join(sub3bin)
 name += ' + %d*(' % (len(sub3binning) - 1)
 sub2bin = [] # 1-1 for first bin
 for isub2 in range(1, len(sub2binning) - 1):
    sub2bin.append('('+sub2var+' >= %1.2f)' % sub2binning[isub2])
 name += '+'.join(sub2bin)
 name += ')'
 name += ' + %d*(' % ((len(sub3binning) - 1)*(len(sub2binning) - 1))
 sub1bin = [] # 1-1 for first bin
 for isub1 in range(1, len(sub1binning) - 1):
    sub1bin.append('('+sub1var+' >= %1.2f)' % sub1binning[isub1])
 name += '+'.join(sub1bin)
 name += ')'
 name += ' + %d*(' % ((len(sub3binning) - 1)*(len(sub2binning) - 1)*(len(sub1binning) - 1))
 mainbin = [] # 1-1 for first bin
 for imain in range(1, len(mainbinning) - 1):
    mainbin.append('('+mainvar+' >= %1.2f)' % mainbinning[imain])
 name += '+'.join(mainbin)
 name += ') - 0.5'

 variables['kd4d_'+KDName+''] = {
    'name': name,
    'range': (nbins, 0., nbins),
    'xaxis': Xaxis, 
    'cuts' : Cuts
 }


DeclareKD3D('Vh_hmhp','D_{V*H SMEFT Multi-KD}','mll',[10,45,106.2],'kd_Vh_hm',[0,0.8,1],'kd_Vh_hp',[0,0.8,1],
['hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hip','hww2l2v_13TeV_of2j_Vh_hin'])
