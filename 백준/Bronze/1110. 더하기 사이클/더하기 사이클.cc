#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, result = 0;
    cin >> n;
    m=n;
    while(true){
        n = n%10 *10 + (n/10 + n%10)%10;
        result++;
        if(n==m) break;
    }
    cout << result;
}
