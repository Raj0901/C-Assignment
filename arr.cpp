#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int *arr=new int[size];
    cout<<"enter the array : ";

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<size; i++)
    {
        cout<<" "<<arr[i];

    }
    cout<<endl;

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
              int  temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            
            }

        }
        cout<<arr[1];
        /* for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        } */

    }
}