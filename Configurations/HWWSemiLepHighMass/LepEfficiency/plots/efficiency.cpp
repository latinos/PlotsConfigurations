#include <string>
#include <iostream>
#include <array>

#include "TFile.h"
#include "TList.h"
#include "TH1D.h"
#include "TLegend.h"

void efficiency()
{
    TH1::AddDirectory(kFALSE);
    string year = "2018";
    string title = "test efficiency ele "+year;
    string xlabel= "pT [GeV]";
    array<string, 3> arrayMX = {"200", "800", "3000"};


    // open root file from mkShape and get pointers to needed dirs
    string filename = string("../rootFile/plots_HM2l2n_")+year+".root";
    TFile file(filename.c_str());
    auto dir = dynamic_cast<TDirectoryFile*>(
        file.GetKey("tag_el")->ReadObj()
    );
    
    auto tagDir = dynamic_cast<TDirectoryFile*>(
        dir->GetKey("firstLeptonPt")->ReadObj()
    );
    auto probeDir = dynamic_cast<TDirectoryFile*>(
        dir->GetKey("firstLeptonPt_pass")->ReadObj()
    );

    auto c1 = new TCanvas("c1","c1",500,500);
    c1->cd();
    auto legend = new TLegend(0.6,0.1,0.9,0.3);
    // get pointers to the needed histograms for each used MX
    string saveFileName = string("histo_")+year+".root";
    TFile savefile(saveFileName.c_str(), "RECREATE");
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
        histQuotient->SetAxisRange(0., 90.,"X");
        histQuotient->GetXaxis()->SetTitle(xlabel.c_str());

        if (mass == "200") {
            histQuotient->SetLineColor(kRed);
            histQuotient->Draw("e");
        }
        else if (mass == "800") {
            histQuotient->SetLineColor(kBlue);
            histQuotient->Draw("same e");
        }
        else if (mass == "3000") {
            histQuotient->SetLineColor(kBlack);
            histQuotient->Draw("same e");
        }
        
        legend->AddEntry(histQuotient, (string("M ")+mass).c_str());
        
        savefile.cd();
        histQuotient->Write();
        savefile.Write();
    }
    legend->Draw();
    c1->SaveAs((title+".png").c_str());
}
