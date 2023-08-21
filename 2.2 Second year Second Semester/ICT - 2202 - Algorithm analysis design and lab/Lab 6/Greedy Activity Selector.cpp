#include<bits/stdc++.h>
using namespace std;

int main()
{

    int A[100], s[100], f[100],n;

    cout << "Enter number of activity : ";
    cin >> n;

    cout << "Enter start & end time : " <<endl;

    for(int i=1; i<=n; i++)
    {
        cin >> s[i] >> f[i];
    }

    int k=1,cnt=0;

    for(int j=2; j<=n; j++)
    {
        if(s[j] >= f[k])
        {
            A[j]=1;
            cnt++;
            k=j;
        }
    }

    cout << "Activity : ";
    for(int i=1; i<=n; i++)
    {

        if(A[i]==1)
        {
            cout << i;
        }
    }
}
