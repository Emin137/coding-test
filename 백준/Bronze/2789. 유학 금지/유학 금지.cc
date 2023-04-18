#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;
    string str = "CAMBRIDGE";
    for(auto a : input)
    {
        bool isSame=false;
        for(auto b : str)
            if(a==b)
            {
                isSame=true;
            }
        if(!isSame)
            cout<<a;
    }
}
