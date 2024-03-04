
//Global Structure

#include <stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person x1,x2;

    x1.age = 21;
    x2.salary = 1234.432;

    printf("age = %d\n",x1.age);
    printf("salary = %f\n",x2.salary);

    getch();
}
