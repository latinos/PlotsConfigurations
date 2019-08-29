import sys
import array
import ROOT

ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetTextFont(42)
ROOT.gStyle.SetLabelSize(0.05, 'X')
ROOT.gStyle.SetLabelSize(0.05, 'Y')
ROOT.gStyle.SetTitleSize(0.05, 'X')
ROOT.gStyle.SetTitleSize(0.05, 'Y')
ROOT.gStyle.SetTitleOffset(1.2, 'X')
ROOT.gStyle.SetTitleOffset(1.5, 'Y')
ROOT.gStyle.SetNdivisions(208, 'X')
ROOT.gStyle.SetFillStyle(0)

source_path = sys.argv[1] # hadded DeltaScan output
out = sys.argv[2]

source = ROOT.TFile.Open(source_path)
gcctree = source.Get('gcc')

adelta = array.array('d', [0.])
gcctree.SetBranchAddress('delta', adelta)
acorrs = []
while True:
    if not gcctree.GetBranch('c_%d' % len(acorrs)):
        break

    acorr = array.array('d', [0.])
    gcctree.SetBranchAddress('c_%d' % len(acorrs), acorr)
    acorrs.append(acorr)

gr = ROOT.TGraph(gcctree.GetEntries())
for ip in range(gcctree.GetEntries()):
    gcctree.GetEntry(ip)
    mean = sum(acorr[0] for acorr in acorrs) / len(acorrs)

    gr.SetPoint(ip, adelta[0], mean)

gr.SetMarkerStyle(8)
gr.SetMarkerSize(0.4)
gr.SetMarkerColor(ROOT.kBlack)
gr.SetLineColor(ROOT.kRed)
gr.SetLineWidth(2)

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
gr.Draw('APL')
gr.SetTitle('')
gr.GetXaxis().SetTitle('#delta')
gr.GetYaxis().SetTitle('mean global correlation coefficient')

canvas.Print(out)
