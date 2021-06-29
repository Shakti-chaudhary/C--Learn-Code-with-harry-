#include<iostream>
using namespace std; 
 
class Base {  // ***************** Base class ************************************
  int data1;
  
public : 
int data2;
void setdata(){
    data1=10;
    data2=20;
}
int  getdata1(){
return data1;
}
int  getdata2(){
return data2;
}
 
};

// class Derived : public Base{ // ********************* Derived class ..Public visibility  ************************
//   int data3;
  
// public : 
 
//  void process(){
//      data3=data2*getdata1();
//  }
//  void show(){
//      cout<<"The data 1 is : "<<getdata1()<<endl; 
//      cout<<"The data 2 is : "<<data2<<endl; 
//      cout<<"The data 3 is : "<<data3<<endl; 
//  }
 
// };

class Derived : private Base{ // ********************* Derived class ..Private visibility  ************************
  int data3;
  
public : 
 
 void process(){
     setdata();
     data3=data2*getdata1();
 }
 void show(){
     cout<<"The data 1 is : "<<getdata1()<<endl; 
     cout<<"The data 2 is : "<<data2<<endl; 
     cout<<"The data 3 is : "<<data3<<endl; 
 }
 
};

int main(){ 

 Derived ram;

//  ram.setdata();  // Accesing setdata through derived class in public visibility..

 ram.process();
 
 ram.show();
 
return 0; 
 } 