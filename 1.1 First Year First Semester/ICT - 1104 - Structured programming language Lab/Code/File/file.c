#include <stdio.h>
int main()
{
    FILE *file;

    file  = fopen ("test.txt","w");


    if (file==NULL)
    {
        printf("File does not exist\n");

    }
    else
    {
        printf("File is opened\n");
        fclose("file");
    }
    getch();
}
