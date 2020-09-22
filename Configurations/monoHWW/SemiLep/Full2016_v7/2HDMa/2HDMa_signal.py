mA_list = ['1200', '600', '500', '400', '300', '200']

signal = {}
color = 632 
for idx,mA in enumerate(mA_list):
    signal['2HDMa_mA_'+mA+'_ma_150'] = {  
                                         'name'  : 
                                         nanoGetSampleFiles(mcDirectory,'2HDMa_SemiLep_MH3_'+mA+'_MH4_150_neg')  
                                         +nanoGetSampleFiles(mcDirectory,'2HDMa_SemiLep_MH3_'+mA+'_MH4_150_pos') ,  
                                         'weight': mcCommonWeight,
                                         'color' : 632+idx,
                                         'plot_name' : 'mA'+mA+' ma150',
                                        }

