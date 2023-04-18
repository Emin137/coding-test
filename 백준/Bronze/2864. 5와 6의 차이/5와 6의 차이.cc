#include <iostream>

using namespace std;

int Min(string str1,string str2)
{
    for(auto &a:str1)
        if(a == '6')
            a='5';
    for(auto &a:str2)
        if(a == '6')
            a='5';
    return stoi(str1) + stoi(str2);
}
int Max(string str1,string str2)
{
    for(auto &a:str1)
        if(a == '5')
            a='6';
    for(auto &a:str2)
        if(a == '5')
            a='6';
    return stoi(str1) + stoi(str2);
}

int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    cout << Min(str1,str2) << ' ' << Max(str1,str2);
    
}
