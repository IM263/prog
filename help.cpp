#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5,6,7};
    vector<int>::iterator it;

    it = v.begin();
    it = v.end();

    int del = 4;

    remove_if(v.begin(), v.end(), [=](int i){
        if(i == del)
            return true;
        else
            return false;
    });

    for(auto val:v)
    {
        cout << val << endl;
    }
    return 0;
}
