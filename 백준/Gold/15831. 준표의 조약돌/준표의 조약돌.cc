#include <iostream>
#include <list>
using namespace std;

int main()
{
    int N, B, W;
    cin >> N >> B >> W;
    list<char> l;
    list<char> :: iterator start;
    while(N--)
    {
        char c;
        cin >> c;
        l.push_back(c);
    }
    int length = (int)l.size();
    start = l.begin();
    int answer = 0;
    while(length--)
    {
        int tempAnswer = 0,tempW=0,tempB=0;
        for(list<char>::iterator i = start; i!=l.end(); i++)
        {
            if(*i == 'W')
            {
                tempW++;
                tempAnswer++;
            }
            else
            {
                tempB++;
                tempAnswer++;
            }
            if(tempB>B)
                break;
            else if(tempW>=W && tempAnswer>answer)
                answer = tempAnswer;
        }
        start++;
    }
    cout << answer;
}
