#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    vector<int> v;
    cin >> n >> m;
    for(int i=n; i<=m; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j*j == i)
                v.push_back(i);
        }
    }
    if(v.empty())
        cout << "-1";
    else
    {
        int result = 0;
        for(auto &a : v)
            result += a;
        cout << result << "\n" << *min_element(v.begin(),v.end());
    }
}
