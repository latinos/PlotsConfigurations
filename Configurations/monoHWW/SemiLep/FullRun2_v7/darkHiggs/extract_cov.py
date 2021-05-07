import ROOT

ROOT.gStyle.SetOptStat(0)
root_file = ROOT.TFile('fitDiagnostics_b.root')
h2d_hist = root_file.Get('covariance_fit_b')

max_cov = -1.
max_cov_ix = -1
max_cov_iy = -1

min_cov = 1.
min_cov_ix = -1
min_cov_iy = -1

covar = []
pairs = []

for ix in range(1, h2d_hist.GetNbinsX()+1):
    x_label = h2d_hist.GetXaxis().GetBinLabel(ix)
    for iy in range(1, h2d_hist.GetNbinsY()+1):
        y_label = h2d_hist.GetYaxis().GetBinLabel(iy)
        val = h2d_hist.GetBinContent(ix, iy)
        if x_label == y_label: continue
        covar.append(val)
        pairs.append([x_label, y_label])
        if val > max_cov: 
            max_cov = val
            max_cov_ix = ix
            max_cov_iy = iy
        if val < min_cov: 
            min_cov = val
            min_cov_ix = ix
            min_cov_iy = iy

covar, pairs = (list(t) for t in zip(*sorted(zip(covar, pairs))))
for idx,cov in enumerate(covar):
    if idx%2: continue
    #print(idx)
    if abs(cov) < 0.5: continue
    print('Cov: '+str(cov)+', pair: '+str(pairs[idx]))


#max_str = 'Max cov: '+str(max_cov)+', in ('+str(max_cov_ix)+','+str(max_cov_iy)+')'
#max_str+= ' or ('+h2d_hist.GetXaxis().GetBinLabel(max_cov_ix)+','+h2d_hist.GetYaxis().GetBinLabel(max_cov_iy)+')'
#print(max_str)
#min_str = 'Min cov: '+str(min_cov)+', in ('+str(min_cov_ix)+','+str(min_cov_iy)+')'
#min_str+= ' or ('+h2d_hist.GetXaxis().GetBinLabel(min_cov_ix)+','+h2d_hist.GetYaxis().GetBinLabel(min_cov_iy)+')'
#print(min_str)

canvas = ROOT.TCanvas('test', 'test', 900, 800)
h2d_hist.Draw('colz')



canvas.SaveAs('extr_cov.png')
