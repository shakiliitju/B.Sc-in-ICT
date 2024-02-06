#include<stdio.h>
int main ()
{
    int i;

    printf("A-Z value \n");
    for (i='A'; i<='Z'; i++)
    {
    printf("%c = %d\n",i,i);
    }

    printf("a-z value \n");
    for (i='a'; i<='z'; i++)
    {
    printf("%c = %d\n",i,i);
    }
    return 0;
}
