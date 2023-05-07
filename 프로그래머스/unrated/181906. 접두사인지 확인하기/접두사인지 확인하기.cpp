#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    for(int i=0; i<my_string.size(); i++)
    {
        string temp;
        for(int j=0; j<=i; j++)
        {
            temp+=my_string[j];
        }
        if(temp==is_prefix)
            answer=1;
    }
    return answer;
}