import os
import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--root-file', action = 'store', type = str, dest = 'r_file', help = 'Input root file from MultiDimFit --algo grid')
parser.add_argument('--data-card', action = 'store', type = str, dest = 'd_file', help = 'Datacard txt to read nuisances')
parser.add_argument('--output'   , action = 'store', type = str, dest = 'output', default='gridPlots1D', help = 'Output path')
parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")
args = parser.parse_args()

d_file = open(args.d_file)
d_lines = d_file.readlines()
d_file.close()

# Get non stat nuisances
sep_line = 0
nuis_tmp_list = []
for line in d_lines:
    if '------' in line: 
        sep_line += 1
        continue
    if sep_line < 4: continue
    if 'autoMCStats' in line: continue
    splt_line = line.split(' ')
    nuis = splt_line[0]
    if not nuis in nuis_tmp_list: 
        nuis_tmp_list.append(nuis)
        print(nuis)

# Get stat nuisances + check other nuis
r_file = ROOT.TFile(args.r_file)
tree = r_file.Get('limit')
branches = tree.GetListOfBranches()
nuis_list = []
for branch in branches:
    name = branch.GetName()
    if not name.startswith('prop_'):
        if name in nuis_tmp_list or name == 'r': nuis_list.append(name)
        continue

    if not name in nuis_list:
        nuis_list.append(name)
        print(name)
r_file.Close()

print('Found nuisances: '+str(nuis_list))

if not os.path.isdir(args.output): os.mkdir(args.output)

## Method 1
#for nuis in nuis_list:
#    print(' -- plotting: '+nuis)
#    os.system('plot1DScan.py '+args.r_file+' --POI '+nuis+' -o '+args.output+'/scan1D_'+nuis)

## Method 2 
#r_file = ROOT.TFile(args.r_file)
#tree = r_file.Get('limit')
#
#canvas = ROOT.TCanvas('canvas', 'canvas', 500, 500)
#for nuis in nuis_list:
#    #tree.Draw('2*deltaNLL:'+nuis)
#    #canvas.Update()
#    #canvas.SaveAs(args.output+'/scan1D_'+nuis+'.png')
#    tree.Draw('2*deltaNLL:'+nuis+':r', '', 'prof cloz')
#    canvas.Update()
#    canvas.SaveAs(args.output+'/scan2D_'+nuis+'.png')
#r_file.Close()



# Method 3
r_file = ROOT.TFile(args.r_file)
tree = r_file.Get('limit')

tg2d_dict = {}
tg1d_dict = {}
for nuis in nuis_list:
    tg2d_dict[nuis] = ROOT.TGraph2D()
    tg1d_dict[nuis] = ROOT.TGraph()

idx = 0
for event in tree:
    r = event.r
    dNLL = 2*event.deltaNLL
    for nuis in nuis_list:
        var_val = getattr(event, nuis)
        tg2d_dict[nuis].SetPoint(idx,r,var_val,dNLL)
        tg1d_dict[nuis].SetPoint(idx,var_val,dNLL)
    idx+=1


canvas = ROOT.TCanvas('canvas', 'canvas', 500, 500)
canvas1d = ROOT.TCanvas('canvas1d', 'canvas1d', 500, 500)
for nuis in nuis_list:
    canvas.cd()
    #tg2d_dict[nuis].Draw('LINE')
    tg2d_dict[nuis].Draw('pcol')
    canvas.SetTheta(90.)
    canvas.SetPhi(0.)
    canvas.Update()
    canvas.SaveAs(args.output+'/scan2D_'+nuis+'.png')

    #canvas1d.cd()
    #tg1d_dict[nuis].Draw('LINE')
    #canvas1d.Update()
    #canvas1d.SaveAs(args.output+'/scan1D_'+nuis+'.png')
r_file.Close()

