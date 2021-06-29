#include<iostream>
using namespace std;

// ****************** Structure *********************************

typedef struct Info
{
    char name;
    int age;

}lre;

// ******************* Union *************************************

typedef union raja
{
    int price;
    int cost;

}lrg;
 
int main(){

// ****************** Structure *********************************

 lre rahul;
 rahul.name = 'c';
 rahul.age = 23;

  cout<<rahul.name<<endl;
  cout<<rahul.age<<endl;
 
// ******************* Union *************************************

lrg ram;
ram.price=556;
ram.cost=839;

 cout<<ram.price<<endl;
 cout<<ram.cost<<endl;  /* This will give only cost Because Enum return 
                          only one enstance;  */


// ******************* Enumurations *****************************

enum Day{ice,cold,hot,night,morning};

 cout<<ice<<endl;
  cout<<morning<<endl;
   cout<<hot<<endl;

   Day m1 = hot;
    cout<<m1<<"  Enumurations"<<endl;


 


 
 
return 0;
}