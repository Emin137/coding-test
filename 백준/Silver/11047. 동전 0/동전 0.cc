#include <bits/stdc++.h>
using namespace std;
int N,K;
vector<int> v;

int main()
{
    cin.tie(NULL); ios::sync_with_stdio(0);
    cin >> N >> K;
    for(int i=0; i<N; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    int answer = 0;
    for(int i = N-1; i>=0; i--)
    {
        if(K/v[i] > 0)
        {
            answer += K/v[i];
            K = K%v[i];
        }
        if(K==0)
            break;
    }
    cout << answer;
}


