#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(auto &str : intStrs)
    {
        string temp = "";
        for(int i=s; i<s+l; i++)
            temp+=str[i];
        if(stoi(temp)>k)
            answer.push_back(stoi(temp));
    }
    return answer;
}