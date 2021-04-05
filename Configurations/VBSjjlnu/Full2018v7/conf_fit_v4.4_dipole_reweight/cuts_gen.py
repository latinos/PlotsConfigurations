# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '1.0'


############ 
## Signal
cuts["incl"] = "n_gen_lep == 1 && n_gen_jets >=2 && gen_mjj >= 100 "