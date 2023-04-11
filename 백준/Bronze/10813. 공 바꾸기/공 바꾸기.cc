#include <iostream>

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
        int temp = busket[a];
        busket[a] = busket[b];
        busket[b] = temp;
    }
    for(int i=0; i<N; i++)
        cout << busket[i] << ' ';
        
}
