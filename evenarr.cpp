#include<iostream>
using namespace std;

int main()
 {
    int size;
    cout<<"enter the size of array : ";
    cin>>size;

    int *arr=new int[size];

    cout<<"enter the size of array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

     for(int i=0;i<size;i++)
     {
        cout<<" "<<arr[i];
     }

     int sum=0;
     for(int i=0;i<size;i++)
     {
        sum=sum+arr[i];
     }
        sum=sum/size;

     cout<<"\nAVg : "<<sum<<endl;
}