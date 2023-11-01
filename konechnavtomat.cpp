#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;


int main(){
    ifstream input_file("input.txt");
    string line, line1;
    if (input_file.is_open()) {
        getline(input_file, line);
        //getline(input_file, line1);    
        input_file.close();
    } else {
        cout << "Unable to open input file" << endl;
    }
    int g, l;
    stringstream ss(line);
    ss >> g >> l;
    
    ofstream output_file("output.txt");
    if (output_file.is_open()) {
        output_file << g << ' '<< l << endl;
        output_file.close();
    } else {
        cout << "Unable to open output file" << endl;
    }

    return 0;
}