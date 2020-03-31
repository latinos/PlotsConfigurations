#!/bins/sh

for year in 2016 2017 2018
do
    for cat in "res" "boost"
    do
            for fl in "ele" "mu"

        do
        echo -e "\n###  $year $fl $cat";
    python check_sb_dnn.py \
        -i ../Full${year}v6s5/datacards_fit_detajetpt_${year}/${cat}_sig_mjjincl_dnnhigh_${fl}/DNNoutput_high/shapes/histos_${cat}_sig_mjjincl_dnnhigh_${fl}.root \
        -s Wjets top DY Fake VBS -b 8 9 10;

        done
    done
done