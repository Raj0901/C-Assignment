#include<iostream>
using namespace std;

class Emp{
    protected:
                int emp_id;
                string name;
                int sal;
    public:
            Emp()
            {
                emp_id=0;
                name="no name";

            }
            Emp(int emp_id,string name)
            {
                this->emp_id=emp_id;
                this->name=name;
            }
            virtual void calculate()
            {
                int cal,sal,bonus;
                cout<<"enter the salary :250000"<<endl;
                cout<<"enter the bonus :500"<<endl;
                
                cal=25500;

            }
            void display()
            {
                cout<<"employee id : "<<emp_id<<endl;
                cout<<"name: "<<name<<endl;
                cout<<"salary: "<<sal<<endl;
            }

};

class Manager:public Emp
{
    protected:
                int m_id;
                string dept_name;

    public:
            Manager()
            {
                m_id=0;
                dept_name="no name";
            }
            Manager(int id, string name,int m_id,string dept_name)
            {
                this->m_id=m_id;
                this->dept_name=dept_name;
            }
            virtual void manager_task()
            {
                cout<<"the manager task is running"<<endl;
            }
            void display()
            {
                cout<<"m_id:"<<m_id<<endl;
                cout<<"dept_name:"<<dept_name<<endl;
            }

};

int main()
{
    Emp* ptr;
    Manager obj;
    ptr=&obj;
    ptr->calculate();


}