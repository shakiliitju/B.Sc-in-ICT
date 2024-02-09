
/// 2016  4b

#include<stdio.h>
int main()
{
    int i,sum = 0;
    int x[10] = {43,67,56,43,89,90,32,13,45};

    for (i=0;i<9;i++)

    {
        sum = sum + x[i];
    }
    printf("%d",sum);

return 0;
}
