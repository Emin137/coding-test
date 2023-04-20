#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int Y,X;
    cin >> Y >> X;
    bool arr[Y][X];
    vector<pair<int,int>> vec;
    for(int y=0; y<Y; y++)
    {
        string input;
        cin >> input;
        for(int x=0; x<X; x++)
        {
            if(input[x]=='X')
                arr[y][x] = false;
            else
            {
                arr[y][x] = true;
                vec.push_back(make_pair(y,x));
            }
        }
    }
    bool isPossible = true;
    typedef struct{int y,x;}Dir;
    Dir moveDir[4] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    for(auto a: vec)
    {
        int cnt = 0;
        pair<int,int> currentPos = make_pair(a.first, a.second);
        for(int i=0; i<4; i++)
        {
            int nextY = currentPos.first + moveDir[i].y;
            int nextX = currentPos.second + moveDir[i].x;
            if(0<=nextY && nextY<Y && 0<=nextX && nextX<X)
                if(arr[nextY][nextX])
                    cnt++;
        }
        if(cnt<2)
            isPossible=false;
    }
    if(isPossible)
        cout << 0;
    else
        cout << 1;
}
