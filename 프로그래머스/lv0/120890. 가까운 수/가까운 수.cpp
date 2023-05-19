#include <string>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int temp=INT_MAX;
    sort(array.begin(),array.end());
    for(auto &a : array)
    {
        if(abs(a-n)<temp)
        {
            answer = a;
            temp = abs(a-n);
        }
    }
    return answer;
}