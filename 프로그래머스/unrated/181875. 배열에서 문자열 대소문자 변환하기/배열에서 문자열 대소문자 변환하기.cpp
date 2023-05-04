#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i=0; i<strArr.size(); i++)
    {
        string temp = strArr[i];
        if(i%2==0)
        {
            for(auto & a : temp)
                a = tolower(a);
            answer.push_back(temp);
        }
        else
        {
            for(auto & a : temp)
                a = toupper(a);
            answer.push_back(temp);
        }
    }
    return answer;
}