#include <bits/stdc++.h>
using namespace std;

int x, y;

int main(){
    cin >> x >> y;
    int X = 0, Y = 0;
    for(int i=1; i<=x*y; i++){
       if(i%x == 0 && i%y == 0)
           cout << 3;
       else if(i%x == 0)
           cout << 2;
       else if(i%y == 0)
           cout << 1;
    }
    return 0;
}