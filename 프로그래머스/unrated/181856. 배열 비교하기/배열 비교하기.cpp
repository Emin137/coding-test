#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int a = arr1.size();
    int b = arr2.size();
    if(a<b)
        answer =-1;
    else if(a>b)
        answer = 1;
    else
    {
        int temp1=0,temp2=0;
        for(auto &c : arr1)
            temp1+=c;
        for(auto &c : arr2)
            temp2+=c;
        if(temp1<temp2)
            answer = -1;
        else if(temp1>temp2)
            answer = 1;
        else
            answer = 0;
    }
    return answer;
}