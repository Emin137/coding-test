#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string temp;
    int idx = 0;
    for(auto a : my_str)
    {
        temp+=a;
        idx++;
        if(idx==n)
        {
            answer.push_back(temp);
            temp = "";
            idx = 0;
        }
    }
    if(temp!="")
        answer.push_back(temp);
    return answer;
}