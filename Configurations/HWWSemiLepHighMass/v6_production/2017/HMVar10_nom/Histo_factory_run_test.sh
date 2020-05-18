StartTime=$(date +%s)


#mkShapesMulti.py --pycfg=configuration.py --batchSplit=AsMuchAsPossible --treeName Events
mkShapesMulti.py --pycfg=configuration_Boosted.py --batchSplit=AsMuchAsPossible --treeName Events
mkShapesMulti.py --pycfg=configuration_Resolved.py --batchSplit=AsMuchAsPossible --treeName Events
#cp -r rootFile_2017_SR rootFile_2017_SR_backup
#pushd rootFile_2017_SR_backup
#hadd plot.root *.root &> hadd.log&
#popd
#mkShapesMulti.py --pycfg=configuration_SR.py --batchSplit=AsMuchAsPossible --doHadd --treeName Events



EndTime=$(date +%s)
echo $EndTime
echo "runtime : $(($EndTime - $StartTime)) sec"
echo -e "JOBDIR:${PWD}
args=$@
runtime=$(($EndTime - $StartTime))
ScriptName=$BASH_SOURCE" | /bin/mailx -s "FINISHED JOB @ $HOSTNAME" $USER@cern.ch
