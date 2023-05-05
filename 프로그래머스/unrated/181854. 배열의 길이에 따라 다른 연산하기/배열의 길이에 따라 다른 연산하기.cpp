#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int a = arr.size()-1;
    for(int i=0; i<a+1; i++)
    {
        if(a%2!=0 && i%2!=0)
            answer.push_back(arr[i]+n);
        else if(a%2==0 && i%2==0)
            answer.push_back(arr[i]+n);
        else
            answer.push_back(arr[i]);
            
            
    }
    return answer;
}