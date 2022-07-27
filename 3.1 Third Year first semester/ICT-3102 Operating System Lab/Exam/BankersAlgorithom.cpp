#include<bits/stdc++.h>
using namespace std;
const int n=5,m=3;

int Safety(int alloc[n][m],int max[n][m],int avail[],int ans[],int f[])
{
    int need[n][m],ind=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
    }
    int y = 0;
    for (int k = 0; k < 5; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {

                int flag = 0;
                for (int j = 0; j < m; j++)
                {
                    if (need[i][j] > avail[j])
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                {
                    ans[ind++] = i;
                    for (y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
    }
    int flag=1;
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 0)
        {
            flag = 0;
            printf("The following system is not safe");
            break;
        }
    }
    return flag;
}

void Resource(int ans[])
{
        for (int i = 0; i < n - 1; i++)
            printf(" P%d >>>>", ans[i]);
        printf(" P%d", ans[n - 1]);
        cout<<endl;
        cout<<endl;
}

int main()
{

    

    int  i, j, k;                       
    int alloc[5][3] = {{0, 1, 0},  
                       {2, 0, 0},  
                       {3, 0, 2},  
                       {2, 1, 1},  
                       {0, 0, 2}}; 

    int max[5][3] = {{7, 5, 3},  
                     {3, 2, 2},  
                     {9, 0, 2},  
                     {2, 2, 2}, 
                     {4, 3, 3}}; 

    int avail[3] = {3, 3, 2};
    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++)
    {
        f[k] = 0;
    }
    int d=Safety(alloc,max,avail,ans,f);
    
    if (d == 1)
    {
        cout<<endl;
        printf("Following is the SAFE Sequence\n");
        cout<<endl;
        Resource(ans);
    }

    return 0;


}
