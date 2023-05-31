#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp = "";
    for(auto &a : myStr)
    {
        if(a=='a' || a== 'b' || a=='c')
        {
            if(temp != "")
            {
                answer.push_back(temp);
                temp = "";
            }
        }
        else
            temp+=a;
    }
    if(temp!="")
        answer.push_back(temp);
    if(!answer.size())
        answer.push_back("EMPTY");
    return answer;
}