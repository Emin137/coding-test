#include <bits/stdc++.h>
using namespace std;
long long dp[1000001];
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    for(int i=1; i<=1000001; i++)
    {
        for(int j=i; j<=1000001; j+=i)
            dp[j]+=i;
    }
    for(int i=2; i<=1000001; i++)
        dp[i]+=dp[i-1];
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
    
}

