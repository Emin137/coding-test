#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp ="";
    for(auto &a : my_string)
        if(isdigit(a))
            temp+=a;
        else
        {
            if(temp!="")
            {
                answer+= stoi(temp);
                temp="";
            }
        }
    if(temp!="")
        answer+=stoi(temp);
    return answer;
}