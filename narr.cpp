#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of arr : ";
    cin>>size;
    int *arr = new int[size];

    cout<<"enter the arrays :";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
    int max=0;
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]<arr[j])
            {
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }

    }
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }


}

/*
int max=arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
}
*/

/*
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
*/