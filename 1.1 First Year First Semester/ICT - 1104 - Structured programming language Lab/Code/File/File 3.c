#include <stdio.h>
int main()
{
    FILE *file;
    char name[25];

    file  = fopen ("test.txt","w");


    if (file == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your full name \n");
        gets(name);

        fputs(name,file);
        printf("file is written successful\n");
        fclose("file");
    }
    getch();

}

