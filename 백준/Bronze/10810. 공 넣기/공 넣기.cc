#include <iostream>

using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    int ball[N];
    for(int i=0; i<N; i++)
        ball[i] = 0;
    for(int i=0; i<M; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        for(int j = a; j<=b; j++)
        {
            ball[j-1] = c;
        }
    }
    for(int i=0; i<N; i++)
    {
        cout << ball[i] << ' ';
    }
        
}
