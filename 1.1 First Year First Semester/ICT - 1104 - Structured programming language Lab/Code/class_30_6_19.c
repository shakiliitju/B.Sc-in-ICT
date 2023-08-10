#include <stdio.h>

int a[101][101];
int size[101];
int main(){

    int n,q;
    scanf("%d %d",&n,&q);
    while(q--){
        int i,v;
        scanf("%d %d",&i,&v);
        a[i][ size[i] ] = v;
        size[i]++;
    }
    int i,j;
    for(i=1;i<=n;i++){

        for(j = size[i] - 1;j >= 0;j--)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}

/*
10


*/
