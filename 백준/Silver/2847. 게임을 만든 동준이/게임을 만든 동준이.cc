#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> vec;
    while(N--)
    {
        int input;
        cin >> input;
        vec.push_back(input);
    }
    int cnt=0;
    while(true)
    {
        bool isAnswer = true;
        for(int i = 0; i< vec.size()-1; i++)
        {
            if(vec[i]>=vec[i+1])
            {
                vec[i]--;
                cnt++;
                isAnswer = false;
                break;
            }
        }
        if(isAnswer)
            break;
    }
    cout << cnt;
}
