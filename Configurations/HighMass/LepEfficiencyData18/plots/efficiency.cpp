#include <string>
#include <iostream>
#include <array>
#include <vector>
#include <map>

#include "TFile.h"
#include "TList.h"
#include "TH1D.h"
#include "TLegend.h"

using namespace std;

const string year = "2018";

TH1D* getHistogram(map<string, TDirectoryFile*> dirs, string name, string variable) {
    return dynamic_cast<TH1D*>(
            dynamic_cast<TDirectoryFile*>(
                dirs[name]->GetKey((string("probe_")+variable).c_str())->ReadObj()
            )->GetKey("histo_DATA")->ReadObj()
        );
}


void computeEfficiency(string particle, string variable, map<string, TDirectoryFile*> dirs, vector<string> baseNames, vector<string> passedNames) {

    string saveFileName = string("histo_")+particle+"_"+variable+"_"+year+".root";
    TFile savefile(saveFileName.c_str(), "RECREATE");

    vector<TH1D*> efficiencyHistograms;
    for (int i = 0; i < baseNames.size(); i++) {
        auto histAll = getHistogram(dirs, baseNames[i], variable);
        auto histPassed = getHistogram(dirs, passedNames[i], variable);

        auto histEfficiency = dynamic_cast<TH1D*>(histPassed->Clone());
        histEfficiency->Divide(histAll);

        string histName = baseNames[i]+"_"+variable;
        histEfficiency->SetNameTitle(histName.c_str(), histName.c_str());
        histEfficiency->SetMinimum(0.7);
        histEfficiency->SetMaximum(1.03);

        double lower, upper;
        if (variable=="pt" || variable=="pabs"){
            lower=0; upper=140;
        } else if (variable=="eta") {
            lower=-2.4; upper=2.4;
        }
        histEfficiency->GetXaxis()->SetRangeUser(lower, upper);

        efficiencyHistograms.push_back(histEfficiency);

        savefile.cd();
        histEfficiency->Write();
        savefile.Write();
    }
}



void efficiency()
{
    TH1::AddDirectory(kFALSE);
    string particle = "el";
    string title = "efficiency "+particle+" "+year;
    string xlabel= "pT [GeV]";
    array<string, 1> arrayMll = {"50-130, 130-500, 500-2000, 50-2000"};


    // open root file from mkShape and get pointers to needed dirs
    string filename = string("../rootFile/plots_DataLepEfficiency_")+year+".root";
    TFile file(filename.c_str());

    // collect dirs for all/passed probes of type "particle" and mass window mll
    map<string, TDirectoryFile*> dirs;
    vector<string> baseNames, passedNames;
    for (auto mll : arrayMll) {
        string baseName   = string("tag_")+particle+"_"+mll;
        string passedName = string("tag_")+particle+"_passed"+"_"+mll;

        baseNames.push_back(baseName);
        passedNames.push_back(passedName);

        dirs[baseName] = dynamic_cast<TDirectoryFile*>(
            file.GetKey(baseName.c_str())->ReadObj()
        );
        dirs[passedName] = dynamic_cast<TDirectoryFile*>(
            file.GetKey(passedName.c_str())->ReadObj()
        );
    }

    computeEfficiency(particle, "pt", dirs, baseNames, passedNames);
    computeEfficiency(particle, "eta", dirs, baseNames, passedNames);
    computeEfficiency(particle, "pabs", dirs, baseNames, passedNames);
}
