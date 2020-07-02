
##--copy plot&cut file for each channel
cp plot.py plot_mu.py
cp plot.py plot_ele.py
cp cuts.py cuts_mu.py
cp cuts.py cuts_ele.py

source Plot_maker_run_ele.sh &> Plot_maker_run_ele.log&
source Plot_maker_run_mu.sh &> Plot_maker_run_mu.log&
source Plot_maker_run.sh &> Plot_maker_run.log&
