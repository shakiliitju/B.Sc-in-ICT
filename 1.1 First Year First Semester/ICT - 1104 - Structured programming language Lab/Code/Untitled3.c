#include<iostream>
using namespace std;

int main()
{
    long long int P,B,M,R;

    cin >>P;
    cin >>B;
    cin >>M;

    R = P^B modulus M;

    cout<<R;


    return 0;
}
