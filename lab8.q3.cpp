#include<iostream> 
#include<algorithm> 
using namespace std; 
  
// Function to return k'th smallest element in a given array 
int ksmall(int array[], int size, int k) 
{ 
    // Sort the given array 
    sort(array, array+size); 
  
    // Return k'th element in the sorted array 
    return array[k-1]; 
} 
  
int klarge(int array[],int size,int k){
    
    sort(array, array+size);
   return array[k+1];
}
// Driver program to test above methods int main() 
int main(){ 
    int array[] = {12, 3, 5, 7, 19}; 
    double size = sizeof(array)/sizeof(array[0]),k=2; 
    
    cout<<"kth largest element is"<<ksmall<<endl;
    cout << "K'th smallest element is " <<  ksmall(array, size, k); 
    return 0; 
}
