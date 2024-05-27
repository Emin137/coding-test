#include <bits/stdc++.h>
using namespace std;
long long N, fac = 1;
int main(){
    cin >> N;
    for(int i=2; i<=N; i++)
        fac*=i;
    cout << fac;
}