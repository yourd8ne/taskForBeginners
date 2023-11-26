#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    int N, V, S;
    string str;
    cin >> N;
    vector<string> vec;
    string line;
    for(int i = 0; i <= N; ++i) {
        getline(cin, line);
        vec.push_back(line);
    }
    int max = 0;
    int tmp = 0;
    for(int i = 1; i <= N; ++i) {
        istringstream iss(vec[i]);
        int num1, num2;
        iss >> num1 >> num2;
        if(num2 == 1) {
            if (tmp < num1) {
                tmp = num1;
                max = i;
            }
        }
    }
    if(max == 0) 
        cout << -1;
    else cout << max;
    return 0;
}