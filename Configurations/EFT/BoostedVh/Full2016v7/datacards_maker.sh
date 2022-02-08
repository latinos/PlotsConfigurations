mkdir datacards_$1_MCStatsOFF 
mkdir datacards_$1_MCStatsOFF_hlzg

mkDatacards.py -S ana/samples_hvv.py -C ana/cuts_hvv.py -V ana/variables_hvv.py --nuisancesFile=ana/nuisances_ana.py --inputFile rootFileJJH$1/plots_JJH$1_AC_MCStatsOFF.root --outputDirDatacard=datacards_$1_MCStatsOFF
mkDatacards.py -S ana/samples_hlzg.py -C ana/cuts_hlzg.py -V ana/variables_hlzg.py --nuisancesFile=ana/nuisances_ana.py --inputFile rootFileJJH$1/plots_JJH$1_AC_MCStatsOFF.root --outputDirDatacard=datacards_$1_MCStatsOFF_hlzg

mv datacards_$1_MCStatsOFF_hlzg/hww2l2v_13TeV_dytt_fj/H* datacards_$1_MCStatsOFF/hww2l2v_13TeV_dytt_fj/
mv datacards_$1_MCStatsOFF_hlzg/hww2l2v_13TeV_top_fj/H* datacards_$1_MCStatsOFF/hww2l2v_13TeV_top_fj/
mv datacards_$1_MCStatsOFF_hlzg/hww2l2v_13TeV_of2j_Vh/H* datacards_$1_MCStatsOFF/hww2l2v_13TeV_of2j_Vh/

ls datacards_$1_MCStatsOFF_hlzg/hww2l2v_13TeV*

