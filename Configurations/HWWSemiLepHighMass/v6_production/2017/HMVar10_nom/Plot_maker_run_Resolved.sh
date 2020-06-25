StartTime=$(date +%s)

input=`ls rootFile*Resol*/hadd.root`

python SpanPlotCut.py Resolved

ListFlavor=(mu ele)
ListRegion=(CR SR)
for flv in ${ListFlavor[@]};do
    for rg in ${ListRegion[@]};do
	echo "${flv} , ${rg}"
	echo "mkPlot.py --pycfg=configuration_Resolved.py --inputFile=${input} --plotFile=plot_${flv}_${rg}.py --cutsFile=cuts_Resolved_${flv}_${rg}.py --outputDirPlots=plots_2017_Resolved_${flv}_${rg}"
	(mkPlot.py --pycfg=configuration_Resolved.py --inputFile=${input} --plotFile=plot_${flv}_${rg}.py --cutsFile=cuts_Resolved_${flv}_${rg}.py --outputDirPlots=plots_2017_Resolved_${flv}_${rg}&> Plot_maker_run_Resolved_${flv}_${rg}.log;echo "DONE" >> Plot_maker_run_Resolved_${flv}_${rg}.log)&
    done
done


EndTime=$(date +%s)
echo $EndTime
echo "runtime : $(($EndTime - $StartTime)) sec"
echo -e "JOBDIR:${PWD}
args=$@
runtime=$(($EndTime - $StartTime))
ScriptName=$BASH_SOURCE" | /bin/mailx -s "FINISHED JOB @ $HOSTNAME" $USER@cern.ch



