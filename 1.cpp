#include<iostream>
using namespace std;

class base
{
	protected:
				int emp_id;
				string name;
				double sal;
				
	public:
			base()
			{
				emp_id=0;
				name="no name";
				sal=00;
				
			}
			base(int emp_id,string name,double sal)
			{
				this->emp_id=emp_id;
				this->name=name;
				this->sal=sal;
			}
			virtual void cal_sal()
			{
				cout<<"the details of emp sal"<<endl;
			}
			virtual void display()
			{
				cout<<"THE DETAILS OF EMPLOYEE"<<endl;
				
			}
};

class parent: public base
{
	protected:
				int m_id;
				string dpt_name;
				
	public:
			parent()
			{
				m_id=0;
				dpt_name="no name";
				
			}
			parent(int emp_id,string name,double sal,int m_id,string dpt_name):base(emp_id,name,sal)
			{
				this->emp_id=emp_id;
				this->name=name;
				this->sal=sal;	
			}
			virtual void task()
			{
				cout<<"task is processing"<<endl;
			}
			void display()
			{
				cout<<"task is completed"
			}
};


int main()
{
	base b1;
	parent obj;
	
	base* ptr=&obj;
	
	ptr->cal_sal();
}