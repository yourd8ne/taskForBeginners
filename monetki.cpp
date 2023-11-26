#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    ifstream file("input.txt");
    int n;
    file >> n;
    vector<int> data;

    string line;
    getline(file, line);
    int num_of_null = 0;
    int num_of_unit = 0;
    for (int i = 0; i < n; i++) {
        getline(file, line);
        int num = stoi(line);
        data.push_back(num);
        if(num == 0)
            num_of_null++;
        else num_of_unit++;
    }

    ofstream output_file("output.txt");
    if(num_of_null > num_of_unit)
        output_file << num_of_unit << endl;
    else output_file << num_of_null << endl;
    

    return 0;
}