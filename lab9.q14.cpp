//libry
#include <iostream>
using namespace std;
int main(){
      
   char name[]={'S','u','r','a','j'}   ;//declaring array;
   char *p=name;
  cout<<*p;
  cout<<*(p+1);    //printing through pointer
  cout<<name[2];  //printing through array
  cout<<name[3];  
  cout<<name[4];   

   
  return 0;
}
     
