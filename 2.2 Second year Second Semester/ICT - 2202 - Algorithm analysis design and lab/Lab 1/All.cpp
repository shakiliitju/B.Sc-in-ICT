#include<bits/stdc++.h>
using namespace std;
#define Size 100005

class Shakil
{
public:
    int n;
    int a[Size];
    Shakil()
    {
        cout<<"Size of array: ";
        cin>>n;
        cout<<"Input Array: ";
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
    }


    void Kth_Position1()
    {
        sort(a,a+n);
        int k;
        cout<<"Enter Kth index : ";
        cin>>k;
        cout<<"Kth Largest value is : ";
        cout<<a[n-k]<<endl;
    }


    void Kth_Position2()
    {
        int k;
        cout<<"Enter Kth index : ";
        cin>>k;
        sort(a,a+k);
        for(int i=0; i<n; i++)
        {
            if(a[k-1]<a[i])
                a[k-1]=a[i];
        }
        cout<<"Kth Largest value is : ";
        cout<<a[k-1]<<endl;

    }



    void Algorithm_A()
    {
        int min=a[0];
        for(int i=1; i<n; i++)
        {
            if(min>a[i])
                min=a[i];
        }
        cout<<"Minimum element is : ";
        cout<<min<<endl;
    }


    void Algorithm_B()
    {
        int a2[1000];
        while(n>1)
        {
            for(int i=0; i<n/2; i++)
            {
                a2[i]=min(a[2*i],a[2*i+1]);
                a[i]=a2[i];
            }
            //copy(a2,a2+n/2,a1);
            n/=2;

        }
        cout<<"Minimum element is : ";
        cout<<a2[0]<<endl;
    }




    void Algorithm_C()
    {
        sort(a,a+n);
        cout<<"Minimum element is : ";
        cout<<a[0]<<endl;
    }



    void Algorithm_D()
    {

        int j=0,flag=1,Min;
        while(flag)
        {
            Min=a[j];
            flag=0;
            for(int i=0; i<n; i++)
            {
                if(Min>a[i])
                    flag=1;
            }
            j++;
        }
        cout<<"Minimum element is : ";
        cout<<Min<<endl;
    }
};



main()
{
    Shakil p;
    cout<<"\n1.Kth Posion 1"<<endl;
    cout<<"2.Kth Posion 2"<<endl;
    cout<<"3.Algorithm B"<<endl;
    cout<<"4.Algorithm B"<<endl;
    cout<<"5.Algorithm C"<<endl;
    cout<<"6.Algorithm D"<<endl;
    while(1)
    {
        int c;
        cout<<"\nEnter your choice: ";
        cin>>c;
        if(c==1)
        {
            p.Kth_Position1();
        }
        if(c==2)
        {
            p.Kth_Position2();
        }
        if(c==3)
        {
            p.Algorithm_A();
        }
        if(c==4)
        {
            p.Algorithm_B();
        }
        if(c==5)
        {
            p.Algorithm_C();
        }
        if(c==6)
        {
            p.Algorithm_D();
        }
    }
    return 0;
}
