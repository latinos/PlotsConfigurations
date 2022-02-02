import ROOT
#../2HDMa/FR_NLOWjet/plot_ElCh_JetEt35_l1_etaVpt_ptel_fw_ewk_2D.root 

prev_dir = '../2HDMa/FR_NLOWjet/'
curr_dir = 'FR_HT/'
el_fr_file = 'plot_ElCh_JetEt35_l1_etaVpt_ptel_fw_ewk_2D.root'
mu_fr_file = 'plot_MuCh_JetEt35_l1_etaVpt_ptmu_fw_ewk_2D.root'

prev_n_file_el = prev_dir + el_fr_file
prev_n_file_mu = prev_dir + mu_fr_file
curr_n_file_el = curr_dir + el_fr_file
curr_n_file_mu = curr_dir + mu_fr_file

prev_r_file_el = ROOT.TFile(prev_n_file_el) 
prev_r_file_mu = ROOT.TFile(prev_n_file_mu)
curr_r_file_el = ROOT.TFile(curr_n_file_el)
curr_r_file_mu = ROOT.TFile(curr_n_file_mu)

prev_el_h = prev_r_file_el.Get('FR_pT_eta_EWKcorr')
prev_mu_h = prev_r_file_mu.Get('FR_pT_eta_EWKcorr')
curr_el_h = curr_r_file_el.Get('FR_pT_eta_EWKcorr')
curr_mu_h = curr_r_file_mu.Get('FR_pT_eta_EWKcorr')

print('Electron FR difference:')

diff_el_h = curr_el_h.Clone()
diff_el_h.Add(prev_el_h, -1.)
diff_el_h.Draw('COLZ')

raw_input('next')

print('Muon FR difference:')

diff_mu_h = curr_mu_h.Clone()
diff_mu_h.Add(prev_mu_h, -1.)
diff_mu_h.Draw('COLZ')

raw_input('next')

:def re_roll_2Dh(h1D, xbin, xmin, xmax, ybin, ymin, ymax, name=None, title=None, invert=False):
    if name is None:
        name_1D = h1D.GetName()
        name_2D = name_1D+'_2D_'+str(time.time()).replace('.', '_')
    else: name_2D = name
    if title is None:
        title_1D = h1D.GetTitle()
        title_2D = title_1D+' 2D'
    else: title_2D = title

    if not invert: h2D = ROOT.TH2D(name_2D, title_2D, xbin, xmin, xmax, ybin, ymin, ymax)
    else: h2D = ROOT.TH2D(name_2D, title_2D, ybin, ymin, ymax, xbin, xmin, xmax)

    xstep = (xmax - xmin + 0.)/(xbin + 0.)
    ystep = (ymax - ymin + 0.)/(ybin + 0.)
    for ib in range(h1D.GetNbinsX()):
        x = xmin + (ib//ybin)*xstep + xstep/2.
        y = ymin + (ib%ybin)*ystep  + ystep/2.
        if not invert: 
            h2D.SetBinContent(h2D.FindBin(x,y), h1D.GetBinContent(ib+1))
            h2D.SetBinError(h2D.FindBin(x,y), h1D.GetBinError(ib+1))
        else: 
            h2D.SetBinContent(h2D.FindBin(y,x), h1D.GetBinContent(ib+1))
            h2D.SetBinError(h2D.FindBin(y,x), h1D.GetBinError(ib+1))
    return h2D

def re_roll_2Dh_array(h1D, xbins, ybins, name=None, title=None, invert=False):
    x_array = array.array('d', xbins)
    y_array = array.array('d', ybins)
    if name is None:
        name_1D = h1D.GetName()
        name_2D = name_1D+'_2D_'+str(time.time()).replace('.', '_')
    else: name_2D = name
    if title is None:
        title_1D = h1D.GetTitle()
        title_2D = title_1D+' 2D'
    else: title_2D = title

    if not invert: h2D = ROOT.TH2D(name_2D, title_2D, len(x_array)-1, x_array, len(y_array)-1, y_array)
    else: h2D = ROOT.TH2D(name_2D, title_2D, len(y_array)-1, y_array, len(x_array)-1, x_array)

    for ib in range(h1D.GetNbinsX()):
        ix = ib//(len(ybins)-1)
        iy = ib%(len(ybins)-1)
        x = xbins[ix] + (xbins[ix+1] - xbins[ix])/2.
        y = ybins[iy] + (ybins[iy+1] - ybins[iy])/2.
        if not invert: 
            h2D.SetBinContent(h2D.FindBin(x,y), h1D.GetBinContent(ib+1))
            h2D.SetBinError(h2D.FindBin(x,y), h1D.GetBinError(ib+1))
        else: 
