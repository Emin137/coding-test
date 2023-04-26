#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int E,S,M;
    int year = 1;
    cin >> E >> S >> M;
    while(true)
    {
        if((year-E)%15 == 0 && (year-S)%28 == 0 && (year-M)%19 == 0)
        {
            cout << year;
            break;
        }
        else
            year++;
    }
}
