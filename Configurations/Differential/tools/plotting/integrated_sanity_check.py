import sys
import ROOT

source = ROOT.TFile.Open(sys.argv[1])
fitresult = source.Get('fit_mdf')
pars = fitresult.floatParsFinal()

r = pars.find('r')

print r.getVal()

ip = 1
while True:
    f = pars.find('f_%d' % ip)
    if not f:
        break

    print '& %.2f & %.2f & ' % (f.getVal(), f.getVal() * r.getVal())
    ip += 1
