// #include <iostream>

// using namespace std;

// class second;

// class first
// {
//     int a;

//         public :

//         void setdata(int data)
//     {
//         a = data;
//     }
//     friend int add (first , second );
// };

// class second
// {
//     int b;

// public:
//     void setdata(int value)
//     {
//         b = value;
//     }
//     friend int add (first , second );
// };

// int add(first A, second B)
// {
//     return (A.a + B.b);
// }

// int main()
// {

// first ram;
// ram.setdata(32);

// second rohan;
// rohan.setdata(52);

// int a=add(ram,rohan);
// cout<<"the value after adding is : "<<a<<endl;
//     return 0;
// }

// Second program

#include <iostream>

using namespace std;

class Y;

class X
{

    int a;

public:
    void setdata(void)
    {
        cout << "Enter the value X class object : " << endl;
        cin >> a;
    }
    void getdata()
    {
        cout << "the no of X class is : " << a << endl;
    }
    friend void swap(X &, Y &);
};
class Y
{

    int b;

public:
    void setdata(void)
    {
        cout << "Enter the value Y class object : " << endl;

        cin >> b;
    }
    void getdata(void)
    {
        cout << "the no of Y class is : " << b << endl;
    }
    friend void swap(X &, Y &);
};

void swap(X &A1, Y &B1)
{
    int a = A1.a;
    A1.a = B1.b; /*  Swaping Method   */
    B1.b = a;
}

int main()
{
    X m;
    m.setdata();
    Y n;
    n.setdata();
    swap(m, n);
    m.getdata();
    n.getdata();

    return 0;
}
