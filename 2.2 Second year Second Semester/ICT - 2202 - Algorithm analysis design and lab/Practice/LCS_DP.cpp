#include<bits/stdc++.h>
using namespace std;


int dp[500][500],path[500][500];
string s1,s2;

void Display(int i,int j)
{
    if(i==0||j==0) return ;
    if(path[i][j]==1)
    {
        Display(i-1,j-1);
        cout<<s1[i-1];
        return;
    }
    if(path[i][j]==2)
    {
        Display(i-1,j);
        return;
    }
    Display(i,j-1);
    return;

}

main()
{

    int i,j,k,l;
    cout<<"Enter strings s1 & s2 : "<<endl;
    cin>>s1>>s2;
    int sz1=s1.size(),sz2=s2.size();
    for(i=1; i<=sz1; i++) dp[i][0]=0;
    for(i=1; i<=sz2; i++)dp[0][i]=0;

    for(i=1; i<=sz1; i++)  // for row
    {
        for(j=1; j<=sz2; j++)  // for column
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                path[i][j]=1;
            }
            else if(dp[i-1][j]>=dp[i][j-1])
            {
                dp[i][j]=dp[i-1][j];
                path[i][j]=2;
            }
            else
            {
                dp[i][j]=dp[i][j-1];
                path[i][j]=3;
            }

        }
    }
    cout<<"LCS is : "<<endl;
    Display(sz1,sz2);
    cout<<endl;

    return 0;
}

