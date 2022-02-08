#param_points = []
#for tanb in ['0p5', '1p0', '1p5', '2p0', '4p0', '8p0']:
#   param_points.append('sinp_0p35_tanb_'+tanb+'_mXd_10_MH3_300_MH4_150') 
#   param_points.append('sinp_0p35_tanb_'+tanb+'_mXd_10_MH3_300_MH4_250') 
#   param_points.append('sinp_0p7_tanb_'+tanb+'_mXd_10_MH3_300_MH4_150')  
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_200_MH4_150') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_400_MH4_150') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_400_MH4_250') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_400_MH4_350') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_500_MH4_150') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_500_MH4_250') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_500_MH4_350') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_600_MH4_150') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_600_MH4_250') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_600_MH4_350') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_700_MH4_250') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_700_MH4_350') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_800_MH4_250') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_800_MH4_350') 
#param_points.append('sinp_0p35_tanb_1p0_mXd_10_MH3_900_MH4_350') 
import copy

plot_file = 'plot_noSignal.py'
handle = open(plot_file, 'r')
exec(handle)
handle.close()

#### Signal

if os.path.exists(signal_file) :
    handle = open(signal_file,'r')
    exec(handle)
    handle.close()
else:
    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

col_idx = 0
for pp in signal:
    ppo  = pp.replace('p2HDMa_', '')
    sinp = ppo.split('sinp_')[-1].split('_')[0]
    tanb = ppo.split('tanb_')[-1].split('_')[0]
    mh3  = ppo.split('MH3_')[-1].split('_')[0]
    mh4  = ppo.split('MH4_')[-1].split('_')[0]

    #print('Looking at '+pp+', ppo="'+ppo+'", sinp="'+sinp+'", tanb="'+tanb+'", mh3="'+mh3+'", mh4="'+mh4+'"' )
 
    if not tanb == '1p0': continue
    if not sinp == '0p35': continue
    #if not mh3 == '300': continue
    if not mh4 == '250': continue

    #print('Accepted '+pp)
    plot[pp] = {
        'nameHR'   : 'mh3 '+mh3,
        'isSignal' : 2,
        'isData'   : 0,
        'color'    : 632+col_idx,   # kViolet + 1
        'samples'  : [pp],
    }
    groupPlot[pp] = copy.deepcopy(plot[pp])
    groupPlot[pp]['isSignal'] = 1
    col_idx += 1

