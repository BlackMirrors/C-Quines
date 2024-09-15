#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    string fullPath = __FILE__;

    size_t underscorePos = fullPath.find_last_of('_');
    size_t dotPos = fullPath.find_last_of('.');

    string number;
    if (underscorePos != string::npos && dotPos != string::npos && dotPos > underscorePos) {
        number = fullPath.substr(underscorePos + 1, dotPos - underscorePos - 1);
    }

    int index = stoi(number);
    if(index<=0) {return 1;}

    string filename = "Sully_" + to_string(index-1);
    string filenameWithExtension = filename + ".cpp";
    string filenameExe = filename + ".exe";


    ifstream inputFile(fullPath);
    ofstream myfile(filenameWithExtension,ios::trunc);
    myfile << inputFile.rdbuf();
    inputFile.close();
    myfile.close();

    string command = ".\\compiler\\pocketcpp\\MinGW\\bin\\g++.exe .\\" + filenameWithExtension + " -o "+ filename;

    if (system(command.c_str()) != 0) {
        cerr<<"Compilation failed!"<<endl;
        return 1;
    }

    if (system(filenameExe.c_str()) != 0) {
        cerr << "Execution failed!"<<endl;
        return 1;
    }

    return 0;
}
