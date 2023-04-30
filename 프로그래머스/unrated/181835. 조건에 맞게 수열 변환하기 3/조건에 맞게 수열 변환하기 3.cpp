#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;

    for(auto &a:arr)
    {
        if(k%2==0)
            answer.push_back(a+k);
        else
             answer.push_back(a*k);
    }
    return answer;
}