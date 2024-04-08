#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n%i == 0) return false;
    return true;
}

int main(){
   int n, cnt = 0;
   cin >> n;
   string str, str2;
   while(true){
       str = to_string(n);
       str2 = str;
       reverse(str2.begin(),str2.end());
       if(isPrime(n) && str == str2)
           break;
       n++;
   }
   if(n==1) cout << 2;
   else
   cout << n;
}
