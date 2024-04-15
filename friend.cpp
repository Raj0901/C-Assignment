#include<iostream>
using namespace std;
class Base{
	private :
				int a;
				int b;
				
	public: 
		friend	void display(Base &b1);
};
void display(Base &b1)
{
	cout<<"A:"<<b1.a<<endl;
	cout<<"B:"<<b1.b<<endl;
    
	
}
int main()
{
	Base b1;
	display(b1);
}
