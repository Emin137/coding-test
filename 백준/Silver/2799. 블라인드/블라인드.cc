#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int M,N;
    cin >> M >> N;
    vector<int> blind(5);
    string floor[5*M+1];
    for(int i = 5*M; i>=0; i--)
        cin >> floor[i];
    
    for(int i=0; i<M; i++)
    {
        vector<int> vec2(N);
        for(int j=0; j<4; j++)
        {
            for(int k=0; k<N; k++)
            {
                if(floor[i*5+j+1][k*5+1] == '*')
                {
                    vec2[k]++;
                }
            }
        }
        for(auto a:vec2)
            blind[a]++;
    }
    for(auto a:blind)
        cout << a << ' ';
}
