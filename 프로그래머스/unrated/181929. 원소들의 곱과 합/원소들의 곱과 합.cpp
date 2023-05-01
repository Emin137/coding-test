#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int a=num_list[0];
    int b=a;
    for(int i= 1;i<num_list.size(); i++)
    {
        a*=num_list[i];
        b+=num_list[i];
    }
    b*=b;
    answer = a>b?0:1;   
    return answer;
}