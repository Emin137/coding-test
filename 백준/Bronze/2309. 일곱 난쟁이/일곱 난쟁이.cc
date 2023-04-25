    #include <bits/stdc++.h>
    using namespace std;
    bool isPrime[1000001];
    int main()
    {
        cin.tie(NULL);
        ios::sync_with_stdio(0);
        int sum = 0;
        vector<int> v(9);
        for(int i=0; i<9; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        bool isPrint = false;
        for(int i=0; i<9; i++)
            for(int j=i+1; j<9; j++)
                if(sum-(v[i]+v[j]) == 100 && !isPrint)
                {
                    for(auto &a : v)
                        if(a!=v[i] && a!=v[j])
                            cout << a << '\n';
                    isPrint=true;
                }
    }
