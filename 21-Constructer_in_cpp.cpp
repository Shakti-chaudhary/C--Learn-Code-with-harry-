#include<iostream>
using namespace std; 

class complex {
  int a,b;
  
public : 
 
 complex(void);  /*  Default Constructer..  */

 complex(int,int);  /*  Parameterised Constructer..  */
 
 void show();

};

complex :: complex(){
 a=0;
 b=0;

}
complex :: complex(int x,int y){

a=x;
b=y;

}

void complex :: show(){
    cout<<"the no a is : "<<a<<" and b is : "<<b<<endl; 
}




 
int main(){ 

//  complex c;   /*  Default Constructer..  */

 complex c(55,123);    /*  Parameterised Constructer..  */

 c.show();
 
 
 
return 0; 
 }