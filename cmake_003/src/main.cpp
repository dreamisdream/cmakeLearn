#include "../ext/jsoncpp/inc/json.h"
#include <iostream>
#include <fstream>

using namespace std;
using namespace Json;

int main() 
{
    ifstream ifile("d://confwrite.json");
   
    Json::Value root;
    root["encoding"] = "utf-8";
    root["plug-ins"][0] = "c";
    root["plug-ins"][1] = "c++";
    root["plug-ins"][2] = "python";
    root["plug-ins"][3] = "lua";
    
    Json::Value partner;
    partner["name"] = "tony";
    partner["sex"] = "female";
    partner["age"] = 15;

    root["partner"] = partner;
    Json::FastWriter fw;
    cout << fw.write(root) << endl;
    
    ofstream ofs;
    ofs.open("confWirte.json");
    ofs.write(fw.write(root).c_str(), fw.write(root).size());
    ofs.close();
    return 0;
}