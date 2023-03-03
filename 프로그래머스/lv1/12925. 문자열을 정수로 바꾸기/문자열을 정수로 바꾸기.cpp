#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool min;
    int j=1;
    for(int i = s.size()-1; i>=0;i--)
    {
        if(s[i]=='-')
        {
            answer*=-1;
            break;
        }
        else if(s[i]=='+')
        {
            break;
        }
            
        answer += (s[i]-'0')*j;
        j*=10;
    }
    return answer;
}