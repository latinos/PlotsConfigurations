   # Introduction

This code can be used to compute the systematic uncertainty associated to the fakes production. 

Two different sources of systematics are currently studied: the statistical uncertainty (for electrons and muons) and the systematics associated to the Up and Down variations of the energy of the jet considered to calculate the fake and prompt rates.

   # Instructions

The table in the Analysis Note is usually obtained at the WW selection level, defined as usual in the cuts.py files. We are only running on Fakes and Data (even though this is not used in this case), but we do not consider any MC.

We are only interested in the number of yields so the only variable we draw is events in this case. We only plot the em in the 0 and 1j bin case, but additional cuts and regions can be added, as the script should be able to read them directly.

It is only necessary to run this configuration once, using the nuisances.py file that is going to change the weight associated to the fakes. Once the hadd done, the following commmand will create the table:

   ```python systematics.py    ```

An argument can be given if the name of the rootfile created does not match the usual rootFile/plots_SS.root name. 
