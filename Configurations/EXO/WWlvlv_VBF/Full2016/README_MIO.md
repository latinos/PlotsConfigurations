
Ricetta e Passi da Seguire:

1)
-Editare massesAndModels.py in base alle masse dopo aver controllato che i campioni di segnale sono presenti, [ p.e. (01-2017) qui:
eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel con nome latino_GluGluHToWWTo2L2Nu_JHUGen698*  ]

oppure per Full2016 in:
/eosBig/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/


-Scommentare tutti i tagli selezionati in cut.py (e/o aggiungerne di nuovi)

-Scegliere quali variabili produrre cn mkshape (p.e. meglio tutte, dopo eventualmente si possono non plottare)

-Mettere/Togliere i pesi in sample.py

-Controllare SEMPRE le nuisances!!!

2)Lanciare mkShape -Possibilità-

-Unico jobs live, col comando (consigliato SOLO per poche regioni cinematice e pochi campioni):

          		
    mkShapes.py --pycfg=configuration.py --inputDir=root://eoscms.cern.ch//eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel/   --doThreads=True

   -[Quest'ultimo comando si può lanciare anche  via script su lxplus, script_v2.sh]

-Diviso secondo la ricetta di Xavier. 

 Operazioni peliminari: 

         editare il file  "LatinoAnalysis/Tools/python/userConfig.py" con il path CORRETTO:
	 ***********************************************
	  cd LatinoAnalysis/Tools/python/	
	  cp userConfig_TEMPLATE.py userConfig.py
	  and edit the  userConfig.py to put a directory in your own user area. Mettere lo "/" alla fine del path!
               **aggiuta opzione --batchQueue=1nd altrimenti non mi sottomette

---------------------------------------------------------------------------------------------------------------------------------------------------
	   *****COMANDO*****	    	 

          #WWSEL
	  mkShapes.py --pycfg=configuration.py --inputDir=root://eoscms.cern.ch//eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel/  --doBatch=True --batchSplit=Cuts,Samples --batchQueue=8nh

	  #CON AsMuchAsPossible (WWSel)
	   mkShapes.py --pycfg=configuration.py --inputDir=root://eoscms.cern.ch//eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel/  --doBatch=True --batchSplit=AsMuchAsPossible --batchQueue=8nh
          
--------------------------------------------------------------------------------------------------------------------------------------------------------


------CONTROLLARE che non ci siano jobs morti con (se ci sono risottomettere eliminando  .done .err .out):                                                  
                                                  grep -r "error "
                                                  grep -r "root doesn't exists" 
                                                  grep -r "Permission denied"
 
---COntrollare le dimensioni dei root file con ls -lS risottomettere i file troppo piccoli...


   -Sommare tutti i .root:  mkShapes.py --pycfg=configuration.py   --inputDir=rootFile --doHadd=True --batchSplit=Cuts,Samples
                            mkShapes.py --pycfg=configuration.py   --inputDir=rootFile --doHadd=True --batchSplit=AsMuchAsPossible

   -Status dei jobs sottomessi mkBatch.py -s



3) mkPlot
-Per fare i plot delle regioni di ctrl commentare i tagli delle regione di segnale e lasciare in sotto plot.py "Data" "isBlind 0".
-Commentare/scommentare le variabile che non si vogliono plottare	

Comando:  mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_HWWhighMass2016.root 
          **N.B. in plot.py vengono plottati solo i sample con il label "grouPlots[XXX]", invece i "plot[]" sono necessari per il codice ma non vengono plottati.


4) mkDatacards
-Commentare/scommentare le variabile che non si vogliono plottare: solitamente si fa le datacards solo per events e per la variabile di interesse (mTi)
-Controllare che TUTTI i cuts siano scommentati in cut.py

Comando: mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_HWWhighMass2016.root 

4-Bis) Seguire òe istruzioni del Pruning 28June 2017 (A.Massironi slide https://indico.cern.ch/event/628839/contributions/2671229/attachments/1497414/2330676/Jul-26-postFitPlots_Massironi.pdf ) per eliminare le nuisances più piccole di un tot....

5) Combinare le datacard: editare ad hoc doWW.sh e lanciarlo (qui verranno eleminate le nuisance che danno errore "Bogus-Bogus").


6) Effettuare il fit:
   -Creare uno spazio di lavoro work_fit
   -Copiare ivi i file fitLSFv2.sh e subCombinev2.sh
   -Editare fitLSFv2.sh e lanciarlo live per un punto di massa e una regione per vedere quali errori Bogus-Bogus appaiono, lanciando p.e.:

         rm MORIOND2017.* Significance*  higgsCombineTest.Pr*  log.workspace* 
          ./fitLSFv2.sh 400 sig 0jet combined_datacards_2016
          oppure p.e.       	./fitLSFv2.sh 300 limit all combined_datacards_2016

   -Controllare in jobs/ il file .err e/o .out della nuisance che ha prodotto l'errore
   -Eliminare la nuisance che procura l'errore editando il file doWW.sh [1]
   -Ri-Lanciare lo scrit doWW.sh

   -Una volta che non sono più presenti errore lanciare  subCombinev2.sh per tutti i punti di massa

[1] 
P.S. A volte il bogus può essere causato da NUISANCE assenti solo per un particolare porcesso, quindi non va tolta completamente la nuisance ma solo la componente che da problemi. quindi in questo casa si deve editare direttamente la card e sostituire a "1.000" il "-" come p.e. il processo sotto: 
          
                ofVBF, process Vg, systematic CMS_scale_j
                ofVBF, process Vg, systematic	CMS_scale_met        


7) Plot per Significanza e Limite
Cambiare i path e montare eosBig
plotSignificance.py
plotLimit.py

Qui i plot vengono salvati in .png (da aggiungere il .eps). Il .png lo copi poi in www per vedere i plot dal web: http://lorusso.web.cern.ch/lorusso
NON in .jpg!

