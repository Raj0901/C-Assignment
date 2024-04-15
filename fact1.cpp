/*#include<iostream>
using namespace std;

int main()
{
    int num,res=1;
    cout<<"Enter the number : ";
    cin>>num;

    for(int i=2; i<num; i++)
    {
       if(num%i==0)
       {
        cout<<i<<" ";
       }

    }


}*/
#include<iostream>
using namespace std;

int main()
{
	int num,flag=0;
	cout<<"Enter number :";
	cin>>num;
	
	for(int i=2;i<num;i++)
	{ flag=0;
		for(int j=i+1;j<i;j++)
		{
			if(i%j==0)
			{
			
			flag++;
			break;
			}	
		}
        if(flag==1)
	{
		cout<<i;
	}
	}
	
}
/*This is just praticing to use git hub*/