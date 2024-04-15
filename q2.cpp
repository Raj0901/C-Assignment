#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the base number: ";
    cin>>m;
    cout<<"Enter the expo number: ";
    cin>>n;
    int result=1;

    for(int i=1;i<=n;i++)
    {
        result=result *m;

    }
    cout<<"result"<<result<<endl;
}