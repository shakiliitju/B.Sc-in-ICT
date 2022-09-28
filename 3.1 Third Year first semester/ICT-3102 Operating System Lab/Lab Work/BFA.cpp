#include<bits/stdc++.h>
using namespace std;

int main()
{
  int nb,np,temp,lowest=9999;
  int a1[20],a2[20],b[20],p[20];

  cout<<"Enter number of blocks : ";
  cin>>nb;
  cout<<"Enter number of processes : ";
  cin>>np;

  cout<<"Enter size of each block : "<<endl;
  for(int i=1;i<=nb;i++)
    {
        cout<<"Block "<<i<<": ";
        cin>>b[i];
    }

  cout<<"\nEnter size of each process : "<<endl;
  for(int i=1;i<=np;i++)
    {
        cout<<"Process "<<i<<": ";
        cin>>p[i];
    }

  for(int t=1;t<=np;t++)
  {
    for(int q=1;q<=nb;q++)
    {
      if(a1[q]!=1)
      {
        temp=b[q]-p[t];
        if(temp>=0)
          if(lowest>temp)
          {
            a2[t]=q;
            lowest=temp;
          }
      }
    }
    a1[a2[t]]=1;
    lowest=10000;
  }

  cout<<endl<<"Process number\tProcess size\tBlock number\tBlock size";
  for(int i=1;(i<=np and a2[i]!=0);i++)
  {
    cout<<endl<<i<<"\t\t"<<p[i]<<"\t\t"<<a2[i]<<"\t\t"<<b[a2[i]];
  }
  return 0;
}