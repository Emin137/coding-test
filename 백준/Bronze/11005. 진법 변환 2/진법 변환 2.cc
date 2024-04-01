#include <bits/stdc++.h>
using namespace std;
int N, B;
string to_binary(int x){
    string y="";
    while(x>0){
        if(x%2 == 1) y = '1' + y;
        else y = '0' + y;
        x>>=1;
    }
    return y;
}
int main() {
    cin >> N >> B;
    string str = "";

    while (N > 0) {
        if (N % B > 9) str = (char)('A' + N % B - 10) + str;
        else str = (char)('0' + N % B) + str;
        N /= B;
    }
    cout << str;
}