#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
   char c = alp[0];
    for(auto &a: my_string)
        if(a==c)
            a=toupper(a);
    return my_string;
}