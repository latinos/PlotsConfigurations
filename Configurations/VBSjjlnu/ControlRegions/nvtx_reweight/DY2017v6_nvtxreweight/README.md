## nvtx scale factors

```
## configuration-dependent parameters
## rootFilePath = ../../Full2017v5/rootFile/plots_DY2017v5.root
## samples = ggWW Vg top WW VVV DY VgS VZ

# Zmm weights
python -i reweight_variable.py --file ../../Full2017v5/rootFile/plots_DY2017v5.root --var nvtx --cat Zmm --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zmm.txt --output reweighting_Zmm_fit.txt
python -i reweight_variable_closure.py --file ../../Full2017v5/rootFile/plots_DY2017v5.root --file_weight reweighting_Zmm_fit.txt \
  --var nvtx --cat Zmm --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zmm.txt --output reweighting_Zmm_fit.txt
python -i reweight_variable_closure.py --file ../../Full2017v5/rootFile/plots_DY2017v5.root --file_weight reweighting_Zmm_fit.txt \
  --var nvtx --cat Zmm --samples ggWW Vg top WW VVV DY VgS VZ

# Zee weights
python -i reweight_variable.py --file ../../Full2017v5/rootFile/plots_DY2017v5.root --var nvtx --cat Zee --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zee.txt --output reweighting_Zee_fit.txt
python -i reweight_variable_closure.py --file ../../Full2017v5/rootFile/plots_DY2017v5.root --file_weight reweighting_Zee_fit.txt \
  --var nvtx --cat Zee --samples ggWW Vg top WW VVV DY VgS VZ

# Zmm weights on Zee
python -i reweight_variable_closure.py --file ../../Full2017v5/rootFile/plots_DY2017v5.root --file_weight reweighting_Zmm_fit.txt \
  --var nvtx --cat Zee --samples ggWW Vg top WW VVV DY VgS VZ

# some checks
python -i nvtx_zmm_zee.py --file ../../Full2017v5/rootFile/plots_DY2017v5.root --var nvtx --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting_check.py --input_ele output_reweighting_Zee.txt --input_mu output_reweighting_Zmm.txt
```
