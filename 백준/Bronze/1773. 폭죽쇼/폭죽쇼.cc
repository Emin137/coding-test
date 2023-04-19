#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N,C;
    cin >> N >> C;
    vector<bool> vec(C,false);
    while(N--)
    {
        int num;
        cin >> num;
        for(int i=1; i*num<=C; i++)
            vec[i*num-1] = true;
    }
    int cnt = 0;
    for(auto a : vec)
        if(a)
            cnt++;
    cout << cnt;
        
    
}

