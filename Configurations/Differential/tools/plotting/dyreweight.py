import sys
import ROOT

outpath = sys.argv[1]

formulas = {
    '2016': ('(8.61313e-01+x*4.46807e-03-1.52324e-05*x*x)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((x-11.)/5.51582)))*(x<140)+1.141996*(x>=140)', '(0.876979+x*(4.11598e-03)-(2.35520e-05)*x*x)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((x-14.1972)/10.1525)))*(x<140)+0.891188*(x>=140)'),
    '2017': ('((0.632927+0.0456956*x-0.00154485*x*x+2.64397e-05*x*x*x-2.19374e-07*x*x*x*x+6.99751e-10*x*x*x*x*x)*(x>0)*(x<100)+(1.41713-0.00165342*x)*(x>=100)*(x<300)+1*(x>=300))', '((0.623108 + 0.0722934*x - 0.00364918*x*x + 6.97227e-05*x*x*x - 4.52903e-07*x*x*x*x)*(x<45)*(x>0) + 1*(x>=45))'),
    '2018': ('((0.632927+0.0456956*x-0.00154485*x*x+2.64397e-05*x*x*x-2.19374e-07*x*x*x*x+6.99751e-10*x*x*x*x*x)*(x>0)*(x<100)+(1.41713-0.00165342*x)*(x>=100)*(x<300)+1*(x>=300))', '(0.87*(x<10)+(0.379119+0.099744*x-0.00487351*x**2+9.19509e-05*x**3-6.0212e-07*x**4)*(x>=10 && x<45)+(9.12137e-01+1.11957e-04*x-3.15325e-06*x**2-4.29708e-09*x**3+3.35791e-11*x**4)*(x>=45 && x<200) + 1*(x>200))')
}

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)

for year in ['2016', '2017', '2018']:
    lo = ROOT.TF1('lo', formulas[year][0], 0., 400.)
    nlo = ROOT.TF1('nlo', formulas[year][1], 0., 400.)
    
    lo.SetLineColor(ROOT.kRed)
    lo.SetLineWidth(2)
    nlo.SetLineColor(ROOT.kBlue)
    nlo.SetLineWidth(2)

    legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.9)
    legend.SetBorderSize(0)
    legend.SetFillStyle(0)

    legend.AddEntry(lo, 'm_{ll} < 50 GeV', 'L')
    legend.AddEntry(nlo, 'm_{ll} > 50 GeV', 'L')

    lo.Draw()
    nlo.Draw('same')
    legend.Draw()

    lo.SetMaximum(1.5)
    lo.SetMinimum(0.5)
    lo.GetXaxis().SetTitle('p_{T}^{ll} (GeV)')

    canvas.Print('%s/figures/background/dyreweight_%s.pdf' % (outpath, year))
