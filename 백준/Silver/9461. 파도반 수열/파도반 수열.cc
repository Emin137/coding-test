#include <bits/stdc++.h>
#define MAX_N 101
using namespace std;

long long arr[MAX_N] = {0,1,1,1,};

long long DP(int N)
{
    if(arr[N] == 0)
        return DP(N-2) + DP(N-3);
    else
        return arr[N];
}

int main()
{
    int testCase, N;
    cin >> testCase;
    for(int i=4; i<MAX_N; i++)
        arr[i] = DP(i);
    for(int i=0; i<testCase; i++)
    {
        cin >> N;
        cout << arr[N] << "\n";
    }
}
