#include <bits/stdc++.h>

#define max 51
#define bool int
#define true 1
#define false 0

typedef struct node{
    int num_vote;
    bool is_dasom;
}node;

typedef struct heap{
    int size;
    node arr[max];
}heap;

void up_heap(heap *h, int idx){
    node tmp = h->arr[idx];
    while(idx > 1 && h->arr[idx/2].num_vote < tmp.num_vote){
        h->arr[idx] = h->arr[idx/2];
        idx/=2;
    }
    h->arr[idx] = tmp;
}

void down_heap(heap *h){
    node tmp = h->arr[1];
    int i = 1;
    while(i<=h->size/2){
        int j = i * 2; // left child
        if(j + 1 <= h->size && h->arr[j].num_vote < h->arr[j+1].num_vote) j++; // right child
        if(tmp.num_vote >= h->arr[j].num_vote) break;
        h->arr[i] = h->arr[j];
        i = j;
    }
    h->arr[i] = tmp;
}

int search_dasom(heap *h){
    int i = 1;
    while(!h->arr[i].is_dasom) i++;
    return i;
}

void insert(heap *h, int num_vote){
    h->arr[++h->size].num_vote = num_vote;
    up_heap(h, h->size);
}

int main(){
    int n;
    scanf("%d", &n);

    heap *h = (heap*)malloc(sizeof(heap));
    memset(h, 0, sizeof(heap));
    h->arr[1].is_dasom = true;
    for(int i=0; i<n; i++){
        int num_vote;
        scanf("%d", &num_vote);
        insert(h, num_vote);
    }
    int result = 0;
    while(!h->arr[1].is_dasom){
        h->arr[1].num_vote--;
        down_heap(h);
        int idx = search_dasom(h);
        h->arr[idx].num_vote++;
        up_heap(h,idx);
        result++;
    }

    if(h->arr[1].num_vote == h->arr[2].num_vote) result++;

    printf("%d", result);
    return 0;
}