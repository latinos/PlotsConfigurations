#./fits.sh SampleTag input.root Period [nGoodVtx, sumPt, multiplicity]

batch=True
Era="MoriondV1"
#if [ ! -d ${outPutDir} ]; then
#  mkdir ${outPutDir}
#fi
outPutDir=${Era}
rm -rf ${outPutDir}.old
mv ${outPutDir} ${outPutDir}.old
mkdir ${outPutDir}

mode=nGoodVtx

scriptName="metXYshiftPara_${Era}.txt"
ftnalScriptName="metXYshiftPara_${Era}_ftnalPar.txt"
echo "# MetXYshift Parameters and Formula: num. of para. variables, type of para. variable: num. of para.">>$outPutDir/$scriptName
#echo "import FWCore.ParameterSet.Config as cms">>$outPutDir/$scriptName
#echo "multPhiCorr_${outPutDir} = cms.VPSet(">>$outPutDir/$scriptName

sampleName=Run2016BDouble
inputRoot="Profiles/MEtXYprofileL2looseRun2016B_PromptReco_DoubleMuon.root"
python metXYprofFit.py  --sampleName=$sampleName --input=$inputRoot  --outPutDir=$outPutDir  --mode=$mode --scriptName=$scriptName --funcX0='([0]*x)' --funcX1='([0]+[1]*x)' --funcY0='([0]*x)' --funcY1='([0]+[1]*x)' --fitRangeX0=0,8 --fitRangeX1=8,30  --fitRangeY0=0,8 --fitRangeY1=8,30 --rebin=2 --yZoomRange=-2,10 --xZoomRange=0,50 --batch=$isBatch 
sampleName=Run2016CDouble
inputRoot="Profiles/MEtXYprofileL2looseRun2016C_PromptReco_DoubleMuon.root"
python metXYprofFit.py  --sampleName=$sampleName --input=$inputRoot  --outPutDir=$outPutDir  --mode=$mode --scriptName=$scriptName --funcX0='([0]*x)' --funcX1='([0]+[1]*x)' --funcY0='([0]*x)' --funcY1='([0]+[1]*x)' --fitRangeX0=0,8 --fitRangeX1=8,30  --fitRangeY0=0,8 --fitRangeY1=8,30 --rebin=2 --yZoomRange=-2,10 --xZoomRange=0,50 --batch=$isBatch 
sampleName=Run2016DDouble
inputRoot="Profiles/MEtXYprofileL2looseRun2016D_PromptReco_DoubleMuon.root"
python metXYprofFit.py  --sampleName=$sampleName --input=$inputRoot  --outPutDir=$outPutDir  --mode=$mode --scriptName=$scriptName --funcX0='([0]*x)' --funcX1='([0]+[1]*x)' --funcY0='([0]*x)' --funcY1='([0]+[1]*x)' --fitRangeX0=0,8 --fitRangeX1=8,30  --fitRangeY0=0,8 --fitRangeY1=8,30 --rebin=2 --yZoomRange=-2,10 --xZoomRange=0,50 --batch=$isBatch 

sampleName=DY
inputRoot="Profiles/MEtXYprofileL2looseDYJetsToLL.root"
python metXYprofFit.py  --sampleName=$sampleName --input=$inputRoot  --outPutDir=$outPutDir  --mode=$mode --scriptName=$scriptName --funcX0='([0]*x)' --funcX1='([0]+[1]*x)' --funcY0='([0]*x)' --funcY1='([0]+[1]*x)' --fitRangeX0=0,8 --fitRangeX1=8,30 --fitRangeY0=0,8 --fitRangeY1=8,30  --rebin=2 --yZoomRange=-12,3 --xZoomRange=0,55 --batch=$isBatch 

#echo ")">>$outPutDir/$scriptName
echo "Outputs written to: $outPutDir/$scriptName"
echo "Outputs written to: $outPutDir/$ftnalScriptName"
cp $outPutDir/$scriptName ../../../../LatinoAnalysis/Gardener/python/data/met/
echo "Outputs copied to: ../../../../LatinoAnalysis/Gardener/python/data/met/"
cp $outPutDir/$ftnalScriptName ../../../../LatinoAnalysis/Gardener/python/data/met/
echo "Outputs copied to: ../../../../LatinoAnalysis/Gardener/python/data/met/"

#rm -rf plotAll 
#rm -rf plotAll_${Dir}_${ParaVar}_Zmumu
#mkdir plotAll
### plotAll.py --plotDir=Period --mode=[ngoodVertices, sumPt, multiplicity]
#python plotAll.py --plotDir=$Dir --mode=$ParaVar
#mv plotAll plotAll_${Dir}_${ParaVar}_Zmumu
#tar cvf plotAll_${Dir}_${ParaVar}_Zmumu.tar plotAll_${Dir}_${ParaVar}_Zmumu
#scp plotAll_${Dir}_${ParaVar}_Zmumu.tar lxplus.cern.ch:www/JetMET
