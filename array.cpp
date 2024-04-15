/*#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"eneter the size of the array :";
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter the size of the array :"<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    delete[] arr;

}*/

/*#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter the size of array : "<<size<<endl;
    cin>>size;

    int *arr=new int[size];

    cout<<"enter the size of array : "<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum : "<<sum<<endl;
}*/
/*
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the number of array :";
    cin>>size;

    int *arr = new int[size];
    cout<<"Enter the number of array :";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];

    }
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum : "<<sum<<endl;
}*/
/*
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Size of array: "<<size<<endl;
    cin>>size;

    int *arr=new int[size];
    cout<<"Enter the number of array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int sub=0;
    for(int i=0;i<size;i++)
    {
        sub=sub-arr[i];
    }
    cout<<sub<<endl;
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of arrays: ";
    cin>>size;

    int *arr=new int[size];
    for(int i=0;i<size;i++)
    {
    cout<<"enter the array: "<<arr[i]<<endl;
    cin>>arr[i];
    }
    int mult=1;
    for(int i=0;i<size;i++)
    {
        mult=mult*arr[i];
    }
    cout<<mult<<endl;
}*/

#include<iostream>
using namespace std;

int main()
{
    int size;
    int sum_e=0,sum_o;
    cout<<"Enter the size of array :";
    cin>>size;

    int *arr = new int[size];
    cout<<"eneter array :"<<endl;
    for(int i=0;i<size;i++)
    {
        
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        
        cout<<"  "<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        
       /**for(int j=i+1;j>size;j++)
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }*/
        for(int j=i+1;j>size;j++)
        {
            for(j=j+1;j<size;j++)
            {
                if(arr[i]<arr[j])
                {
                    int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

                }
            }
        }
    }
     for(int i=0;i<size;i++)
    {
        
        cout<<"  "<<arr[i];
    }
   
}
 