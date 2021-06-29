#include <iostream>

using namespace std;

//  Forward declaration Of class Complex..

class complex;

class sumplus
{

public:
    int add(int a, int b)
    {
        return a + b;
    }

    int addcomplex(complex, complex);     /*   forward declaretion of function   */
    int addcompcomplex(complex, complex); /*   forward declaretion of function   */
};

class complex
{
    int a, b;

// Individually declaring function as friends 

    // friend int sumplus ::addcomplex(complex o1, complex o2);     /*   freind class function ..  */
    // friend int sumplus ::addcompcomplex(complex o1, complex o2); /*   freind class function ..  */


// Aliter: declaring a class as friends.

friend class sumplus;


public:
    void setdata(int n, int m)
    {
        a = n;
        b = m;
    }

    void printdata()
    {

        cout << "Your number is : " << a << " and +i is : " << b << endl;
    }
};

int sumplus ::addcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int sumplus ::addcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex A1, A2;

    A1.setdata(123, 14);
    A2.setdata(23, 2311);

    A1.printdata();
    A2.printdata();

    sumplus A3;

    int sum = A3.addcomplex(A1, A2);
    int sumcomp = A3.addcompcomplex(A1, A2);

    cout << "the real complex no : " << sum << endl;
    cout << "the complex no : " << sumcomp << endl;

    return 0;
}