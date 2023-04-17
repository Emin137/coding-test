#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<char> s;
    string str;
    cin >> str;
    int count = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '(')
            s.push(str[i]);
        else
        {
            if(str[i-1] == '(')
            {
                s.pop();
                count+=s.size();
            }
            else
            {
                s.pop();
                count++;
            }
        }
    }
    
    cout << count;
}
