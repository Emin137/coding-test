#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int sum=1;
    int cnt = 10;
    int result = 0;
    for(int i=1; i<=N; i++)
    {
        if(i>=cnt)
        {
            sum++;
            cnt*=10;
        }
        result += sum;
    }
    cout << result;
}
