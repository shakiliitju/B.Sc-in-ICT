#include <stdio.h>
int main()
{
    int num1,num2,n1,n2,temp,gcd,lcm;
    printf("Enter 2 number ");
    scanf("%d %d",&num1,&num2);

    n1 = num1;
    n2 = num2;
    while (n2 !=0)
    {
        temp = n1%n2;
        n1 = n2;
        n2 = temp;
    }

    gcd = n1;
    lcm = (num1*num2)/gcd;

    printf("GCD = %d\n",gcd);
    printf("LCM = %d\n",lcm);
    return 0;
}
