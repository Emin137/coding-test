#include <iostream>
#include <stack>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int topCount;
    cin >> topCount;
    stack<pair<int,int>> tops;
    for(int i=0; i<topCount; i++)
    {
        int input;
        cin >> input;
        while(!tops.empty())
        {
            if(tops.top().second > input)
            {
                cout << tops.top().first << ' ';
                break;
            }
            tops.pop();
        }
        if(tops.empty())
            cout << 0 << ' ';
        tops.push(make_pair(i+1,input));
    }
}
