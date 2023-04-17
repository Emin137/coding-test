#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N,P;
    cin >> N >> P;
    stack<int> s[8];
    int answer = 0;
    for(int i=0; i<N; i++)
    {
        int num1,num2;
        cin >> num1 >> num2;
        if(s[num1].empty())
        {
            s[num1].push(num2);
            answer++;
        }
        else
        {
            if(s[num1].top()<num2)
            {
                s[num1].push(num2);
                answer++;
            }
            else if(s[num1].top() >= num2)
            {
                if(s[num1].top()!=num2)
                {
                    while(s[num1].top()>num2)
                    {
                        s[num1].pop();
                        answer++;
                        if(s[num1].empty())
                        {
                            s[num1].push(num2);
                            answer++;
                            break;
                        }
                    }
                    if(s[num1].top()!=num2)
                    {
                        s[num1].push(num2);
                        answer++;
                    }
                    
                    
                }
            }
        }
    }
    cout << answer;
}
