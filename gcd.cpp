#include<iostream>
using namespace std;
 int gcd(int a,int b)
 {
    while(b!=0 )
    {
        int temp=b;
        b=a%b;
        a=temp;
        
    }
    return a;

 }
int main()
{
    int a,b;
    cout<<"Enter the number : ";
    cin>>a;

    cout<<"Enter the number2 : ";
    cin>>b;

    int c=gcd(a,b);
    cout<<" GCD is"<<c;
         
}