#include <iostream>

using namespace std;

class Employe
{

    static int count; /*  <<<========= Static data Member, Static Variable or class Variable.  ==========>>  */
    int id;

public:
    void set_id(int);
    void display_id(void);

    // ************************ Static Member Function *****************************

    static void get_count()
    {
        cout << "The value of count is : " << count << endl;
    }
};

int Employe ::count = 1000; /*  Bydefault Static variable = 0 Assiening value to Static variable  */

void Employe ::set_id(int b)
{
    id = b;
    count++;
}

void Employe ::display_id()
{
    cout << "The Employe id is -> " << id << endl;
}

int main()
{
    Employe rohan, ram, lovish;

    lovish.set_id(432);
    lovish.display_id();
    Employe::get_count();

    ram.set_id(43242);
    ram.display_id();
    Employe::get_count();

    rohan.set_id(3432);
    rohan.display_id();
    Employe::get_count();

    return 0;
}