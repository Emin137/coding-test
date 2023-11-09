#include <bits/stdc++.h>
using namespace std;




int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    while(T--){
        int k;
        cin >> k;
        multiset<int> ms;
        for(int i=0; i<k; i++){
            pair<char, int> input;
            cin >> input.first >> input.second;
            if(input.first == 'I'){
                ms.insert(input.second);
            }
            else{
                if(!ms.empty()){
                    if(input.second == 1){
                        ms.erase(--ms.end());
                    }
                    else{
                        ms.erase(ms.begin());
                    }
                }
            }
        }
        if(ms.empty())
            cout << "EMPTY\n";
        else
            cout << *--ms.end() << ' ' << *ms.begin() << '\n';
    }
    return 0;
}