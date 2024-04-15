#include<iostream>
using namespace std;
int main()
{
    int num;
    int fact=1;
    cout<<"num = ";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        fact=fact * i;
    }
    cout<<"Factorial: "<<fact<<endl;
}