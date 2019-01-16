#aliases = {}

# imported from samples.py:
# samples

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

##############################

bWP='L'
#bWP='M'
#bWP='T'
bSF='bPogSF_CMVA'+bWP
#bSF='bPogSF_CSV'+bWP
#bSF='bPogSF_deepCSV'+bWP

#eleWP='cut_WP_Tight80X'
#eleWP='cut_WP_Tight80X_SS'
#eleWP='mva_80p_Iso2015'
#eleWP='mva_80p_Iso2016'
#eleWP='mva_90p_Iso2015'
eleWP='mva_90p_Iso2016'

muWP='cut_Tight80x'
