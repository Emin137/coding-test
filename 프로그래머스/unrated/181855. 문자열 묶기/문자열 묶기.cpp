#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> size(31);
    for(auto i : strArr)
    {
       size[i.size()]++;
    }
    
    return *max_element(size.begin(),size.end());
}