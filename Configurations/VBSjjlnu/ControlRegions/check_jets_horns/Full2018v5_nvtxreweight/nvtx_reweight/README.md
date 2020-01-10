## Reproduce these weights

```
python reweight_variable.py --file ../../Full2018v5/rootFile/plots_DY2018v5.root --var nvtx --cat Zee --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zee.txt --output reweighting_Zee_fit_nofakes.txt
for i in `ls c1*`; do mv $i ${i/c1/ee}; done

python reweight_variable.py --file ../../Full2018v5/rootFile/plots_DY2018v5.root --var nvtx --cat Zmm --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zmm.txt --output reweighting_Zmm_fit_nofakes.txt
for i in `ls c1*`; do mv $i ${i/c1/mm}; done
```

### practical commands

(dario)

```
python -i reweight_variable.py --file ../../Full2018v5/rootFile/plots_DY2018v5.root --var nvtx --cat Zee --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zee.txt --output reweighting_Zee_fit.txt
python -i reweight_variable_closure.py --file ../../Full2018v5/rootFile/plots_DY2018v5.root --file_weight reweighting_Zee_fit.txt --var nvtx --cat Zee --samples ggWW Vg top WW VVV DY VgS VZ

python -i reweight_variable.py --file ../../Full2018v5/rootFile/plots_DY2018v5.root --var nvtx --cat Zmm --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zmm.txt --output reweighting_Zmm_fit.txt
python -i reweight_variable_closure.py --file ../../Full2018v5/rootFile/plots_DY2018v5.root --file_weight reweighting_Zmm_fit.txt --var nvtx --cat Zmm --samples ggWW Vg top WW VVV DY VgS VZ
```
