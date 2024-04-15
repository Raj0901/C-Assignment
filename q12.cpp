#include<iostream>
using namespace std;
class person
{
    private:
            string name;
            string city;
            int age;

    public:
            person()
            {
                name="no name";
                city="no city";
                age=0;
            }
            person(string name, string city,int age)
            {
                this->name=name;
                this->city=city;
                this->age=age;
            }
            void set(string n)
            {
                name=n;

            }
            string get()
            {
                return name;
            }
            void setc(string c)
            {
                city=c;
            }
            string gett()
            {
                return city;

            }
            void seti(int i)
            {
                age=i;
            }
            int get_age()
            {
                return age;

            }
            void display()
            {
                cout<<"details of person"<<endl;
                cout<<"Name"<<name<<endl;
                cout<<"Age"<<age<<endl;
                cout<<"City"<<city<<endl;
            }
};
int main()
{
    person p1;
    p1.set("raj");
    p1.setc("kolhapur");
    p1.seti(23);
    p1.display();



}