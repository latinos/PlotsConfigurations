## Reproduce these weights

```
## configuration-dependent parameters
## rootFilePath = ./data/plots_DY.root
## samples = Vg top WW DY VgS VZ

# Zmm weights
python -i reweight_variable.py --file ./data/plots_DY.root --var nvtx --cat Zmm --samples Vg top WW DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zmm.txt --output reweighting_Zmm_fit.txt
python -i reweight_variable_closure.py --file ./data/plots_DY.root --file_weight reweighting_Zmm_fit.txt \
  --var nvtx --cat Zmm --samples Vg top WW DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zmm.txt --output reweighting_Zmm_fit.txt
python -i reweight_variable_closure.py --file ./data/plots_DY.root --file_weight reweighting_Zmm_fit.txt \
  --var nvtx --cat Zmm --samples Vg top WW DY VgS VZ

# Zee weights
python -i reweight_variable.py --file ./data/plots_DY.root --var nvtx --cat Zee --samples Vg top WW DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zee.txt --output reweighting_Zee_fit.txt
python -i reweight_variable_closure.py --file ./data/plots_DY.root --file_weight reweighting_Zee_fit.txt \
  --var nvtx --cat Zee --samples Vg top WW DY VgS VZ

# Zmm weights on Zee
python -i reweight_variable_closure.py --file ./data/plots_DY.root --file_weight reweighting_Zmm_fit.txt \
  --var nvtx --cat Zee --samples Vg top WW DY VgS VZ

# some checks
python -i nvtx_zmm_zee.py --file ./data/plots_DY.root --var nvtx --samples Vg top WW DY VgS VZ
python -i fit_reweighting_check.py --input_ele output_reweighting_Zee.txt --input_mu output_reweighting_Zmm.txt
```
