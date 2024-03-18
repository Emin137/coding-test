#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    if(n==3) cout << 0;
    else cout << n * (n-1) * (n-2) * (n-3) / 24;
}