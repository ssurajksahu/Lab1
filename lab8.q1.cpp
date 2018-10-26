//library
#include<iostream>
using namespace std;
  //passing address of block to the function
void sumarry(int arg[],int l ){
   int sum=0,n;
   for(n=0;n<l;n++){
     sum=sum+arg[n];
       }
     cout<<"sum of array:"<<sum<<endl;
          }
 
     
     
int main(){
   
   int sum[]={1,2,3,4,5,6,7,8,9};    // declaration of array
 sumarry (sum,9);          //calling function
return 0;
}
