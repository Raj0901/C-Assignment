/*#include<iostream>
using namespace std;

int main()
{
    int num1,num2,min;
    cout<<"num1 = ";
    cin>>num1;
    cout<<"num2 = ";
    cin>>num2;

    // if(num1>num2)
    // {
    //     min=num2;
    // }
    // else
    // {
    //     min=num1;
    // }
    min = num1<num2?num1:num2;

    for(int i=min;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            cout<<i;
            break;
        }
    }
}*/

#include<iostream>
using namespace std;

int main()
{
    int num1,num2,gcd=1;
    cout<<"Num1 :";
    cin>>num1;
    cout<<"Num2 :";
    cin>>num2;

    if(num1<num2)
    {
        gcd=num1;
    }
    else{
        gcd=num2;
    }

    for(int i=gcd;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            cout<<i;
            break;
        }
    }
}