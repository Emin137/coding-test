#include <bits/stdc++.h>
using namespace std;
char board[51][51];
int cnt,N;
    void Check()
    {
        int tempCnt;
        char start;
        for(int i=0; i<N; i++) // check row
        {
            start = board[i][0];
            tempCnt=1;
            for(int j=1; j<N; j++)
            {
                if(board[i][j] == start)
                    tempCnt++;
                else
                {
                    start = board[i][j];
                    tempCnt=1;
                }
                if(tempCnt>cnt)
                    cnt=tempCnt;
            }
        }
        for(int i=0; i<N; i++) // check column
        {
            start = board[0][i];
            tempCnt = 1;
            for(int j=1; j<N; j++)
            {
                if(board[j][i]==start)
                    tempCnt++;
                else
                {
                    start = board[j][i];
                    tempCnt=1;
                }
                if(tempCnt>cnt)
                    cnt=tempCnt;
            }
        }
    }

    int main()
{
        cin.tie(NULL);
        ios::sync_with_stdio(0);
        
        cin >>N;
        for(int i=0; i<N; i++) // input
        {
            for(int j=0; j<N; j++)
                cin >> board[i][j];
        }
        for(int y=0; y<N; y++) // swap row
        {
            for(int x=0; x<N-1; x++)
            {
                swap(board[y][x],board[y][x+1]);
                Check();
                swap(board[y][x],board[y][x+1]);
            }
        }
        for(int x=0; x<N; x++) //swap column
        {
            for(int y=0;y<N-1;y++)
            {
                swap(board[y][x],board[y+1][x]);
                Check();
                swap(board[y][x],board[y+1][x]);
            }
        }
        cout << cnt;
    }
