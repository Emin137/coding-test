#include <bits/stdc++.h>
using namespace std;
int B, result = 0;
string str;
int main(){
    cin >> str >> B;
    reverse(str.begin(), str.end());
    for(int i=0; i<str.size(); i++){
        if('0' <= str[i] && str[i] <= '9') result += (str[i] - '0') * pow(B, i);
        else result += (str[i] - 'A' + 10) * pow(B, i);
    }
    cout << result;
}