#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int cnt = 1;
        int modulo = 1%n;
        while(0!=modulo)
        {
            modulo = ((modulo*(10%n))%n+(1%n))%n;
            cnt++;
        }
        cout << cnt << endl;
    }
}

