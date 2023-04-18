#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int N,B,W;
    string input;
    cin >> N >> B >> W >> input;
    deque<char> d;
    int white=0,black=0,result=0;
    for(int i=0; i<N; i++)
    {
        d.push_back(input[i]);
        if(input[i] == 'W')
            white++;
        else
            black++;
        if(black<=B && white>= W)
            result = max(result,(int)d.size());
        else if(black > B)
        {
            while(black > B)
            {
                char c = d.front();
                d.pop_front();
                if(c=='W')
                    white--;
                else
                    black--;
            }
        }
    }
    cout << result;
}
