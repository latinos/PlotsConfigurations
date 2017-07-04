// vim: set sw=4 sts=4 fdm=marker ft=c et:

//Description     : Macro splitting fat file into parts
//Author          : Po-Hsun Chen (pohsun.chen.hep@gmail.com)
//Last Modified   : 07 Oct 2016 17:37 

//

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

#include "TFile.h"
#include "TTree.h"

class TreeSplitter {
    public:
        TreeSplitter();
        ~TreeSplitter();
        void setTreeName(std::string);
        void setIFile(std::string);
        void setOFile(std::string, std::string);
        void setCut(std::string);
        void split(int);
        std::vector<std::string> getOFiles();
        void reset();
        
        std::vector<std::string> testGet();

    private:
        std::string treeName_;
        std::string ifile_;
        std::string ofile_;
        std::string cut_;
        std::string ofileDir_;

        int nparts_;
        std::vector<std::string> ofiles_;
};

TreeSplitter::TreeSplitter(){
    this->reset();
};

void TreeSplitter::setTreeName(std::string treeName){
    this->treeName_ = treeName;
    return;
}

void TreeSplitter::setIFile(std::string ifile){
    this->ifile_ = ifile;
    return;
}

void TreeSplitter::setOFile(std::string ofileDir, std::string ofile){
    this->ofileDir_ = ofileDir;
    this->ofile_ = ofile;
    return;
}

void TreeSplitter::setCut(std::string cut){
    this->cut_ = cut;
    return;
}

void TreeSplitter::split(int nparts){
    this->nparts_ = nparts;
    printf("Splitting into %d parts.\n",nparts);

    // Do split here!
    TFile *ifile = new TFile(this->ifile_.c_str());
    TTree *origTree = (TTree*)ifile->Get(this->treeName_.c_str());
    TFile *tmpFile = new TFile("./tmpFiltered.root","RECREATE");
    TTree *itree = origTree->CopyTree(this->cut_.c_str());
    unsigned long int nentries = itree->GetEntries();
    if (nentries == 0){ return; }
    unsigned long int partSize = nentries%nparts == 0 ? nentries/nparts : ceil(nentries/nparts);
    unsigned long int startEntry = 0;
    printf("%ld entries in filtered tree.\n",nentries);
    for(int part=0; part < nparts; part++){
        string ofilePathName = TString::Format("%s/%s_part%03d.root",this->ofileDir_.c_str(),this->ofile_.c_str(),part).Data();
        TFile *ofile = new TFile(ofilePathName.c_str(),"RECREATE");
        TTree *otree = itree->CopyTree("","",partSize,startEntry);
        startEntry += partSize;
        otree->Write();
        ofile->Close();
        this->ofiles_.push_back(ofilePathName);
        printf("Splitting....\n");
    }
    printf("Splitting done.\n");
    ifile->Close();
    remove("./tmpFiltered.root");

    //
    return;
}

std::vector<std::string> TreeSplitter::getOFiles(){
    return this->ofiles_;
}

void TreeSplitter::reset(){
    this->treeName_ = "";
    this->ifile_ = "";
    this->ofile_ = "";
    this->cut_ = "";
    this->ofileDir_ = ".";
    nparts_ = 0;
    this->ofiles_.clear();
    return;
}

