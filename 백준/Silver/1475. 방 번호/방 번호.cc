#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> vec(10,0);
    for(auto a: str)
    {
         if(a == '6' || a == '9')
         {
             if(vec[6]>vec[9])
                 vec[9]++;
             else
                 vec[6]++;
         }
         else
         {
             vec[a-48]++;
         }
    }
    cout << *max_element(vec.begin(),vec.end());
}

