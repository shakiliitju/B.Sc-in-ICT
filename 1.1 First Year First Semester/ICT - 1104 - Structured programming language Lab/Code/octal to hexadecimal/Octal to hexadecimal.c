#include <stdio.h>
int main()
{
    int number;
    printf("Octal number = ");
    scanf("%o",&number);

    printf("Hexadecimal number = %x",number);
    getch();

    return 0;
}

