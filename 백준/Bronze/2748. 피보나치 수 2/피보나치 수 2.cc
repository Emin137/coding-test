#include <iostream>

using namespace std;

long long Dp[90];

long long BottomUp(int n)
{
    Dp[1] = 1;
    Dp[2] = 1;
    for(int i=3;i<=n;i++)
        Dp[i] = Dp[i-1] + Dp[i-2];
    return Dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << BottomUp(n) << endl;
}
