#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    
    int a = 1;
    while(a<arr.size())
        a*=2;
    vector<int> answer(a);
    for(int i=0; i<arr.size(); i++)
        answer[i] = arr[i];
    return answer;
}