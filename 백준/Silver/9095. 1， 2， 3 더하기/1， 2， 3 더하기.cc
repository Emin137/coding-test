#include <iostream>
#include <cstdlib>

using namespace std;

int dp[11];

int TopDown(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    
    return TopDown(n-1) + TopDown(n-2) + TopDown(n-3);
}

int BottomUp(int n)
{
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i <= n; i++)
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    return dp[n];
}

int main()
{
    int testCase;
    cin >> testCase;
    for(int i = 0; i < testCase; i++)
    {
        int input;
        cin >> input;
        cout << BottomUp(input) << endl;
    }
}
