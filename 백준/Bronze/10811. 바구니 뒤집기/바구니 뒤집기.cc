#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    int busket[N];
    for(int i=0;i<N;i++)
    {
        busket[i] = i+1;
    }
    for(int i=0; i<M; i++)
    {
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        reverse(busket+a,busket+b+1);
    }
    
    for(int i=0; i<N; i++)
        cout << busket[i] << ' ';
}
