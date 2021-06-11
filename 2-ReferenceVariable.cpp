#include<iostream>
#include<iomanip>   /* 2nd Manuplater  */
using namespace std;

// ******************* Gobal Scope Variable ************************************

int f = 33;

// ******************* Local Scope Variable ************************************

int main(){
 
//  ***************** Reference Variables *************************************

float a;
a=45;

float &v=a;

cout<<v<<endl;

// *************** Float, double and long double Literals *********************

// float c = 44.4423f;   /* Use f at last to pass parameter as float . as a default value pass as a double   */

// long double g = 48.4423l;

// cout<<int(c)<<endl;   /* Typecasting  */
 
//  ***************************************************************************
 
//  cout<<a+::f<<endl;    /* Accessing Variable using Scope Resulotion Opperator  */
 

// ************************* Const Variables ***********************************

const float pi=3.14;

// ************************* Manuplater in cpp **********************************
 
//   1- <<endl;
// 2- setw();  /* prowide width to output data  */


cout<<setw(9)<<pi<<endl;




 
return 0;
}