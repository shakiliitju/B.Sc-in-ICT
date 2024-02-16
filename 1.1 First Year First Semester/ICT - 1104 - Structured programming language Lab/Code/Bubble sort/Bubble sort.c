#include <stdio.h>
int main()
{
    int i,j,temp;
    int x[5] = {8,3,1,6,2};

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if (x[i]>x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }

        }
    }
         for(i=0; i<5; i++)
            printf("%d ",x[i]);
    return 0;

}
