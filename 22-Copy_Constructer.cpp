#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

// Compilers give a copy Constructer to every class..

    // Number(Number &num)  
    // {
    //     a = num.a;
    // }

    void printdata() { cout << "The Number is : " << a << endl; }
};

int main()
{
    Number A, B, C, Zcopy;
    B = Number(54);
    C = Number(154);
    Zcopy = Number(B);  /*  Copy Constructer Invoked  */
    Number r=C;  /*  Constructer will also invoked here */



    A.printdata();
    B.printdata();
    C.printdata();
    Zcopy.printdata();
    r.printdata();

    return 0;
}