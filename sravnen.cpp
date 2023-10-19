#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    ifstream input_file("input.txt");
    string line, line1;
    if (input_file.is_open()) {
        getline(input_file, line);
        getline(input_file, line1);    
        input_file.close();
    } else {
        cout << "Unable to open input file" << endl;
    }
    
    stringstream ss(line);
    stringstream ss1(line1);
    int num1, num2;
    char res;
    ss >> num1; ss1 >> num2;
    if(num1 > num2) res = '>';
    else if(num1 < num2) res = '<';
    else res = '=';

    ofstream output_file("output.txt");
    if (output_file.is_open()) {
        output_file << res << endl;
        output_file.close();
    } else {
        cout << "Unable to open output file" << endl;
    }
    return 0;
}