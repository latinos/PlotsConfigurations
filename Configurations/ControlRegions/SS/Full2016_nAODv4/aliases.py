#aliases = {}

# imported from samples.py:
# samples

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

##############################

aliases['PromptGenLepMatch2l'] = {
  'expr': 'Alt$((nLepton>1)*Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1],0)',
  'samples': mc
}
