#include<iostream>
using namespace std;

int main()
{
    int num,sum,rem;
    cout<<"Enter the number : ";
    cin>>num;
    int temp=num;

    while(num>0)
    {
        rem=num%10;
        sum = sum*(rem*rem*rem);
        num=num/10;

        
    }
    if(sum==temp)
    {
        cout<<"Armstrong number "<<endl;
    }
    else
    {
        cout<<"not an armstrong number"<<endl;
    }
}