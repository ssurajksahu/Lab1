//library
#include<iostream>
using namespace std;
//declaring function for largest array element
void largest(int arr[],int n){
   int i;
   for(i=0;i<n;i++){
       if(arr[0]<arr[i]){   //loop for storing largest element to arr[0]c
          arr[0]=arr[i]; 
       
            }}
   cout<<"largest no. is:"<<arr[0]<<endl;
//declaring function for smallest
               }
void smallest(int arr[], int n){
   int i;
     for(i=0;i<n;i++){
        if(arr[0]>arr[i]){
            arr[0]=arr[i];
            }}
   cout<<"smallest no. is:"<<arr[0]<<endl;
       } 

//declaring function mean
void mean(int arr[],int n){
   int sum=0,i,p;
   
  for( i=0;i<n;i++){
   sum=sum+arr[i];
   
              }
   p=sum/9;
  cout<<"mean  of array:"<<p<<endl;
}
   //declaring function for mode
void mode(int arr[], int n){
     int  i,j,mod;
    for(i=0;i<n;i++){
         int c=0;
      for(j=0;j<n;n++){
         
        if(arr[j]==arr[i]){
          ++c;
            }
      if(c>0){
         
         mod=arr[i];
         
            }}}
cout<<"mode of array:"<<mod<<endl;
          }

       
int main(){
   int arr[]={1,4,2,3,4,7,8,8,5};     // an int array
   smallest(arr,9);
   largest(arr,9);
   mean (arr,9);
    mode(arr,9);
   
return 0;
}


