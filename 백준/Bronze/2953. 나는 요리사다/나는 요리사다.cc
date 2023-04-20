#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int score[5] ={0,};
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            int num;
            cin >> num;
            score[i]+=num;
        }
    }
    int index = 1, maxScore = *max_element(score,score+5);
    for(auto a: score)
    {
        if(a == maxScore)
            cout << index << ' ' << maxScore;
        index++;
    }
}
