#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:

    void printdata() { cout << "The no is : " << a << " and +i : " << b << endl; }

    complex();       /* ***************** Constructer Overloading ********************** */
    complex(int x);
    complex(int x, int y);
};

complex::complex(){
    int a=0;
    int b=0;
}
complex::complex(int x){a=x;b=0;}  /*  Constructer with default Arguments  */ 

complex::complex(int x,int y){a=x;b=y;}
int main()
{

    complex A;
    complex B(5);
    complex C(13, 32);

    A.printdata();
    B.printdata();
    C.printdata();

    return 0;
}