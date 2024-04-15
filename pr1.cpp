#include<iostream>
using namespace std;

int main()
{
    int num,sum,rem;
    cout<<"enter the number : ";
    cin>>num;
    int temp;
    temp=num;

    while(num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    if(sum==temp)
    {
        cout<<"Palindrome number "<<endl;

    }
    else
    {
        cout<<"not a palindrome number "<<endl;
    }
}