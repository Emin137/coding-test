#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer = num_list;
    int i = num_list.size()-1;
    if(num_list[i]>num_list[i-1])
        answer.push_back(num_list[i]-num_list[i-1]);
    else
        answer.push_back(num_list[i]*2);
    return answer;
}