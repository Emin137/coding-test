#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string str1,str2;
    for(auto &a:num_list)
        if(a%2==0)
            str1+=to_string(a);
    else
        str2+=to_string(a);
    return stoi(str1)+stoi(str2);
}