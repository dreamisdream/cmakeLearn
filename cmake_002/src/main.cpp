#include "../json/json.h"
#include <iostream>
#include <fstream>

using namespace std;
using namespace Json;

int main() 
{
    ifstream ifile("d://conf.json");
    Json::Reader reader;
    Json::Value value;
    if (reader.parse(ifile, value)) {
        // 获取serial 配置
        Json::Value arrayObj = value["serialConfig"];
        if (arrayObj.empty()) {
            cout << "serialConfig not find %s" << endl;
        } else {

            for (unsigned int i = 0; i < arrayObj.size(); i++) {
                cout << "address: " << arrayObj[i]["address"].asInt() << endl;
                cout << "funCode: " << arrayObj[i]["funCode"].asInt() << endl;
            }
        }

        // 获取tcpServer信息
        arrayObj = value["TcpServer"];
        if (arrayObj.empty()) {
            cout << "tcpserver no exist" << endl;
        } else {
            for (unsigned int i = 0; i < arrayObj.size(); i++) {
                cout << "ip: " << arrayObj[i]["ip"].asString().c_str() << endl;
                cout << "port: " << arrayObj[i]["port"].asInt() << endl;
            }
        }

        cout << "intervalTime" << value["intervalTime"].asInt() << endl;
    } else {
        cout << "para config failed!" << endl;
    }

    return 0;
}