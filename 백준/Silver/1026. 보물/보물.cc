#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
int main()
{
    int N;
    cin >> N;
    vector<int> vec[2];
    int input;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin >> input;
            vec[i].push_back(input);
        }
    }
    sort(vec[0].begin(),vec[0].end());
    sort(vec[1].begin(),vec[1].end(),compare);
    int result = 0;
    for(int i=0; i<N; i++)
    {
        result += vec[0][i]*vec[1][i];
    }
    cout << result;
}

