#include<iostream>
using namespace std;
#define size 10

int main()
{
    int x[10] = {4,3,7,-1,7,2,0,4,2,13};
    int i, sum=0, LB=0, UB=size;
    float avg;

    for(i=LB; i<UB; i++)
    {
        sum += x[i];
        avg = (float)sum/size;
        cout << "The average of the number : " <<avg <<endl;
    }



    return 0;
}
