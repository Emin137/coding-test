    #include <bits/stdc++.h>
    using namespace std;
    bool isPrime[1000001];
    int main()
{
        cin.tie(NULL);
        ios::sync_with_stdio(0);
        for(int i=2; i*i <= 1000001; i++)
        {
            if(isPrime[i]) continue;
            for(int j=i*i; j< 1000001; j+=i) isPrime[j] = true;
        }
        
        int n;
        while(true)
        {
            cin >> n;
            if(!n)
                break;
            bool isFind=false;
            for(int i=3; i < n/2+1; i+=2)
            {
                if(!isPrime[i] && !isPrime[n-i])
                {
                    cout << n << " = " << i << " + " << n-i << '\n';
                    isFind=true;
                    break;
                }
            }
            if(!isFind)
                cout << "Goldbach's conjecture is wrong.\n";
        }
    }
