#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    double a,b,height,area;
    cout<< "Enter a : ";
    cin>> a;
    cout<< "Enter b : ";
    cin>> b;
    cout<< "Enter height : ";
    cin>> height;

    area = 0.5 * (a+b) * height;
    cout<< "Trapezium area is : "<<area;


    getch();
}
