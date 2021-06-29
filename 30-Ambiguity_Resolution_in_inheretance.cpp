#include<iostream>
using namespace std; 

class first {
  int a;
  
public : 
 
 void greet(){
     cout<<"Hello Good Morning..."<<endl; 
 }
 
};
class second {
  int b;
  
public : 
 
 void greet(){
     cout<<"Hello Good Evening..."<<endl; 
 }
 
};

class third:public first,public second {
  int c;
  
public : 

// Ambuigity Solution..
 
 void greet(){
     first::greet();
 }
 
};
 
int main(){ 

 third mohan;
 
 mohan.greet();  // Ambuigity occurs....
 
 
return 0; 
 }