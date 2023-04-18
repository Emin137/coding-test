#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    string input;
    cin >> input;
    vector<int> vec;
    string temp = "";
    for(auto a: input)
    {
        if(isdigit(a))
            temp+=a;
        else
        {
            vec.push_back(stoi(temp));
            temp = "";
        }
    }
    vec.push_back(stoi(temp));
    int result=0;
    for(auto a:vec)
        result+=a;
    cout << result;
        
    
}
