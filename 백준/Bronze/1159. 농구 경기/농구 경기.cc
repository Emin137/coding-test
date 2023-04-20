#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> vec(26);
    while(N--)
    {
        string input;
        cin >> input;
        vec[input[0]-97]++;
    }
    bool isFind = false;
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]>=5)
        {
            char ch = (char)i+97;
            cout << ch;
            isFind = true;
        }
    }
    if(!isFind)
        cout << "PREDAJA";
}
