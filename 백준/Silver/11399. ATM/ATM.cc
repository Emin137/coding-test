#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> v;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    int result = v[0];
    for(int i=1; i<N; i++)
    {
        v[i] = v[i-1]+v[i];
        result += v[i];
    }
    cout << result;
    
}


