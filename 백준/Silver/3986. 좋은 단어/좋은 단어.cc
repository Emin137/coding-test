#include <iostream>
#include <stack>

using namespace std;

bool CheckWord(string word)
{
    stack<char> st;
    for(int i=0; i<word.length(); i++)
    {
        if(st.empty())
            st.push(word[i]);
        else
        {
            if(st.top() == word[i])
                st.pop();
            else
                st.push(word[i]);
        }
    }
    return st.empty();
}

int main()
{
    int wordCount,count=0;
    cin >> wordCount;
    for(int i=0; i<wordCount; i++)
    {
        string word;
        cin >> word;
        if(CheckWord(word))
            count++;
    }
    cout << count;
}
