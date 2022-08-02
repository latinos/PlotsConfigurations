#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>
#include <stdexcept>
#include <map>

#include <TMVA/Reader.h>

using namespace std;

class TMVAfillerOTF2 : public multidraw::TTreeFunction {
    public:
        TMVAfillerOTF2(string variables_file, string xml_file); 
        TMVAfillerOTF2(string variables_file, string xml_file, bool over_write_mjj); 
    
        char const* getName() const override { 
            return "TMVAfillerOTF2"; 
        }
        TTreeFunction* clone() const override { 
            return new TMVAfillerOTF2(var_file, XMLfile, OWmjj);
        }
    
        unsigned getNdata() override { return 1; }
        double evaluate(unsigned) override;
    
    protected:  
        ~TMVAfillerOTF2();
        void bindTree_(multidraw::FunctionLibrary&) override;
    
        string XMLfile;
        string var_file;
        bool OWmjj;
        vector<string> variables;
        map<string, FloatArrayReader*> AReaderMap;
        map<string, float> FloatMap;
        TMVA::Reader *reader = new TMVA::Reader();
};

TMVAfillerOTF2::TMVAfillerOTF2(string variables_file, string xml_file): 
    TTreeFunction(), 
    var_file(variables_file),
    XMLfile(xml_file),
    OWmjj(false)
{
    // Read variables from file, order is important!   
    string line;
    ifstream myfile (var_file);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            variables.push_back (line);
        }
        myfile.close();
    }
    else cout << "Unable to open " << var_file << endl;

    // Book FloatArrayReader for each variable  
    cout << "Found variables: " << endl;
    for (auto var: variables){
        string name(var);
        FloatArrayReader *areader{};
        float a = 0;
        AReaderMap.insert ( pair<string, FloatArrayReader*>(name,areader));
        FloatMap.insert ( pair<string, float>(name,a));
        cout << var << endl;
    }
}

TMVAfillerOTF2::TMVAfillerOTF2(string variables_file, string xml_file, bool over_write_mjj):
    TMVAfillerOTF2(variables_file, xml_file)
{
    this->OWmjj = over_write_mjj;
} 

double
TMVAfillerOTF2::evaluate(unsigned)
{
    //cout << "Variables: ";
    //vector<float> tmp;
    for (auto var: variables){
        string name(var);
        if ( OWmjj && name.find("MHlnjj_m_jj") != string::npos ) {
            //cout << "replace " << name << " value by " << 80. << endl; 
            FloatMap[name] = 85.;
        }
        else {
            FloatMap[name] = AReaderMap[name]->At(0);
        }
        //cout << name << " = "<< FloatMap[name] << ", ";
        //tmp.push_back(FloatMap[name]);
    }
    //cout << endl;
    //cout << "Evaluate MVA: " << reader->EvaluateMVA("BDT") << endl;
    //cout << "Evaluate MVA2: " << reader->EvaluateMVA(tmp, "BDT") << endl;
    return reader->EvaluateMVA("BDT");
}

void
TMVAfillerOTF2::bindTree_(multidraw::FunctionLibrary& _library)
{   
    for (auto var: variables){
        string name(var);
        _library.bindBranch(AReaderMap[name], var.c_str());
        reader->AddVariable( name, &FloatMap[name]);
        //reader->AddVariable( name, AReaderMap[name]->At(0));
    }
    
    reader->BookMVA( "BDT", XMLfile);
}

TMVAfillerOTF2::~TMVAfillerOTF2(){
    for (auto var: variables){
        string name(var);
        AReaderMap[name]=nullptr;
    }
}
