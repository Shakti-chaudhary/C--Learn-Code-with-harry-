#include <iostream>
#include <iomanip> 
using namespace std;

// ************************* Class declaration *************************************

class Employee
{                      /* Private Class  */
    int Age;
    string Name;       /* Member Data  */
    int Salary;

public:                /* Public Class  */

        int A=0;
        int B;

                     /* Member function   */

    void input(string name, int age, int salary)
    {
        Name = name;   
        Age = age;
        Salary = salary;
        
    }
    void display();   /* Function declaration  */
   
};

// ********************** Iomanip => Setw and setfill => Manuplaters ***************

 void Employee :: display()
    {
        cout <<setfill(' ')<<setw(55)<<"Employee Name is : "<< Name << endl;
        cout <<setfill(' ')<<setw(55)<<"Employee Age is : "<< Age << endl;
        cout <<setfill(' ')<<setw(55)<<"Employee Salary is : "<< Salary << endl;
        cout <<setfill(' ')<<setw(55)<<"Public data : "<< A << endl;
        cout<<setfill(' ')<<setw(55)<<"Public data : "<< B << endl;
    }

int main()
{                      /* Object declaration  */
    Employee shakti;
    cout<<endl;
    shakti.input("Shakti Chaudhary", 19, 10000);
    shakti.B=35;        /* Accessing public data  */

    shakti.display();

    return 0;
}