StartTime=$(date +%s)





input=`ls rootFile*Boost*/hadd.root`

#test
#mkPlot.py --pycfg=configuration_Boosted.py --inputFile=${input} --plotFile=plot.py --cutsFile=cuts_Boosted.py --outputDirPlots=plots_2017_Boosted
cp nuisances.py nuisances_Boosted.py
python SpanPlotCut.py Boosted

ListFlavor=(mu ele)
ListRegion=(CR SR)
for flv in ${ListFlavor[@]};do
    #continue
    for rg in ${ListRegion[@]};do
	echo "${flv} , ${rg}"
	echo "mkPlot.py --pycfg=configuration_Boosted.py --inputFile=${input} --plotFile=plot_${flv}_${rg}.py --cutsFile=cuts_Boosted_${flv}_${rg}.py --outputDirPlots=plots_2017_Boosted_${flv}_${rg}"
	(mkPlot.py --pycfg=configuration_Boosted.py --inputFile=${input} --plotFile=plot_${flv}_${rg}.py --cutsFile=cuts_Boosted_${flv}_${rg}.py --outputDirPlots=plots_2017_Boosted_${flv}_${rg} &> Plot_maker_run_Boosted_${flv}_${rg}.log;echo "DONE" >> Plot_maker_run_Boosted_${flv}_${rg}.log)&
    done
done

#rootFile_2017_Boosted_SKIM7_HMVar5
#mkPlot.py --pycfg=configuration_Boosted.py --inputFile=rootFile_2017_Boosted_SKIM7_HMVar5/hadd.root --plotFile=plot.py --outputDirPlots=plots_2017_Boosted ##CR
#mkPlot.py --pycfg=configuration_Boosted.py --inputFile=rootFile_2017_Boosted_SKIM7_HMVar5/hadd.root --plotFile=plot_blind.py --cutsFile=cuts_Boosted_blind.py --outputDirPlots=plots_2017_Boosted ##SR

#mkPlot.py --pycfg=configuration_Boosted.py --inputFile=rootFile_2017_Boosted_SKIM7_HMVar5/hadd.root --plotFile=plot_ele.py --cutsFile=cuts_Boosted_ele.py --outputDirPlots=plots_2017_Boosted_ele ## CR
#mkPlot.py --pycfg=configuration_Boosted.py --inputFile=rootFile_2017_Boosted_SKIM7_HMVar5/hadd.root --plotFile=plot_ele_blind.py --cutsFile=cuts_Boosted_ele_blind.py --outputDirPlots=plots_2017_Boosted_ele ##SR

#mkPlot.py --pycfg=configuration_Boosted.py --inputFile=rootFile_2017_Boosted_SKIM7_HMVar5/hadd.root --plotFile=plot_mu.py --cutsFile=cuts_Boosted_mu.py --outputDirPlots=plots_2017_Boosted_mu ##CR
#mkPlot.py --pycfg=configuration_Boosted.py --inputFile=rootFile_2017_Boosted_SKIM7_HMVar5/hadd.root --plotFile=plot_mu_blind.py --cutsFile=cuts_Boosted_mu_blind.py --outputDirPlots=plots_2017_Boosted_mu ##SR
#mkPlot.py --pycfg=configuration_Resolved.py --inputFile=rootFile_2017_Resolved_SKIM5/hadd.root --plotFile=plot.py --outputDirPlots=plots_2017_Resolved

##rm
#rm plot_mu.py plot_ele.py cuts_Boosted_mu.py cuts_Boosted_ele.py plot_blind.py plot_mu_blind.py plot_ele_blind.py cuts_Boosted_blind.py cuts_Boosted_mu_blind.py cuts_Boosted_ele_blind.py


EndTime=$(date +%s)
echo $EndTime
echo "runtime : $(($EndTime - $StartTime)) sec"
echo -e "JOBDIR:${PWD}
args=$@
runtime=$(($EndTime - $StartTime))
ScriptName=$BASH_SOURCE" | /bin/mailx -s "FINISHED JOB @ $HOSTNAME" $USER@cern.ch



