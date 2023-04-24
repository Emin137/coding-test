#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<char> l;
    string str="";
    int N;
    char temp;
    char input;
    cin >> str >> N;
    for(auto &a : str)
        l.push_back(a);
    list<char> :: iterator it = l.end();
    for(int i=0; i<N; i++)
    {
        cin >> input;
        if(input == 'L')
        {
            if(it!=l.begin())
                it--;
        }
        else if(input == 'D')
        {
            if(it!=l.end())
                it++;
        }
        else if(input == 'B')
        {
            if(it!=l.begin())
            {
                it = l.erase(--it);
            }
        }
        else if(input == 'P')
        {
            cin >> temp;
            l.insert(it,temp);
        }
    }
    for(auto &a : l)
        cout << a;
    return 0;
}

