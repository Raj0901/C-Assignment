#include<iostream>
using namespace std;

int main()
{
    int i,size;
    int *arr=new int[size];
    cout<<"enter the size of array: ";
    cin>>size;

    cout<<"eneter the array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];   
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;

   /* int max=arr[0];
for(int i=0;i<size;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
}
    cout<<"max = "<<max<<endl;

}*/

int min=arr[i];
for(int i=0;i<size;i++)
{
    if(min>arr[i])
    {
    min=arr[i];
    }
    

}
cout<<"min = "<<min<<endl;

}