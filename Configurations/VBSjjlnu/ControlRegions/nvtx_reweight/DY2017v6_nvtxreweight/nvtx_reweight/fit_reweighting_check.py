import ROOT as R 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("--input_ele", type=str, help="Input File Ratio for electrons")
parser.add_argument("--input_mu", type=str, help="Input File Ratio for muons")
args = parser.parse_args()

c1 = R.TCanvas( 'c1', 'rew', 0, 60, 800, 600 )
g_ele = R.TGraphErrors(args.input_ele)
g_mu = R.TGraphErrors(args.input_mu)

ranges=[(5,65)]

func_ele = R.TF1("wf_ele", "pol5", ranges[0][0], ranges[0][1])
func_mu  = R.TF1("wf_mu",  "pol5", ranges[0][0], ranges[0][1])
func_ele.SetLineColor(R.kRed)
func_mu.SetLineColor(R.kBlue)
g_ele.Fit("wf_ele", "+","", ranges[0][0], ranges[0][1])
g_mu.Fit( "wf_mu", "+","", ranges[0][0], ranges[0][1])
g_ele.GetYaxis().SetRangeUser(0,7)
g_mu.GetYaxis().SetRangeUser(0,7)
g_ele.Draw("APL")
g_mu.Draw("same")
line = R.TLine(0,1,100,1)
line.SetLineColor(R.kBlack)
line.Draw()

c1.Print("weights_compare_ele_mu.root", "root")