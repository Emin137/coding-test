#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
   int arr[26] = {0,};
	for (auto a : s)
		arr[a - 'a']++;
	for (int i = 0; i < 26; i++)
		if (arr[i] == 1)
			answer += 'a' + i;
    sort(answer.begin(),answer.end());
    return answer;
}