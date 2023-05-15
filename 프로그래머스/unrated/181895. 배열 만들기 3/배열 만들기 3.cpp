#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(auto &a:intervals)
        for(int i =a[0]; i<=a[1];i++)
            answer.push_back(arr[i]);
    return answer;
}