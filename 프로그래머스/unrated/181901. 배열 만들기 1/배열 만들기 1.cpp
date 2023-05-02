#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int i = 1;
    while(true)
    {
        int j = k*i;
        if(j > n)
            break;
        answer.push_back(j);
        i++;
    }
 
    return answer;
}