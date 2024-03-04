#include <stdio.h>
int main()
{

    int num, temp,r,sum=0;
    printf("SEnter any number ");
    scanf("%d",&sum);

    temp = num;

    while (temp!=0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp /10;
    }
    printf("sum of digits %d\n",sum);

return 0;
}
