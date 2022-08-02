#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>
#include <stdexcept>
#include <map>

#include <TMVA/Reader.h>
#include <TMVA/PyMethodBase.h>

#ifndef TMVAfillerOTFnew_HH
#define TMVAfillerOTFnew_HH

using namespace std;

class TMVAfillerOTFnew : public multidraw::TTreeFunction {
    public:
        TMVAfillerOTFnew(string variables_file, string xml_file); 
        TMVAfillerOTFnew(string variables_file, string xml_file, bool doKeras); 
 
        void init();
        void clearFloatMap(); 
  
        char const* getName() const override { 
            return "TMVAfillerOTFnew"; 
        }
        TTreeFunction* clone() const override { 
            return new TMVAfillerOTFnew(var_file, XMLfile, do_keras);
        }
    
        unsigned getNdata() override { return 1; }
        double evaluate(unsigned) override;
    
    protected:  
        ~TMVAfillerOTFnew();
        void bindTree_(multidraw::FunctionLibrary&) override;
    
        string XMLfile;
        string var_file;
        bool do_keras;
        vector<TString> variables;
        vector<TString> keys;
        //map<string, FloatArrayReader*> AReaderMap;
        //map<string, TTreeReaderArray*> AReaderMap;
 
        vector<TTreeReaderArray<float>*>  FReaders;
        vector<TTreeReaderArray<double>*> DReaders;
        map<TString, float> FloatMap;
        TMVA::Reader *reader = new TMVA::Reader();

        TTreeReaderArray<float>* MHlnjj_pt_ljj;
        TTreeReaderArray<float>* MHlnjj_pt_jj;
};

TMVAfillerOTFnew::TMVAfillerOTFnew(string variables_file, string xml_file): 
    TTreeFunction(), 
    var_file(variables_file),
    XMLfile(xml_file),
    do_keras(false) 
{
    init();
}


TMVAfillerOTFnew::TMVAfillerOTFnew(string variables_file, string xml_file, bool doKeras): 
    TTreeFunction(), 
    var_file(variables_file),
    XMLfile(xml_file),
    do_keras(doKeras) 
{
    init();
}

void
TMVAfillerOTFnew::init()
{
    cout << "Initializing " << endl;
    // Read variables from file, order is important!   
    string line;
    ifstream myfile (var_file);
    TString name;
    int f_idx = 0;
    int d_idx = 0;
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            TString Tline(line);
            if (Tline.EndsWith("/D")) {
                keys.push_back("D"+to_string(d_idx));
                name = Tline.ReplaceAll("/D", "");
                TTreeReaderArray<double>* dreader{};
                DReaders.push_back(dreader);
                d_idx++;
            } else {
                keys.push_back("F"+to_string(f_idx));
                name = Tline.ReplaceAll("/F", "");
                TTreeReaderArray<float>* freader{};
                FReaders.push_back(freader);
                f_idx++;
            }
            variables.push_back (name);
            float a = 0;
            FloatMap.insert ( pair<TString, float>(name,a));
        }
        myfile.close();
    }
    else cout << "Unable to open " << var_file << endl;

    // Book FloatArrayReader for each variable  
    cout << "Found variables: " << endl;
    //for (auto var: variables){
    for (unsigned int idx=0; idx < variables.size(); idx++){
        //string name(var);
        //FloatArrayReader *areader{};
        //float a = 0;
        //AReaderMap.insert ( pair<string, FloatArrayReader*>(name,areader));
        //AReaderMap.insert ( pair<string, TTreeReaderArray<float>*>(name,areader));
        //FloatMap.insert ( pair<string, float>(name,a));
        cout << variables[idx] << " " << keys[idx] << endl;
    }
}


double
TMVAfillerOTFnew::evaluate(unsigned)
{
    //cout << "Evaluating " << endl;
    //cout << "Variables: ";
    //vector<float> tmp;
    clearFloatMap();
    for (unsigned int idx=0; idx < variables.size(); idx++){
        TString name = variables[idx];
        TString key  = keys[idx];
        //cout << "Variable: " << name << endl;
        if (key.BeginsWith("D")) {
            string key_idx=key.ReplaceAll("D", "").Data();
            int d_idx = stoi(key_idx);
            FloatMap[name] = float(DReaders[d_idx]->At(0));
            //cout << " Double: " << DReaders[d_idx]->At(0) << ", same as? " << FloatMap[name] << endl;
        }
        if (key.BeginsWith("F")) {
            string key_idx=key.ReplaceAll("F", "").Data();
            int f_idx = stoi(key_idx);
            FloatMap[name] = float(FReaders[f_idx]->At(0));
            //cout << " Float: " << FReaders[f_idx]->At(0) << ", same as? " << FloatMap[name] << endl;
        }
    }

    //bool safe = true;
    //if (abs(MHlnjj_pt_ljj->At(0) - FloatMap["Test_pt_ljj"]) > 0.001) {
    //    cout << "True pt ljj: " << MHlnjj_pt_ljj->At(0) << ", Test pt ljj: " << FloatMap["Test_pt_ljj"] << endl;
    //    safe = false;
    //}
    //if (abs(MHlnjj_pt_jj->At(0) - FloatMap["Test_pt_jj"]) > 0.001) {
    //    cout << "True pt  jj: " << MHlnjj_pt_jj->At(0) << ", Test pt  jj: " << FloatMap["Test_pt_jj"] << endl;
    //    safe = false;
    //}





    //if (safe) {
    //    cout << "Safe" << endl;
    //}

    //for (auto var: variables){
    //    string name(var);
    //    FloatMap[name] = AReaderMap[name]->At(0);
    //    //cout << name << " = "<< FloatMap[name] << ", ";
    //    //tmp.push_back(FloatMap[name]);
    //}
    //cout << endl;
    //cout << "Evaluate MVA: " << reader->EvaluateMVA("BDT") << endl;
    //cout << "Evaluate MVA2: " << reader->EvaluateMVA(tmp, "BDT") << endl;
    //return reader->EvaluateMVA("BDT");
    if (do_keras){
        return reader->EvaluateMVA( "PyKeras");
    } else { 
        return reader->EvaluateMVA( "BDT");
    }
}

void
TMVAfillerOTFnew::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(MHlnjj_pt_ljj, "MHlnjj_pt_ljj");
    _library.bindBranch(MHlnjj_pt_jj, "MHlnjj_pt_jj");

    //cout << "Binding tree's " << endl;
    for (unsigned int idx=0; idx < variables.size(); idx++){
        TString name = variables[idx];
        TString key  = keys[idx];
        cout << "    " << name << " " << key << endl;
        if (key.BeginsWith("D")) {
            string key_idx=key.ReplaceAll("D", "").Data();
            int d_idx = stoi(key_idx);
            _library.bindBranch( DReaders[d_idx], name);
            reader->AddVariable( name, &FloatMap[name]);
        }
        if (key.BeginsWith("F")) {
            string key_idx=key.ReplaceAll("F", "").Data();
            int f_idx = stoi(key_idx);
            _library.bindBranch( FReaders[f_idx], name);
            reader->AddVariable( name, &FloatMap[name]);
        }
    }
    //cout << "Bound" << endl;


    //for (auto var: variables){
    //    //string name(var);

    //    _library.bindBranch(AReaderMap[name], var.c_str());
    //    reader->AddVariable( name, &FloatMap[name]);
    //    //reader->AddVariable( name, AReaderMap[name]->At(0));
    //}
   
    if (do_keras){
        TMVA::PyMethodBase::PyInitialize(); 
        reader->BookMVA( "PyKeras", XMLfile);
    } else { 
        reader->BookMVA( "BDT", XMLfile);
    }
}

void
TMVAfillerOTFnew::clearFloatMap(){
    map<TString, float>::iterator it;
    for (it = FloatMap.begin(); it != FloatMap.end(); it++) {
        it->second = 0.;
    }
}


TMVAfillerOTFnew::~TMVAfillerOTFnew(){
    for (auto Fre: FReaders){
        Fre=nullptr;
        //string name(var);
        //AReaderMap[name]=nullptr;
    }
    for (auto Dre: DReaders){
        Dre=nullptr;
        //string name(var);
        //AReaderMap[name]=nullptr;
    }
    MHlnjj_pt_ljj=nullptr;
    MHlnjj_pt_jj=nullptr;
}
#endif
