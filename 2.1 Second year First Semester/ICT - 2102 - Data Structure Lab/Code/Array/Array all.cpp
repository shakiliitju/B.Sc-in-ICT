#include<bits/stdc++.h>
using namespace std;
class Shakil
{
public :
    void Insert()
    {
          int n,k,p;
        cout << "Enter Array Size  = "  ;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        cout << "Enter the new element and its position " << endl;
        cin >> k >> p;
        for(int i=n-1; i>=p-1; i--)
        {
            ar[i+1]=ar[i];
        }
        n++;
        ar[p-1]=k;
        cout << "After insert data " << endl;
        for(int i=0; i<n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }
    void delet()
    {
          int n,x;
        cout << "Enter Array Size  = "  ;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        cout << "Delete from pos = " ;
        cin >> x;
        for(int i=x-1; i<n; i++)
        {
            ar[i]=ar[i+1];
        }
        n--;
        cout << "After delete  data " << endl;
        for(int i=0; i<n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }
    void travers()
    {
        int n;
        cout << "Enter Array Size  = "  ;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        for(int i=0; i<n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }
    void Linear_Search()
    {
        int n,k;
        cout << "Enter Array Size  = "  ;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        cout << "Enter the Search Word  = " ;
        cin >> k;
        for(int i=0; i<n; i++)
        {
            if(ar[i]==k)
            {
                cout <<"Found at positon using lenear search  =  " << i+1 << endl;
                break;
            }
        }
        cout << " -1 " << endl;
    }
    void Binary_Search()
    {
        int n,k;
        cout << "Enter Array Size  = "  ;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        cout << "Enter the Search Word  = " ;
        cin >> k;
        int l=0,h=n-1,m = (l+h)/2;
        while(l<h)
        {
            if(k==ar[m])
            {
                cout << "Found At position  using Binary Search = " << m+1 << endl;
                break;
            }
            else if(k>ar[m])
                l=m+1;
            else if(k<ar[m])
                h=m-1;

            m=(l+h)/2;
        }
        cout << "-1" << endl;
    }
    void Insert_Sort()
    {
        int n,i,k;
        cout <<"Enter Array Size = " ;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        for(int j=1; j<n; j++)
        {
            k = ar[j];
            i=j-1;
            while(i>=0 and ar[i]>k)
            {
                ar[i+1]=ar[i];
                i--;
            }      /// 5 8 2-> 5 2 8 -> 2 5 8
            ar[i+1]=k;
        }
        cout << "After Insert Sort " << endl;
        for(int i=0; i<n; i++)
            cout << ar[i] << " ";
    }
    void Bubble_Sort()
    {
        int n;
        cout << "Enter Array Size  = "  ;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ar[i]>ar[j])
                {
                    int tmp = ar[i];
                    ar[i] = ar[j];
                    ar[j]=tmp;
                }
            }
        }
        cout << "After Bubble sort "  <<endl;
        for(int i=0; i<n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }
};
int main()
{
    Shakil A;
    int n;
    cout << "Enter any Number :  ";
    cin >> n;
    if(n==1)
    {
        A.travers();
    }
    else if (n==2)
    {
        A.Linear_Search();
    }
    else if(n==3)
    {
        A.Binary_Search();
    }
    else if (n==4)
    {
        A.Insert_Sort();
    }
    else if(n==5)
    {
        A.Bubble_Sort();
    }
    else if(n==6) {
        A.Insert();
    }
    else if(n==7)
    {
        A.delet();
    }
    else cout << "Invalid Choice" << endl;
}
