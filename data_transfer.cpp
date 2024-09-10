#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
    string data;
    cout << "print data:" << endl;
    getline(cin, data);
    
    ofstream outFile("/Users/arsenystolbov/Desktop/3DGame/A/output.txt"); // change the output print
    
    if (outFile.is_open()) {
        outFile << data;
        outFile.close();
        cout << "Data written" << endl;
    } else {
        cout << "File is not opened, ERROR" << endl;
    }
    
    return 0;
}


