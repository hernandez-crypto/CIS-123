#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile;
    inputFile.open("chapter5_html.html");
    if(inputFile.fail()) exit(1);

    ofstream outputFile;

    string html;
    while(!inputFile.eof()) {
        inputFile >> html;
        
    }
}