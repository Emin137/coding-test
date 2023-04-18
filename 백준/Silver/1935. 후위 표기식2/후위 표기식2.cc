#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    string str;
    cin >> N >> str;
    double arr[26];
    for(int i=0; i<N; i++)
        cin >> arr[i];
    stack<double> s;
    for(auto &a : str)
    {
        if(a>= 'A' && a<= 'Z')
        {
            s.push(arr[a-'A']);
        }
        else
        {
            if(a == '*')
            {
                double num1,num2;
                num1 = s.top();
                s.pop();
                num2 = s.top();
                s.pop();
                s.push(num1*num2);
            }
            else if(a == '/')
            {
                double num1,num2;
                num1 = s.top();
                s.pop();
                num2 = s.top();
                s.pop();
                s.push(num2/num1);
            }
            else if(a == '+')
            {
                double num1,num2;
                num1 = s.top();
                s.pop();
                num2 = s.top();
                s.pop();
                s.push(num1+num2);
            }
            else
            {
                double num1,num2;
                num1 = s.top();
                s.pop();
                num2 = s.top();
                s.pop();
                s.push(num2-num1);
            }
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << s.top();
}
