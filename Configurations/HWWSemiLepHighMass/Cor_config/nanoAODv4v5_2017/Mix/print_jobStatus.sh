#ls $HOME/Latino/workdir/jobs/
echo "Number of running jobs"
condor_q |grep salee |wc -l

echo "All number of jobs"
ls $HOME/Latino/workdir/jobs/mkShapes__simple2017 |grep .py|wc -l
echo "Number of done"
ls $HOME/Latino/workdir/jobs/mkShapes__simple2017 |grep .done|wc -l

#ls $HOME/Latino/workdir/jobs/NanoGardening__Fall2017_102X_nAODv4_Full2017v5/*.err
#grep Err  $HOME/Latino/workdir/jobs/NanoGardening__Fall2017_102X_nAODv4_Full2017v5/*.err
#grep Err  $HOME/Latino/workdir/jobs/NanoGardening__Run2017_102X_nAODv4_Full2017v5/*.err
#grep Err  $HOME/Latino/workdir/jobs/mkShapes__simple2017/*.err
#ls -ltrh  $HOME/Latino/workdir/jobs/mkShapes__simple2017/
#grep 1682825  $HOME/Latino/workdir/jobs/mkShapes__simple2017/*.log
vi  $HOME/Latino/workdir/jobs/mkShapes__simple2017/mkShapes__simple2017__JjSB__DATA77.err
#rm -rf $HOME/Latino/workdir/jobs/mkShapes__simple2017
#ls $HOME/Latino/workdir/jobs/
