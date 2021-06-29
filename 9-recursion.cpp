#include<iostream>
using namespace std;

int factorial(int a){

    if (a==1)
    {
        return 1;
    }

return a*(factorial(a-1));    /* Recursive statement  */
}
 
    
int addnum(int a){
    if (a==0)
    {
        return 0;
    }
    

return a+(addnum(a-1));       /*  Recursive statements  */
}



int main(){

int n;
 cin>>n;
 cout<<factorial(n)<<endl;
 cout<<addnum(n)<<endl;

 
return 0;
}