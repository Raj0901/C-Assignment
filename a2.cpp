#include<iostream>
using namespace std;

int main()
{
    int n;
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    cout<<"Enter the next n number : ";
    cin>>n;

    for(int i=0;i<n;++i)
    {
        ch++;
         cout<<"Enter the next n character : "<<ch<<endl;

    }
   
//checkout