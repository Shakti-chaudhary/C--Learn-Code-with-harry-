// ************************* Array of Objects  ********************************

// #include <iostream>

// using namespace std;

// class Employee
// {
// static int count;
//     int id;
//     int salary;

// public:
//     void setid(void)
//     {
//         salary=500;
//         cout<<"Enter the id of Employee : "<<count<<endl;
//         cin >> id;
//         count++;
//     }

//     void getid(void)
//     {
//         cout <<"the id of Employee is "<< id << endl;
//     }

//     void getsalary(void)
//     {
//         cout << salary << endl;
//     }
// };

// int Employee ::count=1;

// int main()
// {
//     // Employee rohan,rahul,raja;

//     // raja.setid();
//     // raja.getid();

/* ******************************************* Object Array ************************************************* */

//     Employee fb[4];   

// for (int i = 0; i < 4; i++)
// {
//     fb[i].setid();

// }

// for (int i = 0; i < 4; i++)
// {
//     fb[i].getid();

// }

//     return 0;
// }

// *********************************** Passing Objects in argument. ******************************************

#include <iostream>

using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void getdata(void)
    {
        cout << "A is : " << a << " And B is : " << b << endl;
    }
    void sumcomplex(complex o1, complex o2)   /*   Object in arguments.    */
    {

        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void getcomplexdata(void)
    {
        cout << "Complex Object no is : " << a << " +i : " << b << endl;
    }
};

int main()
{

    complex ram, rahim, mohan;

    ram.setdata(234, 2341);
    rahim.setdata(153, 341);
    ram.getdata();
    rahim.getdata();

    mohan.sumcomplex(ram, rahim);
    mohan.getcomplexdata();

    return 0;
}
