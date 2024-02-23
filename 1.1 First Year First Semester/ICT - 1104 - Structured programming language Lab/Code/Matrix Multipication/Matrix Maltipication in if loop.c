#include <stdio.h>
int main()
{
    int matA[10][10],matB[10][10],matC[10][10],r1,r2,c1,c2,i,j,k;
    printf("Enter row and column the first matrix \n");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column the first matrix \n");
    scanf("%d %d",&r2,&c2);

    if (c1==r2)
    {
        printf("Enter the first matrix \n\n");

        for (i=0; i<r1; i++)
            for (j=0; j<c1; j++)
            {
                scanf("%d",&matA[i][j]);
            }

        printf("Enter the second matrix \n\n");

        for (i=0; i<r2; i++)
            for (j=0; j<c2; j++)
            {
                scanf("%d",&matB[i][j]);
            }

        printf("the matrix is \n");

        for (i=0; i<r1; i++)
        {
            for (j=0; j<c2; j++)
            {
                matC[i][j] = 0;
                for (k=0; k<c1; k++)
                {
                    matC[i][j] = matC[i][j]+(matA[i][k]*matB[k][j]);
                }
                printf("%d  ",matC[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Error !! Matrix can not multiplication ");
    }

    return 0;
}
