#include <bits/stdc++.h>
using namespace std;
string input;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    cin >> input;
    for(int i=1; i<=input.length(); i++)
    {
        cout << input[i-1];
        if(i%10==0)
            cout << '\n';
    }
}

