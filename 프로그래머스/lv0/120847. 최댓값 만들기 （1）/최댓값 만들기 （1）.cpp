#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    answer = *max_element(numbers.begin(),numbers.end());
    numbers.erase(max_element(numbers.begin(),numbers.end()));
    answer*= *max_element(numbers.begin(),numbers.end());
    
    return answer;
}