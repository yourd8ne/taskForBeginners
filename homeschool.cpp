#include <iostream>

using namespace std;

int main(){
    string place;
    int num;
    cin >> place; cin >> num;
    if(num % 2 == 1 || place == "Home") cout << "Yes" << endl;
    else cout << "No" << endl;
    

    return 0;
}