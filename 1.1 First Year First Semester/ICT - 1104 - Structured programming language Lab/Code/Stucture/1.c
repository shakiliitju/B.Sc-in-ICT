
//Student information

#include <stdio.h>

struct contact
{
    char name [30];
    char phone[15];
    int roll;
    char bloodgroup[5];
    char gender[10];

};

int main()
{

    struct contact student[80];
    int i;
    for (i=0; i<2; i++)
    {
        gets (student[i].name);
//scanf("%s",&student[0].name);
        scanf("%s",&student[i].phone);
        scanf("%d",&student[i].roll);
        scanf("%s",&student[i].bloodgroup);
        scanf("%s",&student[i].gender);
        getchar();
        printf("%s\n",student[i].name);
        printf("%s\n",student[i].phone);
        printf("%d\n",student[i].roll);
        printf("%s\n",student[i].bloodgroup);
        printf("%s\n",student[i].gender);

    }
    return 0;
}
