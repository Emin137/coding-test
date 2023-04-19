#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int idx=0, cnt=0;
    while(true)
    {
        idx = (int)str1.find(str2);
        if(idx == string::npos) break;
        str1 = str1.substr(idx+str2.size());
        cnt++;
    }
    cout << cnt;
}

