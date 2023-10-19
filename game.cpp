#include <iostream>
#include <string>
#include <typeinfo>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    
    ifstream input_file("input.txt");
    string line;
    if (input_file.is_open()) {
        getline(input_file, line);
        input_file.close();
    } else {
        cout << "Unable to open input file" << endl;
    }
    stringstream ss(line);
    int num;
    ss >> num;
    string str_num = to_string(num) + '9';
    int j = (int)str_num[1] - (int)str_num[0];
    str_num = str_num + to_string(j);
    num = stoi(str_num);

    ofstream output_file("output.txt");
    if (output_file.is_open()) {
        output_file << num << endl;
        output_file.close();
    } else {
        cout << "Unable to open output file" << endl;
    }

    return 0;
}