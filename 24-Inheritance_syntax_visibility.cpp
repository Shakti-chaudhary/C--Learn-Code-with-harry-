#include <iostream>
using namespace std;

// ********** Base class ****************

class Employee
{

public:
    int id;
    float salary;

    Employee() {}

    Employee(int inid)
    {
        id = inid;
        salary = 150;
    }
    void printdata() { cout << "The id is : " << id << " and salary is : " << salary << endl; }
};

// 1- default visibility mode is private ..

// Syntax ==> class {{derived class}} : {{visibility}} {{base class}}

// *********************** Derived class ***********************

class student : public Employee
{
    int classes;

public:
    student(int inclass)
    {

        classes = 5;
        id = inclass;
    }
    void show() { cout << "The id is : " << id << " and class is : " << classes << endl; }
};

int main()
{

    Employee rahul(4);  /*  Base class  */
    rahul.printdata();

    student ram(12);    
    ram.show();

    return 0;
}