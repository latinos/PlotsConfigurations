import os
#../2HDMa/FR_root/plots_FR_2018v7_ALL_DATA.*.root

prev_dir = '../2HDMa/FR_root/'
curr_dir = 'FR_root/'
for fil in os.listdir(prev_dir):
    if 'plots_FR_2018v7_ALL_DATA.' in fil:
        prev_path = prev_dir+fil
        curr_path = curr_dir+fil.replace('FR_2018v7', 'FR_HT_2018v7')
        os.system('cp '+prev_path+' '+curr_path)
