#include<iostream>// library
using namespace std;
int main(){
   char arr[]={'s','u','r','a','j'};  //deccaring  array
  cout<<arr[4]<<endl;
//shifting top right character from rigt to right
  int m=3;
    while(m!=0){ 
     m--;
   for(int i=m;i<5;i++){  
   cout<<arr[i];
       }
    cout<<endl;
      }
return 0;
}

   
