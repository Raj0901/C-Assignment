#include<iostream>
using namespace std;

int main()
{
    int num,sum,rem;
    cout<<"Enter the number :";
    cin>>num;

    while(num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    cout<<"Result : "<<sum<<endl;
}