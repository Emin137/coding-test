#include <bits/stdc++.h>
using namespace std;
bool isVisit[200001];
int main()
{
    int N;
    cin >> N;
    vector<int> vec;
    while(N--)
    {
        int input;
        cin >> input;
        vec.push_back(input);
    }
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    for(auto &i : vec)
    {
            cout << i << ' ';
    }
}

