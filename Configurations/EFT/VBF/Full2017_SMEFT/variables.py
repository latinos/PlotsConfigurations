# variables
variables['events']  = {   'name': '1',
                           'range' : (1,0,2),
                           'xaxis' : 'events',
                           'fold' : 3,
                           'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j', 'hww2l2v_13TeV_of2j_vbf', 'hww2l2v_13TeV_of2j_vh']
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

##################################

############ VBF KD ############## 
#DeclareKD3D('vbf_D3','D_{VBF D3}', 'kd_vbf',[0.0,0.75,1],'mll',[10,45,106.2],'D3',[0.0,0.1,0.3,0.7,0.9,1.0],
#['hww2l2v_13TeV_of2j_vbf_hipp','hww2l2v_13TeV_of2j_vbf_hinn','hww2l2v_13TeV_of2j_vbf_hipn','hww2l2v_13TeV_of2j_vbf_hinp'])

#D_{VBF hmhp}
DeclareKD4D('vbf_hmhp','D_{VBF SMEFT Multi-KD}','kd_vbf',[0.0,0.75,1],'mll',[10,45,106.2],'kd_vbf_hm',[0,0.1,0.9,1],'kd_vbf_hp',[0,0.1,0.9,1],
['hww2l2v_13TeV_of2j_vbf_hinn','hww2l2v_13TeV_of2j_vbf_hipp','hww2l2v_13TeV_of2j_vbf_hinp','hww2l2v_13TeV_of2j_vbf_hipn'])

#DeclareKD4D('vbf_hmhl','D_{VBF hmhl}','kd_vbf',[0.0,0.75,1],'mll',[10,45,106.2],'kd_vbf_hm',[0,0.1,0.9,1],'kd_vbf_hl',[0,0.1,0.9,1],
#['hww2l2v_13TeV_of2j_vbf_hinn','hww2l2v_13TeV_of2j_vbf_hipp','hww2l2v_13TeV_of2j_vbf_hinp','hww2l2v_13TeV_of2j_vbf_hipn'])

#################vh
'''
variables['vh_mllD3'] = {   'name': 'mll:D3',
                           'range': ([0,0.25,0.5,0.75,1],[10,45,106.2]),
                           'xaxis': 'mll:D3',
                           'fold': 3,
                           'cuts' : ['hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_of2j_vh_hip','hww2l2v_13TeV_of2j_vh_hin']
                        }
'''
#D_{VH hmhp}
DeclareKD3D('vh_hmhp','D_{VH SMEFT Multi-KD}','mll',[10,45,106.2],'kd_vh_hm',[0,0.25,0.75,1],'kd_vh_hp',[0,0.25,0.75,1],
['hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_of2j_vh_hip','hww2l2v_13TeV_of2j_vh_hin'])

#DeclareKD3D('vh_hmhl','D_{VH hmhl}','mll',[10,45,106.2],'kd_vh_hm',[0,0.25,0.75,1],'kd_vh_hl',[0,0.25,0.75,1],
#['hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_of2j_vh_hip','hww2l2v_13TeV_of2j_vh_hin'])

#DeclareKD4D('vh_hmhphl','D_{VH hmhphl}','mll',[10,45,106.2],'kd_vh_hm',[0,0.25,0.75,1],'kd_vh_hp',[0,0.25,0.75,1], 'kd_vh_hl',[0,0.25,0.75,1],
#['hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_of2j_vh_hip','hww2l2v_13TeV_of2j_vh_hin'])




