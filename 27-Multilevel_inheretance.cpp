#include <iostream>
using namespace std;

class Student // Class A ....
{
protected:
    int roll_number;

public:
    void set_rollnumber(int);
    void get_rollnumber();
};

void Student::set_rollnumber(int a)
{
    roll_number = a;
}

void Student::get_rollnumber()
{
    cout << "Your roll number is a : " << roll_number << endl;
}

class Exam : public Student // Class B ........
{
protected:
    float maths;
    float physics;

public:
    void set_number(float, float);
    void get_number();
};

void Exam::set_number(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_number()
{
    cout << "The maths numbers are : " << maths << " and physics are : " << physics << endl;
}

class Result : public Exam
{ // Class C ........
    float precent;

public:
    //  void precentage(){precent=(maths+physics)/2;}
    void display()
    {
        get_rollnumber();
        get_number();
        cout << "The percentage are : " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result rahul;
    rahul.set_rollnumber(55);
    rahul.set_number(92, 84);
    // rahul.precentage();

    rahul.display();

    return 0;
}