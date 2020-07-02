StartTime=$(date +%s)

cp nuisances.py nuisances_Boosted.py
cp nuisances.py nuisances_Resolved.py


#TEST
#mkShapesMulti.py --pycfg=configuration_Boosted.py --batchSplit=AsMuchAsPossible --treeName Events
#mkShapesMulti.py --pycfg=configuration_Resolved.py --batchSplit=AsMuchAsPossible --treeName Events

##ALL
mkShapesMulti.py --pycfg=configuration_Boosted.py --batchSplit=AsMuchAsPossible --doBatch --treeName Events
mkShapesMulti.py --pycfg=configuration_Resolved.py --batchSplit=AsMuchAsPossible --doBatch --treeName Events


#ONLY FINAL Variable

#mkShapesMulti.py --pycfg=configuration_Boosted_Final.py --batchSplit=AsMuchAsPossible --variablesFile=variables_Boosted_Final.py --doBatch --treeName Events 
#mkShapesMulti.py --pycfg=configuration_Resolved_Final.py --batchSplit=AsMuchAsPossible --variablesFile=variables_Resolved_Final.py --doBatch --treeName Events


EndTime=$(date +%s)
echo $EndTime
echo "runtime : $(($EndTime - $StartTime)) sec"
echo -e "JOBDIR:${PWD}
args=$@
runtime=$(($EndTime - $StartTime))
ScriptName=$BASH_SOURCE" | /bin/mailx -s "FINISHED JOB @ $HOSTNAME" $USER@cern.ch
