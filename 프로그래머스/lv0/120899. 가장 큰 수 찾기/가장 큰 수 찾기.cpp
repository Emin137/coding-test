#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int a = *max_element(array.begin(),array.end());
    for(int i =0; i<array.size();i++)
        if(array[i]==a)
        {
            answer.push_back(a);
            answer.push_back(i);
        }
    return answer;
}