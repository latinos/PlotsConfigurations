import ROOT

n_file = 'darkHiggs_split_root/plots_darkHiggs_split_2018v7.root'
r_file = ROOT.TFile(n_file)

cut = 'InCh_SB'
var = 'dr_jj_V_njet'
 
# Collect samples to do 
samps = []
keys = r_file.Get(cut).Get(var).GetListOfKeys()
for skey in keys:
    name = skey.GetName()
    if not name.startswith('histo_'): continue
    if not name.endswith('Up') and not name.endswith('Down'):
        samp = name.replace('histo_', '')
        if 'darkHiggs' in samp: continue 
        if 'QCDscale' in samp: continue 
        if 'DATA' in samp: continue 
        #print(name, samp)
        if samp not in samps: 
            samps.append(samp)
samps.sort()
print('Found Samples: '+str(samps))

wjets_samps = [samp for samp in samps if 'Wjets' in samp]

histo_name_base = cut+'/'+var+'/histo_'

hist_wjet = {}
hist_rest = None
hist_data = r_file.Get(histo_name_base + 'DATA').Clone()

for samp in samps:
    if samp in wjets_samps:
        hist_wjet[samp] = r_file.Get(histo_name_base + samp).Clone()
    else:
        if hist_rest is None: hist_rest = r_file.Get(histo_name_base + samp).Clone()
        else: hist_rest.Add(r_file.Get(histo_name_base + samp))

n_bins = hist_data.GetNbinsX() 
wjet_sf = {}
for i_bin in range(n_bins+2):
    print('Bin '+str(i_bin))
    n_dat = hist_data.GetBinContent(i_bin)
    n_exp = hist_rest.GetBinContent(i_bin)
    for samp in wjets_samps:
        n_w = hist_wjet[samp].GetBinContent(i_bin)
        if n_w > 0.:
            sf = (n_dat - n_exp + 0.)/(n_w + 0.)
            print('-- Sample: '+samp+', SF = '+str(sf))
            wjet_sf[samp] = sf
        
print(wjet_sf)
