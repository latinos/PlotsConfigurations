# I've checked that this alias does the same as this module:
# LatinoAnalysis/NanoGardener/python/modules/EmbeddedVeto.py
# The alias can be used for Phase 2, instead of the output from the module
# 
# Reminder on what it does: It returns 0 for events triggered by the ElMu trigger, 
# and where both leading leptons originate from Taus. These events, even if from
# non-DY events, are included in embedded samples. So they're supposed to be removed
# from other MC samples to avoid double counting.

aliases['EmbedVeto'] = {
  'expr': '!(nLepton>=2 && \
             Trigger_ElMu && \
            ((abs(Alt$(Lepton_pdgId[0],0))==11 && Electron_genPartFlav[Alt$(Lepton_electronIdx[0],0)]==15) || \
             (abs(Alt$(Lepton_pdgId[0],0))==13 && Muon_genPartFlav[Alt$(Lepton_muonIdx[0],0)]==15)) && \
            ((abs(Alt$(Lepton_pdgId[1],0))==11 && Electron_genPartFlav[Alt$(Lepton_electronIdx[1],0)]==15) || \
             (abs(Alt$(Lepton_pdgId[1],0))==13 && Muon_genPartFlav[Alt$(Lepton_muonIdx[1],0)]==15)))'
}
