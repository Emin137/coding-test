#include <bits/stdc++.h>
using namespace std;
#define max 1001

int n;
int house[max][3];
int arr[max][3];

void dp(int idx){
    arr[idx][0] = house[idx][0] + min(arr[idx-1][1],arr[idx-1][2]);
    arr[idx][1] = house[idx][1] + min(arr[idx-1][0],arr[idx-1][2]);
    arr[idx][2] = house[idx][2] + min(arr[idx-1][0],arr[idx-1][1]);
    
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++) for(int j=0; j<3; j++) cin >> house[i][j];
    arr[0][0] = house[0][0];
    arr[0][1] = house[0][1];
    arr[0][2] = house[0][2];
    for(int i=1; i<n; i++)
        dp(i);

    cout << *min_element(arr[n-1], arr[n-1]+3);

}