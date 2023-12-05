import json
CLASS_NAME = "AddDNNScoresv4"
FILE_NAME = CLASS_NAME + ".cc"
#WEIGHTS_FILE_PATH = "hww_offshell_weights_five_cats_improvedW_FinalOfSept14.json"
#WEIGHTS_FILE_PATH = "hww_offshell_weights_six_cats_improvedW_UL_Nov2.json"
WEIGHTS_FILE_PATH = "hww_offshell_weights_six_cats_newMaxEvents_withPlots_UL_Nov13_NO_QGL.json"

#WEIGHTS_FILE_PATH = "hww_offshell_weights_five_cats_improvedW.json"
#WEIGHTS_FILE_PATH = "hww_offshell_weights_five_cats.json"
WEIGHTS_FILE = open(WEIGHTS_FILE_PATH, "r")
WEIGHTS_FILE_CONTENTS = WEIGHTS_FILE.read()
WEIGHTS = json.loads(WEIGHTS_FILE_CONTENTS)



contents = '#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h" \n' + \
           '#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h" \n' + \
           '#include "TSystem.h" \n' + \
           '#include "iostream" \n' + \
           '#include "vector" \n' + \
           '#include "TLorentzVector.h" \n' + \
           '#include "TMath.h" \n' + \
           '#include "TSystem.h" \n' + \
           '#include <map> \n' + \
           '#include "TString.h" \n' + \
           '#include <string.h> \n'

contents += 'class ' + CLASS_NAME + ' : public multidraw::TTreeFunction {  \n' + \
'	public: \n' + \
'		//Class Constructor  \n' + \
'		' + CLASS_NAME + '(char const* name); \n' + \
'		//Class Destructor  \n' + \
'		~' + CLASS_NAME + '() { \n' + \
'   		} \n' + \
'		//Functions from Multidraw namespace (TTreeFunction class) \n' + \
'		char const* getName() const override {return "' + CLASS_NAME + '"; } \n' + \
'		TTreeFunction* clone() const override {return new ' + CLASS_NAME + '(name_.c_str());} \n' + \
'		unsigned getNdata() override {return 1; } \n' + \
'		//This function will return the required value \n' + \
'		double evaluate(unsigned) override; \n' + \
' \n' + \
'	protected: \n' + \
'		void bindTree_(multidraw::FunctionLibrary&) override; \n' + \
' \n' + \
'		//name of the required ME \n' + \
'		std::string name_; \n' + \
' \n' + \
'		//Needed variables to select the events \n' + \
'		TTreeReaderValue<float> *mll{}; \n' + \
'               TTreeReaderValue<float> *dphill{}; \n' + \
'               TTreeReaderValue<float> *detall{}; \n' + \
'               TTreeReaderValue<float> *ptll{}; \n' + \
'               TTreeReaderValue<float> *drll{}; \n' + \
'               FloatArrayReader* Lepton_pt{}; \n' + \
'               IntArrayReader* CleanJet_jetIdx{}; \n' + \
'               FloatArrayReader* Jet_qgl{}; \n' + \
'               FloatArrayReader* Jet_btagDeepFlavB{}; \n' + \
'               TTreeReaderValue<float> *pt1{}; \n' + \
'               TTreeReaderValue<float> *pt2{}; \n' + \
'               TTreeReaderValue<float> *mth{}; \n' + \
'               TTreeReaderValue<float> *mjj{}; \n' + \
'               TTreeReaderValue<float> *detajj{}; \n' + \
'               TTreeReaderValue<float> *dphijj{}; \n' + \
'               TTreeReaderValue<float> *PuppiMET_pt{}; \n' + \
'               TTreeReaderValue<float> *dphillmet{}; \n' + \
'               TTreeReaderValue<float> *mcollWW{}; \n' + \
' \n' + \
'	private: \n' + \
'		Double_t LHCsqrts_= 13., mh_= 125.; \n' + \
' \n' + \
'}; \n'

contents += '	' + CLASS_NAME + '::' + CLASS_NAME + '(char const* name): \n' + \
'		TTreeFunction() \n' + \
'	{ \n' + \
'		name_ = name; \n' + \
'	} \n' + \
' \n' + \
'	double \n' + \
'	' + CLASS_NAME + '::evaluate(unsigned) \n' + \
'	{\n'

for layer_index in range(0, len(WEIGHTS)-2):
    contents += '            const float weight_'  + str(layer_index) + '[' +str(len(WEIGHTS["Layer_" + str(layer_index)])) + '][' + str(len(WEIGHTS["Layer_" + str(layer_index)]["Node_0"]["weights"])) +'] = {{'

    for i_node_number in range(0,len(WEIGHTS["Layer_" + str(layer_index)])):
        node_number = len(WEIGHTS["Layer_" + str(layer_index)]) - 1 - i_node_number
        for count, weight in enumerate(WEIGHTS["Layer_" + str(layer_index)]["Node_" + str(node_number)]["weights"]):
            if(count < len(WEIGHTS["Layer_" + str(layer_index)]["Node_" + str(node_number)]["weights"])-1):
                contents += str(weight) + ", "
            else:
                contents += str(weight)
        if(i_node_number < len(WEIGHTS["Layer_" + str(layer_index)])-1):
            contents += "}, \n                {"
        else:
            contents += "}"
    contents += "}; \n"
    contents += '            const double bias_'  + str(layer_index) + '[' +str(len(WEIGHTS["Layer_" + str(layer_index)])) + '] = {'
    for i_node_number in range(0,len(WEIGHTS["Layer_" + str(layer_index)])):
        node_number = len(WEIGHTS["Layer_" + str(layer_index)]) - 1 - i_node_number
        if(i_node_number < len(WEIGHTS["Layer_" + str(layer_index)])-1):
            contents += str(WEIGHTS["Layer_" + str(layer_index)]["Node_" + str(node_number)]["bias"]) + ", "
        else:
            contents += str(WEIGHTS["Layer_" + str(layer_index)]["Node_" + str(node_number)]["bias"])
    contents += '}; \n'

contents += '            const double var_means[' + str(len(WEIGHTS["Layer_0"]["Node_0"]["weights"])) + '] = {'
for i in range(0, len(WEIGHTS["Var_Means"])):
    if(i < len(WEIGHTS["Var_Means"])-1):
        contents+= str(WEIGHTS["Var_Means"][i])+', '
    else:
        contents+= str(WEIGHTS["Var_Means"][i])
contents += '};\n'

contents += '            const double var_std[' + str(len(WEIGHTS["Layer_0"]["Node_0"]["weights"])) + '] = {'
for i in range(0, len(WEIGHTS["Var_Std"])):
    if(i < len(WEIGHTS["Var_Std"])-1):
        contents+= str(WEIGHTS["Var_Std"][i])+', '
    else:
        contents+= str(WEIGHTS["Var_Std"][i])
contents += '};\n'

contents += '\n'
contents += '            float mll_var{*mll->Get()};\n'
contents += '            float dphill_var{*dphill->Get()};\n'
contents += '            float detall_var{*detall->Get()};\n'
contents += '            float ptll_var{*ptll->Get()};\n'
contents += '            float drll_var{*drll->Get()};\n'
contents += '            float pt1_var = Lepton_pt->At(0);\n'
contents += '            float pt2_var = Lepton_pt->At(1);\n'

contents += '            int jet1_idx = CleanJet_jetIdx->At(0);\n'
contents += '            int jet2_idx = CleanJet_jetIdx->At(1);\n'
contents += '            float jet1_qgl = Jet_qgl->At(jet1_idx);\n'
contents += '            float jet2_qgl = Jet_qgl->At(jet2_idx);\n'
contents += '            float jet1_btag = Jet_btagDeepFlavB->At(jet1_idx);\n'
contents += '            float jet2_btag = Jet_btagDeepFlavB->At(jet2_idx);\n'

contents += '            //float pt1_var{*pt1->Get()};\n'
contents += '            //float pt2_var{*pt2->Get()};\n'
contents += '            float mth_var{*mth->Get()};\n'
contents += '            float mjj_var{*mjj->Get()};\n'
contents += '            float detajj_var{*detajj->Get()};\n'
contents += '            float dphijj_var{*dphijj->Get()};\n'
contents += '            float PuppiMET_pt_var{*PuppiMET_pt->Get()};\n'
contents += '            float dphillmet_var{*dphillmet->Get()};\n'
contents += '            float mcollWW_var{*mcollWW->Get()};\n\n'

contents += '            float input_layer[' + str(len(WEIGHTS["Layer_0"]["Node_0"]["weights"])) + '] = { mll_var, dphill_var, detall_var, ptll_var, drll_var, pt1_var, pt2_var, mth_var, mjj_var, detajj_var, dphijj_var, PuppiMET_pt_var, dphillmet_var, mcollWW_var, jet1_btag, jet2_btag};\n'


contents += '            for (int index = 0; index < ' + str(len(WEIGHTS["Layer_0"]["Node_0"]["weights"])) + '; index = index + 1) { \n'
contents += '                input_layer[index] = (input_layer[index]-var_means[index])/var_std[index];'
contents += '            }\n'

for layer_index in range(0, len(WEIGHTS)-2):
    contents += '            float layer' + str(layer_index) + '[' + str(len(WEIGHTS["Layer_" + str(layer_index)])) + '] = { 0 };\n'
    contents += '            for (int next_index = 0; next_index < ' + str(len(WEIGHTS["Layer_" + str(layer_index)])) +'; next_index = next_index +1) { \n'
    contents += '                for (int last_index = 0; last_index < ' + str(len(WEIGHTS["Layer_" + str(layer_index)]["Node_0"]["weights"])) +'; last_index = last_index + 1) { \n'
    if(layer_index != 0):
        contents += '                    layer' + str(layer_index) + '[next_index] += weight_'  + str(layer_index) + '[next_index][last_index] * layer' + str(layer_index-1) + '[last_index]; \n'
    else:
        contents += '                    layer' + str(layer_index) + '[next_index] += weight_'  + str(layer_index) + '[next_index][last_index] * input_layer[last_index]; \n'
    contents += '                }\n'
    contents += '                layer' + str(layer_index) + '[next_index] += bias_'  + str(layer_index) + '[next_index]; \n'
    if(layer_index != len(WEIGHTS) - 1 - 2):
        contents += '                layer' + str(layer_index) + '[next_index] = layer' + str(layer_index) + '[next_index] > 0 ? layer' + str(layer_index) + '[next_index] : 0; // RELU \n'

    contents += '            }\n'


contents += '            float max_final_layer = layer' + str(len(WEIGHTS)-1 - 2) + '[0];\n'
contents += '            for (int index = 0; index < ' + str(len(WEIGHTS["Layer_" + str(len(WEIGHTS)-1 - 2)])) +'; index = index +1) { \n'
contents += '                if(layer' + str(len(WEIGHTS)-1-2) + '[index] > max_final_layer){\n'
contents += '                    max_final_layer = layer' + str(len(WEIGHTS)-1 - 2) + '[index];\n'
contents += '                }\n'
contents += '            }\n'

contents += '            float softmax_denom = 0; \n'
contents += '            for (int index = 0; index < ' + str(len(WEIGHTS["Layer_" + str(len(WEIGHTS)-1 -2)])) +'; index = index +1) { \n'
contents += '                softmax_denom += expf(layer' + str(len(WEIGHTS)-1 - 2) + '[index] - max_final_layer); \n'
contents += '            }\n'
contents += '            float softmax_output[' + str(len(WEIGHTS["Layer_" + str(len(WEIGHTS)-1 -2)])) + '] = { 0 }; \n'
contents += '            for (int index = 0; index < ' + str(len(WEIGHTS["Layer_" + str(len(WEIGHTS)-1-2)])) +'; index = index +1) { \n'
contents += '                softmax_output[index] = expf(layer' + str(len(WEIGHTS)-1 -2) + '[index] - max_final_layer - log(softmax_denom));\n'
contents += '            }\n'

contents += '            if(strcmp(name_.c_str(), "VBF_OFF") == 0) {\n                return (double) softmax_output[0];\n            }\n'
contents += '            if(strcmp(name_.c_str(), "VBF_ON") == 0) {\n                return (double) softmax_output[1];\n            }\n'
contents += '            else if(strcmp(name_.c_str(), "ggH_OFF") == 0) {\n                return (double) softmax_output[2];\n            }\n'
contents += '            else if(strcmp(name_.c_str(), "ggH_ON") == 0) {\n                return (double) softmax_output[3];\n            }\n'
contents += '            else if(strcmp(name_.c_str(), "top") == 0) {\n                return (double) softmax_output[4];\n            }\n'
contents += '            else if(strcmp(name_.c_str(), "WW") == 0) {\n                return (double) softmax_output[5];\n            }\n'
contents += '            else if(strcmp(name_.c_str(), "MAX") == 0) {\n'
contents += '                float max_index = 0;\n'
contents += '                float max_value = softmax_output[0];\n'
contents += '                for (int index = 1; index < 6; index = index +1) {\n'
contents += '                    if(softmax_output[index] > max_value){\n'
contents += '                        max_index = index;\n'
contents += '                        max_value = softmax_output[index];\n'
contents += '                    }\n'
contents += '                }\n'
contents += '                return (double) max_index;\n'
contents += '            }\n'
contents += '            return -1.0;'
contents += '\n\n'
contents += '	} \n' + \
'	void \n' + \
'	' + CLASS_NAME + '::bindTree_(multidraw::FunctionLibrary& _library) \n' + \
'	{ \n' + \
'		_library.bindBranch(mll, "mll"); \n' + \
'                _library.bindBranch(dphill, "dphill"); \n' + \
'                _library.bindBranch(detall, "detall"); \n' + \
'                _library.bindBranch(ptll, "ptll"); \n' + \
'                _library.bindBranch(drll, "drll"); \n' + \
'                _library.bindBranch(Lepton_pt, "Lepton_pt"); \n' + \
'                _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx"); \n' + \
'                _library.bindBranch(Jet_qgl, "Jet_qgl"); \n' + \
'                _library.bindBranch(Jet_btagDeepFlavB, "Jet_btagDeepFlavB"); \n' + \
'                _library.bindBranch(pt1, "pt1"); \n' + \
'                _library.bindBranch(pt2, "pt2"); \n' + \
'                _library.bindBranch(mth, "mth"); \n' + \
'                _library.bindBranch(mjj, "mjj"); \n' + \
'                _library.bindBranch(detajj, "detajj"); \n' + \
'                _library.bindBranch(dphijj, "dphijj"); \n' + \
'                _library.bindBranch(PuppiMET_pt, "PuppiMET_pt"); \n' + \
'                _library.bindBranch(dphillmet, "dphillmet"); \n' + \
'                _library.bindBranch(mcollWW, "mcollWW"); \n' + \
'	}\n'

with open(FILE_NAME, "w") as outfile:
    outfile.write(contents)

import ROOT
line = ".L ./" + FILE_NAME + "+"
ROOT.gROOT.ProcessLineSync(line)

   
