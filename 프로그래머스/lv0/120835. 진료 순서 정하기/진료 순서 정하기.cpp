#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> v = emergency;
    sort(v.begin(),v.end(),greater<int>());
    for(auto &a : emergency)
    {
        for(int i=0;i<v.size();i++)
            if(a==v[i])
                answer.push_back(i+1);
                
                
    }
    return answer;
}