YEAR=2017
mkdir -p Datacards_${YEAR}


DefineList=`python MassPoints/List_MX_common.py`
#echo ARR_MASS=$DefineList                                                                                                                     
ARR_MASS=$DefineList

inputBoost=`ls rootFile*Boost*/hadd.root`
inputResol=`ls rootFile*Resol*/hadd.root`

ARR_MASS=(1000)
for MX in ${ARR_MASS[@]};do
    mkDatacards.py --pycfg=configuration_Boosted.py --structureFile=MassPoints/structure_M${MX}.py --cutsFile=cuts_Boosted_mu_SR.py --inputFile=$inputBoost --outputDirDatacard=Datacards_${YEAR}/Datacard_M${MX} --samplesFile=MassPoints/samples_${YEAR}limit_M${MX}.py
    mkDatacards.py --pycfg=configuration_Boosted.py --structureFile=MassPoints/structure_M${MX}.py --cutsFile=cuts_Boosted_ele_SR.py --inputFile=$inputBoost --outputDirDatacard=Datacards_${YEAR}/Datacard_M${MX} --samplesFile=MassPoints/samples_${YEAR}limit_M${MX}.py

    mkDatacards.py --pycfg=configuration_Resolved.py --structureFile=MassPoints/structure_M${MX}.py --cutsFile=cuts_Resolved_mu_SR.py --inputFile=$inputResol --outputDirDatacard=Datacards_${YEAR}/Datacard_M${MX} --samplesFile=MassPoints/samples_${YEAR}limit_M${MX}.py
    mkDatacards.py --pycfg=configuration_Resolved.py --structureFile=MassPoints/structure_M${MX}.py --cutsFile=cuts_Resolved_ele_SR.py --inputFile=$inputResol --outputDirDatacard=Datacards_${YEAR}/Datacard_M${MX} --samplesFile=MassPoints/samples_${YEAR}limit_M${MX}.py
done


