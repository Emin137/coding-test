#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int idx = 0;
    for(auto a : croatian)
    {
        while(true)
        {
            idx = (int)str.find(a);
            if(idx == string::npos)
                break;
            str.replace(idx,a.length(),"*");
        }
    }
    cout << str.length();
}
