mZ_list = ['1500', '1200', '1000', '500', '300', '295', '200', '195']

signal = {}
for idx,mZ in enumerate(mZ_list):
    signal['darkHiggs_mhs_160_mx_150_mZp_'+mZ] = {   
        'name'  :   
        nanoGetSampleFiles(mcDirectory,'DarkHiggs_SemiLep_MZP_'+mZ+'_pos')  
        +nanoGetSampleFiles(mcDirectory,'DarkHiggs_SemiLep_MZP_'+mZ+'_neg') ,   
        'weight': mcCommonWeight,
        'color' : 632+idx,
        'plot_name' : 'mZ\' '+mZ,
    }  

