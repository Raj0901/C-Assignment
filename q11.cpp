/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.
*/

#include<iostream>
using namespace std;
class student
{
  private:
        int rollno;
        int mark1, mark2, mark3;
        int total,percentage;
        string grade;
    public:
        void accept()
        {
            cout<<"Enter student information"<<endl;
            cout<<"Roll number: ";
            cin>>rollno;
            cout<<"mark1: "<<"mark2: "<<"mark3: "<<endl;
            cin>>mark1>>mark2>>mark3;
            
        }
        void calculate()
        {
            cout<<"student percentage"<<endl;
            total=mark1+mark2+mark3;
            percentage=(mark1+mark2+mark3/300)*100;
            cout<<"total marks"<<total<<" out of 300 "<<endl;
            cout<<"PErcentage: "<<percentage<<endl;

            if(percentage>90)
            {
                grade="A";

            }
            else if (90>percentage>70)
            {
                grade = "B";
            }
            else if (70>=percentage>50)
            {
                grade = "C";
            }
            else
            {
                grade="f";
            }

        }
        void display()
        {
            cout<<rollno;
            cout<<mark1<<mark2<<mark3<<endl;
            cout<<total<<endl;
            cout<<percentage<<endl;

        }
};
int main()
{
    student s1;
    s1.accept();
    s1.calculate();
    s1.display();

}