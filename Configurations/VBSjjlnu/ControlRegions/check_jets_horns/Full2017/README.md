
## nvtx scale factors

### step 1

```
mkshapes
mkshapes-hadd
```

### step 2

```
python reweight_variable.py --file ../path/plots_DY2017.root --var nvtx --cat Zee_jpt50 --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zee_jpt50.txt --output reweighting_Zee_jpt50_fit_nofakes.txt

python reweight_variable.py --file ../path/plots_DY2017.root --var nvtx --cat Zmm_jpt50 --samples ggWW Vg top WW VVV DY VgS VZ
python -i fit_reweighting.py --input output_reweighting_Zmm_jpt50.txt --output reweighting_Zmm_jpt50_fit_nofakes.txt
```

### step 3

```
mkshapes
mkshapes-hadd
```