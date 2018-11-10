#include <iostream>// library
using namespace std;
int main(){
  int array[10];  //decaring array
  int *p;
  p=array;
  *p=10;
 p++; *p=15;
 p=&array[2]; *p=20;
p=array;
*(p+3)=30;
 p=&array[4]; *p=35; //assigning value to element of an array
 p=&array[5]; *p=40;
 p=&array[6]; *p=45;
 p=&array[7]; *p=50;
p=array;
*(p+8)=55;
*(p+9)=60;
*(p+10)=65;

for (int n=0; n<10; n++){
   cout<<array[n]<<" ";
         }
return 0;
}

