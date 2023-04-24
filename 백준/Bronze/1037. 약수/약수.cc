#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,input;
    vector<int> vec;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> input;
        vec.push_back(input);
    }
    cout << *min_element(vec.begin(),vec.end()) * *max_element(vec.begin(),vec.end());
}

