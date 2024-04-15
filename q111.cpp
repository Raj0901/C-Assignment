#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	
	int *arr=new int[size];
	
	cout<<"Enter the arrays : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=arr[i];
			}
		}
	}
	for(int i=0;i<size;i++)
	{
	cout<<arr[i];
	}	
}