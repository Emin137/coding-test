#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,K,tmp;
    cin >> N >> K;
    queue<int> q;
    for(int i=1; i<= N; i++)
        q.push(i);
    cout << '<';
    while(q.size()>1)
    {
        for(int i=0;i<K-1;i++)
        {
            tmp = q.front();
            q.push(tmp);
            q.pop();
        }
        tmp = q.front();
        cout << tmp << ", ";
        q.pop();
    }
    tmp = q.front();
    cout << tmp << '>';
}

