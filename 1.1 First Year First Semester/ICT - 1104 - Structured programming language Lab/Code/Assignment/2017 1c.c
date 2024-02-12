#include<stdio.h>
int main()
{

   double a,b;
   printf("Enter the temperature \n");
   scanf("%lf",&a);
   printf("%0.2lf F\n",(9*a)/5+32);
   printf("%0.2lf C\n",(a-32)*5/9);
}

