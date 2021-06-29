#include <iostream>

using namespace std;

/*      commplex numbers

 11 + 5i
 15 + 8i
 -------
 26 + 13i

 */

class complex
{
    int a, b;

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

//  **************************** Freind function *********************************

    friend complex addcomplex(complex o1, complex o2);


};

complex addcomplex(complex o1, complex o2)
{

    complex o3;

    o3.setdata((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    complex A1, A2, sum;

    A1.setdata(45, 345);
    A1.printdata();

    A2.setdata(13, 151);
    A2.printdata();

    sum = addcomplex(A1, A2);
    sum.printdata();
    return 0;
    
}