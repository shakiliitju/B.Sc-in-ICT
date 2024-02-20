#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    char name[20] = "Md shakil hossain";
    int length = strlen(name);
    int i;

    file  = fopen("test.txt","w");


    if (file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        for (i=0; i<length; i++)
        {
            fputc(name[i],file);
        }
        printf("file is written successful\n");
        fclose("file");
    }
    getch();
}

