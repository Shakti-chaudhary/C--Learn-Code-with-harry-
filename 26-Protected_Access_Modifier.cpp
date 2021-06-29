#include<iostream>
using namespace std; 

class Base {
  protected:
  int a;
  private:
  int b;
  
public : 
 
 void set(int x,int y){
a=x;
b=y;
 }
 void show(){
   cout<<"The a is : "<<a<<" And b is : "<<b<<endl; 
 }
 
};

/*  Access Modifier Chart..

                           Public modifier        Private modifier       Protected modifier 

private class   :          No Access               No Access              No Access    

protected class :         protected               private                protected 

public class    :         public                 private                 prodtected

  */


class Derived : protected Base {

public: 

void func(){
  set(55,8327);
  show();
}
 
};
 
int main(){ 

 Derived ram;
 
//  ram.a=55;  // Not Accessible as a protected modefier..
//  ram.set(34,567); // Not Accessible as a protected modefier in derived class..

 ram.func(); // Accessible as a member function in derived class..

 
 
return 0; 
 }