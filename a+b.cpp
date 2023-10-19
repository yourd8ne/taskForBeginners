#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream input_file("input.txt");
    string line;
    if (input_file.is_open()) {
        getline(input_file, line);
        input_file.close();
    } else {
        cout << "Unable to open input file" << endl;
    }
    stringstream ss(line);
    int num1, num2;
    ss >> num1 >> num2;
    int res = num1 + num2;

    ofstream output_file("output.txt");
    if (output_file.is_open()) {
        output_file << res << endl;
        output_file.close();
    } else {
        cout << "Unable to open output file" << endl;
    }
    return 0;
}
