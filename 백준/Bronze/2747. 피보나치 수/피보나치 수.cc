#include <bits/stdc++.h>
using namespace std;
int N;
int Fibo[46];
void DP(int n)
{
    Fibo[n] = Fibo[n-1] + Fibo[n-2];
}
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    cin >> N;
    Fibo[0]=0;
    Fibo[1]=1;
    Fibo[2]=1;
    for(int i=3; i<=N; i++)
    {
        DP(i);
    }
    cout << Fibo[N];
}

