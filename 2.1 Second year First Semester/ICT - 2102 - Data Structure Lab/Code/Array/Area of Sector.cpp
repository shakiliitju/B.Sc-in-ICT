#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    double angle,radius,area;
    cout<< "Enter radius : ";
    cin>> radius;
    cout<< "Enter angle : ";
    cin>> angle;

    area = 0.5 * radius * radius * angle;
    cout<< "Sector area is : "<<area;


    getch();
}


