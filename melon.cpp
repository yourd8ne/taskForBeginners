#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();
    string input;
    getline(cin, input);

    stringstream ss(input);
    int num;
    vector<int> arr;
    
    while(ss >> num){
        arr.push_back(num);
    }

    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i < N; ++i) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << min <<  ' ' << max << endl;
    return 0;
}