#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    string str[N];
    string str2[N];
    for(int i=0; i<N; i++)
    {
        cin >> str[i];
        for(auto a : str[i])
            for(int j=0; j<2; j++)
                str2[i]+=a;
    }
    bool isSame = true;
    for(int i=0; i<N; i++)
    {
        string temp;
        cin >> temp;
        if(temp != str2[i])
            isSame=false;
    }
    if(isSame)
        cout << "Eyfa";
    else
        cout << "Not Eyfa";
}
