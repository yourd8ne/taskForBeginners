#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;


int main(){
    string nums;
    cin >> nums;
    nums += '1';
    int count = 0, max_count = 0;
    
    for(int i=0; i < nums.size(); i++)
    {
        if(nums[i] == '0')
            count++;
        else{
            if(count > max_count) max_count = count;
            count = 0;
        }

    }
    cout << max_count << endl;
}