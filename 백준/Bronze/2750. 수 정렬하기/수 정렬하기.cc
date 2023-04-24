#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> vec;
    while(N--)
    {
        int n;
        cin >> n;
        vec.push_back(n);
    }
    sort(vec.begin(),vec.end());
    for(auto &a : vec)
        cout << a << endl;
}
