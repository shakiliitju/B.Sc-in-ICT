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
        cout<<"Size of array : ";
        cin>>n;
        cout<<"Enter value : ";
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
    }


    void Kth_Position1()
    {
        double start_s1=clock();
        sort(a,a+n);
        int k;
        cout<<"Enter Kth index : ";
        cin>>k;
        cout<<"Kth Largest value is : ";
        cout<<a[n-k]<<endl;

        double stop_s1=clock();
        cout << "Time: " << (stop_s1/1000) << " seconds" <<endl;
    }


    void Kth_Position2()
    {
        double start_s2=clock();
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

        double stop_s2=clock();
        cout << "Time: " << (stop_s2/1000) << " seconds" <<endl;

    }



    void Algorithm_A()
    {
        double start_s3=clock();
        int min=a[0];
        for(int i=1; i<n; i++)
        {
            if(min>a[i])
                min=a[i];
        }
        cout<<"Minimum element is : ";
        cout<<min<<endl;

        double stop_s3=clock();
        cout << "Time: " << (stop_s3/1000) << " seconds" <<endl;
    }


    void Algorithm_B()
    {
        double start_s4=clock();
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

        double stop_s4=clock();
        cout << "Time: " << (stop_s4/1000) << " seconds" <<endl;
    }




    void Algorithm_C()
    {
        double start_s5=clock();
        sort(a,a+n);
        cout<<"Minimum element is : ";
        cout<<a[0]<<endl;

        double stop_s5=clock();
        cout << "Time: " << (stop_s5/1000) << " seconds" <<endl;
    }



    void Algorithm_D()
    {

        double start_s6=clock();
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

        double stop_s6=clock();
        cout << "Time: " << (stop_s6/1000) << " seconds" <<endl;
    }
};



main()
{
    Shakil p;
    cout<<"\n1.Kth Position 1"<<endl;
    cout<<"2.Kth Position 2"<<endl;
    cout<<"3.Algorithm A"<<endl;
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
