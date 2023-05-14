#include <string>
#include <vector>
using namespace std;

int solution(string binomial) {
    int answer = 0;
    int x;
    string temp;
    char temp2;
    for(auto & a : binomial)
    {
        if(isdigit(a)!=0)
            temp+=a;
        else
        {
            if(a!=' ')
            {
                x = stoi(temp);
                temp="";
                temp2=a;
            }
        }
    }
    switch(temp2)
    {
    case '+':
        answer = x + stoi(temp);
        break;
    case '-':
        answer = x - stoi(temp);
        break;
    case '*':
        answer = x * stoi(temp);
        break;
    }
    return answer;
}