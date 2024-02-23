#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<20; i++)

    {
        if(i%3==0)
            continue;
        printf("%d ",i);

        if(i==10)
            break;
    }

    return 0;
}
