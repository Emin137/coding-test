#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        string fcn;
        cin >> fcn;
        int cnt;
        cin >> cnt;
        deque<int> dq;
        string input;
        cin >> input;
        string temp = "";
        for(int i=0; i<input.length(); i++)
        {
            if(isdigit(input[i]))
                temp+=input[i];
            else
            {
                if(!temp.empty())
                {
                    dq.push_back(stoi(temp));
                    temp = "";
                }
            }
        }
        bool isError=false,isReverse=false;;
        for(auto &a : fcn)
        {
            if(a == 'R')
            {
                isReverse = !isReverse;
            }
            else
            {
                if(dq.empty())
                {
                    cout << "error" << endl;
                    isError = true;
                    break;
                }
                if(isReverse)
                    dq.pop_back();
                else
                    dq.pop_front();
            }
        }
        if(!isError)
        {
            cout << '[';
            if(isReverse)
            {
                for(auto it = dq.rbegin(); it!=dq.rend(); it++)
                {
                    if(it != dq.rend()-1)
                        cout << *it << ',';
                    else
                        cout << *it;
                }
            }
            else
            {
                for(auto it = dq.begin(); it!=dq.end(); it++)
                {
                    if(it != dq.end()-1)
                        cout << *it << ',';
                    else
                        cout << *it;
                }
            }
            cout << ']' << endl;
        }
    }
}
