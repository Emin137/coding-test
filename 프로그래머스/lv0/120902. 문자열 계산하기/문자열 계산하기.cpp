#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp = "";
    char temp2 = ' ';
    for(auto ch : my_string)
    {
        if(isdigit(ch))
        {
           temp+=ch;
        }
        else
        {
            if(ch == '+' || ch == '-')
            {
                if(temp2=='+')
                {
                    answer+=stoi(temp);
                    temp = "";
                }
                else if(temp2 == '-')
                {
                    answer-=stoi(temp);
                    temp = "";
                }
                else
                {
                    answer+=stoi(temp);
                    temp = "";
                }
                temp2 = ch;
            }
        }
    }
    if(temp2=='+')
                {
                    answer+=stoi(temp);
                    temp = "";
                }
                else
                {
                    answer-=stoi(temp);
                    temp = "";
                }
    return answer;
}