
#include<stdio.h>

int main(void)
{
    int N,i,A[100],search;
    printf("Enter the number of element in array : ");
    scanf("%d",&N);

    printf("Enter element : ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the number to search : ");
    scanf("%d",&search);

    for(i=0; i<N; i++)
    {
        if(A[i] == search)
        {
            printf("Successful\n");
            printf("location %d\n",i+1);
            break;
        }
    }
    if (i==N)
    {
        printf("Unsuccessful\n");
    }


    return 0;
}
