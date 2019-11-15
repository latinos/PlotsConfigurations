#include <string>
#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

#include "TFile.h"
#include "TList.h"
#include "TH1D.h"
#include "TLegend.h"

void efficiency()
{
    TH1::AddDirectory(kFALSE);
    string year = "2017";
    string title = "efficiency ele "+year;
    string xlabel= "pT [GeV]";
    array<string, 3> arrayMX = {"200", "800", "3000"};


    // open root file from mkShape and get pointers to needed dirs
    string filename = string("../rootFile/plots_HM2l2n_")+year+".root";
    TFile file(filename.c_str());
    auto dir = dynamic_cast<TDirectoryFile*>(
        file.GetKey("tag_el")->ReadObj()
    );
    
    auto tagDir = dynamic_cast<TDirectoryFile*>(
        dir->GetKey("secondLeptonPt_tag")->ReadObj()
    );
    auto probeDir = dynamic_cast<TDirectoryFile*>(
        dir->GetKey("secondLeptonPt_probe")->ReadObj()
    );

    auto c1 = new TCanvas("c1","c1",500,500);
    c1->cd();
    auto legend = new TLegend(0.6,0.1,0.9,0.3);
    // get pointers to the needed histograms for each used MX
    string saveFileName = string("histo_")+year+".root";
    TFile savefile(saveFileName.c_str(), "RECREATE");
    double linewidth = 9;
    double change = -4;
    for(auto mass:arrayMX) {
        string ggName = string("histo_ggHWW2l2nu_M")+mass;
        string qqName = string("histo_qqHWW2l2nu_M")+mass;
        
        auto histTagGG = dynamic_cast<TH1D*>(
            tagDir->GetKey(ggName.c_str())->ReadObj()
        );
        cout << endl << histTagGG->GetBinErrorLow(3) << "\t" << histTagGG->GetBinContent(3) << endl;
        auto histTagQQ = dynamic_cast<TH1D*>(
            tagDir->GetKey(qqName.c_str())->ReadObj()
        );

        auto histProbeGG = dynamic_cast<TH1D*>(
            probeDir->GetKey(ggName.c_str())->ReadObj()
        );
        auto histProbeQQ = dynamic_cast<TH1D*>(
            probeDir->GetKey(qqName.c_str())->ReadObj()
        );

        auto histTag   = dynamic_cast<TH1D*>(histTagGG->Clone());
        histTag->Add(histTagQQ);
        auto histProbe = dynamic_cast<TH1D*>(histProbeGG->Clone());
        histProbe->Add(histProbeQQ);

        // calculate efficiency per bin
        auto histQuotient = dynamic_cast<TH1D*>(histProbe->Clone());
        histQuotient->Divide(histTag);

        string histName = string("efficiency_")+year+"_M"+mass;
        histQuotient->SetNameTitle(histName.c_str(), title.c_str());
        histQuotient->SetStats(0);
        histQuotient->SetMinimum(0.75);
        histQuotient->SetMaximum(1.03);
	histQuotient->GetXaxis()->SetRangeUser(10., 140.);
        //histQuotient->GetXaxis()->SetLimits(10.+offset, 150.+offset);
        histQuotient->SetLineWidth(linewidth);
        
        histQuotient->GetXaxis()->SetTitle(xlabel.c_str());

        if (mass == "200") {
            histQuotient->SetLineColor(kGreen);
            
            histQuotient->Draw("e");
        }
        else if (mass == "800") {
            histQuotient->SetLineColor(kBlue);
            histQuotient->Draw("e same");
        }
        else if (mass == "3000") {
            histQuotient->SetLineColor(kRed);
            histQuotient->Draw("e same");
        }
        
        linewidth += change;
        change++;
        //offset += 5;
        legend->AddEntry(histQuotient, (string("M ")+mass).c_str());
        
        savefile.cd();
        histQuotient->Write();
        savefile.Write();
    }

    legend->Draw();
    string plotTitle = title+".png";
    replace(plotTitle.begin(), plotTitle.end(), ' ', '_');
    c1->SaveAs(plotTitle.c_str());
}
