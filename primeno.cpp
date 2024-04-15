#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number : ";
    cin>>num;

    bool isprime =true;

    if(num<=1)
    {
        isprime =false;
    }
    else
    {
        for(int i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                isprime =false;
                break;
            }
        }

    }
    if (isprime)
    cout<<num<<"is prime"<<endl;
    else
    cout<<num<<"is not prime"<<endl;
}