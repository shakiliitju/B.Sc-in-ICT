#include <stdio.h>
int main()
{

    int i,j,n,m;
    printf("Enter the matrix size \n");
    scanf("%d %d",&m,&n);
    int matA[m][n],matB[m][n],matC[m][n];

    printf("Enter the matA \n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&matA[i][j]);
        }
    }
    printf("Enter the matB \n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&matB[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
    printf("matA is \n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ",matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
