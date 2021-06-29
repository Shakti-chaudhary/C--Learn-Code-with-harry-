#include <iostream>
using namespace std;

class Base1  // Class A Base class...
{

protected:
    int base1num;

public:
    void set_base1(int a) { base1num = a; }
};

class Base2   // Class B Base class....
{
protected:
    int base2num;

public:
    void set_base2(int b) { base2num = b; }
};

class Base3 : public Base1, public Base2 // Class C Derived class.....
{

public:
    void display()
    {
        cout << "The Base 1 no is : " << base1num << endl;
        cout << "The Base 2 no is : " << base2num << endl;
        cout << "The Sum of Base 1 and Base 2 is : " << base1num + base2num << endl;
    }
};

int main()
{

Base3 love;

love.set_base1(94);
love.set_base2(39);

love.display();

    return 0;
}