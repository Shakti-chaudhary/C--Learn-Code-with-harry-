#include <iostream>
using namespace std;

int count = 0;

class Number
{

    int num;

public:

    void printdata() { cout << "the number is : " << num << " Count is : " << count << endl; }

    Number()
    {
        num = 45;
        count++;
    }

    //  ******************* Deconstructer ***************************

    ~Number()
    {
        cout << "Deconstructor invoked Count no : " << count << endl;
        count--;
    }
};

int main()
{

    Number first;
    first.printdata();

    {

        Number second;
        second.printdata();
        Number third;
        third.printdata();
    }

    first.printdata();

    return 0;
}