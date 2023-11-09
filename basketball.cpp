#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    int matrix[4][2];
    ifstream input_file("input.txt");
    string line, line1, line2, line3;
    if (input_file.is_open()) {
        getline(input_file, line);
        getline(input_file, line1);
        getline(input_file, line2);
        getline(input_file, line3);
        input_file.close();
    } else {
        cout << "Unable to open input file" << endl;
    }
    istringstream ss(line);
    istringstream ss1(line1);
    istringstream ss2(line2);
    istringstream ss3(line3);
    int sum1, sum2 = 0;
    ss >> matrix[0][0] >> matrix[0][1];
    ss1 >> matrix[1][0] >> matrix[1][1];
    ss2 >> matrix[2][0] >> matrix[2][1];
    ss3 >> matrix[3][0] >> matrix[3][1];

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < 4; i++) {
        sum1 += matrix[i][0];
    }
    for (int j = 0; j < 4; j++) {
        sum2 += matrix[j][1];
    }
    cout << sum1 << " " << sum2 << endl;
    string res;
    if(sum1 > sum2)
        res = "1";
    else if (sum1 < sum2)
        res = "2";
    else res = "DRAW";
    
    ofstream output_file("output.txt");
    if (output_file.is_open()) {
        output_file << res << endl;
        output_file.close();
    } else {
        cout << "Unable to open output file" << endl;
    }
    return 0;
}