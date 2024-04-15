#include<iostream>
using namespace std;

int main()
{
	int num,expo,res=1;
	cout<<"enter the number number";
	cin>>num;
	
	cout<<"enter the expo number";
	cin>>expo;
	
	for(int i=1;i<=expo;i++)
	{
		res=res*num;
	}
	cout<<"RESULT : "<<res<<endl;
	
}