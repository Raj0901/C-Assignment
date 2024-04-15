#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int sum_e =0;
    int sum_o =0;

    for(int i=0; i<=n; i++)
    {
        if(i%2==0)
        {
            sum_e=sum_e+i;

        }
        else
        {
            sum_o=sum_o+i;
        }
    }
    cout<<"Sum of even numbers:"<<sum_e<<endl;
    cout<<"Sum of odd numbers:"<<sum_o<<endl;
}