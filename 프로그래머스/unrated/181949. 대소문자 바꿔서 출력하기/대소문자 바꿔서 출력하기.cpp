#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(auto &ch : str)
        if('a' <= ch && ch <= 'z')
            ch = toupper(ch);
        else
            ch = tolower(ch);
    cout << str;
}