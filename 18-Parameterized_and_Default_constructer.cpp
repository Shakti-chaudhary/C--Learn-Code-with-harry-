#include <iostream>

using namespace std;

class complex
{

    int a;
    int b;

public:
    void printdata()
    {

        cout << "the no is : " << a << " And +i : " << b << endl;
    }

    complex(void);         /*  ***********  Default constructer *************** */

    complex(int x, int y); /*  ***********  Parameterised constructer *************** */
};

complex::complex(void)
{

    a = 63;
    b = 1234;
}

complex::complex(int x, int y)
{

    a = x;
    b = y;
}

int main()
{

    complex r, s(24, 56);

    r.printdata(); /*  Default Constructer  */

    s.printdata(); /*  Parameterised Constructer  */

    return 0;
}