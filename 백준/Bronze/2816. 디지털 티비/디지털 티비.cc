#include <bits/stdc++.h>
using namespace std;
int N;
vector<string> vec;

void swap(int idx1, int idx2){
   string temp = vec[idx1];
   vec[idx1] = vec[idx2];
   vec[idx2] = temp;
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
       string str;
       cin >> str;
       vec.push_back(str);
    }
    int idx = 0;
    while(1){
        if(vec[0] == "KBS1"){
            if(vec[1] == "KBS2") break;
            if(vec[idx] == "KBS2"){
                swap(idx, idx-1);
                idx--;
                cout << 4;
            }
            else{
                idx++;
                cout << 1;
            }
        }
        else {
            if (vec[idx] == "KBS1") {
                swap(idx, idx - 1);
                idx--;
                cout << 4;
            } else {
                idx++;
                cout << 1;
            }

        }
    }
}

/*
 kbs1
 abc1
 abc2
 kbs2
 */