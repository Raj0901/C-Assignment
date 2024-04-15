#include<iostream>
using namespace std;

int main()
{
   {
    int size;
    cout<<"eneter the size of the array :";
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter the size of the array :"<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum : "<<sum<<endl;
}
}
    