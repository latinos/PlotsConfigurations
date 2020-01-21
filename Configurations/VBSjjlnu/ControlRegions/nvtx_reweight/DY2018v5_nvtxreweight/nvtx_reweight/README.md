## Reproduce these weights

```
## configuration-dependent parameters
## samples = ggWW Vg top WW VVV DY VgS VZ
export NVTX_ROOTFILE_SOURCE=../../../check_jets_horns/DY2018v5/rootFile/plots_DY2018v5.root
export NVTX_DATADIR=./reweight_data/

# Zmm weights
python reweight_ratiodatamc.py \
  --file ${NVTX_ROOTFILE_SOURCE} \
  --output ${NVTX_DATADIR}reweight_ratiodatamc_Zmm.txt \
  --var nvtx --cat Zmm --samples ggWW Vg top WW VVV DY VgS VZ

python reweight_ratiofit.py \
  --input ${NVTX_DATADIR}reweight_ratiodatamc_Zmm.txt \
  --output ${NVTX_DATADIR}reweight_wrongnorm_Zmm.txt

python reweight_closure.py \
  --file ${NVTX_ROOTFILE_SOURCE} \
  --input_weight ${NVTX_DATADIR}reweight_wrongnorm_Zmm.txt \
  --output_norm ${NVTX_DATADIR}reweight_constscale_Zmm.txt \
  --var nvtx --cat Zmm --samples ggWW Vg top WW VVV DY VgS VZ

python reweight_ratiofit.py \
  --input ${NVTX_DATADIR}reweight_ratiodatamc_Zmm.txt --constscale ${NVTX_DATADIR}reweight_constscale_Zmm.txt \
  --output ${NVTX_DATADIR}reweight_wrongnorm_Zmm.txt --output_scaled ${NVTX_DATADIR}reweight_goodnorm_Zmm.txt

python reweight_closure.py \
  --file ${NVTX_ROOTFILE_SOURCE} \
  --input_weight ${NVTX_DATADIR}reweight_wrongnorm_Zmm.txt --input_weight_scaled ${NVTX_DATADIR}reweight_goodnorm_Zmm.txt \
  --var nvtx --cat Zmm --samples ggWW Vg top WW VVV DY VgS VZ

# Zee
python reweight_ratiodatamc.py \
  --file ${NVTX_ROOTFILE_SOURCE} \
  --output ${NVTX_DATADIR}reweight_ratiodatamc_Zee.txt \
  --var nvtx --cat Zee --samples ggWW Vg top WW VVV DY VgS VZ

python reweight_ratiofit.py \
  --input ${NVTX_DATADIR}reweight_ratiodatamc_Zee.txt \
  --output ${NVTX_DATADIR}reweight_wrongnorm_Zee.txt

python reweight_closure.py \
  --file ${NVTX_ROOTFILE_SOURCE} \
  --input_weight ${NVTX_DATADIR}reweight_wrongnorm_Zee.txt \
  --output_norm ${NVTX_DATADIR}reweight_constscale_Zee.txt \
  --var nvtx --cat Zee --samples ggWW Vg top WW VVV DY VgS VZ

# Zee closure Zmm
python reweight_closure.py \
  --file ${NVTX_ROOTFILE_SOURCE} \
  --input_weight ${NVTX_DATADIR}reweight_wrongnorm_Zmm.txt \
  --output_norm ${NVTX_DATADIR}reweight_constscale_Zmm.txt \
  --var nvtx --cat Zee --samples ggWW Vg top WW VVV DY VgS VZ

# some checks
python -i reweight_checkcats.py \
  --file ${NVTX_ROOTFILE_SOURCE} \
  --var nvtx --samples ggWW Vg top WW VVV DY VgS VZ

python -i reweight_checkfit.py \
  --input_ele ${NVTX_DATADIR}reweight_ratiodatamc_Zee.txt --input_mu ${NVTX_DATADIR}reweight_ratiodatamc_Zmm.txt
```