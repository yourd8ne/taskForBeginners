#include <iostream>

using namespace std;

int main(){
    int n;
    string s = "27182818284590452353602875";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << s[i];
        if(i=0) cout << '.';

    }
    if(s[n+1] > '4') cout << char(s[n] + 1);
    else cout << s[n];
    cout << endl;
    return 0;
}