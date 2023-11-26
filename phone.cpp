#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    ifstream file("input.txt");
    string str;
    file >> str;

    ofstream output_file("output.txt");
    output_file << str;
    return 0;
}