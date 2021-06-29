#include<iostream>
using namespace std;


int sum(int a,int b){   /* Formal Parameter   */

    return a+b;
}

// ***************** Function Prototype ****************************

// void Multiply(int a,int b);
void Multiply(int,int);   /* Acceptable  */

// *********************** Inline Function *************************

inline void infunc(int a,int b){
     cout<<(a+b)*b<<endl;
}

// ********************** Default Function *************************

void divide(int a,int b=2){

     cout<<a/b<<endl;
}


 
int main(){

 
 int a=34,b=38;

  cout<<sum(a,b)<<endl;   /* Actual Parameter  */
 
  Multiply(a,b);

  infunc(a,b);
 
 divide(a);

return 0;
}
 
void Multiply(int a,int b){


     cout<<a*b<<endl;
}




