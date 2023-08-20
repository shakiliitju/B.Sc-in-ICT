#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    double width,height,area;
    cout<< "Enter width : ";
    cin>> width;
    cout<< "Enter height : ";
    cin>> height;

    area = width * height;
    cout<< "Rectangle area is : "<<area;


    getch();
}
