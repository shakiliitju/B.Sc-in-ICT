#include<iostream>
using namespace std;

int main()
{
    float a,b,c,sum=0.0;
    int n;

    cin >> a >> b >> n;
    c =(b-a)/n;

    while(n--)
    {
        b=a+c;
        sum +=((a*a)*c);
        a=b;
    }
    cout << sum << " " <<endl;
    return 0;
}
