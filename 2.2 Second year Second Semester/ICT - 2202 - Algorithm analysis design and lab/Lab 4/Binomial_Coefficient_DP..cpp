
#include<bits/stdc++.h>
using namespace std;


class Shakil
{
public:

    void Binomial()
    {
        int n,k;
        cout<<"Enter value n & k : ";
        cin>>n>>k;
        int c[n+1][k+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=min(i,k); j++)
            {
                if(j==0 || j==i)
                    c[i][j]=1;
                else
                    c[i][j]=c[i-1][j-1]+c[i-1][j];
            }
        }
        cout << "Binomial Coefficient is : ";
        cout<<c[n][k]<<endl;
    }
};


int main()
{
    Shakil obj;
    obj.Binomial();
}
