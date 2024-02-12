
///2018  3c

#include<stdio.h>
int main()
{
    double x;

    int flag = 0;
    for (x=0.0; x<1.0; x+= 0.1)
    {
        if(x == 0.3)
        {
            printf("yes");
            flag = 1;
        }
    }
    if (flag == 0)
        printf("no");

    return 0;
}
