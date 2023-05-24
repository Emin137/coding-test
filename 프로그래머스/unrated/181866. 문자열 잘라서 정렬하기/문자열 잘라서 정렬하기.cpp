#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string myString) {
    string temp="";
    vector<string> answer;
    for(auto &a : myString)
        if(a=='x')
        {
            if(temp!="")
            answer.push_back(temp);
            temp="";
        }
        else
        {
            temp+=a;
        }
    if(temp!="")
    answer.push_back(temp);
    sort(answer.begin(),answer.end());
    return answer;
        
}