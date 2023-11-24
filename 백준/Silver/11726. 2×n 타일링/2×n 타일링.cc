#include <bits/stdc++.h>
using namespace std;
#define max 1001
int n;

int dp[max] = {0,1, 2};

void _dp(int i){
    dp[i] = (dp[i-1] + dp[i-2])%10007;
}

int main(){
    cin >> n;
    if(n<3)
        cout << dp[n];
    else{
        for(int i=3; i<=n; i++) _dp(i);
        cout << dp[n];
    }
}