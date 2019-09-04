import os
import sys
import ROOT

ROOT.gSystem.Load('libHiggsAnalysisCombinedLimit.so')
ROOT.gROOT.LoadMacro('%s/resample_mcstats.cc+' % os.path.dirname(os.path.realpath(__file__)))

# prefit workspace
workspace_source = ROOT.TFile.Open(sys.argv[1])
# postfit toy output
source = ROOT.TFile.Open(sys.argv[2])
# new postfit toy output
target = ROOT.TFile.Open(sys.argv[3], 'recreate')

toysdir_in = source.GetDirectory('toys')
toysdir_out = target.mkdir('toys')

workspace = workspace_source.Get('w')

model_config = workspace.genobj('ModelConfig')
mcstats_nuisances = workspace.set('group_autoMCStats')
mcstats_observables = ROOT.RooArgSet()

itr = mcstats_nuisances.iterator()
while True:
    nuis = itr.Next()
    if not nuis:
        break

    mcstats_observables.add(workspace.var(nuis.GetName() + '_In'))

ntoys = 0
while True:
    dataset = toysdir_in.Get('toy_%d' % (ntoys + 1))
    if not dataset:
        break

    ntoys += 1

    toysdir_out.cd()
    dataset.Write('toy_%d' % ntoys)

pdf = ROOT.makeNuisancePdf(model_config)
gen_mcstats = pdf.generate(mcstats_observables, ntoys)

for itoy in range(ntoys):
    snapshot = toysdir_in.Get('toy_%d_snapshot' % (itoy + 1))
    mcstats = gen_mcstats.get(itoy)

    itr = snapshot.iterator()
    while True:
        par = itr.Next()
        if not par:
            break

        pname = par.GetName()
        if pname.startswith('prop_bin') and pname.endswith('_In'):
            par.setVal(mcstats.find(pname).getVal())

    snapshot.Write('toy_%d_snapshot' % (itoy + 1))
