#include <iostream>

using namespace std;

int main(){
    int n;
    string e = "2.7182818284590452353602875";//25 после запятой
    cin >> n;
    e.erase(n, 25);
    cout << e << endl;
    return 0;
}