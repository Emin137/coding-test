#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin >> n;
    vector<int> triangle[n];
    for(int i=0; i<n; i++)
        for(int j=0; j<=i; j++){
            int input;
            cin >> input;
            triangle[i].push_back(input);
        }
    vector<int> dp_arr[n];
    dp_arr[0].push_back(triangle[0][0]);

    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0){
               dp_arr[i].push_back(dp_arr[i-1][0] + triangle[i][0]);
            }
            else if(j == i){
                dp_arr[i].push_back(dp_arr[i-1][j-1] + triangle[i][j]);
            }
            else{
                dp_arr[i].push_back(max(dp_arr[i-1][j-1],dp_arr[i-1][j])+triangle[i][j]);
            }
        }
    }
    cout << *max_element(dp_arr[n-1].begin(), dp_arr[n-1].end());
    return 0;
}