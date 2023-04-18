#include <iostream>
#include <list>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    list<char> password;
    list<char> :: iterator cursor;
    string input;
    for(int i=0; i<testCase; i++)
    {
        cin >> input;
        password.clear();
        cursor = password.begin();
        for(auto &c : input)
        {
            if(c == '<')
            {
                if(distance(password.begin(), cursor) > 0)
                    cursor--;
            }
            else if(c == '>')
            {
                if(distance(cursor, password.end()) > 0)
                    cursor++;
            }
            else if(c == '-')
            {
                if(cursor != password.begin())
                    cursor = password.erase(--cursor);
            }
            else
            {
                cursor = password.insert(cursor,c);
                cursor++;
            }
        }
        for(auto &c : password)
            cout << c;
        cout << '\n';
    }
}
