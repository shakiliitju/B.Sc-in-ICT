#include <stdio.h>
int main()
{
    int number;
    printf("Hexadecimal number = ");
    scanf("%x",&number);

    printf("Octal number = %o",number);
    getch();

    return 0;
}

