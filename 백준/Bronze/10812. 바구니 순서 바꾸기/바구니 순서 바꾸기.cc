#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    int bucket[N];
    for(int i=1;i<=N;i++)
        bucket[i-1] = i;
    for(int i=0; i<M; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        rotate(bucket+a-1,bucket+c-1,bucket+b);
    }
    for(int i=0;i<N;i++)
        cout << bucket[i] << ' ';
}
