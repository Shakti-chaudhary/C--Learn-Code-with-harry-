#include<iostream>
using namespace std;
 
int main(){
 
// **************** Pointers ****************************

int  a = 454;

cout<<a<<endl;   /* Give the value of a  */
cout<<" "<<endl;

int * f = &a;

cout<<f<<endl;   /* Give the address of a  */
cout<<*f<<endl;   /* Give the value of a  */
cout<<" "<<endl;

// **************** Pointers in pointers ****************************
 
 
 int**d = &f;

  cout<<d<<endl;  /* Give the address of f  */
  cout<<*d<<endl;  /* Give the address of a  */
  cout<<**d<<endl;  /* Give the value of a  */
  cout<<" "<<endl;

// **************** Pointers chain ****************************
 

int***j=&d;
 cout<<j<<endl;  /* Give the address of d  */
 cout<<*j<<endl;  /* Give the address of f  */
 cout<<**j<<endl;  /* Give the address of a  */
 cout<<***j<<endl; /* Give the value of a  */
  cout<<" "<<endl;

int****k=&j;

 cout<<k<<endl;  /* Give the address of j  */
 cout<<*k<<endl;  /* Give the address of d  */
 cout<<**k<<endl;  /* Give the address of f  */
 cout<<***k<<endl;  /* Give the address of a  */
 cout<<****k<<endl;  /* Give the value of a  */

 
return 0;
}