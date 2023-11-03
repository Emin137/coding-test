#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    cin >> n;
    priority_queue<int> pq;
    for(int i=0; i<n; i++)
    {
        int j;
        cin >> j;
        if(!j)
        {
            if(pq.empty())
                cout << "0\n";
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
            pq.push(j);
    }
}