#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int result = 0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'C')
            result += 2;
        if(str[i] >= 'D' && str[i] <= 'F')
            result += 3;
        if(str[i] >= 'G' && str[i] <= 'I')
            result += 4;
        if(str[i] >= 'J' && str[i] <= 'L')
            result += 5;
        if(str[i] >= 'M' && str[i] <= 'O')
            result += 6;
        if(str[i] >= 'P' && str[i] <= 'S')
            result += 7;
        if(str[i] >= 'T' && str[i] <= 'V')
            result += 8;
        if(str[i] >= 'W' && str[i] <= 'Z')
            result += 9;
        result++;
            
    }
    cout << result;
}
