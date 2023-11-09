#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char in;
    cin >> in;
    char letters[] = "qwertyuiopasdfghjklzxcvbnm";
    int size = strlen(letters);
    letters[size] = letters[0]; // делаем массив замкнутым
    for(int i = 0; i < size; i++)
    {
        if(letters[i] == in)
            cout << letters[i + 1] << endl;
    }
    return 0;
}
