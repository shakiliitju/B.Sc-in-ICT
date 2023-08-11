#include <stdio.h>

int data[100001];
int next[100001];
int unused = 1;

int head[1001];


void insert(int id , int value){
    data[unused] = value;
    next[unused] = head[id];
    head[id] = unused;
    unused++;
}

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    while(q--){
        int i,v;
        scanf("%d %d",&i,&v);
        insert(i,v);
    }
    int i,j;
    for(i=1;i<=n;i++){
        for(j = head[i];j != 0;j = next[j])
            printf("%d ",data[j]);
        printf("\n");
    }
    return 0;
}
