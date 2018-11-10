#include<iostream>
using namespace std;
int main(){
   int a=2,b=3,*p;
   

  //getting address of a
   p=&a;
 //storing value pointed by p in in b
   b=*p;
    
cout<<"a="<<a<<endl;               //printting values
cout<<"b="<<b<<endl;
cout<<"*p="<<*p<<endl;
return 0;
}
