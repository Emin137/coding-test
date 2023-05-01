#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    if(num_list.size()>10)
        for(auto &a : num_list)
            answer += a;
    else
    {
        answer = num_list[0];
        for(int i=1; i<num_list.size(); i++)
            answer*=num_list[i];
    }
    return answer;
}