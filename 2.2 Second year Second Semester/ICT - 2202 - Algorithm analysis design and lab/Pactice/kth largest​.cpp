#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void kthlargestElement(int arr[], int size, int k)
{
   sort(arr, arr+size, greater<int>()); // C++ library function for sorting the array
   int ans = 0;
   for(int i=0;i<size;i++)
     {
       if(i == k - 1) //k-1 since the array elements start from 0-th index
        {
          cout<<"K-th largest element is : "<<arr[i]<<endl;
          break;
        }
     }
}


int main()
{
     int size=7;
     int arr[]={3, 21, 12, 9, 30, 2, 50};
     int k = 3;
     kthlargestElement(arr,size,k);
     return 0;
}
