#include <bits/stdc++.h>
int paper[101][101];
int n, x, y, result = 0;
int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        for(int j=0; j<10; j++)
            for(int l=0; l<10; l++)
                paper[y+j][x+l] = 1;
    }

    for(int i=0; i<101; i++)
        for(int j=0; j<101; j++)
            if(paper[i][j] == 1) result++;

    printf("%d" , result);

    return 0;
}