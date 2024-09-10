#include <bits/stdc++.h>
using namespace std;
#define MAX 91
int N;
long DP[MAX] = {0, 1, 1,};

void dp(int num){
    DP[num] = DP[num-1] + DP[num-2];
}


int main() {
    cin >> N;
    for (int i = 3; i <= N; i++) dp(i);
    cout << DP[N];
}