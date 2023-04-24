#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin >> N;
    vector<int> vec1(N);
    for(int i=0; i<N; i++)
        cin >> vec1[i];
    cin >> M;
    vector<int> vec2(M);
    for(int i=0; i<M; i++)
        cin >> vec2[i];
    sort(vec1.begin(),vec1.end());
    for(auto &a : vec2)
    {
       if(binary_search(vec1.begin(),vec1.end(),a))
           cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }
}

