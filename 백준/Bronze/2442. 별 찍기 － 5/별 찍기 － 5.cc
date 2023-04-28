#include <bits/stdc++.h>
using namespace std;
int N;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    cin >> N;
    for(int i=0; i<N; i++) // Line
    {
        for(int j=N-i-1; j>0; j--) // Blink
            cout << ' ';
        for(int j=0; j<i*2+1; j++) // Star
            cout << '*';
        cout << '\n';
    }
}


