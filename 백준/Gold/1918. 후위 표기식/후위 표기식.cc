#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string input;
    cin >> input;
    stack<char> s;
    for(auto &a : input)
    {
        if(a>='A' && a<='Z')
            cout << a;
        else
        {
            if(a == '(')
                s.push(a);
            else if(a == '*' || a == '/')
            {
                while(!s.empty() && (s.top() == '*' || s.top() == '/'))
                {
                    cout << s.top();
                    s.pop();
                }
                s.push(a);
            }
            else if(a == '+' || a == '-')
            {
                while(!s.empty() && s.top() != '(')
                {
                    cout << s.top();
                    s.pop();
                }
                s.push(a);
            }
            else if(a == ')')
            {
                while(!s.empty() && s.top() != '(')
                {
                    cout << s.top();
                    s.pop();
                }
                s.pop();
            }
        }
    }
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
