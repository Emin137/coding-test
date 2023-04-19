#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    int N,M;
    cin >> N >> M;
    vector<string> vec1,vec2;
    while(N--)
    {
        string str;
        cin >> str;
        vec1.push_back(str);
    }
    vector<string> vec3;
    sort(vec1.begin(),vec1.end());
    while(M--)
    {
        string str;
        cin >> str;
        if(binary_search(vec1.begin(),vec1.end(),str))
            vec3.push_back(str);
    }
    
    sort(vec3.begin(),vec3.end());
    cout << vec3.size() << endl;
    for(auto a:vec3)
        cout << a << endl;
}
