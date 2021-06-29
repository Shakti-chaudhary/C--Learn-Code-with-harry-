#include <iostream>

using namespace std;

class complex
{
    int a;
    int b;

public:
    //  Declaration of a Constructer
    complex(void); /*  This is a default constructer..   */

    void printdata(void);
};

complex::complex(void)
{
    a = 13;
    b = 22;
}
void complex ::printdata(void)
{
    cout << "The a is : " << a << " and b is : " << b << endl;
}

int main()
{

    complex A;

    A.printdata();

    return 0;
}

/*  


1-  It should be declared in the public section of the class.
2- They are automatically invoked Whenever the object is created 
3- they cannot return values and do not have return types.
4- it can have default arguments.
5- we connot refer to their address.


 */
