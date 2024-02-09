
///2016   7d

#include<stdio.h>
int main(void)
{
    int r,c,n=3,v[]= {8,3,9,6,5};
    int mat[n][n];

    for (r=0; r<n;r++)
    {
        for (c=0; c<n; c++)
        {
            mat[r][c] = v[(n-1) - (r-c)];
            printf("%d ",mat[r][c]);
        }
        printf("\n");
    }
}
