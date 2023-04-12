#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    while(1)
    {
        string str;
        cin >> str;
        if(str == "0")
            break;
        int answer = 1;
        answer+= str.length();
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == '0')
                answer += 4;
            else if(str[i] == '1')
                answer += 2;
            else
                answer += 3;
        }
        cout << answer << endl;
        
    }
}
